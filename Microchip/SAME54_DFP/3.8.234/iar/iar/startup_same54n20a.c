/**
 * \file
 *
 * \brief IAR startup file for ATSAME54N20A
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

#include "same54n20a.h"

typedef void (*intfunc) (void);
typedef union { intfunc __fun; void * __ptr; } intvec_elem;

void __iar_program_start(void);
int __low_level_init(void);

/* Reset handler */
void Reset_Handler(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M4 core handlers */
#pragma weak NonMaskableInt_Handler=Dummy_Handler
#pragma weak HardFault_Handler=Dummy_Handler
#pragma weak MemoryManagement_Handler=Dummy_Handler
#pragma weak BusFault_Handler=Dummy_Handler
#pragma weak UsageFault_Handler=Dummy_Handler
#pragma weak SVCall_Handler=Dummy_Handler
#pragma weak DebugMonitor_Handler=Dummy_Handler
#pragma weak PendSV_Handler=Dummy_Handler
#pragma weak SysTick_Handler=Dummy_Handler

/* Peripherals handlers */
#pragma weak PM_Handler=Dummy_Handler
#pragma weak MCLK_Handler=Dummy_Handler
#pragma weak OSCCTRL_XOSC0_Handler=Dummy_Handler
#pragma weak OSCCTRL_XOSC1_Handler=Dummy_Handler
#pragma weak OSCCTRL_DFLL_Handler=Dummy_Handler
#pragma weak OSCCTRL_DPLL0_Handler=Dummy_Handler
#pragma weak OSCCTRL_DPLL1_Handler=Dummy_Handler
#pragma weak OSC32KCTRL_Handler=Dummy_Handler
#pragma weak SUPC_OTHER_Handler=Dummy_Handler
#pragma weak SUPC_BODDET_Handler=Dummy_Handler
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
#pragma weak FREQM_Handler=Dummy_Handler
#pragma weak NVMCTRL_0_Handler=Dummy_Handler
#pragma weak NVMCTRL_1_Handler=Dummy_Handler
#pragma weak DMAC_0_Handler=Dummy_Handler
#pragma weak DMAC_1_Handler=Dummy_Handler
#pragma weak DMAC_2_Handler=Dummy_Handler
#pragma weak DMAC_3_Handler=Dummy_Handler
#pragma weak DMAC_OTHER_Handler=Dummy_Handler
#pragma weak EVSYS_0_Handler=Dummy_Handler
#pragma weak EVSYS_1_Handler=Dummy_Handler
#pragma weak EVSYS_2_Handler=Dummy_Handler
#pragma weak EVSYS_3_Handler=Dummy_Handler
#pragma weak EVSYS_OTHER_Handler=Dummy_Handler
#pragma weak PAC_Handler=Dummy_Handler
#pragma weak RAMECC_Handler=Dummy_Handler
#pragma weak SERCOM0_0_Handler=Dummy_Handler
#pragma weak SERCOM0_1_Handler=Dummy_Handler
#pragma weak SERCOM0_2_Handler=Dummy_Handler
#pragma weak SERCOM0_OTHER_Handler=Dummy_Handler
#pragma weak SERCOM1_0_Handler=Dummy_Handler
#pragma weak SERCOM1_1_Handler=Dummy_Handler
#pragma weak SERCOM1_2_Handler=Dummy_Handler
#pragma weak SERCOM1_OTHER_Handler=Dummy_Handler
#pragma weak SERCOM2_0_Handler=Dummy_Handler
#pragma weak SERCOM2_1_Handler=Dummy_Handler
#pragma weak SERCOM2_2_Handler=Dummy_Handler
#pragma weak SERCOM2_OTHER_Handler=Dummy_Handler
#pragma weak SERCOM3_0_Handler=Dummy_Handler
#pragma weak SERCOM3_1_Handler=Dummy_Handler
#pragma weak SERCOM3_2_Handler=Dummy_Handler
#pragma weak SERCOM3_OTHER_Handler=Dummy_Handler
#pragma weak SERCOM4_0_Handler=Dummy_Handler
#pragma weak SERCOM4_1_Handler=Dummy_Handler
#pragma weak SERCOM4_2_Handler=Dummy_Handler
#pragma weak SERCOM4_OTHER_Handler=Dummy_Handler
#pragma weak SERCOM5_0_Handler=Dummy_Handler
#pragma weak SERCOM5_1_Handler=Dummy_Handler
#pragma weak SERCOM5_2_Handler=Dummy_Handler
#pragma weak SERCOM5_OTHER_Handler=Dummy_Handler
#pragma weak SERCOM6_0_Handler=Dummy_Handler
#pragma weak SERCOM6_1_Handler=Dummy_Handler
#pragma weak SERCOM6_2_Handler=Dummy_Handler
#pragma weak SERCOM6_OTHER_Handler=Dummy_Handler
#pragma weak SERCOM7_0_Handler=Dummy_Handler
#pragma weak SERCOM7_1_Handler=Dummy_Handler
#pragma weak SERCOM7_2_Handler=Dummy_Handler
#pragma weak SERCOM7_OTHER_Handler=Dummy_Handler
#pragma weak CAN0_Handler=Dummy_Handler
#pragma weak CAN1_Handler=Dummy_Handler
#pragma weak USB_OTHER_Handler=Dummy_Handler
#pragma weak USB_SOF_HSOF_Handler=Dummy_Handler
#pragma weak USB_TRCPT0_Handler=Dummy_Handler
#pragma weak USB_TRCPT1_Handler=Dummy_Handler
#pragma weak GMAC_Handler=Dummy_Handler
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
#pragma weak TCC2_OTHER_Handler=Dummy_Handler
#pragma weak TCC2_MC0_Handler=Dummy_Handler
#pragma weak TCC2_MC1_Handler=Dummy_Handler
#pragma weak TCC2_MC2_Handler=Dummy_Handler
#pragma weak TCC3_OTHER_Handler=Dummy_Handler
#pragma weak TCC3_MC0_Handler=Dummy_Handler
#pragma weak TCC3_MC1_Handler=Dummy_Handler
#pragma weak TCC4_OTHER_Handler=Dummy_Handler
#pragma weak TCC4_MC0_Handler=Dummy_Handler
#pragma weak TCC4_MC1_Handler=Dummy_Handler
#pragma weak TC0_Handler=Dummy_Handler
#pragma weak TC1_Handler=Dummy_Handler
#pragma weak TC2_Handler=Dummy_Handler
#pragma weak TC3_Handler=Dummy_Handler
#pragma weak TC4_Handler=Dummy_Handler
#pragma weak TC5_Handler=Dummy_Handler
#pragma weak TC6_Handler=Dummy_Handler
#pragma weak TC7_Handler=Dummy_Handler
#pragma weak PDEC_OTHER_Handler=Dummy_Handler
#pragma weak PDEC_MC0_Handler=Dummy_Handler
#pragma weak PDEC_MC1_Handler=Dummy_Handler
#pragma weak ADC0_OTHER_Handler=Dummy_Handler
#pragma weak ADC0_RESRDY_Handler=Dummy_Handler
#pragma weak ADC1_OTHER_Handler=Dummy_Handler
#pragma weak ADC1_RESRDY_Handler=Dummy_Handler
#pragma weak AC_Handler=Dummy_Handler
#pragma weak DAC_OTHER_Handler=Dummy_Handler
#pragma weak DAC_EMPTY_0_Handler=Dummy_Handler
#pragma weak DAC_EMPTY_1_Handler=Dummy_Handler
#pragma weak DAC_RESRDY_0_Handler=Dummy_Handler
#pragma weak DAC_RESRDY_1_Handler=Dummy_Handler
#pragma weak I2S_Handler=Dummy_Handler
#pragma weak PCC_Handler=Dummy_Handler
#pragma weak AES_Handler=Dummy_Handler
#pragma weak TRNG_Handler=Dummy_Handler
#pragma weak ICM_Handler=Dummy_Handler
#pragma weak PUKCC_Handler=Dummy_Handler
#pragma weak QSPI_Handler=Dummy_Handler
#pragma weak SDHC0_Handler=Dummy_Handler
#pragma weak SDHC1_Handler=Dummy_Handler

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
        .pvReservedC9                  = (void*) (0UL), /* Reserved */
        .pvReservedC8                  = (void*) (0UL), /* Reserved */
        .pvReservedC7                  = (void*) (0UL), /* Reserved */
        .pvReservedC6                  = (void*) (0UL), /* Reserved */
        .pfnSVCall_Handler             = (void*) SVCall_Handler,
        .pfnDebugMonitor_Handler       = (void*) DebugMonitor_Handler,
        .pvReservedC3                  = (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

        /* Configurable interrupts */
        .pfnPM_Handler                 = (void*) PM_Handler,     /* 0  Power Manager */
        .pfnMCLK_Handler               = (void*) MCLK_Handler,   /* 1  Main Clock */
        .pfnOSCCTRL_XOSC0_Handler      = (void*) OSCCTRL_XOSC0_Handler, /* 2  Oscillators Control */
        .pfnOSCCTRL_XOSC1_Handler      = (void*) OSCCTRL_XOSC1_Handler, /* 3  Oscillators Control */
        .pfnOSCCTRL_DFLL_Handler       = (void*) OSCCTRL_DFLL_Handler, /* 4  Oscillators Control */
        .pfnOSCCTRL_DPLL0_Handler      = (void*) OSCCTRL_DPLL0_Handler, /* 5  Oscillators Control */
        .pfnOSCCTRL_DPLL1_Handler      = (void*) OSCCTRL_DPLL1_Handler, /* 6  Oscillators Control */
        .pfnOSC32KCTRL_Handler         = (void*) OSC32KCTRL_Handler, /* 7  32kHz Oscillators Control */
        .pfnSUPC_OTHER_Handler         = (void*) SUPC_OTHER_Handler, /* 8  Supply Controller */
        .pfnSUPC_BODDET_Handler        = (void*) SUPC_BODDET_Handler, /* 9  Supply Controller */
        .pfnWDT_Handler                = (void*) WDT_Handler,    /* 10 Watchdog Timer */
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 11 Real-Time Counter */
        .pfnEIC_EXTINT_0_Handler       = (void*) EIC_EXTINT_0_Handler, /* 12 External Interrupt Controller */
        .pfnEIC_EXTINT_1_Handler       = (void*) EIC_EXTINT_1_Handler, /* 13 External Interrupt Controller */
        .pfnEIC_EXTINT_2_Handler       = (void*) EIC_EXTINT_2_Handler, /* 14 External Interrupt Controller */
        .pfnEIC_EXTINT_3_Handler       = (void*) EIC_EXTINT_3_Handler, /* 15 External Interrupt Controller */
        .pfnEIC_EXTINT_4_Handler       = (void*) EIC_EXTINT_4_Handler, /* 16 External Interrupt Controller */
        .pfnEIC_EXTINT_5_Handler       = (void*) EIC_EXTINT_5_Handler, /* 17 External Interrupt Controller */
        .pfnEIC_EXTINT_6_Handler       = (void*) EIC_EXTINT_6_Handler, /* 18 External Interrupt Controller */
        .pfnEIC_EXTINT_7_Handler       = (void*) EIC_EXTINT_7_Handler, /* 19 External Interrupt Controller */
        .pfnEIC_EXTINT_8_Handler       = (void*) EIC_EXTINT_8_Handler, /* 20 External Interrupt Controller */
        .pfnEIC_EXTINT_9_Handler       = (void*) EIC_EXTINT_9_Handler, /* 21 External Interrupt Controller */
        .pfnEIC_EXTINT_10_Handler      = (void*) EIC_EXTINT_10_Handler, /* 22 External Interrupt Controller */
        .pfnEIC_EXTINT_11_Handler      = (void*) EIC_EXTINT_11_Handler, /* 23 External Interrupt Controller */
        .pfnEIC_EXTINT_12_Handler      = (void*) EIC_EXTINT_12_Handler, /* 24 External Interrupt Controller */
        .pfnEIC_EXTINT_13_Handler      = (void*) EIC_EXTINT_13_Handler, /* 25 External Interrupt Controller */
        .pfnEIC_EXTINT_14_Handler      = (void*) EIC_EXTINT_14_Handler, /* 26 External Interrupt Controller */
        .pfnEIC_EXTINT_15_Handler      = (void*) EIC_EXTINT_15_Handler, /* 27 External Interrupt Controller */
        .pfnFREQM_Handler              = (void*) FREQM_Handler,  /* 28 Frequency Meter */
        .pfnNVMCTRL_0_Handler          = (void*) NVMCTRL_0_Handler, /* 29 Non-Volatile Memory Controller */
        .pfnNVMCTRL_1_Handler          = (void*) NVMCTRL_1_Handler, /* 30 Non-Volatile Memory Controller */
        .pfnDMAC_0_Handler             = (void*) DMAC_0_Handler, /* 31 Direct Memory Access Controller */
        .pfnDMAC_1_Handler             = (void*) DMAC_1_Handler, /* 32 Direct Memory Access Controller */
        .pfnDMAC_2_Handler             = (void*) DMAC_2_Handler, /* 33 Direct Memory Access Controller */
        .pfnDMAC_3_Handler             = (void*) DMAC_3_Handler, /* 34 Direct Memory Access Controller */
        .pfnDMAC_OTHER_Handler         = (void*) DMAC_OTHER_Handler, /* 35 Direct Memory Access Controller */
        .pfnEVSYS_0_Handler            = (void*) EVSYS_0_Handler, /* 36 Event System Interface */
        .pfnEVSYS_1_Handler            = (void*) EVSYS_1_Handler, /* 37 Event System Interface */
        .pfnEVSYS_2_Handler            = (void*) EVSYS_2_Handler, /* 38 Event System Interface */
        .pfnEVSYS_3_Handler            = (void*) EVSYS_3_Handler, /* 39 Event System Interface */
        .pfnEVSYS_OTHER_Handler        = (void*) EVSYS_OTHER_Handler, /* 40 Event System Interface */
        .pfnPAC_Handler                = (void*) PAC_Handler,    /* 41 Peripheral Access Controller */
        .pvReserved42                  = (void*) (0UL),          /* 42 Reserved */
        .pvReserved43                  = (void*) (0UL),          /* 43 Reserved */
        .pvReserved44                  = (void*) (0UL),          /* 44 Reserved */
        .pfnRAMECC_Handler             = (void*) RAMECC_Handler, /* 45 RAM ECC */
        .pfnSERCOM0_0_Handler          = (void*) SERCOM0_0_Handler, /* 46 Serial Communication Interface */
        .pfnSERCOM0_1_Handler          = (void*) SERCOM0_1_Handler, /* 47 Serial Communication Interface */
        .pfnSERCOM0_2_Handler          = (void*) SERCOM0_2_Handler, /* 48 Serial Communication Interface */
        .pfnSERCOM0_OTHER_Handler      = (void*) SERCOM0_OTHER_Handler, /* 49 Serial Communication Interface */
        .pfnSERCOM1_0_Handler          = (void*) SERCOM1_0_Handler, /* 50 Serial Communication Interface */
        .pfnSERCOM1_1_Handler          = (void*) SERCOM1_1_Handler, /* 51 Serial Communication Interface */
        .pfnSERCOM1_2_Handler          = (void*) SERCOM1_2_Handler, /* 52 Serial Communication Interface */
        .pfnSERCOM1_OTHER_Handler      = (void*) SERCOM1_OTHER_Handler, /* 53 Serial Communication Interface */
        .pfnSERCOM2_0_Handler          = (void*) SERCOM2_0_Handler, /* 54 Serial Communication Interface */
        .pfnSERCOM2_1_Handler          = (void*) SERCOM2_1_Handler, /* 55 Serial Communication Interface */
        .pfnSERCOM2_2_Handler          = (void*) SERCOM2_2_Handler, /* 56 Serial Communication Interface */
        .pfnSERCOM2_OTHER_Handler      = (void*) SERCOM2_OTHER_Handler, /* 57 Serial Communication Interface */
        .pfnSERCOM3_0_Handler          = (void*) SERCOM3_0_Handler, /* 58 Serial Communication Interface */
        .pfnSERCOM3_1_Handler          = (void*) SERCOM3_1_Handler, /* 59 Serial Communication Interface */
        .pfnSERCOM3_2_Handler          = (void*) SERCOM3_2_Handler, /* 60 Serial Communication Interface */
        .pfnSERCOM3_OTHER_Handler      = (void*) SERCOM3_OTHER_Handler, /* 61 Serial Communication Interface */
        .pfnSERCOM4_0_Handler          = (void*) SERCOM4_0_Handler, /* 62 Serial Communication Interface */
        .pfnSERCOM4_1_Handler          = (void*) SERCOM4_1_Handler, /* 63 Serial Communication Interface */
        .pfnSERCOM4_2_Handler          = (void*) SERCOM4_2_Handler, /* 64 Serial Communication Interface */
        .pfnSERCOM4_OTHER_Handler      = (void*) SERCOM4_OTHER_Handler, /* 65 Serial Communication Interface */
        .pfnSERCOM5_0_Handler          = (void*) SERCOM5_0_Handler, /* 66 Serial Communication Interface */
        .pfnSERCOM5_1_Handler          = (void*) SERCOM5_1_Handler, /* 67 Serial Communication Interface */
        .pfnSERCOM5_2_Handler          = (void*) SERCOM5_2_Handler, /* 68 Serial Communication Interface */
        .pfnSERCOM5_OTHER_Handler      = (void*) SERCOM5_OTHER_Handler, /* 69 Serial Communication Interface */
        .pfnSERCOM6_0_Handler          = (void*) SERCOM6_0_Handler, /* 70 Serial Communication Interface */
        .pfnSERCOM6_1_Handler          = (void*) SERCOM6_1_Handler, /* 71 Serial Communication Interface */
        .pfnSERCOM6_2_Handler          = (void*) SERCOM6_2_Handler, /* 72 Serial Communication Interface */
        .pfnSERCOM6_OTHER_Handler      = (void*) SERCOM6_OTHER_Handler, /* 73 Serial Communication Interface */
        .pfnSERCOM7_0_Handler          = (void*) SERCOM7_0_Handler, /* 74 Serial Communication Interface */
        .pfnSERCOM7_1_Handler          = (void*) SERCOM7_1_Handler, /* 75 Serial Communication Interface */
        .pfnSERCOM7_2_Handler          = (void*) SERCOM7_2_Handler, /* 76 Serial Communication Interface */
        .pfnSERCOM7_OTHER_Handler      = (void*) SERCOM7_OTHER_Handler, /* 77 Serial Communication Interface */
        .pfnCAN0_Handler               = (void*) CAN0_Handler,   /* 78 Control Area Network */
        .pfnCAN1_Handler               = (void*) CAN1_Handler,   /* 79 Control Area Network */
        .pfnUSB_OTHER_Handler          = (void*) USB_OTHER_Handler, /* 80 Universal Serial Bus */
        .pfnUSB_SOF_HSOF_Handler       = (void*) USB_SOF_HSOF_Handler, /* 81 Universal Serial Bus */
        .pfnUSB_TRCPT0_Handler         = (void*) USB_TRCPT0_Handler, /* 82 Universal Serial Bus */
        .pfnUSB_TRCPT1_Handler         = (void*) USB_TRCPT1_Handler, /* 83 Universal Serial Bus */
        .pfnGMAC_Handler               = (void*) GMAC_Handler,   /* 84 Ethernet MAC */
        .pfnTCC0_OTHER_Handler         = (void*) TCC0_OTHER_Handler, /* 85 Timer Counter Control */
        .pfnTCC0_MC0_Handler           = (void*) TCC0_MC0_Handler, /* 86 Timer Counter Control */
        .pfnTCC0_MC1_Handler           = (void*) TCC0_MC1_Handler, /* 87 Timer Counter Control */
        .pfnTCC0_MC2_Handler           = (void*) TCC0_MC2_Handler, /* 88 Timer Counter Control */
        .pfnTCC0_MC3_Handler           = (void*) TCC0_MC3_Handler, /* 89 Timer Counter Control */
        .pfnTCC0_MC4_Handler           = (void*) TCC0_MC4_Handler, /* 90 Timer Counter Control */
        .pfnTCC0_MC5_Handler           = (void*) TCC0_MC5_Handler, /* 91 Timer Counter Control */
        .pfnTCC1_OTHER_Handler         = (void*) TCC1_OTHER_Handler, /* 92 Timer Counter Control */
        .pfnTCC1_MC0_Handler           = (void*) TCC1_MC0_Handler, /* 93 Timer Counter Control */
        .pfnTCC1_MC1_Handler           = (void*) TCC1_MC1_Handler, /* 94 Timer Counter Control */
        .pfnTCC1_MC2_Handler           = (void*) TCC1_MC2_Handler, /* 95 Timer Counter Control */
        .pfnTCC1_MC3_Handler           = (void*) TCC1_MC3_Handler, /* 96 Timer Counter Control */
        .pfnTCC2_OTHER_Handler         = (void*) TCC2_OTHER_Handler, /* 97 Timer Counter Control */
        .pfnTCC2_MC0_Handler           = (void*) TCC2_MC0_Handler, /* 98 Timer Counter Control */
        .pfnTCC2_MC1_Handler           = (void*) TCC2_MC1_Handler, /* 99 Timer Counter Control */
        .pfnTCC2_MC2_Handler           = (void*) TCC2_MC2_Handler, /* 100 Timer Counter Control */
        .pfnTCC3_OTHER_Handler         = (void*) TCC3_OTHER_Handler, /* 101 Timer Counter Control */
        .pfnTCC3_MC0_Handler           = (void*) TCC3_MC0_Handler, /* 102 Timer Counter Control */
        .pfnTCC3_MC1_Handler           = (void*) TCC3_MC1_Handler, /* 103 Timer Counter Control */
        .pfnTCC4_OTHER_Handler         = (void*) TCC4_OTHER_Handler, /* 104 Timer Counter Control */
        .pfnTCC4_MC0_Handler           = (void*) TCC4_MC0_Handler, /* 105 Timer Counter Control */
        .pfnTCC4_MC1_Handler           = (void*) TCC4_MC1_Handler, /* 106 Timer Counter Control */
        .pfnTC0_Handler                = (void*) TC0_Handler,    /* 107 Basic Timer Counter */
        .pfnTC1_Handler                = (void*) TC1_Handler,    /* 108 Basic Timer Counter */
        .pfnTC2_Handler                = (void*) TC2_Handler,    /* 109 Basic Timer Counter */
        .pfnTC3_Handler                = (void*) TC3_Handler,    /* 110 Basic Timer Counter */
        .pfnTC4_Handler                = (void*) TC4_Handler,    /* 111 Basic Timer Counter */
        .pfnTC5_Handler                = (void*) TC5_Handler,    /* 112 Basic Timer Counter */
        .pfnTC6_Handler                = (void*) TC6_Handler,    /* 113 Basic Timer Counter */
        .pfnTC7_Handler                = (void*) TC7_Handler,    /* 114 Basic Timer Counter */
        .pfnPDEC_OTHER_Handler         = (void*) PDEC_OTHER_Handler, /* 115 Quadrature Decodeur */
        .pfnPDEC_MC0_Handler           = (void*) PDEC_MC0_Handler, /* 116 Quadrature Decodeur */
        .pfnPDEC_MC1_Handler           = (void*) PDEC_MC1_Handler, /* 117 Quadrature Decodeur */
        .pfnADC0_OTHER_Handler         = (void*) ADC0_OTHER_Handler, /* 118 Analog Digital Converter */
        .pfnADC0_RESRDY_Handler        = (void*) ADC0_RESRDY_Handler, /* 119 Analog Digital Converter */
        .pfnADC1_OTHER_Handler         = (void*) ADC1_OTHER_Handler, /* 120 Analog Digital Converter */
        .pfnADC1_RESRDY_Handler        = (void*) ADC1_RESRDY_Handler, /* 121 Analog Digital Converter */
        .pfnAC_Handler                 = (void*) AC_Handler,     /* 122 Analog Comparators */
        .pfnDAC_OTHER_Handler          = (void*) DAC_OTHER_Handler, /* 123 Digital-to-Analog Converter */
        .pfnDAC_EMPTY_0_Handler        = (void*) DAC_EMPTY_0_Handler, /* 124 Digital-to-Analog Converter */
        .pfnDAC_EMPTY_1_Handler        = (void*) DAC_EMPTY_1_Handler, /* 125 Digital-to-Analog Converter */
        .pfnDAC_RESRDY_0_Handler       = (void*) DAC_RESRDY_0_Handler, /* 126 Digital-to-Analog Converter */
        .pfnDAC_RESRDY_1_Handler       = (void*) DAC_RESRDY_1_Handler, /* 127 Digital-to-Analog Converter */
        .pfnI2S_Handler                = (void*) I2S_Handler,    /* 128 Inter-IC Sound Interface */
        .pfnPCC_Handler                = (void*) PCC_Handler,    /* 129 Parallel Capture Controller */
        .pfnAES_Handler                = (void*) AES_Handler,    /* 130 Advanced Encryption Standard */
        .pfnTRNG_Handler               = (void*) TRNG_Handler,   /* 131 True Random Generator */
        .pfnICM_Handler                = (void*) ICM_Handler,    /* 132 Integrity Check Monitor */
        .pfnPUKCC_Handler              = (void*) PUKCC_Handler,  /* 133 PUblic-Key Cryptography Controller */
        .pfnQSPI_Handler               = (void*) QSPI_Handler,   /* 134 Quad SPI interface */
        .pfnSDHC0_Handler              = (void*) SDHC0_Handler,  /* 135 SD/MMC Host Controller */
        .pfnSDHC1_Handler              = (void*) SDHC1_Handler   /* 136 SD/MMC Host Controller */
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
