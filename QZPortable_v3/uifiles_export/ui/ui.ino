#include <lvgl.h>
#include <Arduino_GFX_Library.h>
#include <ui.h>
#include "touch.h"
#include "pin_config.h"
#include <ui_events.h>    // motor_ramp_tick()

/*------------------------------------------------
 *  Pantalla
 *-----------------------------------------------*/
static const uint16_t screenWidth = 240;
static const uint16_t screenHeight = 240;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * screenHeight / 10];

Arduino_ESP32SPI *bus = new Arduino_ESP32SPI(TFT_DC, TFT_CS, TFT_SCLK, TFT_MOSI, TFT_MISO, HSPI, true);
Arduino_GFX *gfx = new Arduino_GC9A01(bus, TFT_RES, 0 /* rotation */, true /* IPS */);

/*------------------------------------------------
 *  Encoder → ArcIndicator (0..500 → 0.0..50.0 mm/s)
 *-----------------------------------------------*/
#define ARC_MIN 0
#define ARC_MAX 500          // 500 -> 50.0 mm/s (0.1 mm/s por unidad)
#define ENCODER_DIR  -1   // pon 1 o -1 hasta que el sentido quede “natural”
#define TICKS_PER_UNIT 1     // 1 tick encoder = 1 unidad del arc (0.1 mm/s)
#define BTN_DEBOUNCE_MS 50

volatile int16_t g_enc_delta = 0;
volatile uint8_t g_last_clk  = 0;

static uint8_t  btn_last  = HIGH;
static uint32_t btn_t_last = 0;

// ISR del encoder (flanco en CLK; usa DT para el sentido)
void IRAM_ATTR encoder_isr() {
  uint8_t clk = digitalRead(ENCODER_CLK);
  uint8_t dt  = digitalRead(ENCODER_DT);
  if (clk != g_last_clk) {
    g_enc_delta += ((dt != clk) ? +1 : -1) * ENCODER_DIR;
    g_last_clk = clk;
  }
}

// Aplica delta acumulado del encoder al arc
static void apply_encoder_delta(int16_t d) {
  if (d == 0) return;
  int v = lv_arc_get_value(ui_ArcIndicator);
  v += (d * TICKS_PER_UNIT);
  if (v < ARC_MIN) v = ARC_MIN;
  if (v > ARC_MAX) v = ARC_MAX;
  lv_arc_set_value(ui_ArcIndicator, v);  // mueve el arc
  onArcValueChanged(NULL);              // <-- fuerza actualización del NumberSpeed y target
}

// Botón del encoder: click → STOP (arc=0)
static void handle_encoder_button() {
  uint8_t now = digitalRead(BUTTON_PIN);    // el push del encoder está en BUTTON_PIN
  uint32_t t = millis();
  if (now != btn_last) {
    if (t - btn_t_last > BTN_DEBOUNCE_MS) {
      btn_t_last = t;
      if (now == LOW) {
        lv_arc_set_value(ui_ArcIndicator, 0);   // callback hará stop con rampa
        lv_event_send(ui_ArcIndicator, LV_EVENT_VALUE_CHANGED, NULL); // fuerza actualizacion del NumberSpeed y target
      }
      btn_last = now;
    }
  }
}

/*------------------------------------------------
 *  Variables heredadas del sketch original (no críticas)
 *-----------------------------------------------*/
int counter = 0;
int State;
int old_State;
int move_flag = 0;

/*------------------------------------------------
 *  Prototipos locales
 *-----------------------------------------------*/
void pin_init();
void encoder_irq(); // (queda sin uso, conservado por compatibilidad)
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data);
void my_encoder_read(lv_indev_drv_t *drv, lv_indev_data_t *data); // (no usado, conservado)

/*------------------------------------------------
 *  Setup
 *-----------------------------------------------*/
void setup()
{
  Serial.begin(115200);

  pin_init();
  Wire.begin(TOUCH_SDA, TOUCH_SCL);
  gfx->begin();
  delay(200);

  lv_init();
  lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * screenHeight / 10);

  // Display
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  // Touch
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);

  // --- Pines motor y STEP por PWM (canal 0 como en tu base) ---
  pinMode(EN_PIN, OUTPUT);
  digitalWrite(EN_PIN, LOW);       // habilita TMC (LOW = enable)

  pinMode(DIR_0_PIN, OUTPUT);
  digitalWrite(DIR_0_PIN, LOW);    // dirección inicial

  // PWM de STEP (usa tu helper ledcAttachChannel; se ajustará después)
  ledcAttachChannel(STEP_0_PIN, 3200, 8, 0);

  // --- Encoder físico ---
  pinMode(ENCODER_CLK, INPUT_PULLUP);
  pinMode(ENCODER_DT,  INPUT_PULLUP);
  pinMode(BUTTON_PIN,  INPUT_PULLUP);
  g_last_clk = digitalRead(ENCODER_CLK);
  attachInterrupt(digitalPinToInterrupt(ENCODER_CLK), encoder_isr, CHANGE);

  // Carga UI
  ui_init();

  Serial.println("Setup done");
}

/*------------------------------------------------
 *  Loop
 *-----------------------------------------------*/
long runtime = 0;

void loop()
{
  lv_timer_handler();

  // 1) Aplica ticks de encoder -> ArcIndicator
  int16_t d;
  noInterrupts(); d = g_enc_delta; g_enc_delta = 0; interrupts();
  apply_encoder_delta(d);

  // 2) Botón del encoder -> STOP
  handle_encoder_button();

  // 3) Rampa de velocidad hacia consigna
  motor_ramp_tick();

  delay(5);
}

/*------------------------------------------------
 *  Init de pines base y touch
 *-----------------------------------------------*/
void pin_init()
{
  pinMode(TFT_BLK, OUTPUT);
  digitalWrite(TFT_BLK, HIGH);

  // (mantengo tu init previo por compatibilidad)
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(ENCODER_CLK, INPUT_PULLUP);
  pinMode(ENCODER_DT, INPUT_PULLUP);
  old_State = digitalRead(ENCODER_CLK);

  // Esta IRQ ya no es necesaria; la dejamos comentada
  // attachInterrupt(ENCODER_CLK, encoder_irq, CHANGE);
}

/*------------------------------------------------
 *  Encoder antiguo (no usado, dejado por compatibilidad)
 *-----------------------------------------------*/
void encoder_irq()
{
  State = digitalRead(ENCODER_CLK);
  if (State != old_State)
  {
    if (digitalRead(ENCODER_DT) == State) counter++;
    else counter--;
  }
  old_State = State;
}

/*------------------------------------------------
 *  LVGL: flush + touch
 *-----------------------------------------------*/
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

#if (LV_COLOR_16_SWAP != 0)
  gfx->draw16bitBeRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#else
  gfx->draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#endif

  lv_disp_flush_ready(disp);
}

void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
  int touchX = 0, touchY = 0;

  if (read_touch(&touchX, &touchY) == 1)
  {
    data->state = LV_INDEV_STATE_PR;
    data->point.x = (uint16_t)touchX;
    data->point.y = (uint16_t)touchY;
  }
  else
  {
    data->state = LV_INDEV_STATE_REL;
  }
}

// Driver de encoder de LVGL (no usado; dejamos stub por si lo reactivas)
void my_encoder_read(lv_indev_drv_t *drv, lv_indev_data_t *data)
{
  if (counter > 0)
  {
    data->state = LV_INDEV_STATE_PRESSED;
    data->key = LV_KEY_LEFT;
    counter--;
    move_flag = 1;
  }
  else if (counter < 0)
  {
    data->state = LV_INDEV_STATE_PRESSED;
    data->key = LV_KEY_RIGHT;
    counter++;
    move_flag = 1;
  }
  else
  {
    data->state = LV_INDEV_STATE_RELEASED;
  }
}
