/**
 * \file
 *
 * \brief MPLAB(R) XC32 - Startup code for PIC32CM2532JH00100
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

/*
*  The MPLAB X Simulator does not yet support simulation of programming the 
*  GPNVM bits yet. We can remove this once it supports the FRDY bit.
*/
#ifdef __MPLAB_DEBUGGER_SIMULATOR
#define __XC32_SKIP_STARTUP_GPNVM_WAIT
#endif

/*
*  This startup code relies on features that are specific to the MPLAB XC32
*  toolchain. Do not use it with other toolchains.
*/
#ifndef __XC32
#warning This startup code is intended for use with the MPLAB XC32 Compiler only.
#endif


#if defined ECC_INIT_START
#define START_ADDR  ECC_INIT_START
#else
#define START_ADDR  DRAM_ADDR
#endif

#if defined ECC_INIT_LEN
#define INIT_LEN  ECC_INIT_LEN
#else
#define INIT_LEN  DRAM_SIZE
#endif

__STATIC_INLINE void  __attribute__((optimize("-O1")))  ECC_Initialize(void)
{
    register uint32_t *pSRAM;

    __DSB();
    __ISB();

    // SRAM initialization loop (to handle ECC properly)
    // we need to initialize all of RAM with 32 bit aligned writes
    for (pSRAM = (uint32_t*)START_ADDR ; pSRAM < ((uint32_t*)(START_ADDR + INIT_LEN)) ; pSRAM++)
    {
        *pSRAM = 0;
    }

    __DSB();
    __ISB();
}

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

/* Cortex-M0PLUS core handlers */
void NonMaskableInt_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVCall_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void SYSTEM_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WDT_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FREQM_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCRAMC_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVMCTRL_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_6_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_7_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM4_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM5_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved15_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved16_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_5_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_6_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_7_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC4_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AC_Handler                ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DAC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PDEC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PTC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ICM_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

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
        /* .pvReservedC12           = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC11           = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC10           = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC9            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC8            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC7            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC6            = */ (void*) (0UL), /* Reserved */
        /* .pfnSVCall_Handler       = */ (void*) SVCall_Handler,
        /* .pvReservedC4            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC3            = */ (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

#if (HEADER_FORMAT_VERSION_MAJOR > 1) /* include_mcc header file */
        /* Configurable interrupts with MCC names */
        /* .pfnSYSTEM_Handler       = */ (void*) SYSTEM_Handler,      /* 0  Main Clock */
        /* .pfnWDT_Handler          = */ (void*) WDT_Handler,         /* 1  Watchdog Timer */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 2  Real-Time Counter */
        /* .pfnEIC_Handler          = */ (void*) EIC_Handler,         /* 3  External Interrupt Controller */
        /* .pfnFREQM_Handler        = */ (void*) FREQM_Handler,       /* 4  Frequency Meter */
        /* .pfnMCRAMC_Handler       = */ (void*) MCRAMC_Handler,      /* 5  Multi-Channel RAM Controller */
        /* .pfnNVMCTRL_Handler      = */ (void*) NVMCTRL_Handler,     /* 6  Non-Volatile Memory Controller */
        /* .pfnDMAC_Handler         = */ (void*) DMAC_Handler,        /* 7  Direct Memory Access Controller */
        /* .pfnEVSYS_Handler        = */ (void*) EVSYS_Handler,       /* 8  Event System Interface */
        /* .pfnSERCOM0_6_Handler    = */ (void*) SERCOM0_6_Handler,   /* 9  Serial Communication Interface */
        /* .pfnSERCOM1_7_Handler    = */ (void*) SERCOM1_7_Handler,   /* 10 Serial Communication Interface */
        /* .pfnSERCOM2_Handler      = */ (void*) SERCOM2_Handler,     /* 11 Serial Communication Interface */
        /* .pfnSERCOM3_Handler      = */ (void*) SERCOM3_Handler,     /* 12 Serial Communication Interface */
        /* .pfnSERCOM4_Handler      = */ (void*) SERCOM4_Handler,     /* 13 Serial Communication Interface */
        /* .pfnSERCOM5_Handler      = */ (void*) SERCOM5_Handler,     /* 14 Serial Communication Interface */
        /* .pvReserved15            = */ (void*) (0UL),               /* 15 Reserved */
        /* .pvReserved16            = */ (void*) (0UL),               /* 16 Reserved */
        /* .pfnTCC0_Handler         = */ (void*) TCC0_Handler,        /* 17 Timer Counter for Control Applications */
        /* .pfnTCC1_Handler         = */ (void*) TCC1_Handler,        /* 18 Timer Counter for Control Applications */
        /* .pfnTCC2_Handler         = */ (void*) TCC2_Handler,        /* 19 Timer Counter for Control Applications */
        /* .pfnTC0_5_Handler        = */ (void*) TC0_5_Handler,       /* 20 Basic Timer Counter */
        /* .pfnTC1_6_Handler        = */ (void*) TC1_6_Handler,       /* 21 Basic Timer Counter */
        /* .pfnTC2_7_Handler        = */ (void*) TC2_7_Handler,       /* 22 Basic Timer Counter */
        /* .pfnTC3_Handler          = */ (void*) TC3_Handler,         /* 23 Basic Timer Counter */
        /* .pfnTC4_Handler          = */ (void*) TC4_Handler,         /* 24 Basic Timer Counter */
        /* .pfnADC0_Handler         = */ (void*) ADC0_Handler,        /* 25 Analog Digital Converter */
        /* .pfnADC1_Handler         = */ (void*) ADC1_Handler,        /* 26 Analog Digital Converter */
        /* .pfnAC_Handler           = */ (void*) AC_Handler,          /* 27 Analog Comparators */
        /* .pfnDAC_Handler          = */ (void*) DAC_Handler,         /* 28 Digital Analog Converter */
        /* .pfnPDEC_Handler         = */ (void*) PDEC_Handler,        /* 29 Quadrature Decodeur */
        /* .pfnPTC_Handler          = */ (void*) PTC_Handler,         /* 30 Peripheral Touch Controller */
        /* .pfnICM_Handler          = */ (void*) ICM_Handler          /* 31 Integrity Check Monitor */

#else /* Legacy defined(_32CM2532JH00100_H) */
        /* Configurable interrupts with Legacy names */
        /* .pfnSYSTEM_Handler       = */ (void*) SYSTEM_Handler,      /* 0  Main Clock */
        /* .pfnWDT_Handler          = */ (void*) WDT_Handler,         /* 1  Watchdog Timer */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 2  Real-Time Counter */
        /* .pfnEIC_Handler          = */ (void*) EIC_Handler,         /* 3  External Interrupt Controller */
        /* .pfnFREQM_Handler        = */ (void*) FREQM_Handler,       /* 4  Frequency Meter */
        /* .pfnMCRAMC_Handler       = */ (void*) MCRAMC_Handler,      /* 5  Multi-Channel RAM Controller */
        /* .pfnNVMCTRL_Handler      = */ (void*) NVMCTRL_Handler,     /* 6  Non-Volatile Memory Controller */
        /* .pfnDMAC_Handler         = */ (void*) DMAC_Handler,        /* 7  Direct Memory Access Controller */
        /* .pfnEVSYS_Handler        = */ (void*) EVSYS_Handler,       /* 8  Event System Interface */
        /* .pfnSERCOM0_6_Handler    = */ (void*) SERCOM0_6_Handler,   /* 9  Serial Communication Interface */
        /* .pfnSERCOM1_7_Handler    = */ (void*) SERCOM1_7_Handler,   /* 10 Serial Communication Interface */
        /* .pfnSERCOM2_Handler      = */ (void*) SERCOM2_Handler,     /* 11 Serial Communication Interface */
        /* .pfnSERCOM3_Handler      = */ (void*) SERCOM3_Handler,     /* 12 Serial Communication Interface */
        /* .pfnSERCOM4_Handler      = */ (void*) SERCOM4_Handler,     /* 13 Serial Communication Interface */
        /* .pfnSERCOM5_Handler      = */ (void*) SERCOM5_Handler,     /* 14 Serial Communication Interface */
        /* .pvReserved15            = */ (void*) (0UL),               /* 15 Reserved */
        /* .pvReserved16            = */ (void*) (0UL),               /* 16 Reserved */
        /* .pfnTCC0_Handler         = */ (void*) TCC0_Handler,        /* 17 Timer Counter for Control Applications */
        /* .pfnTCC1_Handler         = */ (void*) TCC1_Handler,        /* 18 Timer Counter for Control Applications */
        /* .pfnTCC2_Handler         = */ (void*) TCC2_Handler,        /* 19 Timer Counter for Control Applications */
        /* .pfnTC0_5_Handler        = */ (void*) TC0_5_Handler,       /* 20 Basic Timer Counter */
        /* .pfnTC1_6_Handler        = */ (void*) TC1_6_Handler,       /* 21 Basic Timer Counter */
        /* .pfnTC2_7_Handler        = */ (void*) TC2_7_Handler,       /* 22 Basic Timer Counter */
        /* .pfnTC3_Handler          = */ (void*) TC3_Handler,         /* 23 Basic Timer Counter */
        /* .pfnTC4_Handler          = */ (void*) TC4_Handler,         /* 24 Basic Timer Counter */
        /* .pfnADC0_Handler         = */ (void*) ADC0_Handler,        /* 25 Analog Digital Converter */
        /* .pfnADC1_Handler         = */ (void*) ADC1_Handler,        /* 26 Analog Digital Converter */
        /* .pfnAC_Handler           = */ (void*) AC_Handler,          /* 27 Analog Comparators */
        /* .pfnDAC_Handler          = */ (void*) DAC_Handler,         /* 28 Digital Analog Converter */
        /* .pfnPDEC_Handler         = */ (void*) PDEC_Handler,        /* 29 Quadrature Decodeur */
        /* .pfnPTC_Handler          = */ (void*) PTC_Handler,         /* 30 Peripheral Touch Controller */
        /* .pfnICM_Handler          = */ (void*) ICM_Handler          /* 31 Integrity Check Monitor */
#endif
};

#pragma GCC diagnostic pop

 
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


/* ECC Initialization for Karma devices */
ECC_Initialize();



#ifdef SCB_VTOR_TBLOFF_Msk
    uint32_t *pSrc;
#endif

#if defined (__REINIT_STACK_POINTER)
    /* Initialize SP from linker-defined _stack symbol. */
    __asm__ volatile ("ldr r7, =_stack; mov sp, r7" : : : "r7", "sp");

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
