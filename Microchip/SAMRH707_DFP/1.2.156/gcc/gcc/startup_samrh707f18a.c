/**
 * \file
 *
 * \brief GCC startup file for ATSAMRH707F18A
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

#include "samrh707f18a.h"

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
void SUPC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RSTC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTT_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WDT_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PMC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MATRIX0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NMIC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM2_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM3_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOD_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCW_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCF_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FPU_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IXC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CRCCU_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DACC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC4_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC5_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PWM0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PWM1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ICM_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN0_INT0_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN0_INT1_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN1_INT0_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN1_INT1_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCMECC_INTFIX_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCMECC_INTNOFIX_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXRAMECC_INTFIX_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXRAMECC_INTNOFIX_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SHA_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PCC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RSWDT_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HEFC_INT0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HEFC_INTFIX_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HEFC_INTNOFIX_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC6_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC7_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC8_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HEMC_INTHEMC_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HEMC_INTFIX_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HEMC_INTNOFIX_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SFR_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void XDMAC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPW_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IP1553_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

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
        .pfnSUPC_Handler               = (void*) SUPC_Handler,   /* 0  Supply Controller */
        .pfnRSTC_Handler               = (void*) RSTC_Handler,   /* 1  Reset Controller */
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 2  Real-time Clock */
        .pfnRTT_Handler                = (void*) RTT_Handler,    /* 3  Real-time Timer */
        .pfnWDT_Handler                = (void*) WDT_Handler,    /* 4  Watchdog Timer */
        .pfnPMC_Handler                = (void*) PMC_Handler,    /* 5  Power Management Controller */
        .pfnMATRIX0_Handler            = (void*) MATRIX0_Handler, /* 6  AHB Bus Matrix */
        .pfnFLEXCOM0_Handler           = (void*) FLEXCOM0_Handler, /* 7  Flexible Serial Communication */
        .pfnFLEXCOM1_Handler           = (void*) FLEXCOM1_Handler, /* 8  Flexible Serial Communication */
        .pfnNMIC_Handler               = (void*) NMIC_Handler,   /* 9  Non-maskable Interrupt Controller */
        .pfnPIOA_Handler               = (void*) PIOA_Handler,   /* 10 Parallel Input/Output Controller */
        .pfnPIOB_Handler               = (void*) PIOB_Handler,   /* 11 Parallel Input/Output Controller */
        .pfnPIOC_Handler               = (void*) PIOC_Handler,   /* 12 Parallel Input/Output Controller */
        .pfnFLEXCOM2_Handler           = (void*) FLEXCOM2_Handler, /* 13 Flexible Serial Communication */
        .pfnFLEXCOM3_Handler           = (void*) FLEXCOM3_Handler, /* 14 Flexible Serial Communication */
        .pvReserved15                  = (void*) (0UL),          /* 15 Reserved */
        .pfnPIOD_Handler               = (void*) PIOD_Handler,   /* 16 Parallel Input/Output Controller */
        .pvReserved17                  = (void*) (0UL),          /* 17 Reserved */
        .pfnCCW_Handler                = (void*) CCW_Handler,    /* 18 System Control Block */
        .pfnCCF_Handler                = (void*) CCF_Handler,    /* 19 System Control Block */
        .pfnFPU_Handler                = (void*) FPU_Handler,    /* 20 Floating Point Unit */
        .pfnIXC_Handler                = (void*) IXC_Handler,    /* 21 Floating Point Unit */
        .pfnCRCCU_Handler              = (void*) CRCCU_Handler,  /* 22 Cyclic Redundancy Check Calculation Unit */
        .pfnADC_Handler                = (void*) ADC_Handler,    /* 23 Analog-to-Digital Converter */
        .pfnDACC_Handler               = (void*) DACC_Handler,   /* 24 Digital-to-Analog Converter Controller */
        .pfnTC0_Handler                = (void*) TC0_Handler,    /* 25 Timer Counter */
        .pfnTC1_Handler                = (void*) TC1_Handler,    /* 26 Timer Counter */
        .pfnTC2_Handler                = (void*) TC2_Handler,    /* 27 Timer Counter */
        .pfnTC3_Handler                = (void*) TC3_Handler,    /* 28 Timer Counter */
        .pfnTC4_Handler                = (void*) TC4_Handler,    /* 29 Timer Counter */
        .pfnTC5_Handler                = (void*) TC5_Handler,    /* 30 Timer Counter */
        .pfnPWM0_Handler               = (void*) PWM0_Handler,   /* 31 Pulse Width Modulation Controller */
        .pfnPWM1_Handler               = (void*) PWM1_Handler,   /* 32 Pulse Width Modulation Controller */
        .pfnICM_Handler                = (void*) ICM_Handler,    /* 33 Integrity Check Monitor */
        .pvReserved34                  = (void*) (0UL),          /* 34 Reserved */
        .pvReserved35                  = (void*) (0UL),          /* 35 Reserved */
        .pfnMCAN0_INT0_Handler         = (void*) MCAN0_INT0_Handler, /* 36 Controller Area Network */
        .pfnMCAN0_INT1_Handler         = (void*) MCAN0_INT1_Handler, /* 37 Controller Area Network */
        .pfnMCAN1_INT0_Handler         = (void*) MCAN1_INT0_Handler, /* 38 Controller Area Network */
        .pfnMCAN1_INT1_Handler         = (void*) MCAN1_INT1_Handler, /* 39 Controller Area Network */
        .pfnTCMECC_INTFIX_Handler      = (void*) TCMECC_INTFIX_Handler, /* 40 TCMECC */
        .pfnTCMECC_INTNOFIX_Handler    = (void*) TCMECC_INTNOFIX_Handler, /* 41 TCMECC */
        .pfnFLEXRAMECC_INTFIX_Handler  = (void*) FLEXRAMECC_INTFIX_Handler, /* 42 FLEXRAMECC */
        .pfnFLEXRAMECC_INTNOFIX_Handler = (void*) FLEXRAMECC_INTNOFIX_Handler, /* 43 FLEXRAMECC */
        .pfnSHA_Handler                = (void*) SHA_Handler,    /* 44 Secure Hash Algorithm */
        .pfnPCC_Handler                = (void*) PCC_Handler,    /* 45 Parallel Capture Controller */
        .pvReserved46                  = (void*) (0UL),          /* 46 Reserved */
        .pfnRSWDT_Handler              = (void*) RSWDT_Handler,  /* 47 Reinforced Safety Watchdog Timer */
        .pvReserved48                  = (void*) (0UL),          /* 48 Reserved */
        .pvReserved49                  = (void*) (0UL),          /* 49 Reserved */
        .pfnHEFC_INT0_Handler          = (void*) HEFC_INT0_Handler, /* 50 Harden Embedded Flash Controller */
        .pfnHEFC_INTFIX_Handler        = (void*) HEFC_INTFIX_Handler, /* 51 Harden Embedded Flash Controller */
        .pfnHEFC_INTNOFIX_Handler      = (void*) HEFC_INTNOFIX_Handler, /* 52 Harden Embedded Flash Controller */
        .pfnTC6_Handler                = (void*) TC6_Handler,    /* 53 Timer Counter */
        .pfnTC7_Handler                = (void*) TC7_Handler,    /* 54 Timer Counter */
        .pfnTC8_Handler                = (void*) TC8_Handler,    /* 55 Timer Counter */
        .pvReserved56                  = (void*) (0UL),          /* 56 Reserved */
        .pvReserved57                  = (void*) (0UL),          /* 57 Reserved */
        .pvReserved58                  = (void*) (0UL),          /* 58 Reserved */
        .pfnHEMC_INTHEMC_Handler       = (void*) HEMC_INTHEMC_Handler, /* 59 HEMC */
        .pfnHEMC_INTFIX_Handler        = (void*) HEMC_INTFIX_Handler, /* 60 HEMC */
        .pfnHEMC_INTNOFIX_Handler      = (void*) HEMC_INTNOFIX_Handler, /* 61 HEMC */
        .pfnSFR_Handler                = (void*) SFR_Handler,    /* 62 Special Function Registers */
        .pfnTRNG_Handler               = (void*) TRNG_Handler,   /* 63 True Random Number Generator */
        .pfnXDMAC_Handler              = (void*) XDMAC_Handler,  /* 64 Extensible DMA Controller */
        .pfnSPW_Handler                = (void*) SPW_Handler,    /* 65 SpW */
        .pvReserved66                  = (void*) (0UL),          /* 66 Reserved */
        .pvReserved67                  = (void*) (0UL),          /* 67 Reserved */
        .pfnIP1553_Handler             = (void*) IP1553_Handler  /* 68 IP 1553 */
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
