#ifndef BIT_BYTE_REGISTERS_H
#define BIT_BYTE_REGISTERS_H

enum {
	SHORT_WIDTH_REGISTER_TYPE,
	GENERAL_WIDTH_REGISTER_TYPE,
	DOUBLE_WIDTH_REGISTER_TYPE,
	QUAD_WIDTH_REGISTER_TYPE,
	LONG_WIDTH_REGISTER_TYPE,
	MAX_WIDTH_REGISTER_TYPE
};

enum {
	SHORT_WIDTH_REGISTER_SIZE = 4,
	GENERAL_WIDTH_REGISTER_SIZE = 8,
	DOUBLE_WIDTH_REGISTER_SIZE = 16,
	QUAD_WIDTH_REGISTER_SIZE = 32,
	LONG_WIDTH_REGISTER_SIZE = 64,
	MAX_WIDTH_REGISTER_SIZE = 255
};

enum {
	SW_ACCESS_POINT = 0,
	GW_ACCESS_POINT = 20,
	DW_ACCESS_POINT = 60,
	QW_ACCESS_POINT = 140,
	LW_ACCESS_POINT = 300,
	MW_ACCESS_POINT = 620
};
// mov sw0 IAI_8 21 -- Assembler abstraction
// mov sw 0 imm16 0x00, 0x02, 0x06 ... -- Binary instructions

#define REGISTER_TYPES 6
#define REGISTERS_PER_TYPE 5
#define REGISTER_BANK_SIZE 1895

/*
Register array	Calculation	Bytes
sw_registers	5 × 4	20
gw_registers	5 × 8	40
dw_registers	5 × 16	80
qw_registers	5 × 32	160
lw_registers	5 × 64	320
mw_registers	5 × 255	1,275
Total		1,895 bytes

extern unsigned char sw_registers[REGISTERS_PER_TYPE][SHORT_WIDTH_REGISTER_SIZE];
extern unsigned char gw_registers[REGISTERS_PER_TYPE][GENERAL_WIDTH_REGISTER_SIZE];
extern unsigned char dw_registers[REGISTERS_PER_TYPE][DOUBLE_WIDTH_REGISTER_SIZE];
extern unsigned char qw_registers[REGISTERS_PER_TYPE][QUAD_WIDTH_REGISTER_SIZE];
extern unsigned char lw_registers[REGISTERS_PER_TYPE][LONG_WIDTH_REGISTER_SIZE];
extern unsigned char mw_registers[REGISTERS_PER_TYPE][MAX_WIDTH_REGISTER_SIZE];
 //old code for reference
*/

extern unsigned char register_bank[REGISTER_BANK_SIZE];
extern unsigned int register_type_address[REGISTER_BANK_SIZE];

#endif
