/*
  NAME:
  Names of generic parameters for temperature measurement

  DESCRIPTION:
  Parameters for temperature measurement regardless of utilized temperature
  sensors.
  The names are stored in program flash memory in order to save
  SRAM of a microcontroller.

*/
#ifndef CONFIG_PARAMS_TEMP_H
#define CONFIG_PARAMS_TEMP_H

#if defined(__AVR__)
  #include <Arduino.h>
  #include <inttypes.h>
  #include <avr/pgmspace.h>
#elif defined(ESP8266)
  #include <Arduino.h>
  #include <pgmspace.h>
#elif defined(ESP32)
  #include <Arduino.h>
  #include <pgmspace.h>
#elif defined(PARTICLE)
  #include <Particle.h>
#endif

// Telemetry -- Device telemetry attributes changed periodically and frequently
static const char temperatureTelem[] PROGMEM = "temperature";
static const char temperature_01Telem[] PROGMEM = "temperature_01";
static const char temperature_02Telem[] PROGMEM = "temperature_02";

// Parameters -- Device dynamic attributes usually stored in EEPROM
// and published at every change
static const char periodTempPrm[] PROGMEM = "periodTemp";

// Statics -- Device static attributes usually initiated at start of an MCU
// and published just once.
// -- Initialized at run time --
static const char tempResBitStatic[] PROGMEM = "tempResBit";
static const char tempResDegStatic[] PROGMEM = "tempResDeg";
static const char tempSmoothStatic[] PROGMEM = "tempSmooth";
static const char tempSensorsStatic[] PROGMEM = "tempSensors";

#endif
