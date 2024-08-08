/*
  NAME:
  Labels (names) of generic parameters

  VERSION: 1.10.0

  DESCRIPTION:
  Generic parameters are utilized almost in every project, especially which
  communicates over Wifi and with IoT platforms.
  The labels are stored in program flash memory in order to save
  SRAM of a microcontroller.

*/
#ifndef CONFIG_PARAMS_GEN_H
#define CONFIG_PARAMS_GEN_H

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

// Periods
static const char lblPeriodWifi[] PROGMEM = "periodWifi";
static const char lblPeriodRssi[] PROGMEM = "periodRssi";
static const char lblPeriodThingspeak[] PROGMEM = "periodThingspeak";
static const char lblPeriodFirebase[] PROGMEM = "periodFirebase";
static const char lblPeriodRefresh[] PROGMEM = "periodRefresh";
static const char lblPeriodReconnect[] PROGMEM = "periodReconnect";

// Firmware
static const char lblProject[] PROGMEM = "project";
static const char lblVersion[] PROGMEM = "version";
static const char lblBoots[] PROGMEM = "boots";
static const char lblMcuBoot[] PROGMEM = "mcuBoot";
static const char lblMcuRestarts[] PROGMEM = "mcuRestarts";
static const char lblMcuStartTime[] PROGMEM = "mcuStartTime";
static const char lblMcuUpTime[] PROGMEM = "mcuUpTime";
static const char lblLedStatus[] PROGMEM = "ledStatus";

// Wifi
static const char lblRssi[] PROGMEM = "rssi";
static const char lblHostname[] PROGMEM = "hostname";
static const char lblPortOTA[] PROGMEM = "portOTA";
static const char lblAddressIp[] PROGMEM = "addressIP";
static const char lblAddressMac[] PROGMEM = "addressMAC";

#endif
