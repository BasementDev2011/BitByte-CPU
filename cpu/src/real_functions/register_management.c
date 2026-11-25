#include "../../include/variables/cpu/registers.h"

void set_register_bank_addresses(void) {
    register_type_address[0] = SW_ACCESS_POINT;
    register_type_address[1] = GW_ACCESS_POINT;
    register_type_address[2] = DW_ACCESS_POINT;
    register_type_address[3] = QW_ACCESS_POINT;
    register_type_address[4] = LW_ACCESS_POINT;
    register_type_address[5] = MW_ACCESS_POINT;
}
