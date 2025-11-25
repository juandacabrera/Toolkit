// pin_config.h
#pragma once

// TFT (GC9A01 redondo)
#define TFT_BLK   45
#define TFT_RES   21
#define TFT_CS     1
#define TFT_DC    46
#define TFT_SCLK  42
#define TFT_MOSI   2
#define TFT_MISO  -1

// TOUCH I2C
#define TOUCH_SDA 38
#define TOUCH_SCL 39
#define TOUCH_INT 40
#define TOUCH_RST 18

// STEPPERS (X/Y del MaTouch)
#define EN_PIN      16    // LOW = habilitado
#define DIR_0_PIN   10
#define STEP_0_PIN   4
#define DIR_1_PIN   15
#define STEP_1_PIN  14

// ENCODER (ajusta si usas otros)
#define BUTTON_PIN   17
#define ENCODER_CLK  48
#define ENCODER_DT   47
#define ENCODER_BTN  BUTTON_PIN