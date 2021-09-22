/**
 * \file
 *
 * \brief IAR startup file for ATSAMRH707F18A
 *
 * Copyright (c) 2021 Microchip Technology Inc.
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
#pragma weak SUPC_Handler=Dummy_Handler
#pragma weak RSTC_Handler=Dummy_Handler
#pragma weak RTC_Handler=Dummy_Handler
#pragma weak RTT_Handler=Dummy_Handler
#pragma weak WDT_Handler=Dummy_Handler
#pragma weak PMC_Handler=Dummy_Handler
#pragma weak MATRIX0_Handler=Dummy_Handler
#pragma weak FLEXCOM0_Handler=Dummy_Handler
#pragma weak FLEXCOM1_Handler=Dummy_Handler
#pragma weak NMIC_Handler=Dummy_Handler
#pragma weak PIOA_Handler=Dummy_Handler
#pragma weak PIOB_Handler=Dummy_Handler
#pragma weak PIOC_Handler=Dummy_Handler
#pragma weak FLEXCOM2_Handler=Dummy_Handler
#pragma weak FLEXCOM3_Handler=Dummy_Handler
#pragma weak PIOD_Handler=Dummy_Handler
#pragma weak CCW_Handler=Dummy_Handler
#pragma weak CCF_Handler=Dummy_Handler
#pragma weak FPU_Handler=Dummy_Handler
#pragma weak IXC_Handler=Dummy_Handler
#pragma weak CRCCU_Handler=Dummy_Handler
#pragma weak ADC_Handler=Dummy_Handler
#pragma weak DACC_Handler=Dummy_Handler
#pragma weak TC0_CH0_Handler=Dummy_Handler
#pragma weak TC0_CH1_Handler=Dummy_Handler
#pragma weak TC0_CH2_Handler=Dummy_Handler
#pragma weak TC1_CH0_Handler=Dummy_Handler
#pragma weak TC1_CH1_Handler=Dummy_Handler
#pragma weak TC1_CH2_Handler=Dummy_Handler
#pragma weak PWM0_Handler=Dummy_Handler
#pragma weak PWM1_Handler=Dummy_Handler
#pragma weak ICM_Handler=Dummy_Handler
#pragma weak MCAN0_INT0_Handler=Dummy_Handler
#pragma weak MCAN0_INT1_Handler=Dummy_Handler
#pragma weak MCAN1_INT0_Handler=Dummy_Handler
#pragma weak MCAN1_INT1_Handler=Dummy_Handler
#pragma weak TCMECC_INTFIX_Handler=Dummy_Handler
#pragma weak TCMECC_INTNOFIX_Handler=Dummy_Handler
#pragma weak FLEXRAMECC_INTFIX_Handler=Dummy_Handler
#pragma weak FLEXRAMECC_INTNOFIX_Handler=Dummy_Handler
#pragma weak SHA_Handler=Dummy_Handler
#pragma weak PCC_Handler=Dummy_Handler
#pragma weak RSWDT_Handler=Dummy_Handler
#pragma weak HEFC_INT0_Handler=Dummy_Handler
#pragma weak HEFC_INTFIX_Handler=Dummy_Handler
#pragma weak HEFC_INTNOFIX_Handler=Dummy_Handler
#pragma weak TC2_CH0_Handler=Dummy_Handler
#pragma weak TC2_CH1_Handler=Dummy_Handler
#pragma weak TC2_CH2_Handler=Dummy_Handler
#pragma weak HEMC_INTSDRAMC_Handler=Dummy_Handler
#pragma weak HEMC_INTFIX_Handler=Dummy_Handler
#pragma weak HEMC_INTNOFIX_Handler=Dummy_Handler
#pragma weak SFR_Handler=Dummy_Handler
#pragma weak TRNG_Handler=Dummy_Handler
#pragma weak XDMAC_Handler=Dummy_Handler
#pragma weak SPW_Handler=Dummy_Handler
#pragma weak IP1553_Handler=Dummy_Handler

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
        .pfnTC0_CH0_Handler            = (void*) TC0_CH0_Handler, /* 25 Timer/Counter 0 Channel 0 */
        .pfnTC0_CH1_Handler            = (void*) TC0_CH1_Handler, /* 26 Timer/Counter 0 Channel 1 */
        .pfnTC0_CH2_Handler            = (void*) TC0_CH2_Handler, /* 27 Timer/Counter 0 Channel 2 */
        .pfnTC1_CH0_Handler            = (void*) TC1_CH0_Handler, /* 28 Timer/Counter 1 Channel 0 */
        .pfnTC1_CH1_Handler            = (void*) TC1_CH1_Handler, /* 29 Timer/Counter 1 Channel 1 */
        .pfnTC1_CH2_Handler            = (void*) TC1_CH2_Handler, /* 30 Timer/Counter 1 Channel 2 */
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
        .pfnTC2_CH0_Handler            = (void*) TC2_CH0_Handler, /* 53 Timer/Counter 2 Channel 0 */
        .pfnTC2_CH1_Handler            = (void*) TC2_CH1_Handler, /* 54 Timer/Counter 2 Channel 1 */
        .pfnTC2_CH2_Handler            = (void*) TC2_CH2_Handler, /* 55 Timer/Counter 2 Channel 2 */
        .pvReserved56                  = (void*) (0UL),          /* 56 Reserved */
        .pvReserved57                  = (void*) (0UL),          /* 57 Reserved */
        .pvReserved58                  = (void*) (0UL),          /* 58 Reserved */
        .pfnHEMC_INTSDRAMC_Handler     = (void*) HEMC_INTSDRAMC_Handler, /* 59 HEMC */
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
