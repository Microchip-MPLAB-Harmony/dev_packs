/**
 * \file
 *
 * \brief MPLAB(R) XC32 - Startup code for PIC32CX5109BZ31048
 *
 * Copyright (c) 2023 Microchip Technology Inc.
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


#ifndef   __INLINE
#if __GNUC_GNU_INLINE__ == 1
  #define __INLINE              __inline__
#else
  #define __INLINE              inline
#endif
#endif

#ifndef   __STATIC_INLINE
  #define __STATIC_INLINE       static __INLINE
#endif

#ifndef   __STATIC_FORCEINLINE
  #define __STATIC_FORCEINLINE  __attribute__((always_inline)) static __INLINE
#endif

#include <xc.h>
#include <libpic32c.h>

#ifndef __always_inline
#define __always_inline	__attribute__((__always_inline__))
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
/* We pass (0, NULL) for the arguments just in case, but applications
 * are expected to use main(void) as their prototype.  Thus, passing
 * NULL for argv is valid.
 */
extern int main(int, char **);
/** \endcond */

extern void __attribute__((long_call)) __libc_init_array(void);

/* Default empty handler */
void __attribute__((weak, used, optimize("-O1"), long_call, externally_visible)) Dummy_Handler(void);

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wredundant-decls"

/* Reset handler and application-provided reset handler */
void __attribute__((weak, optimize("-O1"), long_call, naked, externally_visible)) Reset_Handler(void);
extern void __attribute__((weak, used, long_call)) __XC32_RESET_HANDLER_NAME(void);

#pragma GCC diagnostic pop

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
void RTC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FREQM_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVM_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CHANGE_NOTICE_A_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CHANGE_NOTICE_B_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_0_3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_4_15_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_0_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_4_11_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PAC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RAMECC_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC4_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC5_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC6_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC7_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADCHS_IRQ_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AC_Handler                ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SILEX_0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SILEX_1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QSPI_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ZB_INT0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BT_INT0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BT_INT1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ARBITER_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADCHS_FAULT_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADCHS_FCC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADCHS_BGVR_RDY_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CLKI_WAKEUP_NMI_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CVD_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DGI_SPI_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved41                ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BT_LC_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"

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
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 0  Real-Time Counter */
        /* .pfnEIC_Handler          = */ (void*) EIC_Handler,         /* 1  External Interrupt Controller */
        /* .pfnFREQM_Handler        = */ (void*) FREQM_Handler,       /* 2  Frequency Meter */
        /* .pfnNVM_Handler          = */ (void*) NVM_Handler,         /* 3  flash controller */
        /* .pfnCHANGE_NOTICE_A_Handler = */ (void*) CHANGE_NOTICE_A_Handler, /* 4  GPIO */
        /* .pfnCHANGE_NOTICE_B_Handler = */ (void*) CHANGE_NOTICE_B_Handler, /* 5  GPIO */
        /* .pfnDMAC_0_3_Handler     = */ (void*) DMAC_0_3_Handler,    /* 6  Direct Memory Access Controller */
        /* .pfnDMAC_4_15_Handler    = */ (void*) DMAC_4_15_Handler,   /* 7  Direct Memory Access Controller */
        /* .pfnEVSYS_0_3_Handler    = */ (void*) EVSYS_0_3_Handler,   /* 8  Event System Interface */
        /* .pfnEVSYS_4_11_Handler   = */ (void*) EVSYS_4_11_Handler,  /* 9  Event System Interface */
        /* .pfnPAC_Handler          = */ (void*) PAC_Handler,         /* 10 Peripheral Access Controller */
        /* .pfnRAMECC_Handler       = */ (void*) RAMECC_Handler,      /* 11 RAM ECC */
        /* .pfnSERCOM0_Handler      = */ (void*) SERCOM0_Handler,     /* 12 Serial Communication Interface */
        /* .pfnSERCOM1_Handler      = */ (void*) SERCOM1_Handler,     /* 13 Serial Communication Interface */
        /* .pfnTCC0_Handler         = */ (void*) TCC0_Handler,        /* 14 Timer Counter Control */
        /* .pfnTCC1_Handler         = */ (void*) TCC1_Handler,        /* 15 Timer Counter Control */
        /* .pfnTCC2_Handler         = */ (void*) TCC2_Handler,        /* 16 Timer Counter Control */
        /* .pfnTC0_Handler          = */ (void*) TC0_Handler,         /* 17 Basic Timer Counter */
        /* .pfnTC1_Handler          = */ (void*) TC1_Handler,         /* 18 Basic Timer Counter */
        /* .pfnTC2_Handler          = */ (void*) TC2_Handler,         /* 19 Basic Timer Counter */
        /* .pfnTC3_Handler          = */ (void*) TC3_Handler,         /* 20 Basic Timer Counter */
        /* .pfnTC4_Handler          = */ (void*) TC4_Handler,         /* 21 Basic Timer Counter */
        /* .pfnTC5_Handler          = */ (void*) TC5_Handler,         /* 22 Basic Timer Counter */
        /* .pfnTC6_Handler          = */ (void*) TC6_Handler,         /* 23 Basic Timer Counter */
        /* .pfnTC7_Handler          = */ (void*) TC7_Handler,         /* 24 Basic Timer Counter */
        /* .pfnADCHS_IRQ_Handler    = */ (void*) ADCHS_IRQ_Handler,   /* 25 12-bit Analog to Digital Converter */
        /* .pfnAC_Handler           = */ (void*) AC_Handler,          /* 26 Analog Comparators */
        /* .pfnSILEX_0_Handler      = */ (void*) SILEX_0_Handler,     /* 27  */
        /* .pfnSILEX_1_Handler      = */ (void*) SILEX_1_Handler,     /* 28  */
        /* .pfnQSPI_Handler         = */ (void*) QSPI_Handler,        /* 29 Quad SPI interface */
        /* .pfnZB_INT0_Handler      = */ (void*) ZB_INT0_Handler,     /* 30 ZigBee MAC DOS */
        /* .pfnBT_INT0_Handler      = */ (void*) BT_INT0_Handler,     /* 31 BLE */
        /* .pfnBT_INT1_Handler      = */ (void*) BT_INT1_Handler,     /* 32 BLE */
        /* .pfnARBITER_Handler      = */ (void*) ARBITER_Handler,     /* 33 Radio Arbiter */
        /* .pfnADCHS_FAULT_Handler  = */ (void*) ADCHS_FAULT_Handler, /* 34 12-bit Analog to Digital Converter */
        /* .pfnADCHS_FCC_Handler    = */ (void*) ADCHS_FCC_Handler,   /* 35 12-bit Analog to Digital Converter */
        /* .pfnADCHS_BGVR_RDY_Handler = */ (void*) ADCHS_BGVR_RDY_Handler, /* 36 12-bit Analog to Digital Converter */
        /* .pfnCLKI_WAKEUP_NMI_Handler = */ (void*) CLKI_WAKEUP_NMI_Handler, /* 37 BLE */
        /* .pfnCVD_Handler          = */ (void*) CVD_Handler,         /* 38 Hardware CVD Controller Macro */
        /* .pfnDGI_SPI_Handler      = */ (void*) DGI_SPI_Handler,     /* 39 SPI DMA for DGI Macro */
        /* .pfnSERCOM2_Handler      = */ (void*) SERCOM2_Handler,     /* 40 Serial Communication Interface */
        /* .pvReserved41            = */ (void*) (0UL),               /* 41 Reserved */
        /* .pfnBT_LC_Handler        = */ (void*) BT_LC_Handler        /* 42 BLE */

#else /* Legacy defined(_32CX5109BZ31048_H) */
        /* Configurable interrupts with Legacy names */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 0  Real-Time Counter */
        /* .pfnEIC_Handler          = */ (void*) EIC_Handler,         /* 1  External Interrupt Controller */
        /* .pfnFREQM_Handler        = */ (void*) FREQM_Handler,       /* 2  Frequency Meter */
        /* .pfnNVM_Handler          = */ (void*) NVM_Handler,         /* 3  flash controller */
        /* .pfnCHANGE_NOTICE_A_Handler = */ (void*) CHANGE_NOTICE_A_Handler, /* 4  GPIO */
        /* .pfnCHANGE_NOTICE_B_Handler = */ (void*) CHANGE_NOTICE_B_Handler, /* 5  GPIO */
        /* .pfnDMAC_0_3_Handler     = */ (void*) DMAC_0_3_Handler,    /* 6  Direct Memory Access Controller */
        /* .pfnDMAC_4_15_Handler    = */ (void*) DMAC_4_15_Handler,   /* 7  Direct Memory Access Controller */
        /* .pfnEVSYS_0_3_Handler    = */ (void*) EVSYS_0_3_Handler,   /* 8  Event System Interface */
        /* .pfnEVSYS_4_11_Handler   = */ (void*) EVSYS_4_11_Handler,  /* 9  Event System Interface */
        /* .pfnPAC_Handler          = */ (void*) PAC_Handler,         /* 10 Peripheral Access Controller */
        /* .pfnRAMECC_Handler       = */ (void*) RAMECC_Handler,      /* 11 RAM ECC */
        /* .pfnSERCOM0_Handler      = */ (void*) SERCOM0_Handler,     /* 12 Serial Communication Interface */
        /* .pfnSERCOM1_Handler      = */ (void*) SERCOM1_Handler,     /* 13 Serial Communication Interface */
        /* .pfnTCC0_Handler         = */ (void*) TCC0_Handler,        /* 14 Timer Counter Control */
        /* .pfnTCC1_Handler         = */ (void*) TCC1_Handler,        /* 15 Timer Counter Control */
        /* .pfnTCC2_Handler         = */ (void*) TCC2_Handler,        /* 16 Timer Counter Control */
        /* .pfnTC0_Handler          = */ (void*) TC0_Handler,         /* 17 Basic Timer Counter */
        /* .pfnTC1_Handler          = */ (void*) TC1_Handler,         /* 18 Basic Timer Counter */
        /* .pfnTC2_Handler          = */ (void*) TC2_Handler,         /* 19 Basic Timer Counter */
        /* .pfnTC3_Handler          = */ (void*) TC3_Handler,         /* 20 Basic Timer Counter */
        /* .pfnTC4_Handler          = */ (void*) TC4_Handler,         /* 21 Basic Timer Counter */
        /* .pfnTC5_Handler          = */ (void*) TC5_Handler,         /* 22 Basic Timer Counter */
        /* .pfnTC6_Handler          = */ (void*) TC6_Handler,         /* 23 Basic Timer Counter */
        /* .pfnTC7_Handler          = */ (void*) TC7_Handler,         /* 24 Basic Timer Counter */
        /* .pfnADCHS_IRQ_Handler    = */ (void*) ADCHS_IRQ_Handler,   /* 25 12-bit Analog to Digital Converter */
        /* .pfnAC_Handler           = */ (void*) AC_Handler,          /* 26 Analog Comparators */
        /* .pfnSILEX_0_Handler      = */ (void*) SILEX_0_Handler,     /* 27  */
        /* .pfnSILEX_1_Handler      = */ (void*) SILEX_1_Handler,     /* 28  */
        /* .pfnQSPI_Handler         = */ (void*) QSPI_Handler,        /* 29 Quad SPI interface */
        /* .pfnZB_INT0_Handler      = */ (void*) ZB_INT0_Handler,     /* 30 ZigBee MAC DOS */
        /* .pfnBT_INT0_Handler      = */ (void*) BT_INT0_Handler,     /* 31 BLE */
        /* .pfnBT_INT1_Handler      = */ (void*) BT_INT1_Handler,     /* 32 BLE */
        /* .pfnARBITER_Handler      = */ (void*) ARBITER_Handler,     /* 33 Radio Arbiter */
        /* .pfnADCHS_FAULT_Handler  = */ (void*) ADCHS_FAULT_Handler, /* 34 12-bit Analog to Digital Converter */
        /* .pfnADCHS_FCC_Handler    = */ (void*) ADCHS_FCC_Handler,   /* 35 12-bit Analog to Digital Converter */
        /* .pfnADCHS_BGVR_RDY_Handler = */ (void*) ADCHS_BGVR_RDY_Handler, /* 36 12-bit Analog to Digital Converter */
        /* .pfnCLKI_WAKEUP_NMI_Handler = */ (void*) CLKI_WAKEUP_NMI_Handler, /* 37 BLE */
        /* .pfnCVD_Handler          = */ (void*) CVD_Handler,         /* 38 Hardware CVD Controller Macro */
        /* .pfnDGI_SPI_Handler      = */ (void*) DGI_SPI_Handler,     /* 39 SPI DMA for DGI Macro */
        /* .pfnSERCOM2_Handler      = */ (void*) SERCOM2_Handler,     /* 40 Serial Communication Interface */
        /* .pvReserved41            = */ (void*) (0UL),               /* 41 Reserved */
        /* .pfnBT_LC_Handler        = */ (void*) BT_LC_Handler        /* 42 BLE */
#endif
};

#pragma GCC diagnostic pop

#if (__ARM_FP==14) || (__ARM_FP==4)
/* These functions are used only when compiling with -mfloat-abi=softfp or -mfloat-abi=hard */
/* Save and restore IRQs */
typedef uint32_t irqflags_t;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
static bool g_interrupt_enabled;
#pragma GCC diagnostic pop
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
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
__always_inline __STATIC_INLINE bool __attribute__((optimize("-O1"))) cpu_irq_is_enabled_flags(irqflags_t flags)
{
        return (flags);
}
#pragma GCC diagnostic pop
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

    /* Branch to application's main function.  See above about arguments. */
    main(0, NULL);

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
