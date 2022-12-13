/**
 * \file
 *
 * \brief IAR startup file for PIC32CZ4010CA90208
 *
 * Copyright (c) 2022 Microchip Technology Inc.
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

#include "pic32cz4010ca90208.h"

typedef void (*intfunc) (void);
typedef union { intfunc __fun; void * __ptr; } intvec_elem;

void __iar_program_start(void);
int __low_level_init(void);

/* Reset handler */
void Reset_Handler(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M7 core handlers */
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
#pragma weak FCW_Handler=Dummy_Handler
#pragma weak FCR_ECCERR_Handler=Dummy_Handler
#pragma weak FCR_CRC_FAULT_Handler=Dummy_Handler
#pragma weak PM_Handler=Dummy_Handler
#pragma weak SUPC_Handler=Dummy_Handler
#pragma weak OSCCTRL_FAIL_Handler=Dummy_Handler
#pragma weak OSCCTRL_XOSCRDY_Handler=Dummy_Handler
#pragma weak OSCCTRL_DFLLRDY_Handler=Dummy_Handler
#pragma weak OSCCTRL_OTHER_Handler=Dummy_Handler
#pragma weak OSCCTRL_LOCK_Handler=Dummy_Handler
#pragma weak OSC32KCTRL_FAIL_Handler=Dummy_Handler
#pragma weak OSC32KCTRL_RDY_Handler=Dummy_Handler
#pragma weak MCLK_Handler=Dummy_Handler
#pragma weak FREQM_Handler=Dummy_Handler
#pragma weak WDT_Handler=Dummy_Handler
#pragma weak RTC_TAMPER_Handler=Dummy_Handler
#pragma weak RTC_OVF_Handler=Dummy_Handler
#pragma weak RTC_PERIOD_Handler=Dummy_Handler
#pragma weak RTC_COMPARE_Handler=Dummy_Handler
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
#pragma weak PAC_Handler=Dummy_Handler
#pragma weak DRMTCM_Handler=Dummy_Handler
#pragma weak MCRAMC_Handler=Dummy_Handler
#pragma weak TRAM_Handler=Dummy_Handler
#pragma weak DMA_PRI3_Handler=Dummy_Handler
#pragma weak DMA_PRI2_Handler=Dummy_Handler
#pragma weak DMA_PRI1_Handler=Dummy_Handler
#pragma weak DMA_PRI0_Handler=Dummy_Handler
#pragma weak EVSYS_0_Handler=Dummy_Handler
#pragma weak EVSYS_1_Handler=Dummy_Handler
#pragma weak EVSYS_2_Handler=Dummy_Handler
#pragma weak EVSYS_3_Handler=Dummy_Handler
#pragma weak EVSYS_4_Handler=Dummy_Handler
#pragma weak EVSYS_5_Handler=Dummy_Handler
#pragma weak EVSYS_6_Handler=Dummy_Handler
#pragma weak EVSYS_7_Handler=Dummy_Handler
#pragma weak EVSYS_8_Handler=Dummy_Handler
#pragma weak EVSYS_9_Handler=Dummy_Handler
#pragma weak EVSYS_10_Handler=Dummy_Handler
#pragma weak EVSYS_11_Handler=Dummy_Handler
#pragma weak SERCOM0_6_Handler=Dummy_Handler
#pragma weak SERCOM0_5_Handler=Dummy_Handler
#pragma weak SERCOM0_0_Handler=Dummy_Handler
#pragma weak SERCOM0_1_Handler=Dummy_Handler
#pragma weak SERCOM0_2_Handler=Dummy_Handler
#pragma weak SERCOM0_3_Handler=Dummy_Handler
#pragma weak SERCOM0_4_Handler=Dummy_Handler
#pragma weak SERCOM1_6_Handler=Dummy_Handler
#pragma weak SERCOM1_5_Handler=Dummy_Handler
#pragma weak SERCOM1_0_Handler=Dummy_Handler
#pragma weak SERCOM1_1_Handler=Dummy_Handler
#pragma weak SERCOM1_2_Handler=Dummy_Handler
#pragma weak SERCOM1_3_Handler=Dummy_Handler
#pragma weak SERCOM1_4_Handler=Dummy_Handler
#pragma weak SERCOM2_6_Handler=Dummy_Handler
#pragma weak SERCOM2_5_Handler=Dummy_Handler
#pragma weak SERCOM2_0_Handler=Dummy_Handler
#pragma weak SERCOM2_1_Handler=Dummy_Handler
#pragma weak SERCOM2_2_Handler=Dummy_Handler
#pragma weak SERCOM2_3_Handler=Dummy_Handler
#pragma weak SERCOM2_4_Handler=Dummy_Handler
#pragma weak SERCOM3_6_Handler=Dummy_Handler
#pragma weak SERCOM3_5_Handler=Dummy_Handler
#pragma weak SERCOM3_0_Handler=Dummy_Handler
#pragma weak SERCOM3_1_Handler=Dummy_Handler
#pragma weak SERCOM3_2_Handler=Dummy_Handler
#pragma weak SERCOM3_3_Handler=Dummy_Handler
#pragma weak SERCOM3_4_Handler=Dummy_Handler
#pragma weak SERCOM4_6_Handler=Dummy_Handler
#pragma weak SERCOM4_5_Handler=Dummy_Handler
#pragma weak SERCOM4_0_Handler=Dummy_Handler
#pragma weak SERCOM4_1_Handler=Dummy_Handler
#pragma weak SERCOM4_2_Handler=Dummy_Handler
#pragma weak SERCOM4_3_Handler=Dummy_Handler
#pragma weak SERCOM4_4_Handler=Dummy_Handler
#pragma weak SERCOM5_6_Handler=Dummy_Handler
#pragma weak SERCOM5_5_Handler=Dummy_Handler
#pragma weak SERCOM5_0_Handler=Dummy_Handler
#pragma weak SERCOM5_1_Handler=Dummy_Handler
#pragma weak SERCOM5_2_Handler=Dummy_Handler
#pragma weak SERCOM5_3_Handler=Dummy_Handler
#pragma weak SERCOM5_4_Handler=Dummy_Handler
#pragma weak SERCOM6_6_Handler=Dummy_Handler
#pragma weak SERCOM6_5_Handler=Dummy_Handler
#pragma weak SERCOM6_0_Handler=Dummy_Handler
#pragma weak SERCOM6_1_Handler=Dummy_Handler
#pragma weak SERCOM6_2_Handler=Dummy_Handler
#pragma weak SERCOM6_3_Handler=Dummy_Handler
#pragma weak SERCOM6_4_Handler=Dummy_Handler
#pragma weak SERCOM7_6_Handler=Dummy_Handler
#pragma weak SERCOM7_5_Handler=Dummy_Handler
#pragma weak SERCOM7_0_Handler=Dummy_Handler
#pragma weak SERCOM7_1_Handler=Dummy_Handler
#pragma weak SERCOM7_2_Handler=Dummy_Handler
#pragma weak SERCOM7_3_Handler=Dummy_Handler
#pragma weak SERCOM7_4_Handler=Dummy_Handler
#pragma weak SERCOM8_6_Handler=Dummy_Handler
#pragma weak SERCOM8_5_Handler=Dummy_Handler
#pragma weak SERCOM8_0_Handler=Dummy_Handler
#pragma weak SERCOM8_1_Handler=Dummy_Handler
#pragma weak SERCOM8_2_Handler=Dummy_Handler
#pragma weak SERCOM8_3_Handler=Dummy_Handler
#pragma weak SERCOM8_4_Handler=Dummy_Handler
#pragma weak SERCOM9_6_Handler=Dummy_Handler
#pragma weak SERCOM9_5_Handler=Dummy_Handler
#pragma weak SERCOM9_0_Handler=Dummy_Handler
#pragma weak SERCOM9_1_Handler=Dummy_Handler
#pragma weak SERCOM9_2_Handler=Dummy_Handler
#pragma weak SERCOM9_3_Handler=Dummy_Handler
#pragma weak SERCOM9_4_Handler=Dummy_Handler
#pragma weak TCC0_OTHER_Handler=Dummy_Handler
#pragma weak TCC0_CNT_TRIG_Handler=Dummy_Handler
#pragma weak TCC0_MC0_Handler=Dummy_Handler
#pragma weak TCC0_MC1_Handler=Dummy_Handler
#pragma weak TCC0_MC2_Handler=Dummy_Handler
#pragma weak TCC0_MC3_Handler=Dummy_Handler
#pragma weak TCC0_MC4_Handler=Dummy_Handler
#pragma weak TCC0_MC5_Handler=Dummy_Handler
#pragma weak TCC0_MC6_Handler=Dummy_Handler
#pragma weak TCC0_MC7_Handler=Dummy_Handler
#pragma weak TCC1_OTHER_Handler=Dummy_Handler
#pragma weak TCC1_CNT_TRIG_Handler=Dummy_Handler
#pragma weak TCC1_MC0_Handler=Dummy_Handler
#pragma weak TCC1_MC1_Handler=Dummy_Handler
#pragma weak TCC1_MC2_Handler=Dummy_Handler
#pragma weak TCC1_MC3_Handler=Dummy_Handler
#pragma weak TCC1_MC4_Handler=Dummy_Handler
#pragma weak TCC1_MC5_Handler=Dummy_Handler
#pragma weak TCC1_MC6_Handler=Dummy_Handler
#pragma weak TCC1_MC7_Handler=Dummy_Handler
#pragma weak TCC2_OTHER_Handler=Dummy_Handler
#pragma weak TCC2_CNT_TRIG_Handler=Dummy_Handler
#pragma weak TCC2_MC0_Handler=Dummy_Handler
#pragma weak TCC2_MC1_Handler=Dummy_Handler
#pragma weak TCC2_MC2_Handler=Dummy_Handler
#pragma weak TCC2_MC3_Handler=Dummy_Handler
#pragma weak TCC2_MC4_Handler=Dummy_Handler
#pragma weak TCC2_MC5_Handler=Dummy_Handler
#pragma weak TCC3_OTHER_Handler=Dummy_Handler
#pragma weak TCC3_CNT_TRIG_Handler=Dummy_Handler
#pragma weak TCC3_MC0_Handler=Dummy_Handler
#pragma weak TCC3_MC1_Handler=Dummy_Handler
#pragma weak TCC4_OTHER_Handler=Dummy_Handler
#pragma weak TCC4_CNT_TRIG_Handler=Dummy_Handler
#pragma weak TCC4_MC0_Handler=Dummy_Handler
#pragma weak TCC4_MC1_Handler=Dummy_Handler
#pragma weak TCC5_OTHER_Handler=Dummy_Handler
#pragma weak TCC5_CNT_TRIG_Handler=Dummy_Handler
#pragma weak TCC5_MC0_Handler=Dummy_Handler
#pragma weak TCC5_MC1_Handler=Dummy_Handler
#pragma weak TCC6_OTHER_Handler=Dummy_Handler
#pragma weak TCC6_CNT_TRIG_Handler=Dummy_Handler
#pragma weak TCC6_MC0_Handler=Dummy_Handler
#pragma weak TCC6_MC1_Handler=Dummy_Handler
#pragma weak TCC7_OTHER_Handler=Dummy_Handler
#pragma weak TCC7_CNT_TRIG_Handler=Dummy_Handler
#pragma weak TCC7_MC0_Handler=Dummy_Handler
#pragma weak TCC7_MC1_Handler=Dummy_Handler
#pragma weak TCC8_OTHER_Handler=Dummy_Handler
#pragma weak TCC8_CNT_TRIG_Handler=Dummy_Handler
#pragma weak TCC8_MC0_Handler=Dummy_Handler
#pragma weak TCC8_MC1_Handler=Dummy_Handler
#pragma weak TCC9_OTHER_Handler=Dummy_Handler
#pragma weak TCC9_CNT_TRIG_Handler=Dummy_Handler
#pragma weak TCC9_MC0_Handler=Dummy_Handler
#pragma weak TCC9_MC1_Handler=Dummy_Handler
#pragma weak TCC9_MC2_Handler=Dummy_Handler
#pragma weak TCC9_MC3_Handler=Dummy_Handler
#pragma weak TCC9_MC4_Handler=Dummy_Handler
#pragma weak TCC9_MC5_Handler=Dummy_Handler
#pragma weak ADC_GLOBAL_Handler=Dummy_Handler
#pragma weak ADC_CORE1_Handler=Dummy_Handler
#pragma weak ADC_CORE2_Handler=Dummy_Handler
#pragma weak ADC_CORE3_Handler=Dummy_Handler
#pragma weak ADC_CORE4_Handler=Dummy_Handler
#pragma weak AC_Handler=Dummy_Handler
#pragma weak PTC_Handler=Dummy_Handler
#pragma weak SPI_IXS0_Handler=Dummy_Handler
#pragma weak SPI_IXS1_Handler=Dummy_Handler
#pragma weak CAN0_Handler=Dummy_Handler
#pragma weak CAN1_Handler=Dummy_Handler
#pragma weak CAN2_Handler=Dummy_Handler
#pragma weak CAN3_Handler=Dummy_Handler
#pragma weak CAN4_Handler=Dummy_Handler
#pragma weak CAN5_Handler=Dummy_Handler
#pragma weak ETH_PRI_Q_0_Handler=Dummy_Handler
#pragma weak ETH_PRI_Q_1_Handler=Dummy_Handler
#pragma weak ETH_PRI_Q_2_Handler=Dummy_Handler
#pragma weak ETH_PRI_Q_3_Handler=Dummy_Handler
#pragma weak ETH_PRI_Q_4_Handler=Dummy_Handler
#pragma weak ETH_PRI_Q_5_Handler=Dummy_Handler
#pragma weak SQI0_Handler=Dummy_Handler
#pragma weak SQI1_Handler=Dummy_Handler
#pragma weak TRNG_Handler=Dummy_Handler
#pragma weak SDMMC0_Handler=Dummy_Handler
#pragma weak SDMMC1_Handler=Dummy_Handler
#pragma weak USBHS0_Handler=Dummy_Handler
#pragma weak USBHS1_Handler=Dummy_Handler
#pragma weak HSM_TAMPER_Handler=Dummy_Handler
#pragma weak HSM_TXINT_Handler=Dummy_Handler
#pragma weak HSM_RXINT_Handler=Dummy_Handler
#pragma weak MLB_GENERAL_Handler=Dummy_Handler
#pragma weak MLB_BUSREQ_Handler=Dummy_Handler

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
        .pfnFCW_Handler                = (void*) FCW_Handler,    /* 0  Flash Write Control (FCW) */
        .pfnFCR_ECCERR_Handler         = (void*) FCR_ECCERR_Handler, /* 1  Flash Read Controller (FCR) */
        .pfnFCR_CRC_FAULT_Handler      = (void*) FCR_CRC_FAULT_Handler, /* 2  Flash Read Controller (FCR) */
        .pfnPM_Handler                 = (void*) PM_Handler,     /* 3  Power Manager */
        .pfnSUPC_Handler               = (void*) SUPC_Handler,   /* 4  Supply Controller */
        .pfnOSCCTRL_FAIL_Handler       = (void*) OSCCTRL_FAIL_Handler, /* 5  Oscillators Control */
        .pfnOSCCTRL_XOSCRDY_Handler    = (void*) OSCCTRL_XOSCRDY_Handler, /* 6  Oscillators Control */
        .pfnOSCCTRL_DFLLRDY_Handler    = (void*) OSCCTRL_DFLLRDY_Handler, /* 7  Oscillators Control */
        .pfnOSCCTRL_OTHER_Handler      = (void*) OSCCTRL_OTHER_Handler, /* 8  Oscillators Control */
        .pfnOSCCTRL_LOCK_Handler       = (void*) OSCCTRL_LOCK_Handler, /* 9  Oscillators Control */
        .pfnOSC32KCTRL_FAIL_Handler    = (void*) OSC32KCTRL_FAIL_Handler, /* 10 32kHz Oscillators Control */
        .pfnOSC32KCTRL_RDY_Handler     = (void*) OSC32KCTRL_RDY_Handler, /* 11 32kHz Oscillators Control */
        .pfnMCLK_Handler               = (void*) MCLK_Handler,   /* 12 Main Clock */
        .pfnFREQM_Handler              = (void*) FREQM_Handler,  /* 13 Frequency Meter */
        .pfnWDT_Handler                = (void*) WDT_Handler,    /* 14 Watchdog Timer */
        .pfnRTC_TAMPER_Handler         = (void*) RTC_TAMPER_Handler, /* 15 Real-Time Counter */
        .pfnRTC_OVF_Handler            = (void*) RTC_OVF_Handler, /* 16 Real-Time Counter */
        .pfnRTC_PERIOD_Handler         = (void*) RTC_PERIOD_Handler, /* 17 Real-Time Counter */
        .pfnRTC_COMPARE_Handler        = (void*) RTC_COMPARE_Handler, /* 18 Real-Time Counter */
        .pfnEIC_EXTINT_0_Handler       = (void*) EIC_EXTINT_0_Handler, /* 19 External Interrupt Controller */
        .pfnEIC_EXTINT_1_Handler       = (void*) EIC_EXTINT_1_Handler, /* 20 External Interrupt Controller */
        .pfnEIC_EXTINT_2_Handler       = (void*) EIC_EXTINT_2_Handler, /* 21 External Interrupt Controller */
        .pfnEIC_EXTINT_3_Handler       = (void*) EIC_EXTINT_3_Handler, /* 22 External Interrupt Controller */
        .pfnEIC_EXTINT_4_Handler       = (void*) EIC_EXTINT_4_Handler, /* 23 External Interrupt Controller */
        .pfnEIC_EXTINT_5_Handler       = (void*) EIC_EXTINT_5_Handler, /* 24 External Interrupt Controller */
        .pfnEIC_EXTINT_6_Handler       = (void*) EIC_EXTINT_6_Handler, /* 25 External Interrupt Controller */
        .pfnEIC_EXTINT_7_Handler       = (void*) EIC_EXTINT_7_Handler, /* 26 External Interrupt Controller */
        .pfnEIC_EXTINT_8_Handler       = (void*) EIC_EXTINT_8_Handler, /* 27 External Interrupt Controller */
        .pfnEIC_EXTINT_9_Handler       = (void*) EIC_EXTINT_9_Handler, /* 28 External Interrupt Controller */
        .pfnEIC_EXTINT_10_Handler      = (void*) EIC_EXTINT_10_Handler, /* 29 External Interrupt Controller */
        .pfnEIC_EXTINT_11_Handler      = (void*) EIC_EXTINT_11_Handler, /* 30 External Interrupt Controller */
        .pfnEIC_EXTINT_12_Handler      = (void*) EIC_EXTINT_12_Handler, /* 31 External Interrupt Controller */
        .pfnEIC_EXTINT_13_Handler      = (void*) EIC_EXTINT_13_Handler, /* 32 External Interrupt Controller */
        .pfnEIC_EXTINT_14_Handler      = (void*) EIC_EXTINT_14_Handler, /* 33 External Interrupt Controller */
        .pfnEIC_EXTINT_15_Handler      = (void*) EIC_EXTINT_15_Handler, /* 34 External Interrupt Controller */
        .pfnPAC_Handler                = (void*) PAC_Handler,    /* 35 Peripheral Access Controller */
        .pfnDRMTCM_Handler             = (void*) DRMTCM_Handler, /* 36 DRM TCM ECC */
        .pfnMCRAMC_Handler             = (void*) MCRAMC_Handler, /* 37 Multi-Channel RAM Controller */
        .pfnTRAM_Handler               = (void*) TRAM_Handler,   /* 38 TrustRAM */
        .pfnDMA_PRI3_Handler           = (void*) DMA_PRI3_Handler, /* 39 Direct Memory Access Controller */
        .pfnDMA_PRI2_Handler           = (void*) DMA_PRI2_Handler, /* 40 Direct Memory Access Controller */
        .pfnDMA_PRI1_Handler           = (void*) DMA_PRI1_Handler, /* 41 Direct Memory Access Controller */
        .pfnDMA_PRI0_Handler           = (void*) DMA_PRI0_Handler, /* 42 Direct Memory Access Controller */
        .pfnEVSYS_0_Handler            = (void*) EVSYS_0_Handler, /* 43 Event System Interface */
        .pfnEVSYS_1_Handler            = (void*) EVSYS_1_Handler, /* 44 Event System Interface */
        .pfnEVSYS_2_Handler            = (void*) EVSYS_2_Handler, /* 45 Event System Interface */
        .pfnEVSYS_3_Handler            = (void*) EVSYS_3_Handler, /* 46 Event System Interface */
        .pfnEVSYS_4_Handler            = (void*) EVSYS_4_Handler, /* 47 Event System Interface */
        .pfnEVSYS_5_Handler            = (void*) EVSYS_5_Handler, /* 48 Event System Interface */
        .pfnEVSYS_6_Handler            = (void*) EVSYS_6_Handler, /* 49 Event System Interface */
        .pfnEVSYS_7_Handler            = (void*) EVSYS_7_Handler, /* 50 Event System Interface */
        .pfnEVSYS_8_Handler            = (void*) EVSYS_8_Handler, /* 51 Event System Interface */
        .pfnEVSYS_9_Handler            = (void*) EVSYS_9_Handler, /* 52 Event System Interface */
        .pfnEVSYS_10_Handler           = (void*) EVSYS_10_Handler, /* 53 Event System Interface */
        .pfnEVSYS_11_Handler           = (void*) EVSYS_11_Handler, /* 54 Event System Interface */
        .pfnSERCOM0_6_Handler          = (void*) SERCOM0_6_Handler, /* 55 Serial Communication Interface */
        .pfnSERCOM0_5_Handler          = (void*) SERCOM0_5_Handler, /* 56 Serial Communication Interface */
        .pfnSERCOM0_0_Handler          = (void*) SERCOM0_0_Handler, /* 57 Serial Communication Interface */
        .pfnSERCOM0_1_Handler          = (void*) SERCOM0_1_Handler, /* 58 Serial Communication Interface */
        .pfnSERCOM0_2_Handler          = (void*) SERCOM0_2_Handler, /* 59 Serial Communication Interface */
        .pfnSERCOM0_3_Handler          = (void*) SERCOM0_3_Handler, /* 60 Serial Communication Interface */
        .pfnSERCOM0_4_Handler          = (void*) SERCOM0_4_Handler, /* 61 Serial Communication Interface */
        .pfnSERCOM1_6_Handler          = (void*) SERCOM1_6_Handler, /* 62 Serial Communication Interface */
        .pfnSERCOM1_5_Handler          = (void*) SERCOM1_5_Handler, /* 63 Serial Communication Interface */
        .pfnSERCOM1_0_Handler          = (void*) SERCOM1_0_Handler, /* 64 Serial Communication Interface */
        .pfnSERCOM1_1_Handler          = (void*) SERCOM1_1_Handler, /* 65 Serial Communication Interface */
        .pfnSERCOM1_2_Handler          = (void*) SERCOM1_2_Handler, /* 66 Serial Communication Interface */
        .pfnSERCOM1_3_Handler          = (void*) SERCOM1_3_Handler, /* 67 Serial Communication Interface */
        .pfnSERCOM1_4_Handler          = (void*) SERCOM1_4_Handler, /* 68 Serial Communication Interface */
        .pfnSERCOM2_6_Handler          = (void*) SERCOM2_6_Handler, /* 69 Serial Communication Interface */
        .pfnSERCOM2_5_Handler          = (void*) SERCOM2_5_Handler, /* 70 Serial Communication Interface */
        .pfnSERCOM2_0_Handler          = (void*) SERCOM2_0_Handler, /* 71 Serial Communication Interface */
        .pfnSERCOM2_1_Handler          = (void*) SERCOM2_1_Handler, /* 72 Serial Communication Interface */
        .pfnSERCOM2_2_Handler          = (void*) SERCOM2_2_Handler, /* 73 Serial Communication Interface */
        .pfnSERCOM2_3_Handler          = (void*) SERCOM2_3_Handler, /* 74 Serial Communication Interface */
        .pfnSERCOM2_4_Handler          = (void*) SERCOM2_4_Handler, /* 75 Serial Communication Interface */
        .pfnSERCOM3_6_Handler          = (void*) SERCOM3_6_Handler, /* 76 Serial Communication Interface */
        .pfnSERCOM3_5_Handler          = (void*) SERCOM3_5_Handler, /* 77 Serial Communication Interface */
        .pfnSERCOM3_0_Handler          = (void*) SERCOM3_0_Handler, /* 78 Serial Communication Interface */
        .pfnSERCOM3_1_Handler          = (void*) SERCOM3_1_Handler, /* 79 Serial Communication Interface */
        .pfnSERCOM3_2_Handler          = (void*) SERCOM3_2_Handler, /* 80 Serial Communication Interface */
        .pfnSERCOM3_3_Handler          = (void*) SERCOM3_3_Handler, /* 81 Serial Communication Interface */
        .pfnSERCOM3_4_Handler          = (void*) SERCOM3_4_Handler, /* 82 Serial Communication Interface */
        .pfnSERCOM4_6_Handler          = (void*) SERCOM4_6_Handler, /* 83 Serial Communication Interface */
        .pfnSERCOM4_5_Handler          = (void*) SERCOM4_5_Handler, /* 84 Serial Communication Interface */
        .pfnSERCOM4_0_Handler          = (void*) SERCOM4_0_Handler, /* 85 Serial Communication Interface */
        .pfnSERCOM4_1_Handler          = (void*) SERCOM4_1_Handler, /* 86 Serial Communication Interface */
        .pfnSERCOM4_2_Handler          = (void*) SERCOM4_2_Handler, /* 87 Serial Communication Interface */
        .pfnSERCOM4_3_Handler          = (void*) SERCOM4_3_Handler, /* 88 Serial Communication Interface */
        .pfnSERCOM4_4_Handler          = (void*) SERCOM4_4_Handler, /* 89 Serial Communication Interface */
        .pfnSERCOM5_6_Handler          = (void*) SERCOM5_6_Handler, /* 90 Serial Communication Interface */
        .pfnSERCOM5_5_Handler          = (void*) SERCOM5_5_Handler, /* 91 Serial Communication Interface */
        .pfnSERCOM5_0_Handler          = (void*) SERCOM5_0_Handler, /* 92 Serial Communication Interface */
        .pfnSERCOM5_1_Handler          = (void*) SERCOM5_1_Handler, /* 93 Serial Communication Interface */
        .pfnSERCOM5_2_Handler          = (void*) SERCOM5_2_Handler, /* 94 Serial Communication Interface */
        .pfnSERCOM5_3_Handler          = (void*) SERCOM5_3_Handler, /* 95 Serial Communication Interface */
        .pfnSERCOM5_4_Handler          = (void*) SERCOM5_4_Handler, /* 96 Serial Communication Interface */
        .pfnSERCOM6_6_Handler          = (void*) SERCOM6_6_Handler, /* 97 Serial Communication Interface */
        .pfnSERCOM6_5_Handler          = (void*) SERCOM6_5_Handler, /* 98 Serial Communication Interface */
        .pfnSERCOM6_0_Handler          = (void*) SERCOM6_0_Handler, /* 99 Serial Communication Interface */
        .pfnSERCOM6_1_Handler          = (void*) SERCOM6_1_Handler, /* 100 Serial Communication Interface */
        .pfnSERCOM6_2_Handler          = (void*) SERCOM6_2_Handler, /* 101 Serial Communication Interface */
        .pfnSERCOM6_3_Handler          = (void*) SERCOM6_3_Handler, /* 102 Serial Communication Interface */
        .pfnSERCOM6_4_Handler          = (void*) SERCOM6_4_Handler, /* 103 Serial Communication Interface */
        .pfnSERCOM7_6_Handler          = (void*) SERCOM7_6_Handler, /* 104 Serial Communication Interface */
        .pfnSERCOM7_5_Handler          = (void*) SERCOM7_5_Handler, /* 105 Serial Communication Interface */
        .pfnSERCOM7_0_Handler          = (void*) SERCOM7_0_Handler, /* 106 Serial Communication Interface */
        .pfnSERCOM7_1_Handler          = (void*) SERCOM7_1_Handler, /* 107 Serial Communication Interface */
        .pfnSERCOM7_2_Handler          = (void*) SERCOM7_2_Handler, /* 108 Serial Communication Interface */
        .pfnSERCOM7_3_Handler          = (void*) SERCOM7_3_Handler, /* 109 Serial Communication Interface */
        .pfnSERCOM7_4_Handler          = (void*) SERCOM7_4_Handler, /* 110 Serial Communication Interface */
        .pfnSERCOM8_6_Handler          = (void*) SERCOM8_6_Handler, /* 111 Serial Communication Interface */
        .pfnSERCOM8_5_Handler          = (void*) SERCOM8_5_Handler, /* 112 Serial Communication Interface */
        .pfnSERCOM8_0_Handler          = (void*) SERCOM8_0_Handler, /* 113 Serial Communication Interface */
        .pfnSERCOM8_1_Handler          = (void*) SERCOM8_1_Handler, /* 114 Serial Communication Interface */
        .pfnSERCOM8_2_Handler          = (void*) SERCOM8_2_Handler, /* 115 Serial Communication Interface */
        .pfnSERCOM8_3_Handler          = (void*) SERCOM8_3_Handler, /* 116 Serial Communication Interface */
        .pfnSERCOM8_4_Handler          = (void*) SERCOM8_4_Handler, /* 117 Serial Communication Interface */
        .pfnSERCOM9_6_Handler          = (void*) SERCOM9_6_Handler, /* 118 Serial Communication Interface */
        .pfnSERCOM9_5_Handler          = (void*) SERCOM9_5_Handler, /* 119 Serial Communication Interface */
        .pfnSERCOM9_0_Handler          = (void*) SERCOM9_0_Handler, /* 120 Serial Communication Interface */
        .pfnSERCOM9_1_Handler          = (void*) SERCOM9_1_Handler, /* 121 Serial Communication Interface */
        .pfnSERCOM9_2_Handler          = (void*) SERCOM9_2_Handler, /* 122 Serial Communication Interface */
        .pfnSERCOM9_3_Handler          = (void*) SERCOM9_3_Handler, /* 123 Serial Communication Interface */
        .pfnSERCOM9_4_Handler          = (void*) SERCOM9_4_Handler, /* 124 Serial Communication Interface */
        .pfnTCC0_OTHER_Handler         = (void*) TCC0_OTHER_Handler, /* 125 Timer Counter for Control Applications */
        .pfnTCC0_CNT_TRIG_Handler      = (void*) TCC0_CNT_TRIG_Handler, /* 126 Timer Counter for Control Applications */
        .pfnTCC0_MC0_Handler           = (void*) TCC0_MC0_Handler, /* 127 Timer Counter for Control Applications */
        .pfnTCC0_MC1_Handler           = (void*) TCC0_MC1_Handler, /* 128 Timer Counter for Control Applications */
        .pfnTCC0_MC2_Handler           = (void*) TCC0_MC2_Handler, /* 129 Timer Counter for Control Applications */
        .pfnTCC0_MC3_Handler           = (void*) TCC0_MC3_Handler, /* 130 Timer Counter for Control Applications */
        .pfnTCC0_MC4_Handler           = (void*) TCC0_MC4_Handler, /* 131 Timer Counter for Control Applications */
        .pfnTCC0_MC5_Handler           = (void*) TCC0_MC5_Handler, /* 132 Timer Counter for Control Applications */
        .pfnTCC0_MC6_Handler           = (void*) TCC0_MC6_Handler, /* 133 Timer Counter for Control Applications */
        .pfnTCC0_MC7_Handler           = (void*) TCC0_MC7_Handler, /* 134 Timer Counter for Control Applications */
        .pfnTCC1_OTHER_Handler         = (void*) TCC1_OTHER_Handler, /* 135 Timer Counter for Control Applications */
        .pfnTCC1_CNT_TRIG_Handler      = (void*) TCC1_CNT_TRIG_Handler, /* 136 Timer Counter for Control Applications */
        .pfnTCC1_MC0_Handler           = (void*) TCC1_MC0_Handler, /* 137 Timer Counter for Control Applications */
        .pfnTCC1_MC1_Handler           = (void*) TCC1_MC1_Handler, /* 138 Timer Counter for Control Applications */
        .pfnTCC1_MC2_Handler           = (void*) TCC1_MC2_Handler, /* 139 Timer Counter for Control Applications */
        .pfnTCC1_MC3_Handler           = (void*) TCC1_MC3_Handler, /* 140 Timer Counter for Control Applications */
        .pfnTCC1_MC4_Handler           = (void*) TCC1_MC4_Handler, /* 141 Timer Counter for Control Applications */
        .pfnTCC1_MC5_Handler           = (void*) TCC1_MC5_Handler, /* 142 Timer Counter for Control Applications */
        .pfnTCC1_MC6_Handler           = (void*) TCC1_MC6_Handler, /* 143 Timer Counter for Control Applications */
        .pfnTCC1_MC7_Handler           = (void*) TCC1_MC7_Handler, /* 144 Timer Counter for Control Applications */
        .pfnTCC2_OTHER_Handler         = (void*) TCC2_OTHER_Handler, /* 145 Timer Counter for Control Applications */
        .pfnTCC2_CNT_TRIG_Handler      = (void*) TCC2_CNT_TRIG_Handler, /* 146 Timer Counter for Control Applications */
        .pfnTCC2_MC0_Handler           = (void*) TCC2_MC0_Handler, /* 147 Timer Counter for Control Applications */
        .pfnTCC2_MC1_Handler           = (void*) TCC2_MC1_Handler, /* 148 Timer Counter for Control Applications */
        .pfnTCC2_MC2_Handler           = (void*) TCC2_MC2_Handler, /* 149 Timer Counter for Control Applications */
        .pfnTCC2_MC3_Handler           = (void*) TCC2_MC3_Handler, /* 150 Timer Counter for Control Applications */
        .pfnTCC2_MC4_Handler           = (void*) TCC2_MC4_Handler, /* 151 Timer Counter for Control Applications */
        .pfnTCC2_MC5_Handler           = (void*) TCC2_MC5_Handler, /* 152 Timer Counter for Control Applications */
        .pfnTCC3_OTHER_Handler         = (void*) TCC3_OTHER_Handler, /* 153 Timer Counter for Control Applications */
        .pfnTCC3_CNT_TRIG_Handler      = (void*) TCC3_CNT_TRIG_Handler, /* 154 Timer Counter for Control Applications */
        .pfnTCC3_MC0_Handler           = (void*) TCC3_MC0_Handler, /* 155 Timer Counter for Control Applications */
        .pfnTCC3_MC1_Handler           = (void*) TCC3_MC1_Handler, /* 156 Timer Counter for Control Applications */
        .pfnTCC4_OTHER_Handler         = (void*) TCC4_OTHER_Handler, /* 157 Timer Counter for Control Applications */
        .pfnTCC4_CNT_TRIG_Handler      = (void*) TCC4_CNT_TRIG_Handler, /* 158 Timer Counter for Control Applications */
        .pfnTCC4_MC0_Handler           = (void*) TCC4_MC0_Handler, /* 159 Timer Counter for Control Applications */
        .pfnTCC4_MC1_Handler           = (void*) TCC4_MC1_Handler, /* 160 Timer Counter for Control Applications */
        .pfnTCC5_OTHER_Handler         = (void*) TCC5_OTHER_Handler, /* 161 Timer Counter for Control Applications */
        .pfnTCC5_CNT_TRIG_Handler      = (void*) TCC5_CNT_TRIG_Handler, /* 162 Timer Counter for Control Applications */
        .pfnTCC5_MC0_Handler           = (void*) TCC5_MC0_Handler, /* 163 Timer Counter for Control Applications */
        .pfnTCC5_MC1_Handler           = (void*) TCC5_MC1_Handler, /* 164 Timer Counter for Control Applications */
        .pfnTCC6_OTHER_Handler         = (void*) TCC6_OTHER_Handler, /* 165 Timer Counter for Control Applications */
        .pfnTCC6_CNT_TRIG_Handler      = (void*) TCC6_CNT_TRIG_Handler, /* 166 Timer Counter for Control Applications */
        .pfnTCC6_MC0_Handler           = (void*) TCC6_MC0_Handler, /* 167 Timer Counter for Control Applications */
        .pfnTCC6_MC1_Handler           = (void*) TCC6_MC1_Handler, /* 168 Timer Counter for Control Applications */
        .pfnTCC7_OTHER_Handler         = (void*) TCC7_OTHER_Handler, /* 169 Timer Counter for Control Applications */
        .pfnTCC7_CNT_TRIG_Handler      = (void*) TCC7_CNT_TRIG_Handler, /* 170 Timer Counter for Control Applications */
        .pfnTCC7_MC0_Handler           = (void*) TCC7_MC0_Handler, /* 171 Timer Counter for Control Applications */
        .pfnTCC7_MC1_Handler           = (void*) TCC7_MC1_Handler, /* 172 Timer Counter for Control Applications */
        .pfnTCC8_OTHER_Handler         = (void*) TCC8_OTHER_Handler, /* 173 Timer Counter for Control Applications */
        .pfnTCC8_CNT_TRIG_Handler      = (void*) TCC8_CNT_TRIG_Handler, /* 174 Timer Counter for Control Applications */
        .pfnTCC8_MC0_Handler           = (void*) TCC8_MC0_Handler, /* 175 Timer Counter for Control Applications */
        .pfnTCC8_MC1_Handler           = (void*) TCC8_MC1_Handler, /* 176 Timer Counter for Control Applications */
        .pfnTCC9_OTHER_Handler         = (void*) TCC9_OTHER_Handler, /* 177 Timer Counter for Control Applications */
        .pfnTCC9_CNT_TRIG_Handler      = (void*) TCC9_CNT_TRIG_Handler, /* 178 Timer Counter for Control Applications */
        .pfnTCC9_MC0_Handler           = (void*) TCC9_MC0_Handler, /* 179 Timer Counter for Control Applications */
        .pfnTCC9_MC1_Handler           = (void*) TCC9_MC1_Handler, /* 180 Timer Counter for Control Applications */
        .pfnTCC9_MC2_Handler           = (void*) TCC9_MC2_Handler, /* 181 Timer Counter for Control Applications */
        .pfnTCC9_MC3_Handler           = (void*) TCC9_MC3_Handler, /* 182 Timer Counter for Control Applications */
        .pfnTCC9_MC4_Handler           = (void*) TCC9_MC4_Handler, /* 183 Timer Counter for Control Applications */
        .pfnTCC9_MC5_Handler           = (void*) TCC9_MC5_Handler, /* 184 Timer Counter for Control Applications */
        .pfnADC_GLOBAL_Handler         = (void*) ADC_GLOBAL_Handler, /* 185 ADC Controller */
        .pfnADC_CORE1_Handler          = (void*) ADC_CORE1_Handler, /* 186 ADC Controller */
        .pfnADC_CORE2_Handler          = (void*) ADC_CORE2_Handler, /* 187 ADC Controller */
        .pfnADC_CORE3_Handler          = (void*) ADC_CORE3_Handler, /* 188 ADC Controller */
        .pfnADC_CORE4_Handler          = (void*) ADC_CORE4_Handler, /* 189 ADC Controller */
        .pfnAC_Handler                 = (void*) AC_Handler,     /* 190 Analog Comparator Controller */
        .pfnPTC_Handler                = (void*) PTC_Handler,    /* 191 Peripheral Touch Controller */
        .pfnSPI_IXS0_Handler           = (void*) SPI_IXS0_Handler, /* 192 Audio SPI with 8 channels compatibilty */
        .pfnSPI_IXS1_Handler           = (void*) SPI_IXS1_Handler, /* 193 Audio SPI with 8 channels compatibilty */
        .pfnCAN0_Handler               = (void*) CAN0_Handler,   /* 194 Control Area Network */
        .pfnCAN1_Handler               = (void*) CAN1_Handler,   /* 195 Control Area Network */
        .pfnCAN2_Handler               = (void*) CAN2_Handler,   /* 196 Control Area Network */
        .pfnCAN3_Handler               = (void*) CAN3_Handler,   /* 197 Control Area Network */
        .pfnCAN4_Handler               = (void*) CAN4_Handler,   /* 198 Control Area Network */
        .pfnCAN5_Handler               = (void*) CAN5_Handler,   /* 199 Control Area Network */
        .pvReserved200                 = (void*) (0UL),          /* 200 Reserved */
        .pvReserved201                 = (void*) (0UL),          /* 201 Reserved */
        .pfnETH_PRI_Q_0_Handler        = (void*) ETH_PRI_Q_0_Handler, /* 202 Ethernet Controller */
        .pfnETH_PRI_Q_1_Handler        = (void*) ETH_PRI_Q_1_Handler, /* 203 Ethernet Controller */
        .pfnETH_PRI_Q_2_Handler        = (void*) ETH_PRI_Q_2_Handler, /* 204 Ethernet Controller */
        .pfnETH_PRI_Q_3_Handler        = (void*) ETH_PRI_Q_3_Handler, /* 205 Ethernet Controller */
        .pfnETH_PRI_Q_4_Handler        = (void*) ETH_PRI_Q_4_Handler, /* 206 Ethernet Controller */
        .pfnETH_PRI_Q_5_Handler        = (void*) ETH_PRI_Q_5_Handler, /* 207 Ethernet Controller */
        .pfnSQI0_Handler               = (void*) SQI0_Handler,   /* 208 Polaris Serial Quad Interface SIB */
        .pfnSQI1_Handler               = (void*) SQI1_Handler,   /* 209 Polaris Serial Quad Interface SIB */
        .pfnTRNG_Handler               = (void*) TRNG_Handler,   /* 210 True Random Generator */
        .pfnSDMMC0_Handler             = (void*) SDMMC0_Handler, /* 211 SD/MMC Host Controller */
        .pfnSDMMC1_Handler             = (void*) SDMMC1_Handler, /* 212 SD/MMC Host Controller */
        .pfnUSBHS0_Handler             = (void*) USBHS0_Handler, /* 213 USB High Speed */
        .pfnUSBHS1_Handler             = (void*) USBHS1_Handler, /* 214 USB High Speed */
        .pfnHSM_TAMPER_Handler         = (void*) HSM_TAMPER_Handler, /* 215 Hardware Security Module */
        .pfnHSM_TXINT_Handler          = (void*) HSM_TXINT_Handler, /* 216 Hardware Security Module */
        .pfnHSM_RXINT_Handler          = (void*) HSM_RXINT_Handler, /* 217 Hardware Security Module */
        .pfnMLB_GENERAL_Handler        = (void*) MLB_GENERAL_Handler, /* 218 Media Local Bus */
        .pfnMLB_BUSREQ_Handler         = (void*) MLB_BUSREQ_Handler, /* 219 Media Local Bus */
        .pvReserved220                 = (void*) (0UL),          /* 220 Reserved */
        .pvReserved221                 = (void*) (0UL)           /* 221 Reserved */
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
