/**
 * \file
 *
 * \brief GCC startup file for PIC32CZ4010CA90100
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

#include "pic32cz4010ca90100.h"

/* Initialize segments */
extern uint32_t _sfixed;
extern uint32_t _efixed;
extern uint32_t _etext;
extern uint32_t _srelocate;
extern uint32_t _erelocate;
extern uint32_t _szero;
extern uint32_t _ezero;
extern uint32_t _sstack;
extern uint32_t _estack;

/* Optional application-provided functions */
extern void __attribute__((weak,long_call)) _on_reset(void);
extern void __attribute__((weak,long_call)) _on_bootstrap(void);

/** \cond DOXYGEN_SHOULD_SKIP_THIS */
int main(void);
/** \endcond */

void __libc_init_array(void);

/* Reset handler */
void Reset_Handler(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M7 core handlers */
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
void FCW_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FCR_ECCERR_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FCR_CRC_FAULT_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PM_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OSCCTRL_FAIL_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OSCCTRL_XOSCRDY_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OSCCTRL_DFLLRDY_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OSCCTRL_OTHER_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OSCCTRL_LOCK_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OSC32KCTRL_FAIL_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OSC32KCTRL_RDY_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCLK_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FREQM_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WDT_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_TAMPER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_OVF_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_PERIOD_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_COMPARE_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_0_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_1_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_2_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_3_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_4_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_5_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_6_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_7_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_8_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_9_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_10_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_11_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_12_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_13_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_14_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_15_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PAC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DRMTCM_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCRAMC_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRAM_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_PRI3_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_PRI2_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_PRI1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_PRI0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_3_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_4_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_5_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_6_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_7_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_8_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_9_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_10_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_11_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_6_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_5_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_3_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_4_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_6_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_5_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_3_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_4_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_6_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_5_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_3_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_4_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_6_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_5_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_3_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_4_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_OTHER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_CNT_TRIG_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC2_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC3_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC4_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC5_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC6_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_MC7_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_OTHER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_CNT_TRIG_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC2_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC3_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC4_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC5_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC6_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_MC7_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_OTHER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_CNT_TRIG_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_MC0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_MC1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_MC2_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_MC3_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_MC4_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_MC5_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC3_OTHER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC3_CNT_TRIG_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC3_MC0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC3_MC1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC4_OTHER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC4_CNT_TRIG_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC4_MC0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC4_MC1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC5_OTHER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC5_CNT_TRIG_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC5_MC0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC5_MC1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC6_OTHER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC6_CNT_TRIG_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC6_MC0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC6_MC1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC7_OTHER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC7_CNT_TRIG_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC7_MC0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC7_MC1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC8_OTHER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC8_CNT_TRIG_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC8_MC0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC8_MC1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC9_OTHER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC9_CNT_TRIG_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC9_MC0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC9_MC1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC9_MC2_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC9_MC3_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC9_MC4_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC9_MC5_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_GLOBAL_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_CORE1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_CORE2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_CORE3_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_CORE4_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AC_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PTC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPI_IXS0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAN0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAN1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ETH_PRI_Q_0_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ETH_PRI_Q_1_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ETH_PRI_Q_2_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ETH_PRI_Q_3_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ETH_PRI_Q_4_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ETH_PRI_Q_5_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SQI0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SDMMC0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USBHS0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HSM_TAMPER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HSM_TXINT_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HSM_RXINT_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MLB_GENERAL_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MLB_BUSREQ_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Exception Table */
__attribute__ ((section(".vectors")))
const DeviceVectors exception_table = {

        /* Configure Initial Stack Pointer, using linker-generated symbols */
        .pvStack = (void*) (&_estack),

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
        .pvReserved83                  = (void*) (0UL),          /* 83 Reserved */
        .pvReserved84                  = (void*) (0UL),          /* 84 Reserved */
        .pvReserved85                  = (void*) (0UL),          /* 85 Reserved */
        .pvReserved86                  = (void*) (0UL),          /* 86 Reserved */
        .pvReserved87                  = (void*) (0UL),          /* 87 Reserved */
        .pvReserved88                  = (void*) (0UL),          /* 88 Reserved */
        .pvReserved89                  = (void*) (0UL),          /* 89 Reserved */
        .pvReserved90                  = (void*) (0UL),          /* 90 Reserved */
        .pvReserved91                  = (void*) (0UL),          /* 91 Reserved */
        .pvReserved92                  = (void*) (0UL),          /* 92 Reserved */
        .pvReserved93                  = (void*) (0UL),          /* 93 Reserved */
        .pvReserved94                  = (void*) (0UL),          /* 94 Reserved */
        .pvReserved95                  = (void*) (0UL),          /* 95 Reserved */
        .pvReserved96                  = (void*) (0UL),          /* 96 Reserved */
        .pvReserved97                  = (void*) (0UL),          /* 97 Reserved */
        .pvReserved98                  = (void*) (0UL),          /* 98 Reserved */
        .pvReserved99                  = (void*) (0UL),          /* 99 Reserved */
        .pvReserved100                 = (void*) (0UL),          /* 100 Reserved */
        .pvReserved101                 = (void*) (0UL),          /* 101 Reserved */
        .pvReserved102                 = (void*) (0UL),          /* 102 Reserved */
        .pvReserved103                 = (void*) (0UL),          /* 103 Reserved */
        .pvReserved104                 = (void*) (0UL),          /* 104 Reserved */
        .pvReserved105                 = (void*) (0UL),          /* 105 Reserved */
        .pvReserved106                 = (void*) (0UL),          /* 106 Reserved */
        .pvReserved107                 = (void*) (0UL),          /* 107 Reserved */
        .pvReserved108                 = (void*) (0UL),          /* 108 Reserved */
        .pvReserved109                 = (void*) (0UL),          /* 109 Reserved */
        .pvReserved110                 = (void*) (0UL),          /* 110 Reserved */
        .pvReserved111                 = (void*) (0UL),          /* 111 Reserved */
        .pvReserved112                 = (void*) (0UL),          /* 112 Reserved */
        .pvReserved113                 = (void*) (0UL),          /* 113 Reserved */
        .pvReserved114                 = (void*) (0UL),          /* 114 Reserved */
        .pvReserved115                 = (void*) (0UL),          /* 115 Reserved */
        .pvReserved116                 = (void*) (0UL),          /* 116 Reserved */
        .pvReserved117                 = (void*) (0UL),          /* 117 Reserved */
        .pvReserved118                 = (void*) (0UL),          /* 118 Reserved */
        .pvReserved119                 = (void*) (0UL),          /* 119 Reserved */
        .pvReserved120                 = (void*) (0UL),          /* 120 Reserved */
        .pvReserved121                 = (void*) (0UL),          /* 121 Reserved */
        .pvReserved122                 = (void*) (0UL),          /* 122 Reserved */
        .pvReserved123                 = (void*) (0UL),          /* 123 Reserved */
        .pvReserved124                 = (void*) (0UL),          /* 124 Reserved */
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
        .pvReserved193                 = (void*) (0UL),          /* 193 Reserved */
        .pfnCAN0_Handler               = (void*) CAN0_Handler,   /* 194 Control Area Network */
        .pfnCAN1_Handler               = (void*) CAN1_Handler,   /* 195 Control Area Network */
        .pvReserved196                 = (void*) (0UL),          /* 196 Reserved */
        .pvReserved197                 = (void*) (0UL),          /* 197 Reserved */
        .pvReserved198                 = (void*) (0UL),          /* 198 Reserved */
        .pvReserved199                 = (void*) (0UL),          /* 199 Reserved */
        .pvReserved200                 = (void*) (0UL),          /* 200 Reserved */
        .pvReserved201                 = (void*) (0UL),          /* 201 Reserved */
        .pfnETH_PRI_Q_0_Handler        = (void*) ETH_PRI_Q_0_Handler, /* 202 Ethernet Controller */
        .pfnETH_PRI_Q_1_Handler        = (void*) ETH_PRI_Q_1_Handler, /* 203 Ethernet Controller */
        .pfnETH_PRI_Q_2_Handler        = (void*) ETH_PRI_Q_2_Handler, /* 204 Ethernet Controller */
        .pfnETH_PRI_Q_3_Handler        = (void*) ETH_PRI_Q_3_Handler, /* 205 Ethernet Controller */
        .pfnETH_PRI_Q_4_Handler        = (void*) ETH_PRI_Q_4_Handler, /* 206 Ethernet Controller */
        .pfnETH_PRI_Q_5_Handler        = (void*) ETH_PRI_Q_5_Handler, /* 207 Ethernet Controller */
        .pfnSQI0_Handler               = (void*) SQI0_Handler,   /* 208 Polaris Serial Quad Interface SIB */
        .pvReserved209                 = (void*) (0UL),          /* 209 Reserved */
        .pfnTRNG_Handler               = (void*) TRNG_Handler,   /* 210 True Random Generator */
        .pfnSDMMC0_Handler             = (void*) SDMMC0_Handler, /* 211 SD/MMC Host Controller */
        .pvReserved212                 = (void*) (0UL),          /* 212 Reserved */
        .pfnUSBHS0_Handler             = (void*) USBHS0_Handler, /* 213 USB High Speed */
        .pvReserved214                 = (void*) (0UL),          /* 214 Reserved */
        .pfnHSM_TAMPER_Handler         = (void*) HSM_TAMPER_Handler, /* 215 Hardware Security Module */
        .pfnHSM_TXINT_Handler          = (void*) HSM_TXINT_Handler, /* 216 Hardware Security Module */
        .pfnHSM_RXINT_Handler          = (void*) HSM_RXINT_Handler, /* 217 Hardware Security Module */
        .pfnMLB_GENERAL_Handler        = (void*) MLB_GENERAL_Handler, /* 218 Media Local Bus */
        .pfnMLB_BUSREQ_Handler         = (void*) MLB_BUSREQ_Handler, /* 219 Media Local Bus */
        .pvReserved220                 = (void*) (0UL),          /* 220 Reserved */
        .pvReserved221                 = (void*) (0UL)           /* 221 Reserved */
};

/**
 * \brief This is the code that gets called on processor reset.
 * To initialize the device, and call the main() routine.
 */
void Reset_Handler(void)
{
        uint32_t *pSrc, *pDest;

        /* Initialize the relocate segment */
        pSrc = &_etext;
        pDest = &_srelocate;

        if (pSrc != pDest) {
                for (; pDest < &_erelocate;) {
                        *pDest++ = *pSrc++;
                }
        }

        /* Clear the zero segment */
        for (pDest = &_szero; pDest < &_ezero;) {
                *pDest++ = 0;
        }

        /* Set the vector table base address */
        pSrc = (uint32_t *) & _sfixed;
        SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);

        /* Call the optional application-provided _on_reset() function. */
        if (_on_reset) {
                _on_reset();
        }

        /* Initialize the C library */
        __libc_init_array();

        /* Call the optional application-provided _on_bootstrap() function. */
        if (_on_bootstrap) {
                _on_bootstrap();
        }

        /* Branch to main function */
        main();

        /* Infinite loop */
        while (1);
}

/**
 * \brief Default interrupt handler for unused IRQs.
 */
void Dummy_Handler(void)
{
        while (1) {
        }
}
