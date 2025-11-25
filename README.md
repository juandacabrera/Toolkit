# Quasizero QZPortable Extruder v3.0.0

Firmware para el Toolkit QZPortable Extruder (ESP32-S3) desarrollado por Quasizero.
Este código controla un motor paso a paso a través de la interfaz táctil y el encoder del dispositivo, con control de rampa de velocidad, cambio de sentido y feedback visual en pantalla (LVGL).

## 🔧 Hardware

- Board: MaTouch DevKit 1.28’’ (ESP32-S3-WROOM-1)
- Drivers: 2 × TMC2209 integrados
- Screen: GC9A01 IPS 240×240 (Arduino_GFX_Library v1.5.4)
- Encoder: Pulsador + doble canal (CLK / DT)
- Motor controlado: NEMA-serie (ej. NEMA17 / NEMA23) – modo STEP/DIR

## 📁 Estructura del proyecto 

  - Toolkit/
  - ├── ui/                      # Archivos generados por SquareLine Studio
  - │   ├── src/                 # Imágenes, pantallas y eventos LVGL
  - │   ├── ui.ino               # Sketch principal exportado
  - │   ├── pin_config.h         # Mapeado de pines (Makerfabs original)
  - │   ├── touch.cpp/.h         # Lectura del táctil I2C
  - │   ├── ui_events.cpp/.h     # Callbacks y lógica del motor
  - │   └── ...
  - └── README.md


## ⚙️ Configuración del entorno
  ### 📦 Librerías necesarias
  -  LVGL v8.3.11
  -  Arduino GFX Library v1.5.4 (autor: Moon On Our Nation)
  -  Wire / SPI (Arduino Core ESP32)

  ### ⚙️ Board settings (Arduino IDE)
    Board: ESP32S3 Dev Module
    USB CDC On Boot: Enabled
    PSRAM: OPI PSRAM
    Flash Size: 16 MB
    Partition Scheme: app3M_fat9M_16MB
    Upload Speed: 921600
    CPU Frequency: 240 MHz

## 🧠 Lógica del sistema
  Interfaz principal
  - ArcIndicator: indica velocidad (0–50 mm/s).
  - NumberSpeed: muestra valor numérico actual.
  - ButtonDirection: cambia el sentido de giro (CW/CCW).
  - Encoder: controla velocidad (giro) y pausa (pulsación).

  Control de motor
  - motor_ramp_tick() aplica una rampa de aceleración progresiva.
  - onArcValueChanged() actualiza la consigna de velocidad.
  - onDirectionChecked() / Unchecked() cambian la dirección.
  - motor_hw_apply_speed() genera la señal PWM de STEP.

## 🧩 Pines principales (según pin_config.h original Makerfabs)
  Función	      Pin	  Descripción
  EN_PIN	      16	  Enable del driver (LOW = activo)
  DIR_0_PIN	    10	  Dirección motor 1
  STEP_0_PIN	   4	  Pulsos STEP motor 1
  DIR_1_PIN	    15	  Dirección motor 2 (no usado aún)
  STEP_1_PIN	  14	  Pulsos STEP motor 2 (no usado aún)
  ENCODER_CLK	  48	  Canal A del encoder
  ENCODER_DT	  47	  Canal B del encoder
  BUTTON_PIN	  17	  Pulsador del encoder

## 🧪 Depuración
- Monitor serie a 115200 bps.
- Imprime:
-   Target y Current (mm/s) cada 100 ms.
-   Motor STOP cuando se detiene.
