/*
  NAME:
  Labels of parameters for temperature measurement

  VERSION: 1.3.0

  DESCRIPTION:
  Parameters for temperature measurement regardless of utilized temperature
  sensors.
  The labels are stored in program flash memory in order to save
  SRAM of a microcontroller.

*/
#ifndef CONFIG_PARAMS_TEMP_H
#define CONFIG_PARAMS_TEMP_H

#if defined(__AVR__)
  #include <Arduino.h>
  #include <avr/pgmspace.h>
  #include <inttypes.h>
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
static const char lblTempSensors[] PROGMEM = "tempSensorCnt";
static const char lblTempIds[] PROGMEM = "tempSensorIds";
static const char lblTemp[] PROGMEM = "temperature";
static const char lblTempMax[] PROGMEM = "tempMax";
static const char lblTempMin[] PROGMEM = "tempMin";
static const char lblTempAvg[] PROGMEM = "tempAvg";

#endif
