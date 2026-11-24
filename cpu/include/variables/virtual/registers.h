#ifndef BIT_BYTE_REGISTERS_H
#define BIT_BYTE_REGISTERS_H

enum {
	GR0,
	GR1,
	GR2,
	GR3,
	GR4,
	GR5,
	GR6,
	GR7
};

enum {
	SHORT_WIDTH_REGISTER_SIZE = 4,
	GENERAL_WIDTH_REGISTER_SIZE = 8,
	DOUBLE_WIDTH_REGISTER_SIZE = 16,
	QUAD_WIDTH_REGISTER_SIZE = 32,
	LONG_WIDTH_REGISTER_SIZE = 64,
	MAX_WIDTH_REGISTER_SIZE = 255
};

// mov sw0 IAI 21 -- Assembler abstraction
// mov sw 0 imm16 0x00, 0x02, 0x06 ... -- Binary instructions

#define REGISTER_TYPES 5

extern unsigned char sw_registers[MAX_REGISTERS_PER_TYPE][SHORT_WIDTH_REGISTER_SIZE];
extern unsigned char gw_registers[MAX_REGISTERS_PER_TYPE][GENERAL_WIDTH_REGISTER_SIZE];
extern unsigned char dw_registers[MAX_REGISTERS_PER_TYPE][DOUBLE_WIDTH_REGISTER_SIZE];
extern unsigned char lw_registers[MAX_REGISTERS_PER_TYPE][QUAD_WIDTH_REGISTER_SIZE];
extern unsigned char mw_registers[MAX_REGISTERS_PER_TYPE][MAX_WIDTH_REGISTER_SIZE];


#endif
