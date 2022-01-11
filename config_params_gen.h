/*
  NAME:
  Names of generic parameters stored in flash memory

  DESCRIPTION:
  Generic parameters are utilized almost in every project, especially which
  communicates over Wifi and with IoT platforms.
  The names are stored in program flash memory in order to save
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

// Buffer length for reading values stored in flash memory.
// Should be adjusted for the longest parameter name.
static const size_t progmemBufferLen = 20;

// Telemetry -- Device telemetry attributes changed periodically and frequently
static const char rssiTelem[] PROGMEM = "rssi";
static const char temperatureTelem[] PROGMEM = "temperature";
// Statistics for connection to ThingsBoard IoT platform
static const char connRetriesTelem[] PROGMEM = "connRetries";
static const char connErrorsTelem[] PROGMEM = "connErrors";
static const char connCntTelem[] PROGMEM = "connCnt";
static const char connCurTelem[] PROGMEM = "connCur";
static const char connMinTelem[] PROGMEM = "connMin";
static const char connMaxTelem[] PROGMEM = "connMax";

// Parameters -- Device dynamic attributes usually stored in EEPROM
// and published at every change
static const char periodPublishPrm[] PROGMEM = "periodPublish";
static const char mcuRestartsPrm[] PROGMEM = "mcuRestarts";
static const char periodMeasurePrm[] PROGMEM = "periodMeasure";
static const char periodTempPrm[] PROGMEM = "periodTemp";

// Statics -- Device static attributes usually initiated at start of an MCU
// and published just once.
// -- Initialized at compile time --
static const char versionStatic[] PROGMEM = "version";
static const char brokerStatic[] PROGMEM = "broker";
static const char portOTAStatic[] PROGMEM = "portOTA";
// -- Initialized at run time --
static const char hostnameStatic[] PROGMEM = "hostname";
static const char addressIPStatic[] PROGMEM = "addressIP";
static const char addressMACStatic[] PROGMEM = "addressMAC";
// Temperature measurement
static const char tempResBitStatic[] PROGMEM = "tempResBit";
static const char tempResDegStatic[] PROGMEM = "tempResDeg";
static const char tempSmoothStatic[] PROGMEM = "tempSmooth";
static const char tempSensorsStatic[] PROGMEM = "tempSensors";

#endif
