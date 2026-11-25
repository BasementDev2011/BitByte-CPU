#include "../../include/variables/cpu/registers.h"
#include "../../include/variables/cpu/instructions.h"
#include "../../include/variables/cpu/immediates.h"
#include "../../include/prototypes/cpu/interpreter/exec/basic_functions.h"

#include <stdio.h>

void execute_instruction(struct instruction_t *inst_ptr) {
	switch (inst_ptr->instruction_id) {
		case NOP : {
			break;
		}

		case MOV_I : {
			printf("MOV_I\n");
			mov_i(inst_ptr);
			break;
		}
	}
}
