#include "../../../include/variables/cpu/registers.h"
#include "../../../include/variables/cpu/instructions.h"
#include "../../../include/variables/cpu/immediates.h"

#include <stdio.h>

void mov_i (struct instruction_t *mov_i_ptr) {
	switch (mov_i_ptr->used_register_types[MOV_I_UV0]) {
		case SHORT_WIDTH_REGISTER_TYPE: {
			if ( mov_i_ptr->used_immediate_types[MOV_I_UV1] != SHORT_WIDTH_REGISTER_TYPE ) {
				printf("error: used immediate type\n");
			}
			for (unsigned int i = 0 ; i < IMMEDIATE_MAX_SIZE ; i++) {
				sw_registers[mov_i_ptr->used_register_types[MOV_I_UV2]][i] = mov_i_ptr->immediates[MOV_I_UV3][i];
			}
			break;
		}
		case GENERAL_WIDTH_REGISTER_SIZE: {
			break;
		}
		case DOUBLE_WIDTH_REGISTER_SIZE: {
			break;
		}
		case QUAD_WIDTH_REGISTER_SIZE: {
			break;
		}
		case LONG_WIDTH_REGISTER_SIZE: {
			break;
		}
		case MAX_WIDTH_REGISTER_SIZE: {
			break;
		}
	}
}
