#ifndef BIT_BYTE_IMMEDIATES_H
#define BIT_BYTE_IMMEDIATES_H

enum {
	imms = 0x00,
	imm2 = 0x01,
	imm4 = 0x02,
	imm8 = 0x03,
	imm16 = 0x04,
	imm32 = 0x05,
	imm64 = 0x06,
	imm128 = 0x07,
	imm255 = 0x08
};

#define MAX_IMMEDIATES 16
#define IMMEDIATE_MAX_SIZE imm255

#endif
