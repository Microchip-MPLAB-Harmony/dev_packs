/**
 * \file
 *
 * \brief GCC startup file for ATSAMG51G18
 *
 * Copyright (c) 2019 Microchip Technology Inc.
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

#include "samg51g18.h"

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

/** \cond DOXYGEN_SHOULD_SKIP_THIS */
int main(void);
/** \endcond */

void __libc_init_array(void);

/* Reset handler */
void Reset_Handler(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M4 core handlers */
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
void EFC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USART_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MEM2MEM_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWI0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWI1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPI_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWI2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

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
        .pfnEFC_Handler                = (void*) EFC_Handler,    /* 6  Embedded Flash Controller */
        .pvReserved7                   = (void*) (0UL),          /* 7  Reserved */
        .pfnUART0_Handler              = (void*) UART0_Handler,  /* 8  Universal Asynchronous Receiver Transmitter */
        .pfnUART1_Handler              = (void*) UART1_Handler,  /* 9  Universal Asynchronous Receiver Transmitter */
        .pvReserved10                  = (void*) (0UL),          /* 10 Reserved */
        .pfnPIOA_Handler               = (void*) PIOA_Handler,   /* 11 Parallel Input/Output Controller */
        .pfnPIOB_Handler               = (void*) PIOB_Handler,   /* 12 Parallel Input/Output Controller */
        .pvReserved13                  = (void*) (0UL),          /* 13 Reserved */
        .pfnUSART_Handler              = (void*) USART_Handler,  /* 14 Universal Synchronous Asynchronous Receiver Transmitter */
        .pfnMEM2MEM_Handler            = (void*) MEM2MEM_Handler, /* 15 Memory to Memory */
        .pvReserved16                  = (void*) (0UL),          /* 16 Reserved */
        .pvReserved17                  = (void*) (0UL),          /* 17 Reserved */
        .pvReserved18                  = (void*) (0UL),          /* 18 Reserved */
        .pfnTWI0_Handler               = (void*) TWI0_Handler,   /* 19 Two-wire Interface High Speed */
        .pfnTWI1_Handler               = (void*) TWI1_Handler,   /* 20 Two-wire Interface */
        .pfnSPI_Handler                = (void*) SPI_Handler,    /* 21 Serial Peripheral Interface */
        .pfnTWI2_Handler               = (void*) TWI2_Handler,   /* 22 Two-wire Interface */
        .pfnTC0_CH0_Handler            = (void*) TC0_CH0_Handler, /* 23 Timer/Counter 0 Channel 0 */
        .pfnTC0_CH1_Handler            = (void*) TC0_CH1_Handler, /* 24 Timer/Counter 0 Channel 1 */
        .pfnTC0_CH2_Handler            = (void*) TC0_CH2_Handler, /* 25 Timer/Counter 0 Channel 2 */
        .pvReserved26                  = (void*) (0UL),          /* 26 Reserved */
        .pvReserved27                  = (void*) (0UL),          /* 27 Reserved */
        .pvReserved28                  = (void*) (0UL),          /* 28 Reserved */
        .pfnADC_Handler                = (void*) ADC_Handler     /* 29 Analog-to-Digital Converter */
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

        /* Initialize the C library */
        __libc_init_array();

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
