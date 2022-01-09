/*
  NAME:
  ThingsBoard entities for temperature measurement

  DESCRIPTION:
  Telemetry fields, attributes, RPC methods, and RPC parameters at communication
  with ThingsBoard IoT platform focused on temperature measurement mainly with
  DS18B20 digital sensors.

*/
#ifndef CONFIG_TB_TEMP_H
#define CONFIG_TB_TEMP_H

// Measures
#define THINGSBOARD_TELEMETRY_TEMPERATURE "temperature"

// Device static attributes
#define THINGSBOARD_ATTRIBUTE_TEMP_RESOLUTION_BITS "tempResBit"
#define THINGSBOARD_ATTRIBUTE_TEMP_RESOLUTION_CELSIUS "tempResDeg"
#define THINGSBOARD_ATTRIBUTE_TEMP_SENSORS "tempSensors"
#define THINGSBOARD_ATTRIBUTE_FACTOR_SMOOTH "tempSmooth"

#endif
