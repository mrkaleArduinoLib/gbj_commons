
/*
  NAME:
  Custom types and structures.

  VERSION: 1.0.0

  DESCRIPTION:
  Definition of shared types, structures, unions, etc.

*/
#ifndef CONFIG_TYPES_H
#define CONFIG_TYPES_H

#include <Arduino.h>

// Structure to exchange data among MCUs via ESP-NOW protocol
typedef struct EspnowMessage
{
  unsigned int deviceId;
  int rssi;
  float temperature;
} EspnowMessage0;

#endif