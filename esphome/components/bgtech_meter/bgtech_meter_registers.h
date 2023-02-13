#pragma once

namespace esphome {
namespace bgtech_meter {

static const float TWO_DEC_UNIT = 0.01;
static const float ONE_DEC_UNIT = 0.1;
static const float NO_DEC_UNIT = 1;
static const float MULTIPLY_TEN_UNIT = 10;
static const float MULTIPLY_THOUSAND_UNIT = 1000;

/* PHASE STATUS REGISTERS */
static const uint16_t BGTECH_TOTAL_ACTIVE_ENERGY = 0x0122;
static const uint16_t BGTECH_IMPORT_ACTIVE_ENERGY = 0x010E;
static const uint16_t BGTECH_EXPORT_ACTIVE_ENERGY = 0x0118;
static const uint16_t BGTECH_TOTAL_REACTIVE_ENERGY = 0x0140;
static const uint16_t BGTECH_IMPORT_REACTIVE_ENERGY = 0x012C;
static const uint16_t BGTECH_EXPORT_REACTIVE_ENERGY = 0x0136;
static const uint16_t BGTECH_APPARENT_ENERGY = 0x0175;
static const uint16_t BGTECH_ACTIVE_POWER = 0x0104;
static const uint16_t BGTECH_REACTIVE_POWER = 0x0108;
static const uint16_t BGTECH_APPARENT_POWER = 0x0106;
static const uint16_t BGTECH_VOLTAGE = 0x0100;
static const uint16_t BGTECH_CURRENT = 0x0102;
static const uint16_t BGTECH_POWER_FACTOR = 0x010B;
static const uint16_t BGTECH_FREQUENCY = 0x010A;
static const uint16_t BGTECH_MAXIMUM_DEMAND_ACTIVE_POWER = 0x0178;
static const uint16_t BGTECH_MAXIMUM_DEMAND_REACTIVE_POWER = 0x0182;
static const uint16_t BGTECH_MAXIMUM_DEMAND_APPARENT_POWER = 0x0180;

}  // namespace bgtech_meter
}  // namespace esphome
