
/*
  NAME:
  GPIO naming and functions of microcontroller pins.

  DESCRIPTION:
  Array with GPIO number as index and board name or function as value.

*/
#ifndef CONFIG_GPIO_H
#define CONFIG_GPIO_H
#define CONFIG_GPIO_VERSION "CONFIG_GPIO 1.1.0"

#include <Arduino.h>

// Pin configuration
#if defined(__AVR__)
  // *** Arduino UNO ***

#elif defined(ESP8266) || defined(ESP32)
// *** ESP8266 - D1 mini (Wemos) ***
const uint8_t PIN_D0 = 16;
const uint8_t PIN_D1 = 5;
const uint8_t PIN_D2 = 4;
const uint8_t PIN_D3 = 0;
const uint8_t PIN_D4 = 2;
const uint8_t PIN_D5 = 14;
const uint8_t PIN_D6 = 12;
const uint8_t PIN_D7 = 13;
const uint8_t PIN_D8 = 15;
const uint8_t PIN_D9 = 3;
const uint8_t PIN_D10 = 1;
// *** ESP8266 - NodeMCU (Lolin) ***
const uint8_t PIN_SD3 = 10;
const uint8_t PIN_SD2 = 9;
const uint8_t PIN_SD1 = 8;
const uint8_t PIN_CMD = 11;
const uint8_t PIN_SD0 = 7;
const uint8_t PIN_CLK = 6;
// *** ESP8266 - NodeMCU (Amica) ***
// *** ESP8266-01 ***
const uint8_t PIN_2 = 1;
const uint8_t PIN_3 = 2;
const uint8_t PIN_5 = 0;
const uint8_t PIN_7 = 3;
// Naming
const byte GPIO_NAME = 0;
const byte GPIO_FNC = 1;
const String GPIO[][2] = {{"D3", "FLASH"},
                          {"TX", "TXD0"},
                          {"D4", "LED_BUILTIN/TXD1"},
                          {"RX", "RXD0"},
                          {"D2", "SDA"},
                          {"D1", "SCL"},
                          {"CLK", "SDCLK/SCLK"},
                          {"SD0", "SDD0/MISO"},
                          {"SD1", "SDD1/MOSI"},
                          {"SD2", "SDD2"},
                          {"SD3", "SDD3"},
                          {"CMD", "SDCMD/CS"},
                          {"D6", "HMISO"},
                          {"D7", "HMOSI/RXD2"},
                          {"D5", "HSCLK"},
                          {"D8", "HCS/TXD2"},
                          {"D0", "LED_BUILTIN_AUX/WAKE"}};
#endif

#endif