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

// Telemetry -- Device measures changed frequently, so published periodically.
static const char rssiTelem[] PROGMEM = "rssi";

// Parameters -- Device dynamic attributes changed occassionally, usually
// stored in EEPROM, and published at a change only
static const char mcuRestartsPrm[] PROGMEM = "mcuRestarts";
static const char addressIpPrm[] PROGMEM = "addressIP";
static const char periodPublishPrm[] PROGMEM = "periodPublish";

// Statics -- Device static attributes initiated at start of an MCU
// and published just once.
// -- Initialized at compile time --
static const char versionStatic[] PROGMEM = "version";
static const char brokerStatic[] PROGMEM = "broker";
static const char hostnameStatic[] PROGMEM = "hostname";
static const char portOTAStatic[] PROGMEM = "portOTA";
// -- Initialized at run time --
static const char addressMacStatic[] PROGMEM = "addressMAC";
static const char mcuBootStatic[] PROGMEM = "mcuBoot";

#endif
