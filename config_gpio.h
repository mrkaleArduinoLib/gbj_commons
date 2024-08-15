
/*
  NAME:
  GPIO naming and functions of microcontroller pins.

  VERSION: 1.1.0

  DESCRIPTION:
  Array with GPIO number as index and board name or function as value.

*/
#ifndef CONFIG_GPIO_H
#define CONFIG_GPIO_H

#include <Arduino.h>

const byte GPIO_NAME = 0;
const byte GPIO_FNC = 1;

// Pin configuration
#if defined(__AVR__)
  // *** Arduino UNO ***

#elif defined(ESP8266)
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
// Description
const String GPIO_DESC[][2] = { { "D3", "FLASH" },
                                { "TX", "TXD0" },
                                { "D4", "LED_BUILTIN/TXD1" },
                                { "RX", "RXD0" },
                                { "D2", "SDA" },
                                { "D1", "SCL" },
                                { "CLK", "SDCLK/SCLK" },
                                { "SD0", "SDD0/MISO" },
                                { "SD1", "SDD1/MOSI" },
                                { "SD2", "SDD2" },
                                { "SD3", "SDD3" },
                                { "CMD", "SDCMD/CS" },
                                { "D6", "HMISO" },
                                { "D7", "HMOSI/RXD2" },
                                { "D5", "HSCLK" },
                                { "D8", "HCS/TXD2" },
                                { "D0", "LED_BUILTIN_AUX/WAKE" } };
#elif defined(ESP32)
// *** ESP-32S - NodeMCU (Lolin) - Chip***
// Right side from bottom to top
const uint8_t PIN_31 = 6;
const uint8_t PIN_32 = 7;
const uint8_t PIN_33 = 8;
const uint8_t PIN_21 = 15;
const uint8_t PIN_22 = 2;
const uint8_t PIN_23 = 0;
const uint8_t PIN_24 = 4;
const uint8_t PIN_25 = 16;
const uint8_t PIN_27 = 17;
const uint8_t PIN_34 = 5;
const uint8_t PIN_35 = 18;
const uint8_t PIN_38 = 19;
const uint8_t PIN_GND_1 = -1;
const uint8_t PIN_42 = 21;
const uint8_t PIN_40 = 3;
const uint8_t PIN_41 = 1;
const uint8_t PIN_39 = 22;
const uint8_t PIN_36 = 23;
const uint8_t PIN_GND_2 = -1;
// Left side from bottom to top
const uint8_t PIN_5V = -1;
const uint8_t PIN_30 = 11;
const uint8_t PIN_29 = 10;
const uint8_t PIN_28 = 9;
const uint8_t PIN_20 = 13;
const uint8_t PIN_GND_3 = -1;
const uint8_t PIN_18 = 12;
const uint8_t PIN_17 = 14;
const uint8_t PIN_16 = 27;
const uint8_t PIN_15 = 26;
const uint8_t PIN_14 = 25;
const uint8_t PIN_13 = 33;
const uint8_t PIN_12 = 32;
const uint8_t PIN_11 = 35;
const uint8_t PIN_10 = 34;
const uint8_t PIN_8 = 39;
const uint8_t PIN_5 = 36;
const uint8_t PIN_EN = -1;
const uint8_t PIN_3V3 = -1;
// *** ESP-32S - NodeMCU (Lolin) - Order from righ bottom to top***
const uint8_t PIN_R_1 = 6;
const uint8_t PIN_R_2 = 7;
const uint8_t PIN_R_3 = 8;
const uint8_t PIN_R_4 = 15;
const uint8_t PIN_R_5 = 2;
const uint8_t PIN_R_6 = 0;
const uint8_t PIN_R_7 = 4;
const uint8_t PIN_R_8 = 16;
const uint8_t PIN_R_9 = 17;
const uint8_t PIN_R_10 = 5;
const uint8_t PIN_R_11 = 18;
const uint8_t PIN_R_12 = 19;
const uint8_t PIN_R_13 = PIN_GND_1;
const uint8_t PIN_R_14 = 21;
const uint8_t PIN_R_15 = 3;
const uint8_t PIN_R_16 = 1;
const uint8_t PIN_R_17 = 22;
const uint8_t PIN_R_18 = 23;
const uint8_t PIN_R_19 = PIN_GND_2;
// *** ESP-32S - NodeMCU (Lolin) - Order from left bottom to top***
const uint8_t PIN_L_1 = PIN_5V;
const uint8_t PIN_L_2 = 11;
const uint8_t PIN_L_3 = 10;
const uint8_t PIN_L_4 = 9;
const uint8_t PIN_L_5 = 13;
const uint8_t PIN_L_6 = PIN_GND_3;
const uint8_t PIN_L_7 = 12;
const uint8_t PIN_L_8 = 14;
const uint8_t PIN_L_9 = 27;
const uint8_t PIN_L_10 = 26;
const uint8_t PIN_L_11 = 25;
const uint8_t PIN_L_12 = 33;
const uint8_t PIN_L_13 = 32;
const uint8_t PIN_L_14 = 35;
const uint8_t PIN_L_15 = 34;
const uint8_t PIN_L_16 = 39;
const uint8_t PIN_L_17 = 36;
const uint8_t PIN_L_18 = PIN_EN;
const uint8_t PIN_L_19 = PIN_3V3;
#endif

#endif