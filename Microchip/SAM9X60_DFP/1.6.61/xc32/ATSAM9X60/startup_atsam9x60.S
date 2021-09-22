/**
 * \file
 *
 * \brief MPLAB(R) XC32 - Startup code for SAM9X60
 *
 * Copyright (c) 2021 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* stack size definitions. these may be specified individually, or by
 * setting MIN_STACK_SIZE, in which case C_STACK_SIZE will be set to the 
 * remainder after allocating space for other stacks. 
 * the non-C stacks may be set individually or by defining:
 *   INTERRUPT_STACK_SIZE - used for IRQ/FIQ
 *   EXCEPTION_STACK_SIZE - used for UND/ABT.
 */
#ifndef INTERRUPT_STACK_SIZE
# define INTERRUPT_STACK_SIZE 0x60
#endif
#ifndef EXCEPTION_STACK_SIZE 
# define EXCEPTION_STACK_SIZE 0x40
#endif
#ifndef IRQ_STACK_SIZE
# define IRQ_STACK_SIZE INTERRUPT_STACK_SIZE
#endif
#ifndef FIQ_STACK_SIZE
# define FIQ_STACK_SIZE INTERRUPT_STACK_SIZE
#endif
#ifndef SYS_STACK_SIZE
# define SYS_STACK_SIZE INTERRUPT_STACK_SIZE
#endif
#ifndef ABT_STACK_SIZE
# define ABT_STACK_SIZE EXCEPTION_STACK_SIZE 
#endif
#ifndef UND_STACK_SIZE
# define UND_STACK_SIZE EXCEPTION_STACK_SIZE
#endif

#define __OTHER_STACK_SIZE \
 (IRQ_STACK_SIZE+FIQ_STACK_SIZE+SYS_STACK_SIZE+ABT_STACK_SIZE+UND_STACK_SIZE)

#ifdef MIN_STACK_SIZE
# ifdef C_STACK_SIZE
#   warning "both MIN_STACK_SIZE and C_STACK_SIZE are defined. \
             MIN_STACK_SIZE will be ignored."
# else 
#   define C_STACK_SIZE (MIN_STACK_SIZE-__OTHER_STACK_SIZE)
#   if C_STACK_SIZE <= 0
#     error "MIN_STACK_SIZE insufficient to allocate default stack. \
             increase MIN_STACK_SIZE or define C_STACK_SIZE to the \
             desired size."
#   endif
# endif
#else
# ifndef C_STACK_SIZE
#   define C_STACK_SIZE 0x800
# endif
#endif

/* define stack symbols based on _stack provided by linker. */
#define _cstack   (_stack)
#define _sysstack (_cstack-C_STACK_SIZE)
#define _undstack (_sysstack-SYS_STACK_SIZE)
#define _abtstack (_undstack-UND_STACK_SIZE)
#define _irqstack (_abtstack-ABT_STACK_SIZE)
#define _fiqstack (_irqstack-IRQ_STACK_SIZE)

/*
 *  Define the __XC32_RESET_HANDLER_NAME macro on the command line when you
 *  want to use a different name for the Reset Handler function.
 */
#ifndef __XC32_RESET_HANDLER_NAME
#define __XC32_RESET_HANDLER_NAME Reset_Handler
#endif /* __XC32_RESET_HANDLER_NAME */

        .cpu arm926ej-s
        .syntax unified
        .arm

/* Default exception handler for core exceptions.
 */ 
        .section    .text.Dummy_Handler, code
        .global Dummy_Handler
        .weak Dummy_Handler
        .type Dummy_Handler, %function
        .align 2
Dummy_Handler:
#if (defined(__DEBUG) || defined(__DEBUG_D))
        bkpt    #1
#endif
1:
        b       1b
        .size   Dummy_Handler, .-Dummy_Handler

/* Core exception entry points, defined as weak aliases to Dummy_Handler. 
 */
        .weak  undefined_instruction_irq_handler
        .weak  software_interrupt_irq_handler
        .weak  prefetch_abort_irq_handler
        .weak  data_abort_irq_handler
        .set   undefined_instruction_irq_handler,Dummy_Handler
        .set   software_interrupt_irq_handler,Dummy_Handler
        .set   prefetch_abort_irq_handler,Dummy_Handler
        .set   data_abort_irq_handler,Dummy_Handler

/* Default FIQ/IRQ handlers which pass control to the handler address defined
 * by the AIC registers. */

        .section .text.handlers, code
        .type   fiq_handler, %function
fiq_handler:
        b       fiq_handler
        .size   fiq_handler, .-fiq_handler

        .type   irq_handler, %function
irq_handler:
        sub     lr, lr, #4
        stmfd   sp!, {lr}
        mrs     lr, SPSR
        stmfd   sp!, {r0, lr}       /* push irq context onto stack */

        ldr     lr, =0xFFFFF100     /* AIC base */
        ldr     r0, [r14, #16]      /* read from IVR and update */
        str     lr, [r14, #16]      
        ldr     lr, [r14, #4]       /* read SMR to force IVR write completion */

        msr     CPSR_c, #0x13       /* set supervisor mode and invoke handler */
        stmfd   sp!, {r1-r3, r4, r12, lr}
        and     r1, sp, #4          /* adjust stack for 8-byte alignment */
        sub     sp, sp, r1
        stmfd   sp!, {r1, lr}
        blx     r0       
        ldmia   sp!, {r1, lr}
        add     sp, sp, r1          /* undo stack adjustment */

        ldmia   sp!, {r1-r3, r4, r12, lr}
        msr     CPSR_c, #0x12|0xC0  /* restore IRQ mode */
        ldr     lr, =0xFFFFF100     /* AIC base */
        str     lr, [r14, #0x38]    /* write to EOICR to acknowledge */
        ldmia   sp!, {r0, lr}       /* restore and exit */
        msr     SPSR_cxsf, lr
        ldmia   sp!, {pc}^
        .size   irq_handler, .-irq_handler

/* Vector table definition */
        .align      4
        .section    .vectors, code
exception_table:
        ldr     pc, =__XC32_RESET_HANDLER_NAME
        ldr     pc, =undefined_instruction_irq_handler
        ldr     pc, =software_interrupt_irq_handler
        ldr     pc, =prefetch_abort_irq_handler
        ldr     pc, =data_abort_irq_handler
        .word   0 /* reserved */
        ldr     pc, =irq_handler
        ldr     pc, =fiq_handler

/* entry point/reset handler. a dummy vector table is supplied to support
 * relocation of the vector table at runtime.
 */
        .section    .text.Reset_Handler, code
        .global     __dummy_vectors
        .global     __XC32_RESET_HANDLER_NAME
        .weak       __XC32_RESET_HANDLER_NAME
__dummy_vectors:
        ldr     pc, =__XC32_RESET_HANDLER_NAME
        ldr     pc, =__XC32_RESET_HANDLER_NAME
        ldr     pc, =__XC32_RESET_HANDLER_NAME
        ldr     pc, =__XC32_RESET_HANDLER_NAME
        ldr     pc, =__XC32_RESET_HANDLER_NAME
        .word   0 /* reserved */
        ldr     pc, =__XC32_RESET_HANDLER_NAME
        ldr     pc, =__XC32_RESET_HANDLER_NAME

/* stack initialization macro to be invoked with mode mask and initial value.
   */
        .macro init_sp mode initval
        mrs     r0, CPSR                                 
        bic     r0, r0, #0x1F      /* clear MSK bit        */
        orr     r0, r0, #\mode     /* set target mode      */
        msr     CPSR_c, r0                               
        ldr     sp, =\initval      /* set value            */
        bic     sp, sp, #0x7       /* ensure alignment     */
        .endm

        .type   __XC32_RESET_HANDLER_NAME, %function
__XC32_RESET_HANDLER_NAME:
        init_sp 0x11, _fiqstack
        init_sp 0x12, _irqstack
        init_sp 0x17, _abtstack
        init_sp 0x1B, _undstack
        init_sp 0x1F, _sysstack
        init_sp 0x13, _cstack

        /* call _on_reset if defined. any reconfiguration of the AXI
           matrix should be done through this hook. */
        blx     _on_reset

        /* call the __xc32_on_reset hook. this is reserved for use by
           MPLAB XC32. */
        blx     __xc32_on_reset

#if defined(__XC32_REMAP_SRAM)
        mov     r3, #0x600000           /* AXIMX_REMAP */
        movs    r2, #1                  /* set to REMAP0 */
        str     r2, [r3]
#endif

        /* clear bss and perform relocation/initialization */
        blx     __pic32c_data_initialization

        /* C library initialization */
        blx     __libc_init_array

        /* call the optional _on_bootstrap function. */
        blx     _on_bootstrap

        /* call the __xc32_on_bootstrap function. reserved for usee
           by MPLAB XC32. */
        blx     __xc32_on_bootstrap

        blx     main
#if (defined(__DEBUG) || defined(__DEBUG_D))
        bkpt    #0
#endif
1:
        b       1b
        .size __XC32_RESET_HANDLER_NAME, .-__XC32_RESET_HANDLER_NAME

        .type __dummy_hook, %function
        .align 1
__dummy_hook:
        bx      lr
        .size   __dummy_hook, .-__dummy_hook

        .weak   _on_reset
        .weak   _on_bootstrap
        .weak   __xc32_on_reset
        .weak   __xc32_on_bootstrap 
        .set    _on_reset,__dummy_hook
        .set    _on_bootstrap,__dummy_hook
        .set    __xc32_on_reset,__dummy_hook
        .set    __xc32_on_bootstrap,__dummy_hook

