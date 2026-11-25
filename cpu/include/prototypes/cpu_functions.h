#ifndef BIT_BYTE_CPU_FUNCTIONS_H
#define BIT_BYTE_CPU_FUNCTIONS_H

#include "../variables/virtual/instructions.h"

void mov_i (struct instruction_t *mov_i_ptr);
void execute_instruction(struct instruction_t *inst_ptr);


#endif
