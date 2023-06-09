/**
 * \file
 *
 * \brief GCC startup file for PIC32CM2532LS00048
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

#include "pic32cm2532ls00048.h"

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

/* Cortex-M23 core handlers */
void NonMaskableInt_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVCall_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void SYSTEM_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WDT_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_0_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_1_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_2_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_3_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_4_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_5_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_6_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_7_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_OTHER_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FREQM_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVMCTRL_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PORT_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_2_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_3_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_OTHER_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USB_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_3_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_4_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_5_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_6_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_7_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_NSCHK_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PAC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_OTHER_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_OTHER_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_OTHER_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_OTHER_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM4_0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM4_1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM4_2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM4_OTHER_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM5_0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM5_1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM5_2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM5_OTHER_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_OTHER_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_RESRDY_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AC_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DAC_UNDERRUN_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DAC_EMPTY_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PTC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2S_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRAM_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Exception Table */
__attribute__ ((section(".vectors")))
const DeviceVectors exception_table = {

        /* Configure Initial Stack Pointer, using linker-generated symbols */
        .pvStack = (void*) (&_estack),

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
        .pfnSYSTEM_Handler             = (void*) SYSTEM_Handler, /* 0  Main Clock */
        .pfnWDT_Handler                = (void*) WDT_Handler,    /* 1  Watchdog Timer */
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 2  Real-Time Counter */
        .pfnEIC_EXTINT_0_Handler       = (void*) EIC_EXTINT_0_Handler, /* 3  External Interrupt Controller */
        .pfnEIC_EXTINT_1_Handler       = (void*) EIC_EXTINT_1_Handler, /* 4  External Interrupt Controller */
        .pfnEIC_EXTINT_2_Handler       = (void*) EIC_EXTINT_2_Handler, /* 5  External Interrupt Controller */
        .pfnEIC_EXTINT_3_Handler       = (void*) EIC_EXTINT_3_Handler, /* 6  External Interrupt Controller */
        .pfnEIC_EXTINT_4_Handler       = (void*) EIC_EXTINT_4_Handler, /* 7  External Interrupt Controller */
        .pfnEIC_EXTINT_5_Handler       = (void*) EIC_EXTINT_5_Handler, /* 8  External Interrupt Controller */
        .pfnEIC_EXTINT_6_Handler       = (void*) EIC_EXTINT_6_Handler, /* 9  External Interrupt Controller */
        .pfnEIC_EXTINT_7_Handler       = (void*) EIC_EXTINT_7_Handler, /* 10 External Interrupt Controller */
        .pfnEIC_OTHER_Handler          = (void*) EIC_OTHER_Handler, /* 11 External Interrupt Controller */
        .pfnFREQM_Handler              = (void*) FREQM_Handler,  /* 12 Frequency Meter */
        .pfnNVMCTRL_Handler            = (void*) NVMCTRL_Handler, /* 13 Non-Volatile Memory Controller */
        .pfnPORT_Handler               = (void*) PORT_Handler,   /* 14 Port Module */
        .pfnDMAC_0_Handler             = (void*) DMAC_0_Handler, /* 15 Direct Memory Access Controller */
        .pfnDMAC_1_Handler             = (void*) DMAC_1_Handler, /* 16 Direct Memory Access Controller */
        .pfnDMAC_2_Handler             = (void*) DMAC_2_Handler, /* 17 Direct Memory Access Controller */
        .pfnDMAC_3_Handler             = (void*) DMAC_3_Handler, /* 18 Direct Memory Access Controller */
        .pfnDMAC_OTHER_Handler         = (void*) DMAC_OTHER_Handler, /* 19 Direct Memory Access Controller */
        .pfnUSB_Handler                = (void*) USB_Handler,    /* 20 Universal Serial Bus */
        .pfnEVSYS_0_Handler            = (void*) EVSYS_0_Handler, /* 21 Event System Interface */
        .pfnEVSYS_1_Handler            = (void*) EVSYS_1_Handler, /* 22 Event System Interface */
        .pfnEVSYS_2_Handler            = (void*) EVSYS_2_Handler, /* 23 Event System Interface */
        .pfnEVSYS_3_Handler            = (void*) EVSYS_3_Handler, /* 24 Event System Interface */
        .pfnEVSYS_4_Handler            = (void*) EVSYS_4_Handler, /* 25 Event System Interface */
        .pfnEVSYS_5_Handler            = (void*) EVSYS_5_Handler, /* 26 Event System Interface */
        .pfnEVSYS_6_Handler            = (void*) EVSYS_6_Handler, /* 27 Event System Interface */
        .pfnEVSYS_7_Handler            = (void*) EVSYS_7_Handler, /* 28 Event System Interface */
        .pfnEVSYS_NSCHK_Handler        = (void*) EVSYS_NSCHK_Handler, /* 29 Event System Interface */
        .pfnPAC_Handler                = (void*) PAC_Handler,    /* 30 Peripheral Access Controller */
        .pfnSERCOM0_0_Handler          = (void*) SERCOM0_0_Handler, /* 31 Serial Communication Interface */
        .pfnSERCOM0_1_Handler          = (void*) SERCOM0_1_Handler, /* 32 Serial Communication Interface */
        .pfnSERCOM0_2_Handler          = (void*) SERCOM0_2_Handler, /* 33 Serial Communication Interface */
        .pfnSERCOM0_OTHER_Handler      = (void*) SERCOM0_OTHER_Handler, /* 34 Serial Communication Interface */
        .pfnSERCOM1_0_Handler          = (void*) SERCOM1_0_Handler, /* 35 Serial Communication Interface */
        .pfnSERCOM1_1_Handler          = (void*) SERCOM1_1_Handler, /* 36 Serial Communication Interface */
        .pfnSERCOM1_2_Handler          = (void*) SERCOM1_2_Handler, /* 37 Serial Communication Interface */
        .pfnSERCOM1_OTHER_Handler      = (void*) SERCOM1_OTHER_Handler, /* 38 Serial Communication Interface */
        .pfnSERCOM2_0_Handler          = (void*) SERCOM2_0_Handler, /* 39 Serial Communication Interface */
        .pfnSERCOM2_1_Handler          = (void*) SERCOM2_1_Handler, /* 40 Serial Communication Interface */
        .pfnSERCOM2_2_Handler          = (void*) SERCOM2_2_Handler, /* 41 Serial Communication Interface */
        .pfnSERCOM2_OTHER_Handler      = (void*) SERCOM2_OTHER_Handler, /* 42 Serial Communication Interface */
        .pfnSERCOM3_0_Handler          = (void*) SERCOM3_0_Handler, /* 43 Serial Communication Interface */
        .pfnSERCOM3_1_Handler          = (void*) SERCOM3_1_Handler, /* 44 Serial Communication Interface */
        .pfnSERCOM3_2_Handler          = (void*) SERCOM3_2_Handler, /* 45 Serial Communication Interface */
        .pfnSERCOM3_OTHER_Handler      = (void*) SERCOM3_OTHER_Handler, /* 46 Serial Communication Interface */
        .pfnSERCOM4_0_Handler          = (void*) SERCOM4_0_Handler, /* 47 Serial Communication Interface */
        .pfnSERCOM4_1_Handler          = (void*) SERCOM4_1_Handler, /* 48 Serial Communication Interface */
        .pfnSERCOM4_2_Handler          = (void*) SERCOM4_2_Handler, /* 49 Serial Communication Interface */
        .pfnSERCOM4_OTHER_Handler      = (void*) SERCOM4_OTHER_Handler, /* 50 Serial Communication Interface */
        .pfnSERCOM5_0_Handler          = (void*) SERCOM5_0_Handler, /* 51 Serial Communication Interface */
        .pfnSERCOM5_1_Handler          = (void*) SERCOM5_1_Handler, /* 52 Serial Communication Interface */
        .pfnSERCOM5_2_Handler          = (void*) SERCOM5_2_Handler, /* 53 Serial Communication Interface */
        .pfnSERCOM5_OTHER_Handler      = (void*) SERCOM5_OTHER_Handler, /* 54 Serial Communication Interface */
        .pfnTC0_Handler                = (void*) TC0_Handler,    /* 55 Basic Timer Counter */
        .pfnTC1_Handler                = (void*) TC1_Handler,    /* 56 Basic Timer Counter */
        .pfnTC2_Handler                = (void*) TC2_Handler,    /* 57 Basic Timer Counter */
        .pfnTCC0_Handler               = (void*) TCC0_Handler,   /* 58 Timer Counter for Control Applications */
        .pfnTCC1_Handler               = (void*) TCC1_Handler,   /* 59 Timer Counter for Control Applications */
        .pfnTCC2_Handler               = (void*) TCC2_Handler,   /* 60 Timer Counter for Control Applications */
        .pfnTCC3_Handler               = (void*) TCC3_Handler,   /* 61 Timer Counter for Control Applications */
        .pfnADC_OTHER_Handler          = (void*) ADC_OTHER_Handler, /* 62 Analog Digital Converter */
        .pfnADC_RESRDY_Handler         = (void*) ADC_RESRDY_Handler, /* 63 Analog Digital Converter */
        .pfnAC_Handler                 = (void*) AC_Handler,     /* 64 Analog Comparators */
        .pfnDAC_UNDERRUN_Handler       = (void*) DAC_UNDERRUN_Handler, /* 65 Digital-to-Analog Converter */
        .pfnDAC_EMPTY_Handler          = (void*) DAC_EMPTY_Handler, /* 66 Digital-to-Analog Converter */
        .pfnPTC_Handler                = (void*) PTC_Handler,    /* 67 Peripheral Touch Controller */
        .pfnTRNG_Handler               = (void*) TRNG_Handler,   /* 68 True Random Generator */
        .pfnI2S_Handler                = (void*) I2S_Handler,    /* 69 Inter-IC Sound Interface */
        .pfnTRAM_Handler               = (void*) TRAM_Handler    /* 70 TrustRAM */
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
