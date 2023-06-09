/**
 * \file
 *
 * \brief MPLAB(R) XC32 - Startup code for PIC32CK0512GC01064
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

/* Cortex-M33 core handlers */
void NonMaskableInt_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MemoryManagement_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BusFault_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UsageFault_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SecureFaultMonitor_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVCall_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DebugMonitor_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void FCR_ERR_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FCR_FLT_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FCW_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PM_Handler                ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OSCCTRL_XOSC_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OSCCTRL_DFLL_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OSCCTRL_PLL0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OSC32KCTRL_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCLK_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FREQM_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WDT_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_3_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_4_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_5_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_6_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_7_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_8_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_9_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_10_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_11_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_12_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_13_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_14_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_15_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_NSCHK_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PAC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRAM_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PORT_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA0_PRI0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA0_PRI1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA0_PRI2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA1_PRI0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA1_PRI1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HMATRIX_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_3_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_OTHER_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_56_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_4_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_56_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_4_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_56_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_4_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_56_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_4_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_OTHER_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC4_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC5_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_OTHER_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC4_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC5_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_OTHER_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_MC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_MC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_MC2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_MC3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_MC4_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_MC5_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC3_OTHER_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC3_MC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC3_MC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC3_MC2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC3_MC3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC3_MC4_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC3_MC5_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM4_56_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM4_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM4_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM4_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM4_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM4_4_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM5_56_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM5_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM5_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM5_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM5_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM5_4_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM6_56_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM6_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM6_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM6_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM6_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM6_4_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM7_56_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM7_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM7_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM7_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM7_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM7_4_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC4_OTHER_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC4_MC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC4_MC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC5_OTHER_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC5_MC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC5_MC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC6_OTHER_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC6_MC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC6_MC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC7_OTHER_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC7_MC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC7_MC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_GLOBAL_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_CORE1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved4_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved5_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AC_Handler                ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PTC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPI_IXS_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PCC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PDEC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAN0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAN1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ETH_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SQI_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SDMMC0_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SDMMC1_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USB_OTHER_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USB_SOF_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USB_TRCPT0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USB_TRCPT1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USBHS_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved155_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved156_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved157_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

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
        .pfnSecureFaultMonitor_Handler = (void*) SecureFaultMonitor_Handler,
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
        /* .pfnFCR_ERR_Handler      = */ (void*) FCR_ERR_Handler,     /* 0  Flash Read Controller (FCR) */
        /* .pfnFCR_FLT_Handler      = */ (void*) FCR_FLT_Handler,     /* 1  Flash Read Controller (FCR) */
        /* .pfnFCW_Handler          = */ (void*) FCW_Handler,         /* 2  Flash Write Control (FCW) */
        /* .pfnPM_Handler           = */ (void*) PM_Handler,          /* 3  Power Manager */
        /* .pfnSUPC_Handler         = */ (void*) SUPC_Handler,        /* 4  Supply Controller */
        /* .pfnOSCCTRL_XOSC_Handler = */ (void*) OSCCTRL_XOSC_Handler, /* 5  Oscillators Control */
        /* .pfnOSCCTRL_DFLL_Handler = */ (void*) OSCCTRL_DFLL_Handler, /* 6  Oscillators Control */
        /* .pfnOSCCTRL_PLL0_Handler = */ (void*) OSCCTRL_PLL0_Handler, /* 7  Oscillators Control */
        /* .pfnOSC32KCTRL_Handler   = */ (void*) OSC32KCTRL_Handler,  /* 8  32kHz Oscillators Control */
        /* .pfnMCLK_Handler         = */ (void*) MCLK_Handler,        /* 9  Main Clock */
        /* .pfnFREQM_Handler        = */ (void*) FREQM_Handler,       /* 10 Frequency Meter */
        /* .pfnWDT_Handler          = */ (void*) WDT_Handler,         /* 11 Watchdog Timer */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 12 Real-Time Counter */
        /* .pfnEIC_EXTINT_0_Handler = */ (void*) EIC_EXTINT_0_Handler, /* 13 External Interrupt Controller */
        /* .pfnEIC_EXTINT_1_Handler = */ (void*) EIC_EXTINT_1_Handler, /* 14 External Interrupt Controller */
        /* .pfnEIC_EXTINT_2_Handler = */ (void*) EIC_EXTINT_2_Handler, /* 15 External Interrupt Controller */
        /* .pfnEIC_EXTINT_3_Handler = */ (void*) EIC_EXTINT_3_Handler, /* 16 External Interrupt Controller */
        /* .pfnEIC_EXTINT_4_Handler = */ (void*) EIC_EXTINT_4_Handler, /* 17 External Interrupt Controller */
        /* .pfnEIC_EXTINT_5_Handler = */ (void*) EIC_EXTINT_5_Handler, /* 18 External Interrupt Controller */
        /* .pfnEIC_EXTINT_6_Handler = */ (void*) EIC_EXTINT_6_Handler, /* 19 External Interrupt Controller */
        /* .pfnEIC_EXTINT_7_Handler = */ (void*) EIC_EXTINT_7_Handler, /* 20 External Interrupt Controller */
        /* .pfnEIC_EXTINT_8_Handler = */ (void*) EIC_EXTINT_8_Handler, /* 21 External Interrupt Controller */
        /* .pfnEIC_EXTINT_9_Handler = */ (void*) EIC_EXTINT_9_Handler, /* 22 External Interrupt Controller */
        /* .pfnEIC_EXTINT_10_Handler = */ (void*) EIC_EXTINT_10_Handler, /* 23 External Interrupt Controller */
        /* .pfnEIC_EXTINT_11_Handler = */ (void*) EIC_EXTINT_11_Handler, /* 24 External Interrupt Controller */
        /* .pfnEIC_EXTINT_12_Handler = */ (void*) EIC_EXTINT_12_Handler, /* 25 External Interrupt Controller */
        /* .pfnEIC_EXTINT_13_Handler = */ (void*) EIC_EXTINT_13_Handler, /* 26 External Interrupt Controller */
        /* .pfnEIC_EXTINT_14_Handler = */ (void*) EIC_EXTINT_14_Handler, /* 27 External Interrupt Controller */
        /* .pfnEIC_EXTINT_15_Handler = */ (void*) EIC_EXTINT_15_Handler, /* 28 External Interrupt Controller */
        /* .pfnEIC_NSCHK_Handler    = */ (void*) EIC_NSCHK_Handler,   /* 29 External Interrupt Controller */
        /* .pfnPAC_Handler          = */ (void*) PAC_Handler,         /* 30 Peripheral Access Controller */
        /* .pfnTRAM_Handler         = */ (void*) TRAM_Handler,        /* 31 TrustRAM */
        /* .pfnPORT_Handler         = */ (void*) PORT_Handler,        /* 32 Port Module */
        /* .pfnDMA0_PRI0_Handler    = */ (void*) DMA0_PRI0_Handler,   /* 33 Direct Memory Access Controller */
        /* .pfnDMA0_PRI1_Handler    = */ (void*) DMA0_PRI1_Handler,   /* 34 Direct Memory Access Controller */
        /* .pfnDMA0_PRI2_Handler    = */ (void*) DMA0_PRI2_Handler,   /* 35 Direct Memory Access Controller */
        /* .pfnDMA1_PRI0_Handler    = */ (void*) DMA1_PRI0_Handler,   /* 36 Direct Memory Access Controller */
        /* .pfnDMA1_PRI1_Handler    = */ (void*) DMA1_PRI1_Handler,   /* 37 Direct Memory Access Controller */
        /* .pfnHMATRIX_Handler      = */ (void*) HMATRIX_Handler,     /* 38 HSB Matrix */
        /* .pfnEVSYS_0_Handler      = */ (void*) EVSYS_0_Handler,     /* 39 Event System Interface */
        /* .pfnEVSYS_1_Handler      = */ (void*) EVSYS_1_Handler,     /* 40 Event System Interface */
        /* .pfnEVSYS_2_Handler      = */ (void*) EVSYS_2_Handler,     /* 41 Event System Interface */
        /* .pfnEVSYS_3_Handler      = */ (void*) EVSYS_3_Handler,     /* 42 Event System Interface */
        /* .pfnEVSYS_OTHER_Handler  = */ (void*) EVSYS_OTHER_Handler, /* 43 Event System Interface */
        /* .pfnSERCOM0_56_Handler   = */ (void*) SERCOM0_56_Handler,  /* 44 Serial Communication Interface */
        /* .pfnSERCOM0_0_Handler    = */ (void*) SERCOM0_0_Handler,   /* 45 Serial Communication Interface */
        /* .pfnSERCOM0_1_Handler    = */ (void*) SERCOM0_1_Handler,   /* 46 Serial Communication Interface */
        /* .pfnSERCOM0_2_Handler    = */ (void*) SERCOM0_2_Handler,   /* 47 Serial Communication Interface */
        /* .pfnSERCOM0_3_Handler    = */ (void*) SERCOM0_3_Handler,   /* 48 Serial Communication Interface */
        /* .pfnSERCOM0_4_Handler    = */ (void*) SERCOM0_4_Handler,   /* 49 Serial Communication Interface */
        /* .pfnSERCOM1_56_Handler   = */ (void*) SERCOM1_56_Handler,  /* 50 Serial Communication Interface */
        /* .pfnSERCOM1_0_Handler    = */ (void*) SERCOM1_0_Handler,   /* 51 Serial Communication Interface */
        /* .pfnSERCOM1_1_Handler    = */ (void*) SERCOM1_1_Handler,   /* 52 Serial Communication Interface */
        /* .pfnSERCOM1_2_Handler    = */ (void*) SERCOM1_2_Handler,   /* 53 Serial Communication Interface */
        /* .pfnSERCOM1_3_Handler    = */ (void*) SERCOM1_3_Handler,   /* 54 Serial Communication Interface */
        /* .pfnSERCOM1_4_Handler    = */ (void*) SERCOM1_4_Handler,   /* 55 Serial Communication Interface */
        /* .pfnSERCOM2_56_Handler   = */ (void*) SERCOM2_56_Handler,  /* 56 Serial Communication Interface */
        /* .pfnSERCOM2_0_Handler    = */ (void*) SERCOM2_0_Handler,   /* 57 Serial Communication Interface */
        /* .pfnSERCOM2_1_Handler    = */ (void*) SERCOM2_1_Handler,   /* 58 Serial Communication Interface */
        /* .pfnSERCOM2_2_Handler    = */ (void*) SERCOM2_2_Handler,   /* 59 Serial Communication Interface */
        /* .pfnSERCOM2_3_Handler    = */ (void*) SERCOM2_3_Handler,   /* 60 Serial Communication Interface */
        /* .pfnSERCOM2_4_Handler    = */ (void*) SERCOM2_4_Handler,   /* 61 Serial Communication Interface */
        /* .pfnSERCOM3_56_Handler   = */ (void*) SERCOM3_56_Handler,  /* 62 Serial Communication Interface */
        /* .pfnSERCOM3_0_Handler    = */ (void*) SERCOM3_0_Handler,   /* 63 Serial Communication Interface */
        /* .pfnSERCOM3_1_Handler    = */ (void*) SERCOM3_1_Handler,   /* 64 Serial Communication Interface */
        /* .pfnSERCOM3_2_Handler    = */ (void*) SERCOM3_2_Handler,   /* 65 Serial Communication Interface */
        /* .pfnSERCOM3_3_Handler    = */ (void*) SERCOM3_3_Handler,   /* 66 Serial Communication Interface */
        /* .pfnSERCOM3_4_Handler    = */ (void*) SERCOM3_4_Handler,   /* 67 Serial Communication Interface */
        /* .pfnTCC0_OTHER_Handler   = */ (void*) TCC0_OTHER_Handler,  /* 68 Timer Counter for Control Applications */
        /* .pfnTCC0_MC0_Handler     = */ (void*) TCC0_MC0_Handler,    /* 69 Timer Counter for Control Applications */
        /* .pfnTCC0_MC1_Handler     = */ (void*) TCC0_MC1_Handler,    /* 70 Timer Counter for Control Applications */
        /* .pfnTCC0_MC2_Handler     = */ (void*) TCC0_MC2_Handler,    /* 71 Timer Counter for Control Applications */
        /* .pfnTCC0_MC3_Handler     = */ (void*) TCC0_MC3_Handler,    /* 72 Timer Counter for Control Applications */
        /* .pfnTCC0_MC4_Handler     = */ (void*) TCC0_MC4_Handler,    /* 73 Timer Counter for Control Applications */
        /* .pfnTCC0_MC5_Handler     = */ (void*) TCC0_MC5_Handler,    /* 74 Timer Counter for Control Applications */
        /* .pfnTCC1_OTHER_Handler   = */ (void*) TCC1_OTHER_Handler,  /* 75 Timer Counter for Control Applications */
        /* .pfnTCC1_MC0_Handler     = */ (void*) TCC1_MC0_Handler,    /* 76 Timer Counter for Control Applications */
        /* .pfnTCC1_MC1_Handler     = */ (void*) TCC1_MC1_Handler,    /* 77 Timer Counter for Control Applications */
        /* .pfnTCC1_MC2_Handler     = */ (void*) TCC1_MC2_Handler,    /* 78 Timer Counter for Control Applications */
        /* .pfnTCC1_MC3_Handler     = */ (void*) TCC1_MC3_Handler,    /* 79 Timer Counter for Control Applications */
        /* .pfnTCC1_MC4_Handler     = */ (void*) TCC1_MC4_Handler,    /* 80 Timer Counter for Control Applications */
        /* .pfnTCC1_MC5_Handler     = */ (void*) TCC1_MC5_Handler,    /* 81 Timer Counter for Control Applications */
        /* .pfnTCC2_OTHER_Handler   = */ (void*) TCC2_OTHER_Handler,  /* 82 Timer Counter for Control Applications */
        /* .pfnTCC2_MC0_Handler     = */ (void*) TCC2_MC0_Handler,    /* 83 Timer Counter for Control Applications */
        /* .pfnTCC2_MC1_Handler     = */ (void*) TCC2_MC1_Handler,    /* 84 Timer Counter for Control Applications */
        /* .pfnTCC2_MC2_Handler     = */ (void*) TCC2_MC2_Handler,    /* 85 Timer Counter for Control Applications */
        /* .pfnTCC2_MC3_Handler     = */ (void*) TCC2_MC3_Handler,    /* 86 Timer Counter for Control Applications */
        /* .pfnTCC2_MC4_Handler     = */ (void*) TCC2_MC4_Handler,    /* 87 Timer Counter for Control Applications */
        /* .pfnTCC2_MC5_Handler     = */ (void*) TCC2_MC5_Handler,    /* 88 Timer Counter for Control Applications */
        /* .pfnTCC3_OTHER_Handler   = */ (void*) TCC3_OTHER_Handler,  /* 89 Timer Counter for Control Applications */
        /* .pfnTCC3_MC0_Handler     = */ (void*) TCC3_MC0_Handler,    /* 90 Timer Counter for Control Applications */
        /* .pfnTCC3_MC1_Handler     = */ (void*) TCC3_MC1_Handler,    /* 91 Timer Counter for Control Applications */
        /* .pfnTCC3_MC2_Handler     = */ (void*) TCC3_MC2_Handler,    /* 92 Timer Counter for Control Applications */
        /* .pfnTCC3_MC3_Handler     = */ (void*) TCC3_MC3_Handler,    /* 93 Timer Counter for Control Applications */
        /* .pfnTCC3_MC4_Handler     = */ (void*) TCC3_MC4_Handler,    /* 94 Timer Counter for Control Applications */
        /* .pfnTCC3_MC5_Handler     = */ (void*) TCC3_MC5_Handler,    /* 95 Timer Counter for Control Applications */
        /* .pfnSERCOM4_56_Handler   = */ (void*) SERCOM4_56_Handler,  /* 96 Serial Communication Interface */
        /* .pfnSERCOM4_0_Handler    = */ (void*) SERCOM4_0_Handler,   /* 97 Serial Communication Interface */
        /* .pfnSERCOM4_1_Handler    = */ (void*) SERCOM4_1_Handler,   /* 98 Serial Communication Interface */
        /* .pfnSERCOM4_2_Handler    = */ (void*) SERCOM4_2_Handler,   /* 99 Serial Communication Interface */
        /* .pfnSERCOM4_3_Handler    = */ (void*) SERCOM4_3_Handler,   /* 100 Serial Communication Interface */
        /* .pfnSERCOM4_4_Handler    = */ (void*) SERCOM4_4_Handler,   /* 101 Serial Communication Interface */
        /* .pfnSERCOM5_56_Handler   = */ (void*) SERCOM5_56_Handler,  /* 102 Serial Communication Interface */
        /* .pfnSERCOM5_0_Handler    = */ (void*) SERCOM5_0_Handler,   /* 103 Serial Communication Interface */
        /* .pfnSERCOM5_1_Handler    = */ (void*) SERCOM5_1_Handler,   /* 104 Serial Communication Interface */
        /* .pfnSERCOM5_2_Handler    = */ (void*) SERCOM5_2_Handler,   /* 105 Serial Communication Interface */
        /* .pfnSERCOM5_3_Handler    = */ (void*) SERCOM5_3_Handler,   /* 106 Serial Communication Interface */
        /* .pfnSERCOM5_4_Handler    = */ (void*) SERCOM5_4_Handler,   /* 107 Serial Communication Interface */
        /* .pfnSERCOM6_56_Handler   = */ (void*) SERCOM6_56_Handler,  /* 108 Serial Communication Interface */
        /* .pfnSERCOM6_0_Handler    = */ (void*) SERCOM6_0_Handler,   /* 109 Serial Communication Interface */
        /* .pfnSERCOM6_1_Handler    = */ (void*) SERCOM6_1_Handler,   /* 110 Serial Communication Interface */
        /* .pfnSERCOM6_2_Handler    = */ (void*) SERCOM6_2_Handler,   /* 111 Serial Communication Interface */
        /* .pfnSERCOM6_3_Handler    = */ (void*) SERCOM6_3_Handler,   /* 112 Serial Communication Interface */
        /* .pfnSERCOM6_4_Handler    = */ (void*) SERCOM6_4_Handler,   /* 113 Serial Communication Interface */
        /* .pfnSERCOM7_56_Handler   = */ (void*) SERCOM7_56_Handler,  /* 114 Serial Communication Interface */
        /* .pfnSERCOM7_0_Handler    = */ (void*) SERCOM7_0_Handler,   /* 115 Serial Communication Interface */
        /* .pfnSERCOM7_1_Handler    = */ (void*) SERCOM7_1_Handler,   /* 116 Serial Communication Interface */
        /* .pfnSERCOM7_2_Handler    = */ (void*) SERCOM7_2_Handler,   /* 117 Serial Communication Interface */
        /* .pfnSERCOM7_3_Handler    = */ (void*) SERCOM7_3_Handler,   /* 118 Serial Communication Interface */
        /* .pfnSERCOM7_4_Handler    = */ (void*) SERCOM7_4_Handler,   /* 119 Serial Communication Interface */
        /* .pfnTCC4_OTHER_Handler   = */ (void*) TCC4_OTHER_Handler,  /* 120 Timer Counter for Control Applications */
        /* .pfnTCC4_MC0_Handler     = */ (void*) TCC4_MC0_Handler,    /* 121 Timer Counter for Control Applications */
        /* .pfnTCC4_MC1_Handler     = */ (void*) TCC4_MC1_Handler,    /* 122 Timer Counter for Control Applications */
        /* .pfnTCC5_OTHER_Handler   = */ (void*) TCC5_OTHER_Handler,  /* 123 Timer Counter for Control Applications */
        /* .pfnTCC5_MC0_Handler     = */ (void*) TCC5_MC0_Handler,    /* 124 Timer Counter for Control Applications */
        /* .pfnTCC5_MC1_Handler     = */ (void*) TCC5_MC1_Handler,    /* 125 Timer Counter for Control Applications */
        /* .pfnTCC6_OTHER_Handler   = */ (void*) TCC6_OTHER_Handler,  /* 126 Timer Counter for Control Applications */
        /* .pfnTCC6_MC0_Handler     = */ (void*) TCC6_MC0_Handler,    /* 127 Timer Counter for Control Applications */
        /* .pfnTCC6_MC1_Handler     = */ (void*) TCC6_MC1_Handler,    /* 128 Timer Counter for Control Applications */
        /* .pfnTCC7_OTHER_Handler   = */ (void*) TCC7_OTHER_Handler,  /* 129 Timer Counter for Control Applications */
        /* .pfnTCC7_MC0_Handler     = */ (void*) TCC7_MC0_Handler,    /* 130 Timer Counter for Control Applications */
        /* .pfnTCC7_MC1_Handler     = */ (void*) TCC7_MC1_Handler,    /* 131 Timer Counter for Control Applications */
        /* .pfnADC_GLOBAL_Handler   = */ (void*) ADC_GLOBAL_Handler,  /* 132 ADC Controller */
        /* .pfnADC_CORE1_Handler    = */ (void*) ADC_CORE1_Handler,   /* 133 ADC Controller */
        /* .pvReserved2             = */ (void*) (0UL),               /* 134 ADC Controller */
        /* .pvReserved3             = */ (void*) (0UL),               /* 135 ADC Controller */
        /* .pvReserved4             = */ (void*) (0UL),               /* 136 ADC Controller */
        /* .pvReserved5             = */ (void*) (0UL),               /* 137 ADC Controller */
        /* .pfnAC_Handler           = */ (void*) AC_Handler,          /* 138 Analog Comparator Controller */
        /* .pfnPTC_Handler          = */ (void*) PTC_Handler,         /* 139 Peripheral Touch Controller */
        /* .pfnSPI_IXS_Handler      = */ (void*) SPI_IXS_Handler,     /* 140 Audio SPI with 8 channels compatibilty */
        /* .pfnPCC_Handler          = */ (void*) PCC_Handler,         /* 141 Parallel Capture Controller */
        /* .pfnPDEC_Handler         = */ (void*) PDEC_Handler,        /* 142 Position Decoder */
        /* .pfnCAN0_Handler         = */ (void*) CAN0_Handler,        /* 143 Control Area Network */
        /* .pfnCAN1_Handler         = */ (void*) CAN1_Handler,        /* 144 Control Area Network */
        /* .pfnETH_Handler          = */ (void*) ETH_Handler,         /* 145 Ethernet Controller */
        /* .pfnSQI_Handler          = */ (void*) SQI_Handler,         /* 146 Polaris Serial Quad Interface SIB */
        /* .pfnTRNG_Handler         = */ (void*) TRNG_Handler,        /* 147 True Random Generator */
        /* .pfnSDMMC0_Handler       = */ (void*) SDMMC0_Handler,      /* 148 SD/MMC Host Controller */
        /* .pfnSDMMC1_Handler       = */ (void*) SDMMC1_Handler,      /* 149 SD/MMC Host Controller */
        /* .pfnUSB_OTHER_Handler    = */ (void*) USB_OTHER_Handler,   /* 150 Full-Speed Universal Serial Bus */
        /* .pfnUSB_SOF_Handler      = */ (void*) USB_SOF_Handler,     /* 151 Full-Speed Universal Serial Bus */
        /* .pfnUSB_TRCPT0_Handler   = */ (void*) USB_TRCPT0_Handler,  /* 152 Full-Speed Universal Serial Bus */
        /* .pfnUSB_TRCPT1_Handler   = */ (void*) USB_TRCPT1_Handler,  /* 153 Full-Speed Universal Serial Bus */
        /* .pfnUSBHS_Handler        = */ (void*) USBHS_Handler,       /* 154 USB High Speed */
        /* .pvReserved155           = */ (void*) (0UL),               /* 155 Reserved */
        /* .pvReserved156           = */ (void*) (0UL),               /* 156 Reserved */
        /* .pvReserved157           = */ (void*) (0UL)                /* 157 Reserved */

#else /* Legacy defined(_32CK0512GC01064_H) */
        /* Configurable interrupts with Legacy names */
        /* .pfnFCR_ERR_Handler      = */ (void*) FCR_ERR_Handler,     /* 0  Flash Read Controller (FCR) */
        /* .pfnFCR_FLT_Handler      = */ (void*) FCR_FLT_Handler,     /* 1  Flash Read Controller (FCR) */
        /* .pfnFCW_Handler          = */ (void*) FCW_Handler,         /* 2  Flash Write Control (FCW) */
        /* .pfnPM_Handler           = */ (void*) PM_Handler,          /* 3  Power Manager */
        /* .pfnSUPC_Handler         = */ (void*) SUPC_Handler,        /* 4  Supply Controller */
        /* .pfnOSCCTRL_XOSC_Handler = */ (void*) OSCCTRL_XOSC_Handler, /* 5  Oscillators Control */
        /* .pfnOSCCTRL_DFLL_Handler = */ (void*) OSCCTRL_DFLL_Handler, /* 6  Oscillators Control */
        /* .pfnOSCCTRL_PLL0_Handler = */ (void*) OSCCTRL_PLL0_Handler, /* 7  Oscillators Control */
        /* .pfnOSC32KCTRL_Handler   = */ (void*) OSC32KCTRL_Handler,  /* 8  32kHz Oscillators Control */
        /* .pfnMCLK_Handler         = */ (void*) MCLK_Handler,        /* 9  Main Clock */
        /* .pfnFREQM_Handler        = */ (void*) FREQM_Handler,       /* 10 Frequency Meter */
        /* .pfnWDT_Handler          = */ (void*) WDT_Handler,         /* 11 Watchdog Timer */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 12 Real-Time Counter */
        /* .pfnEIC_EXTINT_0_Handler = */ (void*) EIC_EXTINT_0_Handler, /* 13 External Interrupt Controller */
        /* .pfnEIC_EXTINT_1_Handler = */ (void*) EIC_EXTINT_1_Handler, /* 14 External Interrupt Controller */
        /* .pfnEIC_EXTINT_2_Handler = */ (void*) EIC_EXTINT_2_Handler, /* 15 External Interrupt Controller */
        /* .pfnEIC_EXTINT_3_Handler = */ (void*) EIC_EXTINT_3_Handler, /* 16 External Interrupt Controller */
        /* .pfnEIC_EXTINT_4_Handler = */ (void*) EIC_EXTINT_4_Handler, /* 17 External Interrupt Controller */
        /* .pfnEIC_EXTINT_5_Handler = */ (void*) EIC_EXTINT_5_Handler, /* 18 External Interrupt Controller */
        /* .pfnEIC_EXTINT_6_Handler = */ (void*) EIC_EXTINT_6_Handler, /* 19 External Interrupt Controller */
        /* .pfnEIC_EXTINT_7_Handler = */ (void*) EIC_EXTINT_7_Handler, /* 20 External Interrupt Controller */
        /* .pfnEIC_EXTINT_8_Handler = */ (void*) EIC_EXTINT_8_Handler, /* 21 External Interrupt Controller */
        /* .pfnEIC_EXTINT_9_Handler = */ (void*) EIC_EXTINT_9_Handler, /* 22 External Interrupt Controller */
        /* .pfnEIC_EXTINT_10_Handler = */ (void*) EIC_EXTINT_10_Handler, /* 23 External Interrupt Controller */
        /* .pfnEIC_EXTINT_11_Handler = */ (void*) EIC_EXTINT_11_Handler, /* 24 External Interrupt Controller */
        /* .pfnEIC_EXTINT_12_Handler = */ (void*) EIC_EXTINT_12_Handler, /* 25 External Interrupt Controller */
        /* .pfnEIC_EXTINT_13_Handler = */ (void*) EIC_EXTINT_13_Handler, /* 26 External Interrupt Controller */
        /* .pfnEIC_EXTINT_14_Handler = */ (void*) EIC_EXTINT_14_Handler, /* 27 External Interrupt Controller */
        /* .pfnEIC_EXTINT_15_Handler = */ (void*) EIC_EXTINT_15_Handler, /* 28 External Interrupt Controller */
        /* .pfnEIC_NSCHK_Handler    = */ (void*) EIC_NSCHK_Handler,   /* 29 External Interrupt Controller */
        /* .pfnPAC_Handler          = */ (void*) PAC_Handler,         /* 30 Peripheral Access Controller */
        /* .pfnTRAM_Handler         = */ (void*) TRAM_Handler,        /* 31 TrustRAM */
        /* .pfnPORT_Handler         = */ (void*) PORT_Handler,        /* 32 Port Module */
        /* .pfnDMA0_PRI0_Handler    = */ (void*) DMA0_PRI0_Handler,   /* 33 Direct Memory Access Controller */
        /* .pfnDMA0_PRI1_Handler    = */ (void*) DMA0_PRI1_Handler,   /* 34 Direct Memory Access Controller */
        /* .pfnDMA0_PRI2_Handler    = */ (void*) DMA0_PRI2_Handler,   /* 35 Direct Memory Access Controller */
        /* .pfnDMA1_PRI0_Handler    = */ (void*) DMA1_PRI0_Handler,   /* 36 Direct Memory Access Controller */
        /* .pfnDMA1_PRI1_Handler    = */ (void*) DMA1_PRI1_Handler,   /* 37 Direct Memory Access Controller */
        /* .pfnHMATRIX_Handler      = */ (void*) HMATRIX_Handler,     /* 38 HSB Matrix */
        /* .pfnEVSYS_0_Handler      = */ (void*) EVSYS_0_Handler,     /* 39 Event System Interface */
        /* .pfnEVSYS_1_Handler      = */ (void*) EVSYS_1_Handler,     /* 40 Event System Interface */
        /* .pfnEVSYS_2_Handler      = */ (void*) EVSYS_2_Handler,     /* 41 Event System Interface */
        /* .pfnEVSYS_3_Handler      = */ (void*) EVSYS_3_Handler,     /* 42 Event System Interface */
        /* .pfnEVSYS_OTHER_Handler  = */ (void*) EVSYS_OTHER_Handler, /* 43 Event System Interface */
        /* .pfnSERCOM0_56_Handler   = */ (void*) SERCOM0_56_Handler,  /* 44 Serial Communication Interface */
        /* .pfnSERCOM0_0_Handler    = */ (void*) SERCOM0_0_Handler,   /* 45 Serial Communication Interface */
        /* .pfnSERCOM0_1_Handler    = */ (void*) SERCOM0_1_Handler,   /* 46 Serial Communication Interface */
        /* .pfnSERCOM0_2_Handler    = */ (void*) SERCOM0_2_Handler,   /* 47 Serial Communication Interface */
        /* .pfnSERCOM0_3_Handler    = */ (void*) SERCOM0_3_Handler,   /* 48 Serial Communication Interface */
        /* .pfnSERCOM0_4_Handler    = */ (void*) SERCOM0_4_Handler,   /* 49 Serial Communication Interface */
        /* .pfnSERCOM1_56_Handler   = */ (void*) SERCOM1_56_Handler,  /* 50 Serial Communication Interface */
        /* .pfnSERCOM1_0_Handler    = */ (void*) SERCOM1_0_Handler,   /* 51 Serial Communication Interface */
        /* .pfnSERCOM1_1_Handler    = */ (void*) SERCOM1_1_Handler,   /* 52 Serial Communication Interface */
        /* .pfnSERCOM1_2_Handler    = */ (void*) SERCOM1_2_Handler,   /* 53 Serial Communication Interface */
        /* .pfnSERCOM1_3_Handler    = */ (void*) SERCOM1_3_Handler,   /* 54 Serial Communication Interface */
        /* .pfnSERCOM1_4_Handler    = */ (void*) SERCOM1_4_Handler,   /* 55 Serial Communication Interface */
        /* .pfnSERCOM2_56_Handler   = */ (void*) SERCOM2_56_Handler,  /* 56 Serial Communication Interface */
        /* .pfnSERCOM2_0_Handler    = */ (void*) SERCOM2_0_Handler,   /* 57 Serial Communication Interface */
        /* .pfnSERCOM2_1_Handler    = */ (void*) SERCOM2_1_Handler,   /* 58 Serial Communication Interface */
        /* .pfnSERCOM2_2_Handler    = */ (void*) SERCOM2_2_Handler,   /* 59 Serial Communication Interface */
        /* .pfnSERCOM2_3_Handler    = */ (void*) SERCOM2_3_Handler,   /* 60 Serial Communication Interface */
        /* .pfnSERCOM2_4_Handler    = */ (void*) SERCOM2_4_Handler,   /* 61 Serial Communication Interface */
        /* .pfnSERCOM3_56_Handler   = */ (void*) SERCOM3_56_Handler,  /* 62 Serial Communication Interface */
        /* .pfnSERCOM3_0_Handler    = */ (void*) SERCOM3_0_Handler,   /* 63 Serial Communication Interface */
        /* .pfnSERCOM3_1_Handler    = */ (void*) SERCOM3_1_Handler,   /* 64 Serial Communication Interface */
        /* .pfnSERCOM3_2_Handler    = */ (void*) SERCOM3_2_Handler,   /* 65 Serial Communication Interface */
        /* .pfnSERCOM3_3_Handler    = */ (void*) SERCOM3_3_Handler,   /* 66 Serial Communication Interface */
        /* .pfnSERCOM3_4_Handler    = */ (void*) SERCOM3_4_Handler,   /* 67 Serial Communication Interface */
        /* .pfnTCC0_OTHER_Handler   = */ (void*) TCC0_OTHER_Handler,  /* 68 Timer Counter for Control Applications */
        /* .pfnTCC0_MC0_Handler     = */ (void*) TCC0_MC0_Handler,    /* 69 Timer Counter for Control Applications */
        /* .pfnTCC0_MC1_Handler     = */ (void*) TCC0_MC1_Handler,    /* 70 Timer Counter for Control Applications */
        /* .pfnTCC0_MC2_Handler     = */ (void*) TCC0_MC2_Handler,    /* 71 Timer Counter for Control Applications */
        /* .pfnTCC0_MC3_Handler     = */ (void*) TCC0_MC3_Handler,    /* 72 Timer Counter for Control Applications */
        /* .pfnTCC0_MC4_Handler     = */ (void*) TCC0_MC4_Handler,    /* 73 Timer Counter for Control Applications */
        /* .pfnTCC0_MC5_Handler     = */ (void*) TCC0_MC5_Handler,    /* 74 Timer Counter for Control Applications */
        /* .pfnTCC1_OTHER_Handler   = */ (void*) TCC1_OTHER_Handler,  /* 75 Timer Counter for Control Applications */
        /* .pfnTCC1_MC0_Handler     = */ (void*) TCC1_MC0_Handler,    /* 76 Timer Counter for Control Applications */
        /* .pfnTCC1_MC1_Handler     = */ (void*) TCC1_MC1_Handler,    /* 77 Timer Counter for Control Applications */
        /* .pfnTCC1_MC2_Handler     = */ (void*) TCC1_MC2_Handler,    /* 78 Timer Counter for Control Applications */
        /* .pfnTCC1_MC3_Handler     = */ (void*) TCC1_MC3_Handler,    /* 79 Timer Counter for Control Applications */
        /* .pfnTCC1_MC4_Handler     = */ (void*) TCC1_MC4_Handler,    /* 80 Timer Counter for Control Applications */
        /* .pfnTCC1_MC5_Handler     = */ (void*) TCC1_MC5_Handler,    /* 81 Timer Counter for Control Applications */
        /* .pfnTCC2_OTHER_Handler   = */ (void*) TCC2_OTHER_Handler,  /* 82 Timer Counter for Control Applications */
        /* .pfnTCC2_MC0_Handler     = */ (void*) TCC2_MC0_Handler,    /* 83 Timer Counter for Control Applications */
        /* .pfnTCC2_MC1_Handler     = */ (void*) TCC2_MC1_Handler,    /* 84 Timer Counter for Control Applications */
        /* .pfnTCC2_MC2_Handler     = */ (void*) TCC2_MC2_Handler,    /* 85 Timer Counter for Control Applications */
        /* .pfnTCC2_MC3_Handler     = */ (void*) TCC2_MC3_Handler,    /* 86 Timer Counter for Control Applications */
        /* .pfnTCC2_MC4_Handler     = */ (void*) TCC2_MC4_Handler,    /* 87 Timer Counter for Control Applications */
        /* .pfnTCC2_MC5_Handler     = */ (void*) TCC2_MC5_Handler,    /* 88 Timer Counter for Control Applications */
        /* .pfnTCC3_OTHER_Handler   = */ (void*) TCC3_OTHER_Handler,  /* 89 Timer Counter for Control Applications */
        /* .pfnTCC3_MC0_Handler     = */ (void*) TCC3_MC0_Handler,    /* 90 Timer Counter for Control Applications */
        /* .pfnTCC3_MC1_Handler     = */ (void*) TCC3_MC1_Handler,    /* 91 Timer Counter for Control Applications */
        /* .pfnTCC3_MC2_Handler     = */ (void*) TCC3_MC2_Handler,    /* 92 Timer Counter for Control Applications */
        /* .pfnTCC3_MC3_Handler     = */ (void*) TCC3_MC3_Handler,    /* 93 Timer Counter for Control Applications */
        /* .pfnTCC3_MC4_Handler     = */ (void*) TCC3_MC4_Handler,    /* 94 Timer Counter for Control Applications */
        /* .pfnTCC3_MC5_Handler     = */ (void*) TCC3_MC5_Handler,    /* 95 Timer Counter for Control Applications */
        /* .pfnSERCOM4_56_Handler   = */ (void*) SERCOM4_56_Handler,  /* 96 Serial Communication Interface */
        /* .pfnSERCOM4_0_Handler    = */ (void*) SERCOM4_0_Handler,   /* 97 Serial Communication Interface */
        /* .pfnSERCOM4_1_Handler    = */ (void*) SERCOM4_1_Handler,   /* 98 Serial Communication Interface */
        /* .pfnSERCOM4_2_Handler    = */ (void*) SERCOM4_2_Handler,   /* 99 Serial Communication Interface */
        /* .pfnSERCOM4_3_Handler    = */ (void*) SERCOM4_3_Handler,   /* 100 Serial Communication Interface */
        /* .pfnSERCOM4_4_Handler    = */ (void*) SERCOM4_4_Handler,   /* 101 Serial Communication Interface */
        /* .pfnSERCOM5_56_Handler   = */ (void*) SERCOM5_56_Handler,  /* 102 Serial Communication Interface */
        /* .pfnSERCOM5_0_Handler    = */ (void*) SERCOM5_0_Handler,   /* 103 Serial Communication Interface */
        /* .pfnSERCOM5_1_Handler    = */ (void*) SERCOM5_1_Handler,   /* 104 Serial Communication Interface */
        /* .pfnSERCOM5_2_Handler    = */ (void*) SERCOM5_2_Handler,   /* 105 Serial Communication Interface */
        /* .pfnSERCOM5_3_Handler    = */ (void*) SERCOM5_3_Handler,   /* 106 Serial Communication Interface */
        /* .pfnSERCOM5_4_Handler    = */ (void*) SERCOM5_4_Handler,   /* 107 Serial Communication Interface */
        /* .pfnSERCOM6_56_Handler   = */ (void*) SERCOM6_56_Handler,  /* 108 Serial Communication Interface */
        /* .pfnSERCOM6_0_Handler    = */ (void*) SERCOM6_0_Handler,   /* 109 Serial Communication Interface */
        /* .pfnSERCOM6_1_Handler    = */ (void*) SERCOM6_1_Handler,   /* 110 Serial Communication Interface */
        /* .pfnSERCOM6_2_Handler    = */ (void*) SERCOM6_2_Handler,   /* 111 Serial Communication Interface */
        /* .pfnSERCOM6_3_Handler    = */ (void*) SERCOM6_3_Handler,   /* 112 Serial Communication Interface */
        /* .pfnSERCOM6_4_Handler    = */ (void*) SERCOM6_4_Handler,   /* 113 Serial Communication Interface */
        /* .pfnSERCOM7_56_Handler   = */ (void*) SERCOM7_56_Handler,  /* 114 Serial Communication Interface */
        /* .pfnSERCOM7_0_Handler    = */ (void*) SERCOM7_0_Handler,   /* 115 Serial Communication Interface */
        /* .pfnSERCOM7_1_Handler    = */ (void*) SERCOM7_1_Handler,   /* 116 Serial Communication Interface */
        /* .pfnSERCOM7_2_Handler    = */ (void*) SERCOM7_2_Handler,   /* 117 Serial Communication Interface */
        /* .pfnSERCOM7_3_Handler    = */ (void*) SERCOM7_3_Handler,   /* 118 Serial Communication Interface */
        /* .pfnSERCOM7_4_Handler    = */ (void*) SERCOM7_4_Handler,   /* 119 Serial Communication Interface */
        /* .pfnTCC4_OTHER_Handler   = */ (void*) TCC4_OTHER_Handler,  /* 120 Timer Counter for Control Applications */
        /* .pfnTCC4_MC0_Handler     = */ (void*) TCC4_MC0_Handler,    /* 121 Timer Counter for Control Applications */
        /* .pfnTCC4_MC1_Handler     = */ (void*) TCC4_MC1_Handler,    /* 122 Timer Counter for Control Applications */
        /* .pfnTCC5_OTHER_Handler   = */ (void*) TCC5_OTHER_Handler,  /* 123 Timer Counter for Control Applications */
        /* .pfnTCC5_MC0_Handler     = */ (void*) TCC5_MC0_Handler,    /* 124 Timer Counter for Control Applications */
        /* .pfnTCC5_MC1_Handler     = */ (void*) TCC5_MC1_Handler,    /* 125 Timer Counter for Control Applications */
        /* .pfnTCC6_OTHER_Handler   = */ (void*) TCC6_OTHER_Handler,  /* 126 Timer Counter for Control Applications */
        /* .pfnTCC6_MC0_Handler     = */ (void*) TCC6_MC0_Handler,    /* 127 Timer Counter for Control Applications */
        /* .pfnTCC6_MC1_Handler     = */ (void*) TCC6_MC1_Handler,    /* 128 Timer Counter for Control Applications */
        /* .pfnTCC7_OTHER_Handler   = */ (void*) TCC7_OTHER_Handler,  /* 129 Timer Counter for Control Applications */
        /* .pfnTCC7_MC0_Handler     = */ (void*) TCC7_MC0_Handler,    /* 130 Timer Counter for Control Applications */
        /* .pfnTCC7_MC1_Handler     = */ (void*) TCC7_MC1_Handler,    /* 131 Timer Counter for Control Applications */
        /* .pfnADC_GLOBAL_Handler   = */ (void*) ADC_GLOBAL_Handler,  /* 132 ADC Controller */
        /* .pfnADC_CORE1_Handler    = */ (void*) ADC_CORE1_Handler,   /* 133 ADC Controller */
        /* .pvReserved2             = */ (void*) (0UL),               /* 134 ADC Controller */
        /* .pvReserved3             = */ (void*) (0UL),               /* 135 ADC Controller */
        /* .pvReserved4             = */ (void*) (0UL),               /* 136 ADC Controller */
        /* .pvReserved5             = */ (void*) (0UL),               /* 137 ADC Controller */
        /* .pfnAC_Handler           = */ (void*) AC_Handler,          /* 138 Analog Comparator Controller */
        /* .pfnPTC_Handler          = */ (void*) PTC_Handler,         /* 139 Peripheral Touch Controller */
        /* .pfnSPI_IXS_Handler      = */ (void*) SPI_IXS_Handler,     /* 140 Audio SPI with 8 channels compatibilty */
        /* .pfnPCC_Handler          = */ (void*) PCC_Handler,         /* 141 Parallel Capture Controller */
        /* .pfnPDEC_Handler         = */ (void*) PDEC_Handler,        /* 142 Position Decoder */
        /* .pfnCAN0_Handler         = */ (void*) CAN0_Handler,        /* 143 Control Area Network */
        /* .pfnCAN1_Handler         = */ (void*) CAN1_Handler,        /* 144 Control Area Network */
        /* .pfnETH_Handler          = */ (void*) ETH_Handler,         /* 145 Ethernet Controller */
        /* .pfnSQI_Handler          = */ (void*) SQI_Handler,         /* 146 Polaris Serial Quad Interface SIB */
        /* .pfnTRNG_Handler         = */ (void*) TRNG_Handler,        /* 147 True Random Generator */
        /* .pfnSDMMC0_Handler       = */ (void*) SDMMC0_Handler,      /* 148 SD/MMC Host Controller */
        /* .pfnSDMMC1_Handler       = */ (void*) SDMMC1_Handler,      /* 149 SD/MMC Host Controller */
        /* .pfnUSB_OTHER_Handler    = */ (void*) USB_OTHER_Handler,   /* 150 Full-Speed Universal Serial Bus */
        /* .pfnUSB_SOF_Handler      = */ (void*) USB_SOF_Handler,     /* 151 Full-Speed Universal Serial Bus */
        /* .pfnUSB_TRCPT0_Handler   = */ (void*) USB_TRCPT0_Handler,  /* 152 Full-Speed Universal Serial Bus */
        /* .pfnUSB_TRCPT1_Handler   = */ (void*) USB_TRCPT1_Handler,  /* 153 Full-Speed Universal Serial Bus */
        /* .pfnUSBHS_Handler        = */ (void*) USBHS_Handler,       /* 154 USB High Speed */
        /* .pvReserved155           = */ (void*) (0UL),               /* 155 Reserved */
        /* .pvReserved156           = */ (void*) (0UL),               /* 156 Reserved */
        /* .pvReserved157           = */ (void*) (0UL)                /* 157 Reserved */
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



 




    /* TCM config and init */
#if (__ITCM_PRESENT==1)
#ifdef __XC32_ENABLE_TCM
     TCM_Enable();
#else
    TCM_Disable();
#endif /* __XC32_ENABLE_TCM */
#endif /* (__ITCM_PRESENT==1) */
    /* Initialize data after TCM is enabled */
 


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
