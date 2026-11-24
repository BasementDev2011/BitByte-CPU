#ifndef BIT_BYTE_INSTRUCTIONS_H
#define BIT_BYTE_INSTRUCTIONS_H

#include "immediates.h"
#include "registers.h"

enum {
	NOP = 0x00,
	MOV_I = 0x01,
	MOV_R = 0x02
};

struct instruction_t {
	unsigned char instruction_id;
	unsigned char immediates[MAX_IMMEDIATES][IMMEDIATE_MAX_SIZE];
	unsigned int used_registers[REGISTER_TYPES];
};

#endif
