/**
 * \file
 *
 * \brief GCC startup file for PIC32CX1025MTG128
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

#include "pic32cx1025mtg128.h"

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
void DWDT0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DWDT1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PMC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SEFC0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SEFC1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM2_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM3_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM4_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM5_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM6_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM7_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_SEC_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_SEC_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOC_SEC_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QSPI_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ACC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SLCDC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MEM2MEM0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CH0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CH1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CH2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_CH0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_CH1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_CH2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_C0SEC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_C1SEC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_C2SEC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_C0SEC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_C1SEC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_C2SEC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_C0SEC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_C1SEC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_C2SEC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AES_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AES_AESSEC_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AESB_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AESB_AESBSEC_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SHA_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SHA_SHASEC_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_TRNGSEC_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ICM_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ICM_ICMSEC_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CPKCC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MATRIX0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MATRIX1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP3_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP4_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP5_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP6_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP7_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP8_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP9_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP10_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP11_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP12_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP13_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP14_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP15_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MEM2MEM1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_CHANNEL0_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_CHANNEL1_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_CHANNEL2_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_C0SEC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_C1SEC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_C2SEC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOD_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOD_SEC_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCSPI_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PWM_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MATRIX2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MATRIX3_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

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
        .pfnDWDT0_Handler              = (void*) DWDT0_Handler,  /* 4  Dual Watchdog Timer */
        .pfnDWDT1_Handler              = (void*) DWDT1_Handler,  /* 5  Dual Watchdog Timer */
        .pfnPMC_Handler                = (void*) PMC_Handler,    /* 6  Power Management Controller */
        .pfnSEFC0_Handler              = (void*) SEFC0_Handler,  /* 7  Secure Embedded Flash Controller */
        .pfnSEFC1_Handler              = (void*) SEFC1_Handler,  /* 8  Secure Embedded Flash Controller */
        .pfnFLEXCOM0_Handler           = (void*) FLEXCOM0_Handler, /* 9  Flexible Serial Communication */
        .pfnFLEXCOM1_Handler           = (void*) FLEXCOM1_Handler, /* 10 Flexible Serial Communication */
        .pfnFLEXCOM2_Handler           = (void*) FLEXCOM2_Handler, /* 11 Flexible Serial Communication */
        .pfnFLEXCOM3_Handler           = (void*) FLEXCOM3_Handler, /* 12 Flexible Serial Communication */
        .pfnFLEXCOM4_Handler           = (void*) FLEXCOM4_Handler, /* 13 Flexible Serial Communication */
        .pfnFLEXCOM5_Handler           = (void*) FLEXCOM5_Handler, /* 14 Flexible Serial Communication */
        .pfnFLEXCOM6_Handler           = (void*) FLEXCOM6_Handler, /* 15 Flexible Serial Communication */
        .pfnFLEXCOM7_Handler           = (void*) FLEXCOM7_Handler, /* 16 Flexible Serial Communication */
        .pfnPIOA_Handler               = (void*) PIOA_Handler,   /* 17 Parallel Input/Output Controller */
        .pfnPIOA_SEC_Handler           = (void*) PIOA_SEC_Handler, /* 18 Parallel Input/Output Controller */
        .pfnPIOB_Handler               = (void*) PIOB_Handler,   /* 19 Parallel Input/Output Controller */
        .pfnPIOB_SEC_Handler           = (void*) PIOB_SEC_Handler, /* 20 Parallel Input/Output Controller */
        .pfnPIOC_Handler               = (void*) PIOC_Handler,   /* 21 Parallel Input/Output Controller */
        .pfnPIOC_SEC_Handler           = (void*) PIOC_SEC_Handler, /* 22 Parallel Input/Output Controller */
        .pfnQSPI_Handler               = (void*) QSPI_Handler,   /* 23 Quad Serial Peripheral Interface */
        .pfnADC_Handler                = (void*) ADC_Handler,    /* 24 Analog-to-Digital Converter */
        .pfnACC_Handler                = (void*) ACC_Handler,    /* 25 Analog Comparator Controller */
        .pvReserved26                  = (void*) (0UL),          /* 26 Reserved */
        .pvReserved27                  = (void*) (0UL),          /* 27 Reserved */
        .pvReserved28                  = (void*) (0UL),          /* 28 Reserved */
        .pfnSLCDC_Handler              = (void*) SLCDC_Handler,  /* 29 Segment LCD Controller */
        .pfnMEM2MEM0_Handler           = (void*) MEM2MEM0_Handler, /* 30 Memory to Memory */
        .pfnTC0_CH0_Handler            = (void*) TC0_CH0_Handler, /* 31 Timer Counter */
        .pfnTC0_CH1_Handler            = (void*) TC0_CH1_Handler, /* 32 Timer Counter */
        .pfnTC0_CH2_Handler            = (void*) TC0_CH2_Handler, /* 33 Timer Counter */
        .pfnTC1_CH0_Handler            = (void*) TC1_CH0_Handler, /* 34 Timer Counter */
        .pfnTC1_CH1_Handler            = (void*) TC1_CH1_Handler, /* 35 Timer Counter */
        .pfnTC1_CH2_Handler            = (void*) TC1_CH2_Handler, /* 36 Timer Counter */
        .pfnTC2_CH0_Handler            = (void*) TC2_CH0_Handler, /* 37 Timer Counter */
        .pfnTC2_CH1_Handler            = (void*) TC2_CH1_Handler, /* 38 Timer Counter */
        .pfnTC2_CH2_Handler            = (void*) TC2_CH2_Handler, /* 39 Timer Counter */
        .pfnTC0_C0SEC_Handler          = (void*) TC0_C0SEC_Handler, /* 40 Timer Counter */
        .pfnTC0_C1SEC_Handler          = (void*) TC0_C1SEC_Handler, /* 41 Timer Counter */
        .pfnTC0_C2SEC_Handler          = (void*) TC0_C2SEC_Handler, /* 42 Timer Counter */
        .pfnTC1_C0SEC_Handler          = (void*) TC1_C0SEC_Handler, /* 43 Timer Counter */
        .pfnTC1_C1SEC_Handler          = (void*) TC1_C1SEC_Handler, /* 44 Timer Counter */
        .pfnTC1_C2SEC_Handler          = (void*) TC1_C2SEC_Handler, /* 45 Timer Counter */
        .pfnTC2_C0SEC_Handler          = (void*) TC2_C0SEC_Handler, /* 46 Timer Counter */
        .pfnTC2_C1SEC_Handler          = (void*) TC2_C1SEC_Handler, /* 47 Timer Counter */
        .pfnTC2_C2SEC_Handler          = (void*) TC2_C2SEC_Handler, /* 48 Timer Counter */
        .pfnAES_Handler                = (void*) AES_Handler,    /* 49 Advanced Encryption Standard */
        .pfnAES_AESSEC_Handler         = (void*) AES_AESSEC_Handler, /* 50 Advanced Encryption Standard */
        .pfnAESB_Handler               = (void*) AESB_Handler,   /* 51 Advanced Encryption Standard Bridge */
        .pfnAESB_AESBSEC_Handler       = (void*) AESB_AESBSEC_Handler, /* 52 Advanced Encryption Standard Bridge */
        .pfnSHA_Handler                = (void*) SHA_Handler,    /* 53 Secure Hash Algorithm */
        .pfnSHA_SHASEC_Handler         = (void*) SHA_SHASEC_Handler, /* 54 Secure Hash Algorithm */
        .pfnTRNG_Handler               = (void*) TRNG_Handler,   /* 55 True Random Number Generator */
        .pfnTRNG_TRNGSEC_Handler       = (void*) TRNG_TRNGSEC_Handler, /* 56 True Random Number Generator */
        .pfnICM_Handler                = (void*) ICM_Handler,    /* 57 Integrity Check Monitor */
        .pfnICM_ICMSEC_Handler         = (void*) ICM_ICMSEC_Handler, /* 58 Integrity Check Monitor */
        .pfnCPKCC_Handler              = (void*) CPKCC_Handler,  /* 59 Classic Public Key Cryptography Controller */
        .pfnMATRIX0_Handler            = (void*) MATRIX0_Handler, /* 60 AHB Bus Matrix */
        .pfnMATRIX1_Handler            = (void*) MATRIX1_Handler, /* 61 AHB Bus Matrix */
        .pfnSUPC_WKUP3_Handler         = (void*) SUPC_WKUP3_Handler, /* 62 Supply Controller */
        .pfnSUPC_WKUP4_Handler         = (void*) SUPC_WKUP4_Handler, /* 63 Supply Controller */
        .pfnSUPC_WKUP5_Handler         = (void*) SUPC_WKUP5_Handler, /* 64 Supply Controller */
        .pfnSUPC_WKUP6_Handler         = (void*) SUPC_WKUP6_Handler, /* 65 Supply Controller */
        .pfnSUPC_WKUP7_Handler         = (void*) SUPC_WKUP7_Handler, /* 66 Supply Controller */
        .pfnSUPC_WKUP8_Handler         = (void*) SUPC_WKUP8_Handler, /* 67 Supply Controller */
        .pfnSUPC_WKUP9_Handler         = (void*) SUPC_WKUP9_Handler, /* 68 Supply Controller */
        .pfnSUPC_WKUP10_Handler        = (void*) SUPC_WKUP10_Handler, /* 69 Supply Controller */
        .pfnSUPC_WKUP11_Handler        = (void*) SUPC_WKUP11_Handler, /* 70 Supply Controller */
        .pfnSUPC_WKUP12_Handler        = (void*) SUPC_WKUP12_Handler, /* 71 Supply Controller */
        .pfnSUPC_WKUP13_Handler        = (void*) SUPC_WKUP13_Handler, /* 72 Supply Controller */
        .pfnSUPC_WKUP14_Handler        = (void*) SUPC_WKUP14_Handler, /* 73 Supply Controller */
        .pfnSUPC_WKUP15_Handler        = (void*) SUPC_WKUP15_Handler, /* 74 Supply Controller */
        .pvReserved75                  = (void*) (0UL),          /* 75 Reserved */
        .pvReserved76                  = (void*) (0UL),          /* 76 Reserved */
        .pvReserved77                  = (void*) (0UL),          /* 77 Reserved */
        .pfnMEM2MEM1_Handler           = (void*) MEM2MEM1_Handler, /* 78 Memory to Memory */
        .pfnTC3_CHANNEL0_Handler       = (void*) TC3_CHANNEL0_Handler, /* 79 Timer Counter */
        .pfnTC3_CHANNEL1_Handler       = (void*) TC3_CHANNEL1_Handler, /* 80 Timer Counter */
        .pfnTC3_CHANNEL2_Handler       = (void*) TC3_CHANNEL2_Handler, /* 81 Timer Counter */
        .pfnTC3_C0SEC_Handler          = (void*) TC3_C0SEC_Handler, /* 82 Timer Counter */
        .pfnTC3_C1SEC_Handler          = (void*) TC3_C1SEC_Handler, /* 83 Timer Counter */
        .pfnTC3_C2SEC_Handler          = (void*) TC3_C2SEC_Handler, /* 84 Timer Counter */
        .pfnPIOD_Handler               = (void*) PIOD_Handler,   /* 85 Parallel Input/Output Controller */
        .pfnPIOD_SEC_Handler           = (void*) PIOD_SEC_Handler, /* 86 Parallel Input/Output Controller */
        .pfnUART_Handler               = (void*) UART_Handler,   /* 87 Universal Asynchronous Receiver Transmitter */
        .pvReserved88                  = (void*) (0UL),          /* 88 Reserved */
        .pfnMCSPI_Handler              = (void*) MCSPI_Handler,  /* 89 Multi Channel Serial Peripheral Interface */
        .pfnPWM_Handler                = (void*) PWM_Handler,    /* 90 Pulse Width Modulation Controller */
        .pvReserved91                  = (void*) (0UL),          /* 91 Reserved */
        .pvReserved92                  = (void*) (0UL),          /* 92 Reserved */
        .pvReserved93                  = (void*) (0UL),          /* 93 Reserved */
        .pfnMATRIX2_Handler            = (void*) MATRIX2_Handler, /* 94 AHB Bus Matrix */
        .pfnMATRIX3_Handler            = (void*) MATRIX3_Handler  /* 95 AHB Bus Matrix */
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
