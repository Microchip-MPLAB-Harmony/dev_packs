/**
 * \file
 *
 * \brief IAR startup file for ATSAMG55G19
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

#include "samg55g19.h"

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
#pragma weak SUPC_Handler=Dummy_Handler
#pragma weak RSTC_Handler=Dummy_Handler
#pragma weak RTC_Handler=Dummy_Handler
#pragma weak RTT_Handler=Dummy_Handler
#pragma weak WDT_Handler=Dummy_Handler
#pragma weak PMC_Handler=Dummy_Handler
#pragma weak EFC_Handler=Dummy_Handler
#pragma weak FLEXCOM0_Handler=Dummy_Handler
#pragma weak FLEXCOM1_Handler=Dummy_Handler
#pragma weak PIOA_Handler=Dummy_Handler
#pragma weak PIOB_Handler=Dummy_Handler
#pragma weak PDMIC0_Handler=Dummy_Handler
#pragma weak FLEXCOM2_Handler=Dummy_Handler
#pragma weak MEM2MEM_Handler=Dummy_Handler
#pragma weak I2SC0_Handler=Dummy_Handler
#pragma weak I2SC1_Handler=Dummy_Handler
#pragma weak PDMIC1_Handler=Dummy_Handler
#pragma weak FLEXCOM3_Handler=Dummy_Handler
#pragma weak FLEXCOM4_Handler=Dummy_Handler
#pragma weak FLEXCOM5_Handler=Dummy_Handler
#pragma weak FLEXCOM6_Handler=Dummy_Handler
#pragma weak TC0_Handler=Dummy_Handler
#pragma weak TC1_Handler=Dummy_Handler
#pragma weak TC2_Handler=Dummy_Handler
#pragma weak TC3_Handler=Dummy_Handler
#pragma weak TC4_Handler=Dummy_Handler
#pragma weak TC5_Handler=Dummy_Handler
#pragma weak ADC_Handler=Dummy_Handler
#pragma weak UHP_Handler=Dummy_Handler
#pragma weak UDP_Handler=Dummy_Handler
#pragma weak CRCCU_Handler=Dummy_Handler

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
        .pfnEFC_Handler                = (void*) EFC_Handler,    /* 6  Embedded Flash Controller */
        .pvReserved7                   = (void*) (0UL),          /* 7  Reserved */
        .pfnFLEXCOM0_Handler           = (void*) FLEXCOM0_Handler, /* 8  Flexible Serial Communication */
        .pfnFLEXCOM1_Handler           = (void*) FLEXCOM1_Handler, /* 9  Flexible Serial Communication */
        .pvReserved10                  = (void*) (0UL),          /* 10 Reserved */
        .pfnPIOA_Handler               = (void*) PIOA_Handler,   /* 11 Parallel Input/Output Controller */
        .pfnPIOB_Handler               = (void*) PIOB_Handler,   /* 12 Parallel Input/Output Controller */
        .pfnPDMIC0_Handler             = (void*) PDMIC0_Handler, /* 13 Pulse Density Modulation Interface Controller */
        .pfnFLEXCOM2_Handler           = (void*) FLEXCOM2_Handler, /* 14 Flexible Serial Communication */
        .pfnMEM2MEM_Handler            = (void*) MEM2MEM_Handler, /* 15 Memory to Memory */
        .pfnI2SC0_Handler              = (void*) I2SC0_Handler,  /* 16 Inter-IC Sound Controller */
        .pfnI2SC1_Handler              = (void*) I2SC1_Handler,  /* 17 Inter-IC Sound Controller */
        .pfnPDMIC1_Handler             = (void*) PDMIC1_Handler, /* 18 Pulse Density Modulation Interface Controller */
        .pfnFLEXCOM3_Handler           = (void*) FLEXCOM3_Handler, /* 19 Flexible Serial Communication */
        .pfnFLEXCOM4_Handler           = (void*) FLEXCOM4_Handler, /* 20 Flexible Serial Communication */
        .pfnFLEXCOM5_Handler           = (void*) FLEXCOM5_Handler, /* 21 Flexible Serial Communication */
        .pfnFLEXCOM6_Handler           = (void*) FLEXCOM6_Handler, /* 22 Flexible Serial Communication */
        .pfnTC0_Handler                = (void*) TC0_Handler,    /* 23 Timer Counter */
        .pfnTC1_Handler                = (void*) TC1_Handler,    /* 24 Timer Counter */
        .pfnTC2_Handler                = (void*) TC2_Handler,    /* 25 Timer Counter */
        .pfnTC3_Handler                = (void*) TC3_Handler,    /* 26 Timer Counter */
        .pfnTC4_Handler                = (void*) TC4_Handler,    /* 27 Timer Counter */
        .pfnTC5_Handler                = (void*) TC5_Handler,    /* 28 Timer Counter */
        .pfnADC_Handler                = (void*) ADC_Handler,    /* 29 Analog-to-Digital Converter */
        .pvReserved30                  = (void*) (0UL),          /* 30 Reserved */
        .pvReserved31                  = (void*) (0UL),          /* 31 Reserved */
        .pvReserved32                  = (void*) (0UL),          /* 32 Reserved */
        .pvReserved33                  = (void*) (0UL),          /* 33 Reserved */
        .pvReserved34                  = (void*) (0UL),          /* 34 Reserved */
        .pvReserved35                  = (void*) (0UL),          /* 35 Reserved */
        .pvReserved36                  = (void*) (0UL),          /* 36 Reserved */
        .pvReserved37                  = (void*) (0UL),          /* 37 Reserved */
        .pvReserved38                  = (void*) (0UL),          /* 38 Reserved */
        .pvReserved39                  = (void*) (0UL),          /* 39 Reserved */
        .pvReserved40                  = (void*) (0UL),          /* 40 Reserved */
        .pvReserved41                  = (void*) (0UL),          /* 41 Reserved */
        .pvReserved42                  = (void*) (0UL),          /* 42 Reserved */
        .pvReserved43                  = (void*) (0UL),          /* 43 Reserved */
        .pvReserved44                  = (void*) (0UL),          /* 44 Reserved */
        .pvReserved45                  = (void*) (0UL),          /* 45 Reserved */
        .pvReserved46                  = (void*) (0UL),          /* 46 Reserved */
        .pfnUHP_Handler                = (void*) UHP_Handler,    /* 47 USB Host Port */
        .pfnUDP_Handler                = (void*) UDP_Handler,    /* 48 USB Device Port */
        .pfnCRCCU_Handler              = (void*) CRCCU_Handler   /* 49 Cyclic Redundancy Check Calculation Unit */
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
