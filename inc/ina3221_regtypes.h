#pragma once

#include <stdint.h>
#include "ina3221_regconst.h"

typedef struct ina3221_config
{
	enum ina3221_config_mode mode:3;
	enum ina3221_config_conv_time shunt_conv_time:3;
	enum ina3221_config_conv_time bus_conv_time:3;
	enum ina3221_config_avg averaging_mode:3;
	uint16_t ch3_en:1;
	uint16_t ch2_en:1;
	uint16_t ch1_en:1;
	uint16_t reset:1;
} _ina3221_config_t;

typedef struct ina3221_mask_enable
{
	uint16_t conversion_ready_en:1;
	uint16_t timing_control_alert_indicator:1;
	uint16_t power_valid_alert_indicator:1;
	uint16_t ch3_warning_alert_indicator:1;
	uint16_t ch2_warning_alert_indicator:1;
	uint16_t ch1_warning_alert_indicator:1;
	uint16_t summation_alert_indicator:1;
	uint16_t ch3_critical_alert_indicator:1;
	uint16_t ch2_critical_alert_indicator:1;
	uint16_t ch1_critical_alert_indicator:1;
	uint16_t critical_alert_latch_en:1;
	uint16_t warning_alert_latch_en:1;
	uint16_t ch3_summation_en:1;
	uint16_t ch2_summation_en:1;
	uint16_t ch1_summation_en:1;
	uint16_t __reserved:1;
} _ina3221_mask_enable_t;

