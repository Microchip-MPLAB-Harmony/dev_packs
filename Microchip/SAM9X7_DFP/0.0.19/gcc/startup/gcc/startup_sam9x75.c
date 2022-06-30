/**
 * \file
 *
 * \brief GCC startup file for ATSAM9X75
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

#include "sam9x75.h"

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

/* Cortex-ARM926EJ-S core handlers */

/* Peripherals handlers */
void EXT_FIQ_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SYSC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM2_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM3_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM6_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM7_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM8_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SDMMC0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM4_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM5_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM9_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM10_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PWM_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void XDMAC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MATRIX_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UHPHS_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UDPHS_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void XLCDC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SDMMC1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SSC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN0_INT0_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN1_INT0_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EXT_IRQ_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM11_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM12_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2SMCC_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QSPI_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GFX2D_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AES_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TDES_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SHA_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CLASSD_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ISC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOD_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OTPC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DBGU_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ECC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MC_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CSI2DC_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void LVDSC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void LVDSPHY_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q3_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q4_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q5_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_EMAC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_MMSL_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_TSU_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN0_INT1_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN1_INT1_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Exception Table */
__attribute__ ((section(".vectors")))
const DeviceVectors exception_table = {

        /* Configure Initial Stack Pointer, using linker-generated symbols */
        .pvStack = (void*) (&_estack),

        .pvReservedC15                 = (void*) (0UL), /* Reserved */
        .pvReservedC14                 = (void*) (0UL), /* Reserved */
        .pvReservedC13                 = (void*) (0UL), /* Reserved */
        .pvReservedC12                 = (void*) (0UL), /* Reserved */
        .pvReservedC11                 = (void*) (0UL), /* Reserved */
        .pvReservedC10                 = (void*) (0UL), /* Reserved */
        .pvReservedC9                  = (void*) (0UL), /* Reserved */
        .pvReservedC8                  = (void*) (0UL), /* Reserved */
        .pvReservedC7                  = (void*) (0UL), /* Reserved */
        .pvReservedC6                  = (void*) (0UL), /* Reserved */
        .pvReservedC5                  = (void*) (0UL), /* Reserved */
        .pvReservedC4                  = (void*) (0UL), /* Reserved */
        .pvReservedC3                  = (void*) (0UL), /* Reserved */
        .pvReservedC2                  = (void*) (0UL), /* Reserved */
        .pvReservedC1                  = (void*) (0UL), /* Reserved */

        /* Configurable interrupts */
        .pfnEXT_FIQ_Handler            = (void*) EXT_FIQ_Handler, /* 0  Advanced Interrupt Controller */
        .pfnSYSC_Handler               = (void*) SYSC_Handler,   /* 1  Power Management Controller */
        .pfnPIOA_Handler               = (void*) PIOA_Handler,   /* 2  Parallel Input/Output Controller */
        .pfnPIOB_Handler               = (void*) PIOB_Handler,   /* 3  Parallel Input/Output Controller */
        .pfnPIOC_Handler               = (void*) PIOC_Handler,   /* 4  Parallel Input/Output Controller */
        .pfnFLEXCOM0_Handler           = (void*) FLEXCOM0_Handler, /* 5  Flexible Serial Communication */
        .pfnFLEXCOM1_Handler           = (void*) FLEXCOM1_Handler, /* 6  Flexible Serial Communication */
        .pfnFLEXCOM2_Handler           = (void*) FLEXCOM2_Handler, /* 7  Flexible Serial Communication */
        .pfnFLEXCOM3_Handler           = (void*) FLEXCOM3_Handler, /* 8  Flexible Serial Communication */
        .pfnFLEXCOM6_Handler           = (void*) FLEXCOM6_Handler, /* 9  Flexible Serial Communication */
        .pfnFLEXCOM7_Handler           = (void*) FLEXCOM7_Handler, /* 10 Flexible Serial Communication */
        .pfnFLEXCOM8_Handler           = (void*) FLEXCOM8_Handler, /* 11 Flexible Serial Communication */
        .pfnSDMMC0_Handler             = (void*) SDMMC0_Handler, /* 12 Secure Digital MultiMedia Card Controller */
        .pfnFLEXCOM4_Handler           = (void*) FLEXCOM4_Handler, /* 13 Flexible Serial Communication */
        .pfnFLEXCOM5_Handler           = (void*) FLEXCOM5_Handler, /* 14 Flexible Serial Communication */
        .pfnFLEXCOM9_Handler           = (void*) FLEXCOM9_Handler, /* 15 Flexible Serial Communication */
        .pfnFLEXCOM10_Handler          = (void*) FLEXCOM10_Handler, /* 16 Flexible Serial Communication */
        .pfnTC0_Handler                = (void*) TC0_Handler,    /* 17 Timer Counter */
        .pfnPWM_Handler                = (void*) PWM_Handler,    /* 18 Pulse Width Modulation Controller */
        .pfnADC_Handler                = (void*) ADC_Handler,    /* 19 Analog-to-Digital Converter */
        .pfnXDMAC_Handler              = (void*) XDMAC_Handler,  /* 20 Extensible DMA Controller */
        .pfnMATRIX_Handler             = (void*) MATRIX_Handler, /* 21 AHB Bus Matrix */
        .pfnUHPHS_Handler              = (void*) UHPHS_Handler,  /* 22 USB Host High Speed Port */
        .pfnUDPHS_Handler              = (void*) UDPHS_Handler,  /* 23 IP_Name */
        .pfnGMAC_Handler               = (void*) GMAC_Handler,   /* 24 Gigabit Ethernet MAC */
        .pfnXLCDC_Handler              = (void*) XLCDC_Handler,  /* 25 LCD Controller */
        .pfnSDMMC1_Handler             = (void*) SDMMC1_Handler, /* 26 Secure Digital MultiMedia Card Controller */
        .pvReserved27                  = (void*) (0UL),          /* 27 Reserved */
        .pfnSSC_Handler                = (void*) SSC_Handler,    /* 28 Synchronous Serial Controller */
        .pfnMCAN0_INT0_Handler         = (void*) MCAN0_INT0_Handler, /* 29 Controller Area Network */
        .pfnMCAN1_INT0_Handler         = (void*) MCAN1_INT0_Handler, /* 30 Controller Area Network */
        .pfnEXT_IRQ_Handler            = (void*) EXT_IRQ_Handler, /* 31 Advanced Interrupt Controller */
        .pfnFLEXCOM11_Handler          = (void*) FLEXCOM11_Handler, /* 32 Flexible Serial Communication */
        .pfnFLEXCOM12_Handler          = (void*) FLEXCOM12_Handler, /* 33 Flexible Serial Communication */
        .pfnI2SMCC_Handler             = (void*) I2SMCC_Handler, /* 34 Inter-IC Sound Multi Channel Controller */
        .pfnQSPI_Handler               = (void*) QSPI_Handler,   /* 35 Quad Serial Peripheral Interface */
        .pfnGFX2D_Handler              = (void*) GFX2D_Handler,  /* 36 2D Graphics Engine */
        .pfnPIT64B0_Handler            = (void*) PIT64B0_Handler, /* 37 Periodic Interval Timer 64-bit */
        .pfnTRNG_Handler               = (void*) TRNG_Handler,   /* 38 True Random Number Generator */
        .pfnAES_Handler                = (void*) AES_Handler,    /* 39 Advanced Encryption Standard */
        .pfnTDES_Handler               = (void*) TDES_Handler,   /* 40 Triple Data Encryption Standard */
        .pfnSHA_Handler                = (void*) SHA_Handler,    /* 41 Secure Hash Algorithm */
        .pfnCLASSD_Handler             = (void*) CLASSD_Handler, /* 42 Audio Class D Amplifier */
        .pfnISC_Handler                = (void*) ISC_Handler,    /* 43 Image Sensor Controller */
        .pfnPIOD_Handler               = (void*) PIOD_Handler,   /* 44 Parallel Input/Output Controller */
        .pfnTC1_Handler                = (void*) TC1_Handler,    /* 45 Timer Counter */
        .pfnOTPC_Handler               = (void*) OTPC_Handler,   /* 46 OTP Memory Controller */
        .pfnDBGU_Handler               = (void*) DBGU_Handler,   /* 47 Debug Unit */
        .pfnECC_Handler                = (void*) ECC_Handler,    /* 48 Programmable Multibit Error Correction Code Controller */
        .pfnMC_Handler                 = (void*) MC_Handler,     /* 49 AHB Multiport DDR-SDRAM Controller */
        .pvReserved50                  = (void*) (0UL),          /* 50 Reserved */
        .pvReserved51                  = (void*) (0UL),          /* 51 Reserved */
        .pfnCSI2DC_Handler             = (void*) CSI2DC_Handler, /* 52 CSI-2 Demultiplexer Controller */
        .pvReserved53                  = (void*) (0UL),          /* 53 Reserved */
        .pvReserved54                  = (void*) (0UL),          /* 54 Reserved */
        .pvReserved55                  = (void*) (0UL),          /* 55 Reserved */
        .pfnLVDSC_Handler              = (void*) LVDSC_Handler,  /* 56 LVDS Controller */
        .pfnLVDSPHY_Handler            = (void*) LVDSPHY_Handler, /* 57  */
        .pfnPIT64B1_Handler            = (void*) PIT64B1_Handler, /* 58 Periodic Interval Timer 64-bit */
        .pvReserved59                  = (void*) (0UL),          /* 59 Reserved */
        .pfnGMAC_Q1_Handler            = (void*) GMAC_Q1_Handler, /* 60 Gigabit Ethernet MAC */
        .pfnGMAC_Q2_Handler            = (void*) GMAC_Q2_Handler, /* 61 Gigabit Ethernet MAC */
        .pfnGMAC_Q3_Handler            = (void*) GMAC_Q3_Handler, /* 62 Gigabit Ethernet MAC */
        .pfnGMAC_Q4_Handler            = (void*) GMAC_Q4_Handler, /* 63 Gigabit Ethernet MAC */
        .pfnGMAC_Q5_Handler            = (void*) GMAC_Q5_Handler, /* 64 Gigabit Ethernet MAC */
        .pfnGMAC_EMAC_Handler          = (void*) GMAC_EMAC_Handler, /* 65 Gigabit Ethernet MAC */
        .pfnGMAC_MMSL_Handler          = (void*) GMAC_MMSL_Handler, /* 66 Gigabit Ethernet MAC */
        .pfnGMAC_TSU_Handler           = (void*) GMAC_TSU_Handler, /* 67 Gigabit Ethernet MAC */
        .pfnMCAN0_INT1_Handler         = (void*) MCAN0_INT1_Handler, /* 68 Controller Area Network */
        .pfnMCAN1_INT1_Handler         = (void*) MCAN1_INT1_Handler  /* 69 Controller Area Network */
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
