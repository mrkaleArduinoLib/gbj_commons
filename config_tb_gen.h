/*
  NAME:
  ThingsBoard generic entities configuration

  DESCRIPTION:
  Telemetry fields, attributes, RPC methods, and RPC parameters at communication
  with ThingsBoard IoT platform used in every project, so that this file is
  reusable.

*/
#ifndef CONFIG_TB_GEN_H
#define CONFIG_TB_GEN_H

// Measures
#define THINGSBOARD_TELEMETRY_CONNECTION_FAIL_RETRIES "connRetries"
#define THINGSBOARD_TELEMETRY_CONNECTION_FAIL_ERRORS "connErrors"
#define THINGSBOARD_TELEMETRY_CONNECTION_FAIL_COUNT "connCnt"
#define THINGSBOARD_TELEMETRY_CONNECTION_FAIL_CURRENT "connCur"
#define THINGSBOARD_TELEMETRY_CONNECTION_FAIL_MINIMUM "connMin"
#define THINGSBOARD_TELEMETRY_CONNECTION_FAIL_MAXIMUM "connMax"
#define THINGSBOARD_TELEMETRY_WIFI_RSSI "rssi"

// Device static attributes
#define THINGSBOARD_ATTRIBUTE_VERSION "vesion"
#define THINGSBOARD_ATTRIBUTE_BROKER "broker"
#define THINGSBOARD_ATTRIBUTE_HOSTNAME "hostname"
#define THINGSBOARD_ATTRIBUTE_OTAPORT "portOTA"
#define THINGSBOARD_ATTRIBUTE_PERIOD_WIFI "periodWifi"

#endif
