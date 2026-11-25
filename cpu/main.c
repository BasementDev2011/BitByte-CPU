#include "include/prototypes/cpu_functions.h"
#include "include/variables/virtual/instructions.h"
#include "include/variables/virtual/immediates.h"
#include "include/prototypes/cpu_functions.h"
#include <stdio.h>

struct instruction_t test_instruction = {
    .instruction_id = MOV_I,
    .immediates[0] = {0x00, 0x01, 0x02, 0x03},
    .used_immediate_types[0] = imm4,
    .used_registers[0] = 0,
    .used_register_types[0] = SHORT_WIDTH_REGISTER_TYPE
};

int main(void) {
    printf("Program start\n");
    execute_instruction(&test_instruction);
    printf("Done\n");
    return 0;
}
