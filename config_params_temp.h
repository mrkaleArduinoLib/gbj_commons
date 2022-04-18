/*
  NAME:
  Labels of parameters for temperature measurement

  DESCRIPTION:
  Parameters for temperature measurement regardless of utilized temperature
  sensors.
  The labels are stored in program flash memory in order to save
  SRAM of a microcontroller.

*/
#ifndef CONFIG_PARAMS_TEMP_H
#define CONFIG_PARAMS_TEMP_H
#define CONFIG_PARAMS_TEMP_VERSION "CONFIG_PARAMS_TEMP 1.1.0"

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

static const char lblPeriodTemp[] PROGMEM = "periodTemp";
static const char lblTempResBit[] PROGMEM = "tempResBit";
static const char lblTempResDeg[] PROGMEM = "tempResDeg";
static const char lblTempSmooth[] PROGMEM = "tempSmooth";
static const char lblTempSensors[] PROGMEM = "tempSensors";
static const char lblTemp[] PROGMEM = "temperature";
static const char lblTemp_01[] PROGMEM = "temperature_01";
static const char lblTemp_02[] PROGMEM = "temperature_02";

#endif
