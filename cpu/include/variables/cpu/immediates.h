#ifndef BIT_BYTE_IMMEDIATES_H
#define BIT_BYTE_IMMEDIATES_H

enum {
	imm4,
	imm8,
	imm16,
	imm32,
	imm64,
	imm128,
	imm255
};

enum {
	s_imm4 = 4,
	s_imm8 = 8,
	s_imm16 = 16,
	s_imm32 = 32,
	s_imm64 = 64,
	s_imm128 = 128,
	s_imm255 = 255
};

#define TOTAL_IMMEDIATE_TYPES 7
#define IMMEDIATE_MAX_SIZE 255

#endif
