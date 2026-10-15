#pragma once

#if defined(__cplusplus)
extern "C" {
#endif

#include <stddef.h>
#include <stdint.h>
#include "ina3221_regconst.h"
#include "ina3221_regtypes.h"
#include "ina3221_types.h"

int ina3221_get_config(struct ina3221_desc *desc, struct ina3221_config *config);
int ina3221_set_config(struct ina3221_desc *desc, struct ina3221_config config);
int ina3221_get_ch1_shunt_voltage(struct ina3221_desc *desc, int16_t *s_v);
int ina3221_get_ch1_bus_voltage(struct ina3221_desc *desc, int16_t *b_v);
int ina3221_get_ch2_shunt_voltage(struct ina3221_desc *desc, int16_t *s_v);
int ina3221_get_ch2_bus_voltage(struct ina3221_desc *desc, int16_t *b_v);
int ina3221_get_ch3_shunt_voltage(struct ina3221_desc *desc, int16_t *s_v);
int ina3221_get_ch3_bus_voltage(struct ina3221_desc *desc, int16_t *b_v);
int ina3221_get_ch1_critical_limit(struct ina3221_desc *desc, uint16_t *c_l);
int ina3221_set_ch1_critical_limit(struct ina3221_desc *desc, uint16_t c_l);
int ina3221_get_ch1_warning_limit(struct ina3221_desc *desc, uint16_t *w_l);
int ina3221_set_ch1_warning_limit(struct ina3221_desc *desc, uint16_t w_l);
int ina3221_get_ch2_warning_limit(struct ina3221_desc *desc, uint16_t *w_l);
int ina3221_set_ch2_warning_limit(struct ina3221_desc *desc, uint16_t w_l);
int ina3221_get_ch3_warning_limit(struct ina3221_desc *desc, uint16_t *w_l);
int ina3221_set_ch3_warning_limit(struct ina3221_desc *desc, uint16_t w_l);
int ina3221_get_shunt_voltage_sum(struct ina3221_desc *desc, int16_t *v_s);
int ina3221_get_shunt_voltage_sum_limit(struct ina3221_desc *desc, int16_t *v_s);
int ina3221_set_shunt_voltage_sum_limit(struct ina3221_desc *desc, int16_t v_s);
int ina3221_get_mask_enable(struct ina3221_desc *desc, struct ina3221_mask_enable *m_e);
int ina3221_set_mask_enable(struct ina3221_desc *desc, struct ina3221_mask_enable m_e);
int ina3221_get_power_valid_upper_limit(struct ina3221_desc *desc, int16_t *p_v);
int ina3221_set_power_valid_upper_limit(struct ina3221_desc *desc, int16_t p_v);
int ina3221_get_power_valid_lower_limit(struct ina3221_desc *desc, int16_t *p_v);
int ina3221_set_power_valid_lower_limit(struct ina3221_desc *desc, int16_t p_v);
int ina3221_get_manufacturer_id(struct ina3221_desc *desc, uint16_t *id);
int ina3221_get_die_id(struct ina3221_desc *desc, uint16_t *id);
int ina3221_init(struct ina3221_desc *desc, const struct ina3221_cfg *cfg);

#if defined(__cplusplus)
}
#endif
