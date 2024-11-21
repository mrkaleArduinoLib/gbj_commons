/*
  NAME:
  Labels (names) of generic parameters

  VERSION: 1.27.0

  DESCRIPTION:
  Generic parameters are utilized almost in every project, especially which
  communicates over Wifi and with IoT platforms.
  The labels are stored in program flash memory in order to save
  SRAM of a microcontroller.

*/
#ifndef CONFIG_PARAMS_GEN_H
#define CONFIG_PARAMS_GEN_H

#include <Arduino.h>
#if defined(__AVR__)
  #include <avr/pgmspace.h>
  #include <inttypes.h>
#elif defined(ESP8266)
  #include <pgmspace.h>
#elif defined(ESP32)
  #include <pgmspace.h>
#endif

// General
static const char lblStatus[] PROGMEM = "status";
static const char lblTimestamp[] PROGMEM = "timestamp";
static const char lblOutage[] PROGMEM = "outage";
static const char lblRevert[] PROGMEM = "revert";
static const char lblOutageTime[] PROGMEM = "outageTime";
static const char lblRevertTime[] PROGMEM = "revertTime";

// Firmware
static const char lblProject[] PROGMEM = "project";
static const char lblVersion[] PROGMEM = "version";
static const char lblBootTime[] PROGMEM = "bootTime";
static const char lblBoots[] PROGMEM = "boots";
static const char lblMcuBoot[] PROGMEM = "mcuBoot";
static const char lblMcuRestarts[] PROGMEM = "mcuRestarts";
static const char lblMcuReboot[] PROGMEM = "mcuReboot";
static const char lblMcuUpTime[] PROGMEM = "mcuUpTime";

// Wifi
static const char lblRssi[] PROGMEM = "rssi";
static const char lblHostname[] PROGMEM = "hostname";
static const char lblPortOTA[] PROGMEM = "portOTA";
static const char lblAddressIp[] PROGMEM = "addressIP";
static const char lblAddressMac[] PROGMEM = "addressMAC";
static const char lblWifiOutageTime[] PROGMEM = "wifiOutageTime";
static const char lblWifiRevertTime[] PROGMEM = "wifiRevertTime";

// Externals
static const char lblLedStatus[] PROGMEM = "ledStatus";
static const char lblInetStatus[] PROGMEM = "inetStatus";

// Errors
static const char lblErrorRestart[] PROGMEM = "errorRestart";
static const char lblErrorWifi[] PROGMEM = "errorWifi";
static const char lblErrorGsheets[] PROGMEM = "errorGsheets";
static const char lblErrorEspnow[] PROGMEM = "errorEspnow";
static const char lblErrorThermo[] PROGMEM = "errorThermo";
#endif
