/*
  NAME:
  Labels of parameters for statistical parameters

  VERSION: 1.1.0

  DESCRIPTION:
  Parameters for statistical evaluation for general usage in various projects.
  The labels are stored in program flash memory in order to save SRAM of a
  microcontroller.

*/
#ifndef CONFIG_PARAMS_STATS_H
#define CONFIG_PARAMS_STATS_H

#include <Arduino.h>
#if defined(__AVR__)
  #include <avr/pgmspace.h>
  #include <inttypes.h>
#elif defined(ESP8266)
  #include <pgmspace.h>
#elif defined(ESP32)
  #include <pgmspace.h>
#endif

static const char lblStatsIntervalTime[] PROGMEM = "intervalTime";
static const char lblStatsMaximum[] PROGMEM = "maximum";

#endif
