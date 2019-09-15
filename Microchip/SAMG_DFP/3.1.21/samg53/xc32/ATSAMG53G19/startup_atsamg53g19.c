/**
 * \file
 *
 * \brief MPLAB(R) XC32 - Startup code for SAMG53G19
 *
 * Copyright (c) 2019 Microchip Technology Inc.
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

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#if __XC32_VERSION__ >= 2300
#pragma nocodecov
#endif


#include <xc.h>
#include <libpic32c.h>

#ifndef __always_inline
#define __always_inline	__attribute__((__always_inline__))
#endif

#ifndef __STATIC_INLINE
#define __STATIC_INLINE static inline
#endif

/*
 *  Define the __XC32_RESET_HANDLER_NAME macro on the command line when you
 *  want to use a different name for the Reset Handler function.
 */
#ifndef __XC32_RESET_HANDLER_NAME
#define __XC32_RESET_HANDLER_NAME Reset_Handler
#endif /* __XC32_RESET_HANDLER_NAME */


/* Initialize segments */
extern uint32_t __svectors;
extern uint32_t _stack;
extern uint32_t _dinit_size;
extern uint32_t _dinit_addr;

/** \cond DOXYGEN_SHOULD_SKIP_THIS */
int main(void);
/** \endcond */

extern void __attribute__((long_call)) __libc_init_array(void);

/* Default empty handler */
void __attribute__((weak, used, optimize("-O1"), long_call, externally_visible)) Dummy_Handler(void);

/* Reset handler and application-provided reset handler */
void __attribute__((weak, optimize("-O1"), long_call, naked, externally_visible)) Reset_Handler(void);
extern void __attribute__((weak, used, long_call)) __XC32_RESET_HANDLER_NAME(void);

/* Cortex-M4 core handlers */
void NonMaskableInt_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MemoryManagement_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BusFault_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UsageFault_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVCall_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DebugMonitor_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void SUPC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RSTC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTT_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WDT_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PMC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EFC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved7_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART0_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART1_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved10_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PDMIC0_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USART_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MEM2MEM_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2SC0_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2SC1_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PDMIC1_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWI0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWI1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPI_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWI2_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC4_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC5_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Exception Table */
__attribute__ ((section(".vectors.default"), weak, externally_visible))
const DeviceVectors exception_table=
{
        /* Configure Initial Stack Pointer, using linker-generated symbols */
        .pvStack = (void*) (&_stack),

        .pfnReset_Handler              = (void*) __XC32_RESET_HANDLER_NAME,
        /* .pfnNonMaskableInt_Handler = */ (void*) NonMaskableInt_Handler,
        .pfnHardFault_Handler          = (void*) HardFault_Handler,
        /* .pfnMemoryManagement_Handler = */ (void*) MemoryManagement_Handler,
        .pfnBusFault_Handler           = (void*) BusFault_Handler,
        .pfnUsageFault_Handler         = (void*) UsageFault_Handler,
        /* .pvReservedC9            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC8            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC7            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC6            = */ (void*) (0UL), /* Reserved */
        /* .pfnSVCall_Handler       = */ (void*) SVCall_Handler,
        /* .pfnDebugMonitor_Handler = */ (void*) DebugMonitor_Handler,
        /* .pvReservedC3            = */ (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

#if (HEADER_FORMAT_VERSION_MAJOR > 1) /* include_mcc header file */
        /* Configurable interrupts with MCC names */
        /* .pfnSUPC_Handler         = */ (void*) SUPC_Handler,        /* 0  Supply Controller */
        /* .pfnRSTC_Handler         = */ (void*) RSTC_Handler,        /* 1  Reset Controller */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 2  Real-time Clock */
        /* .pfnRTT_Handler          = */ (void*) RTT_Handler,         /* 3  Real-time Timer */
        /* .pfnWDT_Handler          = */ (void*) WDT_Handler,         /* 4  Watchdog Timer */
        /* .pfnPMC_Handler          = */ (void*) PMC_Handler,         /* 5  Power Management Controller */
        /* .pfnEFC_Handler          = */ (void*) EFC_Handler,         /* 6  Embedded Flash Controller */
        /* .pvReserved7             = */ (void*) (0UL),               /* 7  Reserved */
        /* .pfnUART0_Handler        = */ (void*) UART0_Handler,       /* 8  Universal Asynchronous Receiver Transmitter */
        /* .pfnUART1_Handler        = */ (void*) UART1_Handler,       /* 9  Universal Asynchronous Receiver Transmitter */
        /* .pvReserved10            = */ (void*) (0UL),               /* 10 Reserved */
        /* .pfnPIOA_Handler         = */ (void*) PIOA_Handler,        /* 11 Parallel Input/Output Controller */
        /* .pfnPIOB_Handler         = */ (void*) PIOB_Handler,        /* 12 Parallel Input/Output Controller */
        /* .pfnPDMIC0_Handler       = */ (void*) PDMIC0_Handler,      /* 13 Pulse Density Modulation Interface Controller */
        /* .pfnUSART_Handler        = */ (void*) USART_Handler,       /* 14 Universal Synchronous Asynchronous Receiver Transmitter */
        /* .pfnMEM2MEM_Handler      = */ (void*) MEM2MEM_Handler,     /* 15 Memory to Memory */
        /* .pfnI2SC0_Handler        = */ (void*) I2SC0_Handler,       /* 16 Inter-IC Sound Controller */
        /* .pfnI2SC1_Handler        = */ (void*) I2SC1_Handler,       /* 17 Inter-IC Sound Controller */
        /* .pfnPDMIC1_Handler       = */ (void*) PDMIC1_Handler,      /* 18 Pulse Density Modulation Interface Controller */
        /* .pfnTWI0_Handler         = */ (void*) TWI0_Handler,        /* 19 Two-wire Interface High Speed */
        /* .pfnTWI1_Handler         = */ (void*) TWI1_Handler,        /* 20 Two-wire Interface */
        /* .pfnSPI_Handler          = */ (void*) SPI_Handler,         /* 21 Serial Peripheral Interface */
        /* .pfnTWI2_Handler         = */ (void*) TWI2_Handler,        /* 22 Two-wire Interface */
        /* .pfnTC0_Handler          = */ (void*) TC0_Handler,         /* 23 Timer Counter */
        /* .pfnTC1_Handler          = */ (void*) TC1_Handler,         /* 24 Timer Counter */
        /* .pfnTC2_Handler          = */ (void*) TC2_Handler,         /* 25 Timer Counter */
        /* .pfnTC3_Handler          = */ (void*) TC3_Handler,         /* 26 Timer Counter */
        /* .pfnTC4_Handler          = */ (void*) TC4_Handler,         /* 27 Timer Counter */
        /* .pfnTC5_Handler          = */ (void*) TC5_Handler,         /* 28 Timer Counter */
        /* .pfnADC_Handler          = */ (void*) ADC_Handler          /* 29 Analog-to-Digital Converter */

#else /* Legacy defined(_SAMG53G19_H) */
        /* Configurable interrupts with Legacy names */
        /* .pfnSUPC_Handler         = */ (void*) SUPC_Handler,        /* 0  Supply Controller */
        /* .pfnRSTC_Handler         = */ (void*) RSTC_Handler,        /* 1  Reset Controller */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 2  Real-time Clock */
        /* .pfnRTT_Handler          = */ (void*) RTT_Handler,         /* 3  Real-time Timer */
        /* .pfnWDT_Handler          = */ (void*) WDT_Handler,         /* 4  Watchdog Timer */
        /* .pfnPMC_Handler          = */ (void*) PMC_Handler,         /* 5  Power Management Controller */
        /* .pfnEFC_Handler          = */ (void*) EFC_Handler,         /* 6  Embedded Flash Controller */
        /* .pvReserved7             = */ (void*) (0UL),               /* 7  Reserved */
        /* .pfnUART0_Handler        = */ (void*) UART0_Handler,       /* 8  Universal Asynchronous Receiver Transmitter */
        /* .pfnUART1_Handler        = */ (void*) UART1_Handler,       /* 9  Universal Asynchronous Receiver Transmitter */
        /* .pvReserved10            = */ (void*) (0UL),               /* 10 Reserved */
        /* .pfnPIOA_Handler         = */ (void*) PIOA_Handler,        /* 11 Parallel Input/Output Controller */
        /* .pfnPIOB_Handler         = */ (void*) PIOB_Handler,        /* 12 Parallel Input/Output Controller */
        /* .pfnPDMIC0_Handler       = */ (void*) PDMIC0_Handler,      /* 13 Pulse Density Modulation Interface Controller */
        /* .pfnUSART_Handler        = */ (void*) USART_Handler,       /* 14 Universal Synchronous Asynchronous Receiver Transmitter */
        /* .pfnMEM2MEM_Handler      = */ (void*) MEM2MEM_Handler,     /* 15 Memory to Memory */
        /* .pfnI2SC0_Handler        = */ (void*) I2SC0_Handler,       /* 16 Inter-IC Sound Controller */
        /* .pfnI2SC1_Handler        = */ (void*) I2SC1_Handler,       /* 17 Inter-IC Sound Controller */
        /* .pfnPDMIC1_Handler       = */ (void*) PDMIC1_Handler,      /* 18 Pulse Density Modulation Interface Controller */
        /* .pfnTWI0_Handler         = */ (void*) TWI0_Handler,        /* 19 Two-wire Interface High Speed */
        /* .pfnTWI1_Handler         = */ (void*) TWI1_Handler,        /* 20 Two-wire Interface */
        /* .pfnSPI_Handler          = */ (void*) SPI_Handler,         /* 21 Serial Peripheral Interface */
        /* .pfnTWI2_Handler         = */ (void*) TWI2_Handler,        /* 22 Two-wire Interface */
        /* .pfnTC0_Handler          = */ (void*) TC0_Handler,         /* 23 Timer Counter */
        /* .pfnTC1_Handler          = */ (void*) TC1_Handler,         /* 24 Timer Counter */
        /* .pfnTC2_Handler          = */ (void*) TC2_Handler,         /* 25 Timer Counter */
        /* .pfnTC3_Handler          = */ (void*) TC3_Handler,         /* 26 Timer Counter */
        /* .pfnTC4_Handler          = */ (void*) TC4_Handler,         /* 27 Timer Counter */
        /* .pfnTC5_Handler          = */ (void*) TC5_Handler,         /* 28 Timer Counter */
        /* .pfnADC_Handler          = */ (void*) ADC_Handler          /* 29 Analog-to-Digital Converter */
#endif
};

#if (__ARM_FP==14) || (__ARM_FP==4)
/* These functions are used only when compiling with -mfloat-abi=softfp or -mfloat-abi=hard */
/* Save and restore IRQs */
typedef uint32_t irqflags_t;
static bool g_interrupt_enabled;
#define cpu_irq_is_enabled()    (__get_PRIMASK() == 0)
#  define cpu_irq_enable()                             \
        do {                                           \
                g_interrupt_enabled = true;            \
                __DMB();                               \
                __enable_irq();                        \
        } while (0)
#  define cpu_irq_disable()                            \
        do {                                           \
                __disable_irq();                       \
                __DMB();                               \
                g_interrupt_enabled = false;           \
        } while (0)
__always_inline __STATIC_INLINE bool __attribute__((optimize("-O1"))) cpu_irq_is_enabled_flags(irqflags_t flags)
{
        return (flags);
}
__always_inline __STATIC_INLINE void __attribute__((optimize("-O1"))) cpu_irq_restore(irqflags_t flags)
{
        if (cpu_irq_is_enabled_flags(flags))
                cpu_irq_enable();
}
__always_inline __STATIC_INLINE __attribute__((optimize("-O1"))) irqflags_t cpu_irq_save(void)
{
        volatile irqflags_t flags = cpu_irq_is_enabled();
        cpu_irq_disable();
        return flags;
}

/** Address for ARM CPACR */
#define ADDR_CPACR 0xE000ED88
/** CPACR Register */
#define REG_CPACR  (*((volatile uint32_t *)ADDR_CPACR))

/**
* \brief Enable FPU
*/
__always_inline __STATIC_INLINE void __attribute__((optimize("-O1"))) fpu_enable(void)
{
    irqflags_t flags;
    flags = cpu_irq_save();
    REG_CPACR |=  (0xFu << 20);
    __DSB();
    __ISB();
    cpu_irq_restore(flags);
}
#endif /* (__ARM_FP==14) || (__ARM_FP==4) */
 
/* Optional application-provided functions */
extern void __attribute__((weak,long_call)) _on_reset(void);
extern void __attribute__((weak,long_call)) _on_bootstrap(void);

/* Reserved for use by the MPLAB XC32 Compiler */
extern void __attribute__((weak,long_call)) __xc32_on_reset(void);
extern void __attribute__((weak,long_call)) __xc32_on_bootstrap(void);


/**
 * \brief This is the code that gets called on processor reset.
 * To initialize the device, and call the main() routine.
 */
void __attribute__((weak, optimize("-O1"), section(".text.Reset_Handler"), long_call,
                    naked, externally_visible))
Reset_Handler(void)
{
#ifdef SCB_VTOR_TBLOFF_Msk
    uint32_t *pSrc;
#endif

#if defined (__REINIT_STACK_POINTER)
    /* Initialize SP from linker-defined _stack symbol. */
    __asm__ volatile ("ldr sp, =_stack" : : : "sp");

#ifdef SCB_VTOR_TBLOFF_Msk
    /* Buy stack for locals */
    __asm__ volatile ("sub sp, sp, #8" : : : "sp");
#endif
    __asm__ volatile ("add r7, sp, #0" : : : "r7");
#endif

    /* Call the optional application-provided _on_reset() function. */
    if (_on_reset)
      _on_reset();

    /* Reserved for use by MPLAB XC32. */
    if (__xc32_on_reset)
      __xc32_on_reset();

#if (__ARM_FP==14) || (__ARM_FP==4)
    /* Enable the FPU iff the application is built with -mfloat-abi=softfp or -mfloat-abi=hard */
    fpu_enable();
#endif
 

 


    /* Data initialization from the XC32 .dinit template */
    __pic32c_data_initialization();
 
#ifdef SCB_VTOR_TBLOFF_Msk
    /*  Set the vector-table base address. This may be in flash or TCM.
     *  The __svectors symbol is created by the XC32 linker.
     */
    pSrc = (uint32_t *) & __svectors;
    SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);
#endif
 
    /* Initialize the C library */
    __libc_init_array();

    /* Call the optional application-provided _on_bootstrap() function. */
    if (_on_bootstrap)
      _on_bootstrap();

    /* Reserved for use by MPLAB XC32. */
    if (__xc32_on_bootstrap)
      __xc32_on_bootstrap();

    /* Branch to application's main function */
    main();

#if (defined(__DEBUG) || defined(__DEBUG_D))
    __builtin_software_breakpoint();
#endif
    /* Infinite loop */
    while (1) {}
}

/**
* \brief Default interrupt handler for unused IRQs.
*/
void __attribute__((weak, optimize("-O1"), section(".text.Dummy_Handler"),
                    long_call, externally_visible))
Dummy_Handler(void)
{
#if (defined(__DEBUG) || defined(__DEBUG_D))
    __builtin_software_breakpoint();
#endif
    while (1) {}
}
