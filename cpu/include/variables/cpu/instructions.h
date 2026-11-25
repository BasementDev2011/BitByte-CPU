#ifndef BIT_BYTE_INSTRUCTIONS_H
#define BIT_BYTE_INSTRUCTIONS_H

#include "immediates.h"
#include "registers.h"


enum {
	NOP = 0x00,
	MOV_I = 0x01,
	MOV_R = 0x02
};

enum {
	MOV_I_UV0 = 0,
	MOV_I_UV1 = 1,
	MOV_I_UV2 = 2,
	MOV_I_UV3 = 3
};

enum {
	TOTAL_USED_REGISTER_TYPES = 5,
	TOTAL_USED_REGISTERS = 16
};

struct instruction_t {
	unsigned char instruction_id;
	unsigned char immediates[TOTAL_IMMEDIATE_TYPES][IMMEDIATE_MAX_SIZE];
	unsigned int used_immediate_types[TOTAL_IMMEDIATE_TYPES];
	unsigned int used_registers[TOTAL_USED_REGISTERS];
	unsigned int used_register_types[TOTAL_USED_REGISTER_TYPES];
};

#endif
