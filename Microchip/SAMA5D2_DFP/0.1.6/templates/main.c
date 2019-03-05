
/* Example project for SAMA5Dxx parts
 *
 * In MPLAB X, after adding this main file to you project,
 *  - Add file cstartup.S from $(DFP)/gcc/startup to the Source Files node in MPLAB X
 *  - Add file fault_handlers.c from (DFP)/gcc/startup/arm to the Source Files node in MPLAB X
 *  - Add the wanted linker script from $(DFP)/gcc/ld to the Linker Files node in MPLAB X
 *  - Add $(DFP)/gcc/startup to the list of include directories for the compiler (Project Properties)
 *  - Add the following options to the Additional Options  for the compiler: -mcpu=cortex-a5 -mfpu=vfpv4-d16 -mfloat-abi=hard
 */

//#include "sam.h"

void board_init(void) {
    /* Init board. 
     *
     * This function is called just before main.
     */

}

void matrix_remap_ram(void) {
    /* Remap SRAM to 0x00000000
     *
     * This function is called just after the CRT has initialized 
     * the device, but before the FPU is enabled and __libc_init_array
     * is called.
     */
}

int main(void) {
    
    while(1) {

    }
}
