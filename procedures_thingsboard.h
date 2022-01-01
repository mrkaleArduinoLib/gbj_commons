/*
  NAME:
  procedures_thingsboard

  DESCRIPTION:
  Definition of procedures for Remote Procedure Calls reusable for various
  projects utilizing connection to ThingsBoard IoT platform.
  - This include file should be located after creation of an instance objects
  in the main sketch.

  LICENSE:
  This program is free software; you can redistribute it and/or modify
  it under the terms of the license GNU GPL v3
  http://www.gnu.org/licenses/gpl-3.0.html (related to original code) and MIT
  License (MIT) for added code.

  CREDENTIALS:
  Author: Libor Gabaj
 */
#ifndef PROCEDURES_THINGSBOARD_H
#define PROCEDURES_THINGSBOARD_H

#include "app_params.h"
#include "apptb_device.h"
#include "gbj_appthermo_ds.h"
#include "gbj_timer.h"

extern app_params params;
extern apptb_device device_tb;
extern gbj_appthermo_ds thermo;
extern gbj_timer timerLed;

// Processes function for RPC call "getPeriodPublish", which is invoked by TB
// right after opening dashboard. RPC_Data is a JSON variant, that can be
// queried using operator[] See
// https://arduinojson.org/v5/api/jsonvariant/subscript/ for more details
RPC_Response cbGetPeriodPublish(const RPC_Data &data)
{
  SERIAL_VALUE("cbGetPeriodPublish", device_tb.getPeriod());
  return RPC_Response(NULL, device_tb.getPeriod() / 1000);
}

// Processes function for RPC call "setPeriodPublish" right after the data
// changes in TB dashboard. RPC_Data is a JSON variant, that can be queried
// using operator[] See https://arduinojson.org/v5/api/jsonvariant/subscript/
// for more details
RPC_Response cbSetPeriodPublish(const RPC_Data &data)
{
  params.setPeriodPublish((byte)data);
  device_tb.setPeriod((unsigned long)data * 1000);
  device_tb.setAttribChange(THINGSBOARD_ATTRIBUTE_PERIOD_PUBLISH_IDX);
  SERIAL_VALUE("cbSetPeriodPublish", device_tb.getPeriod());
  return RPC_Response(NULL, 0);
}

// Processes function for RPC call "getPeriodMeasure", which is invoked by TB
// right after opening dashboard. RPC_Data is a JSON variant, that can be
// queried using operator[] See
// https://arduinojson.org/v5/api/jsonvariant/subscript/ for more details
RPC_Response cbGetPeriodMeasure(const RPC_Data &data)
{
  SERIAL_VALUE("cbGetPeriodMeasure", thermo.getPeriod());
  return RPC_Response(NULL, thermo.getPeriod() / 1000);
}

// Processes function for RPC call "setPeriodMeasure" right after the data
// changes in TB dashboard. RPC_Data is a JSON variant, that can be queried
// using operator[] See https://arduinojson.org/v5/api/jsonvariant/subscript/
// for more details
RPC_Response cbSetPeriodMeasure(const RPC_Data &data)
{
  params.setPeriodTemperature((byte)data);
  thermo.setPeriod((unsigned long)data * 1000);
  device_tb.setAttribChange(THINGSBOARD_ATTRIBUTE_PERIOD_MEASURE_TEMPERATURE_IDX);
  SERIAL_VALUE("cbSetPeriodMeasure", thermo.getPeriod());
  return RPC_Response(NULL, 0);
}

#ifdef PIN_LED
RPC_Response cbGetLedBlink(const RPC_Data &data)
{
  SERIAL_VALUE("cbGetLedBlink", timerLed.isActive());
  return RPC_Response(NULL, timerLed.isActive());
}

RPC_Response cbSetLedBlink(const RPC_Data &data)
{
  bool blink = (bool)data;
  SERIAL_VALUE("cbSetLedBlink", blink);
  if (blink)
  {
    timerLed.resume();
    digitalWrite(PIN_LED, LOW); // Reverse wiring
  }
  else
  {
    timerLed.halt();
    digitalWrite(PIN_LED, HIGH); // Reverse wiring
  }
  return RPC_Response(NULL, 0);
}
#endif

#endif
