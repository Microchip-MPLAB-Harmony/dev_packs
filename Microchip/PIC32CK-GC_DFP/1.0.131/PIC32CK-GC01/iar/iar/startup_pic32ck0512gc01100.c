/**
 * \file
 *
 * \brief IAR startup file for PIC32CK0512GC01100
 *
 * Copyright (c) 2023 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
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

#include "pic32ck0512gc01100.h"

typedef void (*intfunc) (void);
typedef union { intfunc __fun; void * __ptr; } intvec_elem;

void __iar_program_start(void);
int __low_level_init(void);

/* Reset handler */
void Reset_Handler(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M33 core handlers */
#pragma weak NonMaskableInt_Handler=Dummy_Handler
#pragma weak HardFault_Handler=Dummy_Handler
#pragma weak MemoryManagement_Handler=Dummy_Handler
#pragma weak BusFault_Handler=Dummy_Handler
#pragma weak UsageFault_Handler=Dummy_Handler
#pragma weak SecureFaultMonitor_Handler=Dummy_Handler
#pragma weak SVCall_Handler=Dummy_Handler
#pragma weak DebugMonitor_Handler=Dummy_Handler
#pragma weak PendSV_Handler=Dummy_Handler
#pragma weak SysTick_Handler=Dummy_Handler

/* Peripherals handlers */
#pragma weak FCR_ERR_Handler=Dummy_Handler
#pragma weak FCR_FLT_Handler=Dummy_Handler
#pragma weak FCW_Handler=Dummy_Handler
#pragma weak PM_Handler=Dummy_Handler
#pragma weak SUPC_Handler=Dummy_Handler
#pragma weak OSCCTRL_XOSC_Handler=Dummy_Handler
#pragma weak OSCCTRL_DFLL_Handler=Dummy_Handler
#pragma weak OSCCTRL_PLL0_Handler=Dummy_Handler
#pragma weak OSC32KCTRL_Handler=Dummy_Handler
#pragma weak MCLK_Handler=Dummy_Handler
#pragma weak FREQM_Handler=Dummy_Handler
#pragma weak WDT_Handler=Dummy_Handler
#pragma weak RTC_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_0_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_1_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_2_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_3_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_4_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_5_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_6_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_7_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_8_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_9_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_10_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_11_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_12_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_13_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_14_Handler=Dummy_Handler
#pragma weak EIC_EXTINT_15_Handler=Dummy_Handler
#pragma weak EIC_NSCHK_Handler=Dummy_Handler
#pragma weak PAC_Handler=Dummy_Handler
#pragma weak TRAM_Handler=Dummy_Handler
#pragma weak PORT_Handler=Dummy_Handler
#pragma weak DMA0_PRI0_Handler=Dummy_Handler
#pragma weak DMA0_PRI1_Handler=Dummy_Handler
#pragma weak DMA0_PRI2_Handler=Dummy_Handler
#pragma weak DMA1_PRI0_Handler=Dummy_Handler
#pragma weak DMA1_PRI1_Handler=Dummy_Handler
#pragma weak HMATRIX_Handler=Dummy_Handler
#pragma weak EVSYS_0_Handler=Dummy_Handler
#pragma weak EVSYS_1_Handler=Dummy_Handler
#pragma weak EVSYS_2_Handler=Dummy_Handler
#pragma weak EVSYS_3_Handler=Dummy_Handler
#pragma weak EVSYS_OTHER_Handler=Dummy_Handler
#pragma weak SERCOM0_56_Handler=Dummy_Handler
#pragma weak SERCOM0_0_Handler=Dummy_Handler
#pragma weak SERCOM0_1_Handler=Dummy_Handler
#pragma weak SERCOM0_2_Handler=Dummy_Handler
#pragma weak SERCOM0_3_Handler=Dummy_Handler
#pragma weak SERCOM0_4_Handler=Dummy_Handler
#pragma weak SERCOM1_56_Handler=Dummy_Handler
#pragma weak SERCOM1_0_Handler=Dummy_Handler
#pragma weak SERCOM1_1_Handler=Dummy_Handler
#pragma weak SERCOM1_2_Handler=Dummy_Handler
#pragma weak SERCOM1_3_Handler=Dummy_Handler
#pragma weak SERCOM1_4_Handler=Dummy_Handler
#pragma weak SERCOM2_56_Handler=Dummy_Handler
#pragma weak SERCOM2_0_Handler=Dummy_Handler
#pragma weak SERCOM2_1_Handler=Dummy_Handler
#pragma weak SERCOM2_2_Handler=Dummy_Handler
#pragma weak SERCOM2_3_Handler=Dummy_Handler
#pragma weak SERCOM2_4_Handler=Dummy_Handler
#pragma weak SERCOM3_56_Handler=Dummy_Handler
#pragma weak SERCOM3_0_Handler=Dummy_Handler
#pragma weak SERCOM3_1_Handler=Dummy_Handler
#pragma weak SERCOM3_2_Handler=Dummy_Handler
#pragma weak SERCOM3_3_Handler=Dummy_Handler
#pragma weak SERCOM3_4_Handler=Dummy_Handler
#pragma weak TCC0_OTHER_Handler=Dummy_Handler
#pragma weak TCC0_MC0_Handler=Dummy_Handler
#pragma weak TCC0_MC1_Handler=Dummy_Handler
#pragma weak TCC0_MC2_Handler=Dummy_Handler
#pragma weak TCC0_MC3_Handler=Dummy_Handler
#pragma weak TCC0_MC4_Handler=Dummy_Handler
#pragma weak TCC0_MC5_Handler=Dummy_Handler
#pragma weak TCC1_OTHER_Handler=Dummy_Handler
#pragma weak TCC1_MC0_Handler=Dummy_Handler
#pragma weak TCC1_MC1_Handler=Dummy_Handler
#pragma weak TCC1_MC2_Handler=Dummy_Handler
#pragma weak TCC1_MC3_Handler=Dummy_Handler
#pragma weak TCC1_MC4_Handler=Dummy_Handler
#pragma weak TCC1_MC5_Handler=Dummy_Handler
#pragma weak TCC2_OTHER_Handler=Dummy_Handler
#pragma weak TCC2_MC0_Handler=Dummy_Handler
#pragma weak TCC2_MC1_Handler=Dummy_Handler
#pragma weak TCC2_MC2_Handler=Dummy_Handler
#pragma weak TCC2_MC3_Handler=Dummy_Handler
#pragma weak TCC2_MC4_Handler=Dummy_Handler
#pragma weak TCC2_MC5_Handler=Dummy_Handler
#pragma weak TCC3_OTHER_Handler=Dummy_Handler
#pragma weak TCC3_MC0_Handler=Dummy_Handler
#pragma weak TCC3_MC1_Handler=Dummy_Handler
#pragma weak TCC3_MC2_Handler=Dummy_Handler
#pragma weak TCC3_MC3_Handler=Dummy_Handler
#pragma weak TCC3_MC4_Handler=Dummy_Handler
#pragma weak TCC3_MC5_Handler=Dummy_Handler
#pragma weak SERCOM4_56_Handler=Dummy_Handler
#pragma weak SERCOM4_0_Handler=Dummy_Handler
#pragma weak SERCOM4_1_Handler=Dummy_Handler
#pragma weak SERCOM4_2_Handler=Dummy_Handler
#pragma weak SERCOM4_3_Handler=Dummy_Handler
#pragma weak SERCOM4_4_Handler=Dummy_Handler
#pragma weak SERCOM5_56_Handler=Dummy_Handler
#pragma weak SERCOM5_0_Handler=Dummy_Handler
#pragma weak SERCOM5_1_Handler=Dummy_Handler
#pragma weak SERCOM5_2_Handler=Dummy_Handler
#pragma weak SERCOM5_3_Handler=Dummy_Handler
#pragma weak SERCOM5_4_Handler=Dummy_Handler
#pragma weak SERCOM6_56_Handler=Dummy_Handler
#pragma weak SERCOM6_0_Handler=Dummy_Handler
#pragma weak SERCOM6_1_Handler=Dummy_Handler
#pragma weak SERCOM6_2_Handler=Dummy_Handler
#pragma weak SERCOM6_3_Handler=Dummy_Handler
#pragma weak SERCOM6_4_Handler=Dummy_Handler
#pragma weak SERCOM7_56_Handler=Dummy_Handler
#pragma weak SERCOM7_0_Handler=Dummy_Handler
#pragma weak SERCOM7_1_Handler=Dummy_Handler
#pragma weak SERCOM7_2_Handler=Dummy_Handler
#pragma weak SERCOM7_3_Handler=Dummy_Handler
#pragma weak SERCOM7_4_Handler=Dummy_Handler
#pragma weak TCC4_OTHER_Handler=Dummy_Handler
#pragma weak TCC4_MC0_Handler=Dummy_Handler
#pragma weak TCC4_MC1_Handler=Dummy_Handler
#pragma weak TCC5_OTHER_Handler=Dummy_Handler
#pragma weak TCC5_MC0_Handler=Dummy_Handler
#pragma weak TCC5_MC1_Handler=Dummy_Handler
#pragma weak TCC6_OTHER_Handler=Dummy_Handler
#pragma weak TCC6_MC0_Handler=Dummy_Handler
#pragma weak TCC6_MC1_Handler=Dummy_Handler
#pragma weak TCC7_OTHER_Handler=Dummy_Handler
#pragma weak TCC7_MC0_Handler=Dummy_Handler
#pragma weak TCC7_MC1_Handler=Dummy_Handler
#pragma weak ADC_GLOBAL_Handler=Dummy_Handler
#pragma weak ADC_CORE1_Handler=Dummy_Handler
#pragma weak Reserved2_Handler=Dummy_Handler
#pragma weak Reserved3_Handler=Dummy_Handler
#pragma weak Reserved4_Handler=Dummy_Handler
#pragma weak Reserved5_Handler=Dummy_Handler
#pragma weak AC_Handler=Dummy_Handler
#pragma weak PTC_Handler=Dummy_Handler
#pragma weak SPI_IXS_Handler=Dummy_Handler
#pragma weak PCC_Handler=Dummy_Handler
#pragma weak PDEC_Handler=Dummy_Handler
#pragma weak CAN0_Handler=Dummy_Handler
#pragma weak CAN1_Handler=Dummy_Handler
#pragma weak ETH_Handler=Dummy_Handler
#pragma weak SQI_Handler=Dummy_Handler
#pragma weak TRNG_Handler=Dummy_Handler
#pragma weak SDMMC0_Handler=Dummy_Handler
#pragma weak SDMMC1_Handler=Dummy_Handler
#pragma weak USB_OTHER_Handler=Dummy_Handler
#pragma weak USB_SOF_Handler=Dummy_Handler
#pragma weak USB_TRCPT0_Handler=Dummy_Handler
#pragma weak USB_TRCPT1_Handler=Dummy_Handler
#pragma weak USBHS_Handler=Dummy_Handler

/* Exception Table */
#pragma language = extended
#pragma segment = "CSTACK"

/* The name "__vector_table" has special meaning for C-SPY: */
/* it is where the SP start value is found, and the NVIC vector */
/* table register (VTOR) is initialized to this address if != 0 */

#pragma section = ".intvec"
#pragma location = ".intvec"
const DeviceVectors __vector_table = {
        (void*) __sfe("CSTACK"),

        .pfnReset_Handler              = (void*) Reset_Handler,
        .pfnNonMaskableInt_Handler     = (void*) NonMaskableInt_Handler,
        .pfnHardFault_Handler          = (void*) HardFault_Handler,
        .pfnMemoryManagement_Handler   = (void*) MemoryManagement_Handler,
        .pfnBusFault_Handler           = (void*) BusFault_Handler,
        .pfnUsageFault_Handler         = (void*) UsageFault_Handler,
        .pfnSecureFaultMonitor_Handler = (void*) SecureFaultMonitor_Handler,
        .pvReservedC8                  = (void*) (0UL), /* Reserved */
        .pvReservedC7                  = (void*) (0UL), /* Reserved */
        .pvReservedC6                  = (void*) (0UL), /* Reserved */
        .pfnSVCall_Handler             = (void*) SVCall_Handler,
        .pfnDebugMonitor_Handler       = (void*) DebugMonitor_Handler,
        .pvReservedC3                  = (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

        /* Configurable interrupts */
        .pfnFCR_ERR_Handler            = (void*) FCR_ERR_Handler, /* 0  Flash Read Controller (FCR) */
        .pfnFCR_FLT_Handler            = (void*) FCR_FLT_Handler, /* 1  Flash Read Controller (FCR) */
        .pfnFCW_Handler                = (void*) FCW_Handler,    /* 2  Flash Write Control (FCW) */
        .pfnPM_Handler                 = (void*) PM_Handler,     /* 3  Power Manager */
        .pfnSUPC_Handler               = (void*) SUPC_Handler,   /* 4  Supply Controller */
        .pfnOSCCTRL_XOSC_Handler       = (void*) OSCCTRL_XOSC_Handler, /* 5  Oscillators Control */
        .pfnOSCCTRL_DFLL_Handler       = (void*) OSCCTRL_DFLL_Handler, /* 6  Oscillators Control */
        .pfnOSCCTRL_PLL0_Handler       = (void*) OSCCTRL_PLL0_Handler, /* 7  Oscillators Control */
        .pfnOSC32KCTRL_Handler         = (void*) OSC32KCTRL_Handler, /* 8  32kHz Oscillators Control */
        .pfnMCLK_Handler               = (void*) MCLK_Handler,   /* 9  Main Clock */
        .pfnFREQM_Handler              = (void*) FREQM_Handler,  /* 10 Frequency Meter */
        .pfnWDT_Handler                = (void*) WDT_Handler,    /* 11 Watchdog Timer */
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 12 Real-Time Counter */
        .pfnEIC_EXTINT_0_Handler       = (void*) EIC_EXTINT_0_Handler, /* 13 External Interrupt Controller */
        .pfnEIC_EXTINT_1_Handler       = (void*) EIC_EXTINT_1_Handler, /* 14 External Interrupt Controller */
        .pfnEIC_EXTINT_2_Handler       = (void*) EIC_EXTINT_2_Handler, /* 15 External Interrupt Controller */
        .pfnEIC_EXTINT_3_Handler       = (void*) EIC_EXTINT_3_Handler, /* 16 External Interrupt Controller */
        .pfnEIC_EXTINT_4_Handler       = (void*) EIC_EXTINT_4_Handler, /* 17 External Interrupt Controller */
        .pfnEIC_EXTINT_5_Handler       = (void*) EIC_EXTINT_5_Handler, /* 18 External Interrupt Controller */
        .pfnEIC_EXTINT_6_Handler       = (void*) EIC_EXTINT_6_Handler, /* 19 External Interrupt Controller */
        .pfnEIC_EXTINT_7_Handler       = (void*) EIC_EXTINT_7_Handler, /* 20 External Interrupt Controller */
        .pfnEIC_EXTINT_8_Handler       = (void*) EIC_EXTINT_8_Handler, /* 21 External Interrupt Controller */
        .pfnEIC_EXTINT_9_Handler       = (void*) EIC_EXTINT_9_Handler, /* 22 External Interrupt Controller */
        .pfnEIC_EXTINT_10_Handler      = (void*) EIC_EXTINT_10_Handler, /* 23 External Interrupt Controller */
        .pfnEIC_EXTINT_11_Handler      = (void*) EIC_EXTINT_11_Handler, /* 24 External Interrupt Controller */
        .pfnEIC_EXTINT_12_Handler      = (void*) EIC_EXTINT_12_Handler, /* 25 External Interrupt Controller */
        .pfnEIC_EXTINT_13_Handler      = (void*) EIC_EXTINT_13_Handler, /* 26 External Interrupt Controller */
        .pfnEIC_EXTINT_14_Handler      = (void*) EIC_EXTINT_14_Handler, /* 27 External Interrupt Controller */
        .pfnEIC_EXTINT_15_Handler      = (void*) EIC_EXTINT_15_Handler, /* 28 External Interrupt Controller */
        .pfnEIC_NSCHK_Handler          = (void*) EIC_NSCHK_Handler, /* 29 External Interrupt Controller */
        .pfnPAC_Handler                = (void*) PAC_Handler,    /* 30 Peripheral Access Controller */
        .pfnTRAM_Handler               = (void*) TRAM_Handler,   /* 31 TrustRAM */
        .pfnPORT_Handler               = (void*) PORT_Handler,   /* 32 Port Module */
        .pfnDMA0_PRI0_Handler          = (void*) DMA0_PRI0_Handler, /* 33 Direct Memory Access Controller */
        .pfnDMA0_PRI1_Handler          = (void*) DMA0_PRI1_Handler, /* 34 Direct Memory Access Controller */
        .pfnDMA0_PRI2_Handler          = (void*) DMA0_PRI2_Handler, /* 35 Direct Memory Access Controller */
        .pfnDMA1_PRI0_Handler          = (void*) DMA1_PRI0_Handler, /* 36 Direct Memory Access Controller */
        .pfnDMA1_PRI1_Handler          = (void*) DMA1_PRI1_Handler, /* 37 Direct Memory Access Controller */
        .pfnHMATRIX_Handler            = (void*) HMATRIX_Handler, /* 38 HSB Matrix */
        .pfnEVSYS_0_Handler            = (void*) EVSYS_0_Handler, /* 39 Event System Interface */
        .pfnEVSYS_1_Handler            = (void*) EVSYS_1_Handler, /* 40 Event System Interface */
        .pfnEVSYS_2_Handler            = (void*) EVSYS_2_Handler, /* 41 Event System Interface */
        .pfnEVSYS_3_Handler            = (void*) EVSYS_3_Handler, /* 42 Event System Interface */
        .pfnEVSYS_OTHER_Handler        = (void*) EVSYS_OTHER_Handler, /* 43 Event System Interface */
        .pfnSERCOM0_56_Handler         = (void*) SERCOM0_56_Handler, /* 44 Serial Communication Interface */
        .pfnSERCOM0_0_Handler          = (void*) SERCOM0_0_Handler, /* 45 Serial Communication Interface */
        .pfnSERCOM0_1_Handler          = (void*) SERCOM0_1_Handler, /* 46 Serial Communication Interface */
        .pfnSERCOM0_2_Handler          = (void*) SERCOM0_2_Handler, /* 47 Serial Communication Interface */
        .pfnSERCOM0_3_Handler          = (void*) SERCOM0_3_Handler, /* 48 Serial Communication Interface */
        .pfnSERCOM0_4_Handler          = (void*) SERCOM0_4_Handler, /* 49 Serial Communication Interface */
        .pfnSERCOM1_56_Handler         = (void*) SERCOM1_56_Handler, /* 50 Serial Communication Interface */
        .pfnSERCOM1_0_Handler          = (void*) SERCOM1_0_Handler, /* 51 Serial Communication Interface */
        .pfnSERCOM1_1_Handler          = (void*) SERCOM1_1_Handler, /* 52 Serial Communication Interface */
        .pfnSERCOM1_2_Handler          = (void*) SERCOM1_2_Handler, /* 53 Serial Communication Interface */
        .pfnSERCOM1_3_Handler          = (void*) SERCOM1_3_Handler, /* 54 Serial Communication Interface */
        .pfnSERCOM1_4_Handler          = (void*) SERCOM1_4_Handler, /* 55 Serial Communication Interface */
        .pfnSERCOM2_56_Handler         = (void*) SERCOM2_56_Handler, /* 56 Serial Communication Interface */
        .pfnSERCOM2_0_Handler          = (void*) SERCOM2_0_Handler, /* 57 Serial Communication Interface */
        .pfnSERCOM2_1_Handler          = (void*) SERCOM2_1_Handler, /* 58 Serial Communication Interface */
        .pfnSERCOM2_2_Handler          = (void*) SERCOM2_2_Handler, /* 59 Serial Communication Interface */
        .pfnSERCOM2_3_Handler          = (void*) SERCOM2_3_Handler, /* 60 Serial Communication Interface */
        .pfnSERCOM2_4_Handler          = (void*) SERCOM2_4_Handler, /* 61 Serial Communication Interface */
        .pfnSERCOM3_56_Handler         = (void*) SERCOM3_56_Handler, /* 62 Serial Communication Interface */
        .pfnSERCOM3_0_Handler          = (void*) SERCOM3_0_Handler, /* 63 Serial Communication Interface */
        .pfnSERCOM3_1_Handler          = (void*) SERCOM3_1_Handler, /* 64 Serial Communication Interface */
        .pfnSERCOM3_2_Handler          = (void*) SERCOM3_2_Handler, /* 65 Serial Communication Interface */
        .pfnSERCOM3_3_Handler          = (void*) SERCOM3_3_Handler, /* 66 Serial Communication Interface */
        .pfnSERCOM3_4_Handler          = (void*) SERCOM3_4_Handler, /* 67 Serial Communication Interface */
        .pfnTCC0_OTHER_Handler         = (void*) TCC0_OTHER_Handler, /* 68 Timer Counter for Control Applications */
        .pfnTCC0_MC0_Handler           = (void*) TCC0_MC0_Handler, /* 69 Timer Counter for Control Applications */
        .pfnTCC0_MC1_Handler           = (void*) TCC0_MC1_Handler, /* 70 Timer Counter for Control Applications */
        .pfnTCC0_MC2_Handler           = (void*) TCC0_MC2_Handler, /* 71 Timer Counter for Control Applications */
        .pfnTCC0_MC3_Handler           = (void*) TCC0_MC3_Handler, /* 72 Timer Counter for Control Applications */
        .pfnTCC0_MC4_Handler           = (void*) TCC0_MC4_Handler, /* 73 Timer Counter for Control Applications */
        .pfnTCC0_MC5_Handler           = (void*) TCC0_MC5_Handler, /* 74 Timer Counter for Control Applications */
        .pfnTCC1_OTHER_Handler         = (void*) TCC1_OTHER_Handler, /* 75 Timer Counter for Control Applications */
        .pfnTCC1_MC0_Handler           = (void*) TCC1_MC0_Handler, /* 76 Timer Counter for Control Applications */
        .pfnTCC1_MC1_Handler           = (void*) TCC1_MC1_Handler, /* 77 Timer Counter for Control Applications */
        .pfnTCC1_MC2_Handler           = (void*) TCC1_MC2_Handler, /* 78 Timer Counter for Control Applications */
        .pfnTCC1_MC3_Handler           = (void*) TCC1_MC3_Handler, /* 79 Timer Counter for Control Applications */
        .pfnTCC1_MC4_Handler           = (void*) TCC1_MC4_Handler, /* 80 Timer Counter for Control Applications */
        .pfnTCC1_MC5_Handler           = (void*) TCC1_MC5_Handler, /* 81 Timer Counter for Control Applications */
        .pfnTCC2_OTHER_Handler         = (void*) TCC2_OTHER_Handler, /* 82 Timer Counter for Control Applications */
        .pfnTCC2_MC0_Handler           = (void*) TCC2_MC0_Handler, /* 83 Timer Counter for Control Applications */
        .pfnTCC2_MC1_Handler           = (void*) TCC2_MC1_Handler, /* 84 Timer Counter for Control Applications */
        .pfnTCC2_MC2_Handler           = (void*) TCC2_MC2_Handler, /* 85 Timer Counter for Control Applications */
        .pfnTCC2_MC3_Handler           = (void*) TCC2_MC3_Handler, /* 86 Timer Counter for Control Applications */
        .pfnTCC2_MC4_Handler           = (void*) TCC2_MC4_Handler, /* 87 Timer Counter for Control Applications */
        .pfnTCC2_MC5_Handler           = (void*) TCC2_MC5_Handler, /* 88 Timer Counter for Control Applications */
        .pfnTCC3_OTHER_Handler         = (void*) TCC3_OTHER_Handler, /* 89 Timer Counter for Control Applications */
        .pfnTCC3_MC0_Handler           = (void*) TCC3_MC0_Handler, /* 90 Timer Counter for Control Applications */
        .pfnTCC3_MC1_Handler           = (void*) TCC3_MC1_Handler, /* 91 Timer Counter for Control Applications */
        .pfnTCC3_MC2_Handler           = (void*) TCC3_MC2_Handler, /* 92 Timer Counter for Control Applications */
        .pfnTCC3_MC3_Handler           = (void*) TCC3_MC3_Handler, /* 93 Timer Counter for Control Applications */
        .pfnTCC3_MC4_Handler           = (void*) TCC3_MC4_Handler, /* 94 Timer Counter for Control Applications */
        .pfnTCC3_MC5_Handler           = (void*) TCC3_MC5_Handler, /* 95 Timer Counter for Control Applications */
        .pfnSERCOM4_56_Handler         = (void*) SERCOM4_56_Handler, /* 96 Serial Communication Interface */
        .pfnSERCOM4_0_Handler          = (void*) SERCOM4_0_Handler, /* 97 Serial Communication Interface */
        .pfnSERCOM4_1_Handler          = (void*) SERCOM4_1_Handler, /* 98 Serial Communication Interface */
        .pfnSERCOM4_2_Handler          = (void*) SERCOM4_2_Handler, /* 99 Serial Communication Interface */
        .pfnSERCOM4_3_Handler          = (void*) SERCOM4_3_Handler, /* 100 Serial Communication Interface */
        .pfnSERCOM4_4_Handler          = (void*) SERCOM4_4_Handler, /* 101 Serial Communication Interface */
        .pfnSERCOM5_56_Handler         = (void*) SERCOM5_56_Handler, /* 102 Serial Communication Interface */
        .pfnSERCOM5_0_Handler          = (void*) SERCOM5_0_Handler, /* 103 Serial Communication Interface */
        .pfnSERCOM5_1_Handler          = (void*) SERCOM5_1_Handler, /* 104 Serial Communication Interface */
        .pfnSERCOM5_2_Handler          = (void*) SERCOM5_2_Handler, /* 105 Serial Communication Interface */
        .pfnSERCOM5_3_Handler          = (void*) SERCOM5_3_Handler, /* 106 Serial Communication Interface */
        .pfnSERCOM5_4_Handler          = (void*) SERCOM5_4_Handler, /* 107 Serial Communication Interface */
        .pfnSERCOM6_56_Handler         = (void*) SERCOM6_56_Handler, /* 108 Serial Communication Interface */
        .pfnSERCOM6_0_Handler          = (void*) SERCOM6_0_Handler, /* 109 Serial Communication Interface */
        .pfnSERCOM6_1_Handler          = (void*) SERCOM6_1_Handler, /* 110 Serial Communication Interface */
        .pfnSERCOM6_2_Handler          = (void*) SERCOM6_2_Handler, /* 111 Serial Communication Interface */
        .pfnSERCOM6_3_Handler          = (void*) SERCOM6_3_Handler, /* 112 Serial Communication Interface */
        .pfnSERCOM6_4_Handler          = (void*) SERCOM6_4_Handler, /* 113 Serial Communication Interface */
        .pfnSERCOM7_56_Handler         = (void*) SERCOM7_56_Handler, /* 114 Serial Communication Interface */
        .pfnSERCOM7_0_Handler          = (void*) SERCOM7_0_Handler, /* 115 Serial Communication Interface */
        .pfnSERCOM7_1_Handler          = (void*) SERCOM7_1_Handler, /* 116 Serial Communication Interface */
        .pfnSERCOM7_2_Handler          = (void*) SERCOM7_2_Handler, /* 117 Serial Communication Interface */
        .pfnSERCOM7_3_Handler          = (void*) SERCOM7_3_Handler, /* 118 Serial Communication Interface */
        .pfnSERCOM7_4_Handler          = (void*) SERCOM7_4_Handler, /* 119 Serial Communication Interface */
        .pfnTCC4_OTHER_Handler         = (void*) TCC4_OTHER_Handler, /* 120 Timer Counter for Control Applications */
        .pfnTCC4_MC0_Handler           = (void*) TCC4_MC0_Handler, /* 121 Timer Counter for Control Applications */
        .pfnTCC4_MC1_Handler           = (void*) TCC4_MC1_Handler, /* 122 Timer Counter for Control Applications */
        .pfnTCC5_OTHER_Handler         = (void*) TCC5_OTHER_Handler, /* 123 Timer Counter for Control Applications */
        .pfnTCC5_MC0_Handler           = (void*) TCC5_MC0_Handler, /* 124 Timer Counter for Control Applications */
        .pfnTCC5_MC1_Handler           = (void*) TCC5_MC1_Handler, /* 125 Timer Counter for Control Applications */
        .pfnTCC6_OTHER_Handler         = (void*) TCC6_OTHER_Handler, /* 126 Timer Counter for Control Applications */
        .pfnTCC6_MC0_Handler           = (void*) TCC6_MC0_Handler, /* 127 Timer Counter for Control Applications */
        .pfnTCC6_MC1_Handler           = (void*) TCC6_MC1_Handler, /* 128 Timer Counter for Control Applications */
        .pfnTCC7_OTHER_Handler         = (void*) TCC7_OTHER_Handler, /* 129 Timer Counter for Control Applications */
        .pfnTCC7_MC0_Handler           = (void*) TCC7_MC0_Handler, /* 130 Timer Counter for Control Applications */
        .pfnTCC7_MC1_Handler           = (void*) TCC7_MC1_Handler, /* 131 Timer Counter for Control Applications */
        .pfnADC_GLOBAL_Handler         = (void*) ADC_GLOBAL_Handler, /* 132 ADC Controller */
        .pfnADC_CORE1_Handler          = (void*) ADC_CORE1_Handler, /* 133 ADC Controller */
        .pvReserved2                   = (void*) (0UL),          /* 134 ADC Controller */
        .pvReserved3                   = (void*) (0UL),          /* 135 ADC Controller */
        .pvReserved4                   = (void*) (0UL),          /* 136 ADC Controller */
        .pvReserved5                   = (void*) (0UL),          /* 137 ADC Controller */
        .pfnAC_Handler                 = (void*) AC_Handler,     /* 138 Analog Comparator Controller */
        .pfnPTC_Handler                = (void*) PTC_Handler,    /* 139 Peripheral Touch Controller */
        .pfnSPI_IXS_Handler            = (void*) SPI_IXS_Handler, /* 140 Audio SPI with 8 channels compatibilty */
        .pfnPCC_Handler                = (void*) PCC_Handler,    /* 141 Parallel Capture Controller */
        .pfnPDEC_Handler               = (void*) PDEC_Handler,   /* 142 Position Decoder */
        .pfnCAN0_Handler               = (void*) CAN0_Handler,   /* 143 Control Area Network */
        .pfnCAN1_Handler               = (void*) CAN1_Handler,   /* 144 Control Area Network */
        .pfnETH_Handler                = (void*) ETH_Handler,    /* 145 Ethernet Controller */
        .pfnSQI_Handler                = (void*) SQI_Handler,    /* 146 Polaris Serial Quad Interface SIB */
        .pfnTRNG_Handler               = (void*) TRNG_Handler,   /* 147 True Random Generator */
        .pfnSDMMC0_Handler             = (void*) SDMMC0_Handler, /* 148 SD/MMC Host Controller */
        .pfnSDMMC1_Handler             = (void*) SDMMC1_Handler, /* 149 SD/MMC Host Controller */
        .pfnUSB_OTHER_Handler          = (void*) USB_OTHER_Handler, /* 150 Full-Speed Universal Serial Bus */
        .pfnUSB_SOF_Handler            = (void*) USB_SOF_Handler, /* 151 Full-Speed Universal Serial Bus */
        .pfnUSB_TRCPT0_Handler         = (void*) USB_TRCPT0_Handler, /* 152 Full-Speed Universal Serial Bus */
        .pfnUSB_TRCPT1_Handler         = (void*) USB_TRCPT1_Handler, /* 153 Full-Speed Universal Serial Bus */
        .pfnUSBHS_Handler              = (void*) USBHS_Handler,  /* 154 USB High Speed */
        .pvReserved155                 = (void*) (0UL),          /* 155 Reserved */
        .pvReserved156                 = (void*) (0UL),          /* 156 Reserved */
        .pvReserved157                 = (void*) (0UL)           /* 157 Reserved */
};

/**------------------------------------------------------------------------------
 * This is the code that gets called on processor reset. To initialize the
 * device.
 *------------------------------------------------------------------------------*/
int __low_level_init(void)
{
        uint32_t *pSrc = __section_begin(".intvec");

        SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);

        return 1; /* if return 0, the data sections will not be initialized */
}

/**------------------------------------------------------------------------------
 * This is the code that gets called on processor reset. To initialize the
 * device.
 *------------------------------------------------------------------------------*/
void Reset_Handler(void)
{
        __iar_program_start();
}

/**
 * \brief Default interrupt handler for unused IRQs.
 */
void Dummy_Handler(void)
{
        while (1) {
        }
}
