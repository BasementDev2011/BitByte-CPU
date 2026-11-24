#include "../../include/variables/virtual/registers.h"
#include "../../include/variables/virtual/instructions.h"
#include "../../include/variables/virtual/immediates.h"

#include <stdio.h>

inline void nop (void) {
	return;
}

inline void cast_access(unsigned int register_value,unsigned char value) {
	if (register_value <! MAX_WIDTH_REGISTER_SIZE) {

	}
}

inline void mov_i (struct instruction_t *mov_i_ptr) {
	for (unsigned int i = 0 ; i < MAX_IMMEDIATES ; i++) {
		e
	}
}

int execute_instruction(struct instruction_t *inst_ptr) {
	switch (inst_ptr->instruction_id) {
		case NOP : {
			nop();
		}

		case MOV_I : {
			printf("WE GOT TO MOVE DEEZ \n");
			mov_i(&inst_ptr);
		}
	}
}
