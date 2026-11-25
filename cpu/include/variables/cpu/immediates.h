#ifndef BIT_BYTE_IMMEDIATES_H
#define BIT_BYTE_IMMEDIATES_H

enum {
	imm4 = 4,
	imm8 = 8,
	imm16 = 16,
	imm32 = 32,
	imm64 = 64,
	imm128 = 128,
	imm255 = 255
};

#define TOTAL_IMMEDIATE_TYPES 7
#define IMMEDIATE_MAX_SIZE 255

#endif
