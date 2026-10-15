#pragma once

#include <stdint.h>

typedef struct ina3221_cfg
{
	int (*read_register) (uint8_t, uint8_t*, unsigned);
	int (*write_register) (uint8_t, const uint8_t*, unsigned);
} ina3221_cfg_t;

typedef struct ina3221_desc
{
	int (*read_register) (uint8_t, uint8_t*, unsigned);
	int (*write_register) (uint8_t, const uint8_t*, unsigned);
} ina3221_desc_t;

