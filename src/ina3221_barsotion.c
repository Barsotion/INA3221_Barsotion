#include "ina3221_barsotion.h"
#include "ina3221_regmap.h"

#define readRegister		desc->read_register
#define writeRegister		desc->write_register

#define _ROE(a)				if (a != 0) return a

int ina3221_get_config(struct ina3221_desc *desc, struct ina3221_config *config)
{
	if (desc == NULL || config == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_CONFIG, dummy, 2));
	*(uint16_t*)config = (uint16_t)dummy[1] << 8 | (uint16_t)dummy[0];
	return 0;
}

int ina3221_set_config(struct ina3221_desc *desc, struct ina3221_config config)
{
	if (desc == NULL) return 1;
	uint16_t *alias = (uint16_t*)&config;
	uint8_t dummy[2];
	dummy[0] = ((uint16_t)*alias >> 8) & 0xFF;
	dummy[1] = ((uint16_t)*alias >> 0) & 0xFF;
	_ROE(writeRegister(INA3221_CONFIG, dummy, 2));
	return 0;
}

int ina3221_get_ch1_shunt_voltage(struct ina3221_desc *desc, int16_t *s_v)
{
	if (desc == NULL || s_v == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_CH1_SHUNT_VOLTAGE, dummy, 2));
	*s_v = (int16_t)((uint16_t)dummy[1] << 8 | (uint16_t)dummy[0]);
	return 0;
}

int ina3221_get_ch1_bus_voltage(struct ina3221_desc *desc, int16_t *b_v)
{
	if (desc == NULL || b_v == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_CH1_BUS_VOLTAGE, dummy, 2));
	*b_v = (int16_t)((uint16_t)dummy[1] << 8 | (uint16_t)dummy[0]);
	return 0;
}

int ina3221_get_ch2_shunt_voltage(struct ina3221_desc *desc, int16_t *s_v)
{
	if (desc == NULL || s_v == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_CH2_SHUNT_VOLTAGE, dummy, 2));
	*s_v = (int16_t)((uint16_t)dummy[1] << 8 | (uint16_t)dummy[0]);
	return 0;
}

int ina3221_get_ch2_bus_voltage(struct ina3221_desc *desc, int16_t *b_v)
{
	if (desc == NULL || b_v == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_CH2_BUS_VOLTAGE, dummy, 2));
	*b_v = (int16_t)((uint16_t)dummy[1] << 8 | (uint16_t)dummy[0]);
	return 0;
}

int ina3221_get_ch3_shunt_voltage(struct ina3221_desc *desc, int16_t *s_v)
{
	if (desc == NULL || s_v == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_CH3_SHUNT_VOLTAGE, dummy, 2));
	*s_v = (uint16_t)dummy[1] << 8 | (uint16_t)dummy[0];
	return 0;
}

int ina3221_get_ch3_bus_voltage(struct ina3221_desc *desc, int16_t *b_v)
{
	if (desc == NULL || b_v == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_CH3_BUS_VOLTAGE, dummy, 2));
	*b_v = (int16_t)((uint16_t)dummy[1] << 8 | (uint16_t)dummy[0]);
	return 0;
}

int ina3221_get_ch1_critical_limit(struct ina3221_desc *desc, uint16_t *c_l)
{
	if (desc == NULL || c_l == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_CH1_CRITICAL_LIMIT, dummy, 2));
	*c_l = (uint16_t)dummy[1] << 8 | (uint16_t)dummy[0];
	return 0;
}

int ina3221_set_ch1_critical_limit(struct ina3221_desc *desc, uint16_t c_l)
{
	if (desc == NULL) return 1;
	uint8_t dummy[2];
	dummy[0] = (c_l >> 8) & 0xFF;
	dummy[1] = (c_l >> 0) & 0xFF;
	_ROE(writeRegister(INA3221_CH1_CRITICAL_LIMIT, dummy, 2));
	return 0;
}

int ina3221_get_ch1_warning_limit(struct ina3221_desc *desc, uint16_t *w_l)
{
	if (desc == NULL || w_l == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_CH1_WARNING_LIMIT, dummy, 2));
	*w_l = (uint16_t)dummy[1] << 8 | (uint16_t)dummy[0];
	return 0;
}

int ina3221_set_ch1_warning_limit(struct ina3221_desc *desc, uint16_t w_l)
{
	if (desc == NULL) return 1;
	uint8_t dummy[2];
	dummy[0] = (w_l >> 8) & 0xFF;
	dummy[1] = (w_l >> 0) & 0xFF;
	_ROE(writeRegister(INA3221_CH1_WARNING_LIMIT, dummy, 2));
	return 0;
}

int ina3221_get_ch2_warning_limit(struct ina3221_desc *desc, uint16_t *w_l)
{
	if (desc == NULL || w_l == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_CH2_WARNING_LIMIT, dummy, 2));
	*w_l = (uint16_t)dummy[1] << 8 | (uint16_t)dummy[0];
	return 0;
}

int ina3221_set_ch2_warning_limit(struct ina3221_desc *desc, uint16_t w_l)
{
	if (desc == NULL) return 1;
	uint8_t dummy[2];
	dummy[0] = (w_l >> 8) & 0xFF;
	dummy[1] = (w_l >> 0) & 0xFF;
	_ROE(writeRegister(INA3221_CH2_WARNING_LIMIT, dummy, 2));
	return 0;
}

int ina3221_get_ch3_warning_limit(struct ina3221_desc *desc, uint16_t *w_l)
{
	if (desc == NULL || w_l == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_CH3_WARNING_LIMIT, dummy, 2));
	*w_l = (uint16_t)dummy[1] << 8 | (uint16_t)dummy[0];
	return 0;
}

int ina3221_set_ch3_warning_limit(struct ina3221_desc *desc, uint16_t w_l)
{
	if (desc == NULL) return 1;
	uint8_t dummy[2];
	dummy[0] = (w_l >> 8) & 0xFF;
	dummy[1] = (w_l >> 0) & 0xFF;
	_ROE(writeRegister(INA3221_CH3_WARNING_LIMIT, dummy, 2));
	return 0;
}

int ina3221_get_shunt_voltage_sum(struct ina3221_desc *desc, int16_t *v_s)
{
	if (desc == NULL || v_s == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_SHUNT_VOLTAGE_SUM, dummy, 2));
	*v_s = (int16_t)((uint16_t)dummy[1] << 8 | (uint16_t)dummy[0]);
	return 0;
}

int ina3221_get_shunt_voltage_sum_limit(struct ina3221_desc *desc, int16_t *v_s)
{
	if (desc == NULL || v_s == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_SHUNT_VOLTAGE_SUM_LIMIT, dummy, 2));
	*v_s = (int16_t)((uint16_t)dummy[1] << 8 | (uint16_t)dummy[0]);
	return 0;
}

int ina3221_set_shunt_voltage_sum_limit(struct ina3221_desc *desc, int16_t v_s)
{
	if (desc == NULL) return 1;
	uint8_t dummy[2];
	dummy[0] = (v_s >> 8) & 0xFF;
	dummy[1] = (v_s >> 0) & 0xFF;
	_ROE(writeRegister(INA3221_SHUNT_VOLTAGE_SUM_LIMIT, dummy, 2));
	return 0;
}

int ina3221_get_mask_enable(struct ina3221_desc *desc, struct ina3221_mask_enable *m_e)
{
	if (desc == NULL || m_e == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_MASK_ENABLE, dummy, 2));
	*(uint16_t*)m_e = (uint16_t)dummy[1] << 8 | (uint16_t)dummy[0];
	return 0;
}

int ina3221_set_mask_enable(struct ina3221_desc *desc, struct ina3221_mask_enable m_e)
{
	if (desc == NULL) return 1;
	uint16_t *alias = (uint16_t*)&m_e;
	uint8_t dummy[2];
	dummy[0] = ((uint16_t)*alias >> 8) & 0xFF;
	dummy[1] = ((uint16_t)*alias >> 0) & 0xFF;
	_ROE(writeRegister(INA3221_MASK_ENABLE, dummy, 2));
	return 0;
}

int ina3221_get_power_valid_upper_limit(struct ina3221_desc *desc, int16_t *p_v)
{
	if (desc == NULL || p_v == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_POWER_VALID_UPPER_LIMIT, dummy, 2));
	*p_v = (int16_t)((uint16_t)dummy[1] << 8 | (uint16_t)dummy[0]);
	return 0;
}

int ina3221_set_power_valid_upper_limit(struct ina3221_desc *desc, int16_t p_v)
{
	if (desc == NULL) return 1;
	uint8_t dummy[2];
	dummy[0] = (p_v >> 8) & 0xFF;
	dummy[1] = (p_v >> 0) & 0xFF;
	_ROE(writeRegister(INA3221_POWER_VALID_UPPER_LIMIT, dummy, 2));
	return 0;
}

int ina3221_get_power_valid_lower_limit(struct ina3221_desc *desc, int16_t *p_v)
{
	if (desc == NULL || p_v == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_POWER_VALID_LOWER_LIMIT, dummy, 2));
	*p_v = (uint16_t)dummy[1] << 8 | (uint16_t)dummy[0];
	return 0;
}

int ina3221_set_power_valid_lower_limit(struct ina3221_desc *desc, int16_t p_v)
{
	if (desc == NULL) return 1;
	uint8_t dummy[2];
	dummy[0] = (p_v >> 8) & 0xFF;
	dummy[1] = (p_v >> 0) & 0xFF;
	_ROE(writeRegister(INA3221_POWER_VALID_LOWER_LIMIT, dummy, 2));
	return 0;
}

int ina3221_get_manufacturer_id(struct ina3221_desc *desc, uint16_t *id)
{
	if (desc == NULL || id == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_MANUFACTURER_ID, dummy, 2));
	*id = (uint16_t)dummy[1] << 8 | (uint16_t)dummy[0];
	return 0;
}

int ina3221_get_die_id(struct ina3221_desc *desc, uint16_t *id)
{
	if (desc == NULL || id == NULL) return 1;
	uint8_t dummy[2];
	_ROE(readRegister(INA3221_DIE_ID, dummy, 2));
	*id = (uint16_t)dummy[1] << 8 | (uint16_t)dummy[0];
	return 0;
}

int ina3221_init(struct ina3221_desc *desc, const struct ina3221_cfg *cfg)
{
	if (desc == NULL || cfg == NULL) return 1;
	desc->read_register = cfg->read_register;
	desc->write_register = cfg->write_register;
	return 0;
}


