#ifndef BIT_BYTE_CPU_FUNCTIONS_H
#define BIT_BYTE_CPU_FUNCTIONS_H

#include "../variables/virtual/instructions.h"

static inline void nop (void);
static inline void mov_i (struct instruction_t *mov_i_ptr);
int execute_instruction(struct instruction_t *inst_ptr);

#endif
