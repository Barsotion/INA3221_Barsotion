#pragma once

#if defined(__cplusplus)
extern "C" {
#endif

#include <stdint.h>

int ina3221_read_register(uint8_t address, uint8_t *data, unsigned len);
int ina3221_write_register(uint8_t address, const uint8_t *data, unsigned len);

#if defined(__cplusplus)
}
#endif
