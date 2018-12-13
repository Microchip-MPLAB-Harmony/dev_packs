/**
 * \file
 *
 * Copyright (c) 2018 Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#include "samd20.h"

typedef void (*intfunc) (void);
typedef union { intfunc __fun; void * __ptr; } intvec_elem;

void __iar_program_start(void);
int __low_level_init(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M0+ core handlers */
#pragma weak NonMaskableInt_Handler   = Dummy_Handler
#pragma weak HardFault_Handler        = Dummy_Handler
#pragma weak SVCall_Handler           = Dummy_Handler
#pragma weak PendSV_Handler           = Dummy_Handler
#pragma weak SysTick_Handler          = Dummy_Handler

/* Peripherals handlers */
#pragma weak PM_Handler               = Dummy_Handler
#pragma weak SYSCTRL_Handler          = Dummy_Handler
#pragma weak WDT_Handler              = Dummy_Handler
#pragma weak RTC_Handler              = Dummy_Handler
#pragma weak EIC_Handler              = Dummy_Handler
#pragma weak NVMCTRL_Handler          = Dummy_Handler
#pragma weak EVSYS_Handler            = Dummy_Handler
#pragma weak SERCOM0_Handler          = Dummy_Handler
#pragma weak SERCOM1_Handler          = Dummy_Handler
#pragma weak SERCOM2_Handler          = Dummy_Handler
#pragma weak SERCOM3_Handler          = Dummy_Handler
#ifdef       ID_SERCOM4
#pragma weak SERCOM4_Handler          = Dummy_Handler
#endif
#ifdef       ID_SERCOM5
#pragma weak SERCOM5_Handler          = Dummy_Handler
#endif
#pragma weak TC0_Handler              = Dummy_Handler
#pragma weak TC1_Handler              = Dummy_Handler
#pragma weak TC2_Handler              = Dummy_Handler
#pragma weak TC3_Handler              = Dummy_Handler
#pragma weak TC4_Handler              = Dummy_Handler
#pragma weak TC5_Handler              = Dummy_Handler
#ifdef       ID_TC6
#pragma weak TC6_Handler              = Dummy_Handler
#endif
#ifdef       ID_TC7
#pragma weak TC7_Handler              = Dummy_Handler
#endif
#ifdef       ID_ADC
#pragma weak ADC_Handler              = Dummy_Handler
#endif
#ifdef       ID_AC
#pragma weak AC_Handler               = Dummy_Handler
#endif
#ifdef       ID_DAC
#pragma weak DAC_Handler              = Dummy_Handler
#endif
#ifdef       ID_PTC
#pragma weak PTC_Handler              = Dummy_Handler
#endif

/* Exception Table */
#pragma language = extended
#pragma segment  = "CSTACK"

/* The name "__vector_table" has special meaning for C-SPY: */
/* it is where the SP start value is found, and the NVIC vector */
/* table register (VTOR) is initialized to this address if != 0 */

#pragma section  = ".intvec"
#pragma location = ".intvec"
const DeviceVectors __vector_table[] = {
        (void*) __sfe("CSTACK"),
        (void*) Reset_Handler,
        (void*) NonMaskableInt_Handler,
        (void*) HardFault_Handler,
        (void*) (0UL), /* Reserved */
        (void*) (0UL), /* Reserved */
        (void*) (0UL), /* Reserved */
        (void*) (0UL), /* Reserved */
        (void*) (0UL), /* Reserved */
        (void*) (0UL), /* Reserved */
        (void*) (0UL), /* Reserved */
        (void*) SVCall_Handler,
        (void*) (0UL), /* Reserved */
        (void*) (0UL), /* Reserved */
        (void*) PendSV_Handler,
        (void*) SysTick_Handler,

        /* Configurable interrupts */
        (void*) PM_Handler,             /*  0 Power Manager */
        (void*) SYSCTRL_Handler,        /*  1 System Control */
        (void*) WDT_Handler,            /*  2 Watchdog Timer */
        (void*) RTC_Handler,            /*  3 Real-Time Counter */
        (void*) EIC_Handler,            /*  4 External Interrupt Controller */
        (void*) NVMCTRL_Handler,        /*  5 Non-Volatile Memory Controller */
        (void*) EVSYS_Handler,          /*  6 Event System Interface */
        (void*) SERCOM0_Handler,        /*  7 Serial Communication Interface 0 */
        (void*) SERCOM1_Handler,        /*  8 Serial Communication Interface 1 */
        (void*) SERCOM2_Handler,        /*  9 Serial Communication Interface 2 */
        (void*) SERCOM3_Handler,        /* 10 Serial Communication Interface 3 */
#ifdef ID_SERCOM4
        (void*) SERCOM4_Handler,        /* 11 Serial Communication Interface 4 */
#else
        (void*) (0UL),                  /* 11 Reserved */
#endif
#ifdef ID_SERCOM5
        (void*) SERCOM5_Handler,        /* 12 Serial Communication Interface 5 */
#else
        (void*) (0UL),                  /* 12 Reserved */
#endif
        (void*) TC0_Handler,            /* 13 Basic Timer Counter 0 */
        (void*) TC1_Handler,            /* 14 Basic Timer Counter 1 */
        (void*) TC2_Handler,            /* 15 Basic Timer Counter 2 */
        (void*) TC3_Handler,            /* 16 Basic Timer Counter 3 */
        (void*) TC4_Handler,            /* 17 Basic Timer Counter 4 */
        (void*) TC5_Handler,            /* 18 Basic Timer Counter 5 */
#ifdef ID_TC6
        (void*) TC6_Handler,            /* 19 Basic Timer Counter 6 */
#else
        (void*) (0UL),                  /* 19 Reserved */
#endif
#ifdef ID_TC7
        (void*) TC7_Handler,            /* 20 Basic Timer Counter 7 */
#else
        (void*) (0UL),                  /* 20 Reserved */
#endif
#ifdef ID_ADC
        (void*) ADC_Handler,            /* 21 Analog Digital Converter */
#else
        (void*) (0UL),                  /* 21 Reserved */
#endif
#ifdef ID_AC
        (void*) AC_Handler,             /* 22 Analog Comparators */
#else
        (void*) (0UL),                  /* 22 Reserved */
#endif
#ifdef ID_DAC
        (void*) DAC_Handler,            /* 23 Digital Analog Converter */
#else
        (void*) (0UL),                  /* 23 Reserved */
#endif
#ifdef ID_PTC
        (void*) PTC_Handler             /* 24 Peripheral Touch Controller */
#else
        (void*) (0UL)                   /* 24 Reserved */
#endif
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
        /* Overwriting the default value of the NVMCTRL.CTRLB.MANW bit (errata reference 13134) */
        NVMCTRL->CTRLB.bit.MANW = 1;

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
