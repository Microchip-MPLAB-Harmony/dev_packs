/**
 * \file
 *
 * \brief MPLAB(R) XC32 - Startup code for SAML22J16A
 *
 * Copyright (c) 2022 Microchip Technology Inc.
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
void USB_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVMCTRL_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved13_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved14_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AC_Handler                ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PTC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SLCD_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AES_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

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
        /* .pfnUSB_Handler          = */ (void*) USB_Handler,         /* 5  Universal Serial Bus */
        /* .pfnNVMCTRL_Handler      = */ (void*) NVMCTRL_Handler,     /* 6  Non-Volatile Memory Controller */
        /* .pfnDMAC_Handler         = */ (void*) DMAC_Handler,        /* 7  Direct Memory Access Controller */
        /* .pfnEVSYS_Handler        = */ (void*) EVSYS_Handler,       /* 8  Event System Interface */
        /* .pfnSERCOM0_Handler      = */ (void*) SERCOM0_Handler,     /* 9  Serial Communication Interface */
        /* .pfnSERCOM1_Handler      = */ (void*) SERCOM1_Handler,     /* 10 Serial Communication Interface */
        /* .pfnSERCOM2_Handler      = */ (void*) SERCOM2_Handler,     /* 11 Serial Communication Interface */
        /* .pfnSERCOM3_Handler      = */ (void*) SERCOM3_Handler,     /* 12 Serial Communication Interface */
        /* .pvReserved13            = */ (void*) (0UL),               /* 13 Reserved */
        /* .pvReserved14            = */ (void*) (0UL),               /* 14 Reserved */
        /* .pfnTCC0_Handler         = */ (void*) TCC0_Handler,        /* 15 Timer Counter Control */
        /* .pfnTC0_Handler          = */ (void*) TC0_Handler,         /* 16 Basic Timer Counter */
        /* .pfnTC1_Handler          = */ (void*) TC1_Handler,         /* 17 Basic Timer Counter */
        /* .pfnTC2_Handler          = */ (void*) TC2_Handler,         /* 18 Basic Timer Counter */
        /* .pfnTC3_Handler          = */ (void*) TC3_Handler,         /* 19 Basic Timer Counter */
        /* .pfnADC_Handler          = */ (void*) ADC_Handler,         /* 20 Analog Digital Converter */
        /* .pfnAC_Handler           = */ (void*) AC_Handler,          /* 21 Analog Comparators */
        /* .pfnPTC_Handler          = */ (void*) PTC_Handler,         /* 22 Peripheral Touch Controller */
        /* .pfnSLCD_Handler         = */ (void*) SLCD_Handler,        /* 23 Segment Liquid Crystal Display Controller */
        /* .pfnAES_Handler          = */ (void*) AES_Handler,         /* 24 Advanced Encryption Standard */
        /* .pfnTRNG_Handler         = */ (void*) TRNG_Handler         /* 25 True Random Generator */

#else /* Legacy defined(_SAML22J16A_H) */
        /* Configurable interrupts with Legacy names */
        /* .pfnSYSTEM_Handler       = */ (void*) SYSTEM_Handler,      /* 0  Main Clock */
        /* .pfnWDT_Handler          = */ (void*) WDT_Handler,         /* 1  Watchdog Timer */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 2  Real-Time Counter */
        /* .pfnEIC_Handler          = */ (void*) EIC_Handler,         /* 3  External Interrupt Controller */
        /* .pfnFREQM_Handler        = */ (void*) FREQM_Handler,       /* 4  Frequency Meter */
        /* .pfnUSB_Handler          = */ (void*) USB_Handler,         /* 5  Universal Serial Bus */
        /* .pfnNVMCTRL_Handler      = */ (void*) NVMCTRL_Handler,     /* 6  Non-Volatile Memory Controller */
        /* .pfnDMAC_Handler         = */ (void*) DMAC_Handler,        /* 7  Direct Memory Access Controller */
        /* .pfnEVSYS_Handler        = */ (void*) EVSYS_Handler,       /* 8  Event System Interface */
        /* .pfnSERCOM0_Handler      = */ (void*) SERCOM0_Handler,     /* 9  Serial Communication Interface */
        /* .pfnSERCOM1_Handler      = */ (void*) SERCOM1_Handler,     /* 10 Serial Communication Interface */
        /* .pfnSERCOM2_Handler      = */ (void*) SERCOM2_Handler,     /* 11 Serial Communication Interface */
        /* .pfnSERCOM3_Handler      = */ (void*) SERCOM3_Handler,     /* 12 Serial Communication Interface */
        /* .pvReserved13            = */ (void*) (0UL),               /* 13 Reserved */
        /* .pvReserved14            = */ (void*) (0UL),               /* 14 Reserved */
        /* .pfnTCC0_Handler         = */ (void*) TCC0_Handler,        /* 15 Timer Counter Control */
        /* .pfnTC0_Handler          = */ (void*) TC0_Handler,         /* 16 Basic Timer Counter */
        /* .pfnTC1_Handler          = */ (void*) TC1_Handler,         /* 17 Basic Timer Counter */
        /* .pfnTC2_Handler          = */ (void*) TC2_Handler,         /* 18 Basic Timer Counter */
        /* .pfnTC3_Handler          = */ (void*) TC3_Handler,         /* 19 Basic Timer Counter */
        /* .pfnADC_Handler          = */ (void*) ADC_Handler,         /* 20 Analog Digital Converter */
        /* .pfnAC_Handler           = */ (void*) AC_Handler,          /* 21 Analog Comparators */
        /* .pfnPTC_Handler          = */ (void*) PTC_Handler,         /* 22 Peripheral Touch Controller */
        /* .pfnSLCD_Handler         = */ (void*) SLCD_Handler,        /* 23 Segment Liquid Crystal Display Controller */
        /* .pfnAES_Handler          = */ (void*) AES_Handler,         /* 24 Advanced Encryption Standard */
        /* .pfnTRNG_Handler         = */ (void*) TRNG_Handler         /* 25 True Random Generator */
#endif
};

 
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
