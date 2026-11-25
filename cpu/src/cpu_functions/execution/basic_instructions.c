#include "../../../include/variables/cpu/registers.h"
#include "../../../include/variables/cpu/instructions.h"
#include "../../../include/variables/cpu/immediates.h"

#include <stdio.h>
/*
unsigned char p {
	switch (mov_i_ptr->used_register_types[MOV_I_UV0]) {
		case SHORT_WIDTH_REGISTER_TYPE: {
			unsigned char (*register_type_ptr)[SHORT_WIDTH_REGISTER_SIZE] = sw_registers;
			break;
		}
		case GENERAL_WIDTH_REGISTER_TYPE: {
			unsigned char (*register_type_ptr)[GENERAL_WIDTH_REGISTER_SIZE] = gw_registers;
			break;
		}
		case DOUBLE_WIDTH_REGISTER_TYPE: {
			unsigned char (*register_type_ptr)[DOUBLE_WIDTH_REGISTER_SIZE] = dw_registers;
			break;
		}
		case QUAD_WIDTH_REGISTER_TYPE: {
			unsigned char (*register_type_ptr)[QUAD_WIDTH_REGISTER_SIZE] = qw_registers;
			break;
		}
		case LONG_WIDTH_REGISTER_TYPE: {
			unsigned char (*register_type_ptr)[LONG_WIDTH_REGISTER_SIZE] = mw_registers;
			break;
		}
		case MAX_WIDTH_REGISTER_TYPE: {
			unsigned char (*register_type_ptr)[MAX_WIDTH_REGISTER_SIZE] = gw_registers;
			break;
		}
	}
	return register_type_ptr;
}
*/
void mov_i (struct instruction_t *mov_i_ptr) {
	for (unsigned int i = 0 ; i < s_imm4 ; i++) {
		register_bank[register_type_address[ mov_i_ptr->used_registers[MOV_I_UV0] ] + i] = mov_i_ptr->immediates[imm4][i];
	}
}
