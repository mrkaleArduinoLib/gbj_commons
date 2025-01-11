
/*
  NAME:
  Custom types and structures.

  VERSION: 1.4.0

  DESCRIPTION:
  Definition of shared types, structures, unions, etc.

*/
#ifndef CONFIG_TYPES_H
#define CONFIG_TYPES_H

#include <Arduino.h>

// Structure to exchange RSSI and temperature among MCUs via ESP-NOW protocol
typedef struct EspnowRssiTemperature
{
  word deviceId;
  int rssi;
  float temperature;
} EspnowRssiTemperature;

// Structure to exchange heartbeat among MCUs via ESP-NOW protocol
typedef struct EspnowHeartbeat
{
  word deviceId;
} EspnowHeartbeat;

// Structure to exchange uptime among MCUs via ESP-NOW protocol
typedef struct EspnowUptime
{
  word deviceId;
  unsigned long uptime;
} EspnowUptime;

// Structure for email, whatsup and other notifications
typedef struct Notification
{
  String subject;
  String message;
} Notification;

#endif