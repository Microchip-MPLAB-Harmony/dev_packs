/**
 * \file
 *
 * \brief IAR startup file for ATSAMD21G17AU
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

#include "samd21g17au.h"

typedef void (*intfunc) (void);
typedef union { intfunc __fun; void * __ptr; } intvec_elem;

void __iar_program_start(void);
int __low_level_init(void);

/* Reset handler */
void Reset_Handler(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M0PLUS core handlers */
#pragma weak NonMaskableInt_Handler=Dummy_Handler
#pragma weak HardFault_Handler=Dummy_Handler
#pragma weak SVCall_Handler=Dummy_Handler
#pragma weak PendSV_Handler=Dummy_Handler
#pragma weak SysTick_Handler=Dummy_Handler

/* Peripherals handlers */
#pragma weak PM_Handler=Dummy_Handler
#pragma weak SYSCTRL_Handler=Dummy_Handler
#pragma weak WDT_Handler=Dummy_Handler
#pragma weak RTC_Handler=Dummy_Handler
#pragma weak EIC_Handler=Dummy_Handler
#pragma weak NVMCTRL_Handler=Dummy_Handler
#pragma weak DMAC_Handler=Dummy_Handler
#pragma weak USB_Handler=Dummy_Handler
#pragma weak EVSYS_Handler=Dummy_Handler
#pragma weak SERCOM0_Handler=Dummy_Handler
#pragma weak SERCOM1_Handler=Dummy_Handler
#pragma weak SERCOM2_Handler=Dummy_Handler
#pragma weak SERCOM3_Handler=Dummy_Handler
#pragma weak SERCOM4_Handler=Dummy_Handler
#pragma weak SERCOM5_Handler=Dummy_Handler
#pragma weak TCC0_Handler=Dummy_Handler
#pragma weak TCC1_Handler=Dummy_Handler
#pragma weak TCC2_Handler=Dummy_Handler
#pragma weak TC3_Handler=Dummy_Handler
#pragma weak TC4_Handler=Dummy_Handler
#pragma weak TC5_Handler=Dummy_Handler
#pragma weak TC6_Handler=Dummy_Handler
#pragma weak TC7_Handler=Dummy_Handler
#pragma weak ADC_Handler=Dummy_Handler
#pragma weak AC_Handler=Dummy_Handler
#pragma weak DAC_Handler=Dummy_Handler
#pragma weak PTC_Handler=Dummy_Handler
#pragma weak I2S_Handler=Dummy_Handler

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
        .pvReservedC12                 = (void*) (0UL), /* Reserved */
        .pvReservedC11                 = (void*) (0UL), /* Reserved */
        .pvReservedC10                 = (void*) (0UL), /* Reserved */
        .pvReservedC9                  = (void*) (0UL), /* Reserved */
        .pvReservedC8                  = (void*) (0UL), /* Reserved */
        .pvReservedC7                  = (void*) (0UL), /* Reserved */
        .pvReservedC6                  = (void*) (0UL), /* Reserved */
        .pfnSVCall_Handler             = (void*) SVCall_Handler,
        .pvReservedC4                  = (void*) (0UL), /* Reserved */
        .pvReservedC3                  = (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

        /* Configurable interrupts */
        .pfnPM_Handler                 = (void*) PM_Handler,     /* 0  Power Manager */
        .pfnSYSCTRL_Handler            = (void*) SYSCTRL_Handler, /* 1  System Control */
        .pfnWDT_Handler                = (void*) WDT_Handler,    /* 2  Watchdog Timer */
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 3  Real-Time Counter */
        .pfnEIC_Handler                = (void*) EIC_Handler,    /* 4  External Interrupt Controller */
        .pfnNVMCTRL_Handler            = (void*) NVMCTRL_Handler, /* 5  Non-Volatile Memory Controller */
        .pfnDMAC_Handler               = (void*) DMAC_Handler,   /* 6  Direct Memory Access Controller */
        .pfnUSB_Handler                = (void*) USB_Handler,    /* 7  Universal Serial Bus */
        .pfnEVSYS_Handler              = (void*) EVSYS_Handler,  /* 8  Event System Interface */
        .pfnSERCOM0_Handler            = (void*) SERCOM0_Handler, /* 9  Serial Communication Interface */
        .pfnSERCOM1_Handler            = (void*) SERCOM1_Handler, /* 10 Serial Communication Interface */
        .pfnSERCOM2_Handler            = (void*) SERCOM2_Handler, /* 11 Serial Communication Interface */
        .pfnSERCOM3_Handler            = (void*) SERCOM3_Handler, /* 12 Serial Communication Interface */
        .pfnSERCOM4_Handler            = (void*) SERCOM4_Handler, /* 13 Serial Communication Interface */
        .pfnSERCOM5_Handler            = (void*) SERCOM5_Handler, /* 14 Serial Communication Interface */
        .pfnTCC0_Handler               = (void*) TCC0_Handler,   /* 15 Timer Counter Control */
        .pfnTCC1_Handler               = (void*) TCC1_Handler,   /* 16 Timer Counter Control */
        .pfnTCC2_Handler               = (void*) TCC2_Handler,   /* 17 Timer Counter Control */
        .pfnTC3_Handler                = (void*) TC3_Handler,    /* 18 Basic Timer Counter */
        .pfnTC4_Handler                = (void*) TC4_Handler,    /* 19 Basic Timer Counter */
        .pfnTC5_Handler                = (void*) TC5_Handler,    /* 20 Basic Timer Counter */
        .pfnTC6_Handler                = (void*) TC6_Handler,    /* 21 Basic Timer Counter */
        .pfnTC7_Handler                = (void*) TC7_Handler,    /* 22 Basic Timer Counter */
        .pfnADC_Handler                = (void*) ADC_Handler,    /* 23 Analog Digital Converter */
        .pfnAC_Handler                 = (void*) AC_Handler,     /* 24 Analog Comparators */
        .pfnDAC_Handler                = (void*) DAC_Handler,    /* 25 Digital Analog Converter */
        .pfnPTC_Handler                = (void*) PTC_Handler,    /* 26 Peripheral Touch Controller */
        .pfnI2S_Handler                = (void*) I2S_Handler     /* 27 Inter-IC Sound Interface */
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
