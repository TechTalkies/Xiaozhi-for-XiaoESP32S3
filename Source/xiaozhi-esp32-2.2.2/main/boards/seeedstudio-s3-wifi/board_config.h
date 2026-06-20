#ifndef BOARD_CONFIG_H_
#define BOARD_CONFIG_H_

#include <driver/gpio.h>

// Audio rate
#define AUDIO_INPUT_REFERENCE true
#define AUDIO_INPUT_SAMPLE_RATE 16000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

// Enable Simplex (two bus systems)
#define AUDIO_I2S_METHOD_SIMPLEX

// Speaker (TX, MASTER) - Bus #0
// Updated for your Amp: BCLK=27, LRCK=14, DIN=19
#define AUDIO_I2S_SPK_GPIO_BCLK GPIO_NUM_27
#define AUDIO_I2S_SPK_GPIO_LRCK GPIO_NUM_14
#define AUDIO_I2S_SPK_GPIO_DOUT GPIO_NUM_19

// Microphone (RX, MASTER) - Bus #1
// Updated for your Mic: BCLK=26, LRCK=25, DIN=32
#define AUDIO_I2S_MIC_GPIO_SCK GPIO_NUM_26
#define AUDIO_I2S_MIC_GPIO_WS GPIO_NUM_25
#define AUDIO_I2S_MIC_GPIO_DIN GPIO_NUM_32

// OLED I2C (SDA/SCL)
// Updated for your OLED: SDA=21, SCL=22
#define DISPLAY_SDA_PIN GPIO_NUM_21
#define DISPLAY_SCL_PIN GPIO_NUM_22
#define DISPLAY_WIDTH 128
#define DISPLAY_HEIGHT 64

#if CONFIG_OLED_SSD1306_128X32
#define DISPLAY_HEIGHT 32
#elif CONFIG_OLED_SSD1306_128X64
#define DISPLAY_HEIGHT 64
#elif CONFIG_OLED_SH1106_128X64
#define DISPLAY_HEIGHT 64
#define SH1106
#else
#error "OLED screen type not selected"
#endif

#define DISPLAY_MIRROR_X true
#define DISPLAY_MIRROR_Y true

// Onboard LED
// ESP32 DevKit v1 typically uses GPIO 2 for the built-in blue LED
#define BUILTIN_LED_GPIO GPIO_NUM_2

// Buttons
#define BOOT_BUTTON_GPIO GPIO_NUM_0         // Onboard Boot button

// Adjusted safely away from audio pins to prevent interference
#define VOLUME_UP_BUTTON_GPIO GPIO_NUM_34    // GPI 34 (Input only, perfect for buttons)
#define VOLUME_DOWN_BUTTON_GPIO GPIO_NUM_35  // GPI 35 (Input only, perfect for buttons)

// Placeholder for touch keys compatibility
#define TOUCH_BUTTON_GPIO GPIO_NUM_34

#endif  // BOARD_CONFIG_H_
