// HEADERS

#include <actuators/supply.h>

#include <Arduino.h>

#include <utils/base.h>
#include <actuators/actuator.h>
#include <actuators/onoff.h>

// CONSTRUCTOR

SupplyPump::SupplyPump(const uint8_t pin) : OnOff(&id, pin) { }