#include "../include/variables/virtual/registers.h"

unsigned char sw_registers[REGISTERS_PER_TYPE][SHORT_WIDTH_REGISTER_SIZE];
unsigned char gw_registers[REGISTERS_PER_TYPE][GENERAL_WIDTH_REGISTER_SIZE];
unsigned char dw_registers[REGISTERS_PER_TYPE][DOUBLE_WIDTH_REGISTER_SIZE];
unsigned char lw_registers[REGISTERS_PER_TYPE][QUAD_WIDTH_REGISTER_SIZE];
unsigned char mw_registers[REGISTERS_PER_TYPE][MAX_WIDTH_REGISTER_SIZE];
//mov sw r0
//syscall sw r0
