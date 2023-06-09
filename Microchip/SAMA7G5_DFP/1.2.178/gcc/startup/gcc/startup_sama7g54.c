/**
 * \file
 *
 * \brief GCC startup file for ATSAMA7G54
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

#include "sama7g54.h"

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

/* Cortex-A7 core handlers */

/* Peripherals handlers */
void DWDT_SW_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DWDT_NSW_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DWDT_NSW_ALARM_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SCKC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SHDWC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RSTC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTT_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PMC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOD_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOE_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SECUMOD_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SECURAM_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SFR_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HSMC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void XDMAC0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void XDMAC1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void XDMAC2_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ACC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AES_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ASRC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CPKCC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CSI_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CSI2DC_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM2_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM3_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM4_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM5_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM6_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM7_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM8_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM9_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM10_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM11_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC0_TSU_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC1_TSU_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ICM_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ISC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2SMCC0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2SMCC1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MATRIX_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN0_INT0_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN1_INT0_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN2_INT0_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN3_INT0_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN4_INT0_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN5_INT0_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OTPC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PDMC0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PDMC1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B3_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B4_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B5_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PWM_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QSPI0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QSPI1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SDMMC0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SDMMC1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SDMMC2_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SHA_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPDIFRX_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPDIFTX_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SSC0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SSC1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CH0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CH1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CH2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCPCA_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCPCB_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TDES_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TZAESB_NS_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TZAESB_NS_SINT_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TZAESB_S_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TZAESB_S_SINT_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TZC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TZPM_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UDPHSA_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UDPHSB_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UHPHS_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void XDMAC0_SINT_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void XDMAC1_SINT_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void XDMAC2_SINT_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AES_SINT_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC0_Q1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC0_Q2_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC0_Q3_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC0_Q4_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC0_Q5_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC1_Q1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ICM_SINT_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN0_INT1_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN1_INT1_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN2_INT1_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN3_INT1_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN4_INT1_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN5_INT1_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_SINT_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_SINT_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOC_SINT_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOD_SINT_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOE_SINT_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B0_SINT_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B1_SINT_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B2_SINT_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B3_SINT_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B4_SINT_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIT64B5_SINT_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SDMMC0_TIMER_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SDMMC1_TIMER_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SDMMC2_TIMER_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SHA_SINT_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_SINT0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_SINT1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_SINT2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_SINT0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_SINT1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_SINT2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TDES_SINT_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_SINT_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXT_IRQ0_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXT_IRQ1_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

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
        .pvReserved0                   = (void*) (0UL),          /* 0  Reserved */
        .pvReserved1                   = (void*) (0UL),          /* 1  Reserved */
        .pvReserved2                   = (void*) (0UL),          /* 2  Reserved */
        .pvReserved3                   = (void*) (0UL),          /* 3  Reserved */
        .pvReserved4                   = (void*) (0UL),          /* 4  Reserved */
        .pvReserved5                   = (void*) (0UL),          /* 5  Reserved */
        .pvReserved6                   = (void*) (0UL),          /* 6  Reserved */
        .pvReserved7                   = (void*) (0UL),          /* 7  Reserved */
        .pvReserved8                   = (void*) (0UL),          /* 8  Reserved */
        .pvReserved9                   = (void*) (0UL),          /* 9  Reserved */
        .pvReserved10                  = (void*) (0UL),          /* 10 Reserved */
        .pvReserved11                  = (void*) (0UL),          /* 11 Reserved */
        .pvReserved12                  = (void*) (0UL),          /* 12 Reserved */
        .pvReserved13                  = (void*) (0UL),          /* 13 Reserved */
        .pvReserved14                  = (void*) (0UL),          /* 14 Reserved */
        .pvReserved15                  = (void*) (0UL),          /* 15 Reserved */
        .pvReserved16                  = (void*) (0UL),          /* 16 Reserved */
        .pvReserved17                  = (void*) (0UL),          /* 17 Reserved */
        .pvReserved18                  = (void*) (0UL),          /* 18 Reserved */
        .pvReserved19                  = (void*) (0UL),          /* 19 Reserved */
        .pvReserved20                  = (void*) (0UL),          /* 20 Reserved */
        .pvReserved21                  = (void*) (0UL),          /* 21 Reserved */
        .pvReserved22                  = (void*) (0UL),          /* 22 Reserved */
        .pvReserved23                  = (void*) (0UL),          /* 23 Reserved */
        .pvReserved24                  = (void*) (0UL),          /* 24 Reserved */
        .pvReserved25                  = (void*) (0UL),          /* 25 Reserved */
        .pvReserved26                  = (void*) (0UL),          /* 26 Reserved */
        .pvReserved27                  = (void*) (0UL),          /* 27 Reserved */
        .pvReserved28                  = (void*) (0UL),          /* 28 Reserved */
        .pvReserved29                  = (void*) (0UL),          /* 29 Reserved */
        .pvReserved30                  = (void*) (0UL),          /* 30 Reserved */
        .pvReserved31                  = (void*) (0UL),          /* 31 Reserved */
        .pfnDWDT_SW_Handler            = (void*) DWDT_SW_Handler, /* 32 Dual Watchdog Timer */
        .pfnDWDT_NSW_Handler           = (void*) DWDT_NSW_Handler, /* 33 Dual Watchdog Timer */
        .pfnDWDT_NSW_ALARM_Handler     = (void*) DWDT_NSW_ALARM_Handler, /* 34 Dual Watchdog Timer */
        .pvReserved35                  = (void*) (0UL),          /* 35 Reserved */
        .pfnSCKC_Handler               = (void*) SCKC_Handler,   /* 36 Slow Clock Controller */
        .pfnSHDWC_Handler              = (void*) SHDWC_Handler,  /* 37 Shutdown Controller */
        .pfnRSTC_Handler               = (void*) RSTC_Handler,   /* 38 Reset Controller */
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 39 Real-time Clock */
        .pfnRTT_Handler                = (void*) RTT_Handler,    /* 40 Real-time Timer */
        .pvReserved41                  = (void*) (0UL),          /* 41 Reserved */
        .pfnPMC_Handler                = (void*) PMC_Handler,    /* 42 Power Management Controller */
        .pfnPIOA_Handler               = (void*) PIOA_Handler,   /* 43 Parallel Input/Output Controller */
        .pfnPIOB_Handler               = (void*) PIOB_Handler,   /* 44 Parallel Input/Output Controller */
        .pfnPIOC_Handler               = (void*) PIOC_Handler,   /* 45 Parallel Input/Output Controller */
        .pfnPIOD_Handler               = (void*) PIOD_Handler,   /* 46 Parallel Input/Output Controller */
        .pfnPIOE_Handler               = (void*) PIOE_Handler,   /* 47 Parallel Input/Output Controller */
        .pvReserved48                  = (void*) (0UL),          /* 48 Reserved */
        .pfnSECUMOD_Handler            = (void*) SECUMOD_Handler, /* 49 Security Module */
        .pfnSECURAM_Handler            = (void*) SECURAM_Handler, /* 50  */
        .pfnSFR_Handler                = (void*) SFR_Handler,    /* 51 Special Function Register */
        .pvReserved52                  = (void*) (0UL),          /* 52 Reserved */
        .pfnHSMC_Handler               = (void*) HSMC_Handler,   /* 53 Static Memory Controller */
        .pfnXDMAC0_Handler             = (void*) XDMAC0_Handler, /* 54 Extensible DMA Controller */
        .pfnXDMAC1_Handler             = (void*) XDMAC1_Handler, /* 55 Extensible DMA Controller */
        .pfnXDMAC2_Handler             = (void*) XDMAC2_Handler, /* 56 Extensible DMA Controller */
        .pfnACC_Handler                = (void*) ACC_Handler,    /* 57 Analog Comparator Controller */
        .pfnADC_Handler                = (void*) ADC_Handler,    /* 58 Analog-to-Digital Converter */
        .pfnAES_Handler                = (void*) AES_Handler,    /* 59 Advanced Encryption Standard */
        .pvReserved60                  = (void*) (0UL),          /* 60 Reserved */
        .pvReserved61                  = (void*) (0UL),          /* 61 Reserved */
        .pfnASRC_Handler               = (void*) ASRC_Handler,   /* 62 Asynchronous Sample Rate Converter */
        .pvReserved63                  = (void*) (0UL),          /* 63 Reserved */
        .pfnCPKCC_Handler              = (void*) CPKCC_Handler,  /* 64 Classic Public Key Cryptography Controller */
        .pfnCSI_Handler                = (void*) CSI_Handler,    /* 65 Camera Serial Interface */
        .pfnCSI2DC_Handler             = (void*) CSI2DC_Handler, /* 66 CSI-2 Demultiplexer Controller */
        .pvReserved67                  = (void*) (0UL),          /* 67 Reserved */
        .pvReserved68                  = (void*) (0UL),          /* 68 Reserved */
        .pvReserved69                  = (void*) (0UL),          /* 69 Reserved */
        .pfnFLEXCOM0_Handler           = (void*) FLEXCOM0_Handler, /* 70 Flexible Serial Communication */
        .pfnFLEXCOM1_Handler           = (void*) FLEXCOM1_Handler, /* 71 Flexible Serial Communication */
        .pfnFLEXCOM2_Handler           = (void*) FLEXCOM2_Handler, /* 72 Flexible Serial Communication */
        .pfnFLEXCOM3_Handler           = (void*) FLEXCOM3_Handler, /* 73 Flexible Serial Communication */
        .pfnFLEXCOM4_Handler           = (void*) FLEXCOM4_Handler, /* 74 Flexible Serial Communication */
        .pfnFLEXCOM5_Handler           = (void*) FLEXCOM5_Handler, /* 75 Flexible Serial Communication */
        .pfnFLEXCOM6_Handler           = (void*) FLEXCOM6_Handler, /* 76 Flexible Serial Communication */
        .pfnFLEXCOM7_Handler           = (void*) FLEXCOM7_Handler, /* 77 Flexible Serial Communication */
        .pfnFLEXCOM8_Handler           = (void*) FLEXCOM8_Handler, /* 78 Flexible Serial Communication */
        .pfnFLEXCOM9_Handler           = (void*) FLEXCOM9_Handler, /* 79 Flexible Serial Communication */
        .pfnFLEXCOM10_Handler          = (void*) FLEXCOM10_Handler, /* 80 Flexible Serial Communication */
        .pfnFLEXCOM11_Handler          = (void*) FLEXCOM11_Handler, /* 81 Flexible Serial Communication */
        .pvReserved82                  = (void*) (0UL),          /* 82 Reserved */
        .pfnGMAC0_Handler              = (void*) GMAC0_Handler,  /* 83 Gigabit Ethernet MAC */
        .pfnGMAC1_Handler              = (void*) GMAC1_Handler,  /* 84 Gigabit Ethernet MAC */
        .pfnGMAC0_TSU_Handler          = (void*) GMAC0_TSU_Handler, /* 85 Gigabit Ethernet MAC */
        .pfnGMAC1_TSU_Handler          = (void*) GMAC1_TSU_Handler, /* 86 Gigabit Ethernet MAC */
        .pfnICM_Handler                = (void*) ICM_Handler,    /* 87 Integrity Check Monitor */
        .pfnISC_Handler                = (void*) ISC_Handler,    /* 88 Image Sensor Controller */
        .pfnI2SMCC0_Handler            = (void*) I2SMCC0_Handler, /* 89 Inter-IC Sound Multi Channel Controller */
        .pfnI2SMCC1_Handler            = (void*) I2SMCC1_Handler, /* 90 Inter-IC Sound Multi Channel Controller */
        .pvReserved91                  = (void*) (0UL),          /* 91 Reserved */
        .pfnMATRIX_Handler             = (void*) MATRIX_Handler, /* 92 AHB Bus Matrix */
        .pfnMCAN0_INT0_Handler         = (void*) MCAN0_INT0_Handler, /* 93 Controller Area Network */
        .pfnMCAN1_INT0_Handler         = (void*) MCAN1_INT0_Handler, /* 94 Controller Area Network */
        .pfnMCAN2_INT0_Handler         = (void*) MCAN2_INT0_Handler, /* 95 Controller Area Network */
        .pfnMCAN3_INT0_Handler         = (void*) MCAN3_INT0_Handler, /* 96 Controller Area Network */
        .pfnMCAN4_INT0_Handler         = (void*) MCAN4_INT0_Handler, /* 97 Controller Area Network */
        .pfnMCAN5_INT0_Handler         = (void*) MCAN5_INT0_Handler, /* 98 Controller Area Network */
        .pfnOTPC_Handler               = (void*) OTPC_Handler,   /* 99 OTP Memory Controller */
        .pfnPDMC0_Handler              = (void*) PDMC0_Handler,  /* 100 Pulse Density Microphone Controller */
        .pfnPDMC1_Handler              = (void*) PDMC1_Handler,  /* 101 Pulse Density Microphone Controller */
        .pfnPIT64B0_Handler            = (void*) PIT64B0_Handler, /* 102 Periodic Interval Timer 64-bit */
        .pfnPIT64B1_Handler            = (void*) PIT64B1_Handler, /* 103 Periodic Interval Timer 64-bit */
        .pfnPIT64B2_Handler            = (void*) PIT64B2_Handler, /* 104 Periodic Interval Timer 64-bit */
        .pfnPIT64B3_Handler            = (void*) PIT64B3_Handler, /* 105 Periodic Interval Timer 64-bit */
        .pfnPIT64B4_Handler            = (void*) PIT64B4_Handler, /* 106 Periodic Interval Timer 64-bit */
        .pfnPIT64B5_Handler            = (void*) PIT64B5_Handler, /* 107 Periodic Interval Timer 64-bit */
        .pvReserved108                 = (void*) (0UL),          /* 108 Reserved */
        .pfnPWM_Handler                = (void*) PWM_Handler,    /* 109 Pulse Width Modulation Controller */
        .pfnQSPI0_Handler              = (void*) QSPI0_Handler,  /* 110 Quad Serial Peripheral Interface */
        .pfnQSPI1_Handler              = (void*) QSPI1_Handler,  /* 111 Quad Serial Peripheral Interface */
        .pfnSDMMC0_Handler             = (void*) SDMMC0_Handler, /* 112 Secure Digital MultiMedia Card Controller */
        .pfnSDMMC1_Handler             = (void*) SDMMC1_Handler, /* 113 Secure Digital MultiMedia Card Controller */
        .pfnSDMMC2_Handler             = (void*) SDMMC2_Handler, /* 114 Secure Digital MultiMedia Card Controller */
        .pfnSHA_Handler                = (void*) SHA_Handler,    /* 115 Secure Hash Algorithm */
        .pfnSPDIFRX_Handler            = (void*) SPDIFRX_Handler, /* 116 Sony/Philips Digital Interface Receiver */
        .pfnSPDIFTX_Handler            = (void*) SPDIFTX_Handler, /* 117 Sony/Philips Digital Interface */
        .pfnSSC0_Handler               = (void*) SSC0_Handler,   /* 118 Synchronous Serial Controller */
        .pfnSSC1_Handler               = (void*) SSC1_Handler,   /* 119 Synchronous Serial Controller */
        .pfnTC0_CH0_Handler            = (void*) TC0_CH0_Handler, /* 120 Timer Counter */
        .pfnTC0_CH1_Handler            = (void*) TC0_CH1_Handler, /* 121 Timer Counter */
        .pfnTC0_CH2_Handler            = (void*) TC0_CH2_Handler, /* 122 Timer Counter */
        .pfnTC1_CH0_Handler            = (void*) TC1_CH0_Handler, /* 123 Timer Counter */
        .pfnTC1_CH1_Handler            = (void*) TC1_CH1_Handler, /* 124 Timer Counter */
        .pfnTC1_CH2_Handler            = (void*) TC1_CH2_Handler, /* 125 Timer Counter */
        .pfnTCPCA_Handler              = (void*) TCPCA_Handler,  /* 126 Battery Charging and Type-C Port Controller */
        .pfnTCPCB_Handler              = (void*) TCPCB_Handler,  /* 127 Battery Charging and Type-C Port Controller */
        .pfnTDES_Handler               = (void*) TDES_Handler,   /* 128 Triple Data Encryption Standard */
        .pfnTRNG_Handler               = (void*) TRNG_Handler,   /* 129 True Random Number Generator */
        .pfnTZAESB_NS_Handler          = (void*) TZAESB_NS_Handler, /* 130 TrustZone Advanced Encryption Standard Bridge */
        .pfnTZAESB_NS_SINT_Handler     = (void*) TZAESB_NS_SINT_Handler, /* 131 TrustZone Advanced Encryption Standard Bridge */
        .pfnTZAESB_S_Handler           = (void*) TZAESB_S_Handler, /* 132 TrustZone Advanced Encryption Standard Bridge */
        .pfnTZAESB_S_SINT_Handler      = (void*) TZAESB_S_SINT_Handler, /* 133 TrustZone Advanced Encryption Standard Bridge */
        .pfnTZC_Handler                = (void*) TZC_Handler,    /* 134 TrustZone Address Space Controller */
        .pfnTZPM_Handler               = (void*) TZPM_Handler,   /* 135 System Interconnect and Security */
        .pfnUDPHSA_Handler             = (void*) UDPHSA_Handler, /* 136 USB High Speed Device Port */
        .pfnUDPHSB_Handler             = (void*) UDPHSB_Handler, /* 137 USB High Speed Device Port */
        .pfnUHPHS_Handler              = (void*) UHPHS_Handler,  /* 138 USB Host High Speed Port */
        .pvReserved139                 = (void*) (0UL),          /* 139 Reserved */
        .pvReserved140                 = (void*) (0UL),          /* 140 Reserved */
        .pvReserved141                 = (void*) (0UL),          /* 141 Reserved */
        .pvReserved142                 = (void*) (0UL),          /* 142 Reserved */
        .pvReserved143                 = (void*) (0UL),          /* 143 Reserved */
        .pfnXDMAC0_SINT_Handler        = (void*) XDMAC0_SINT_Handler, /* 144 Extensible DMA Controller */
        .pfnXDMAC1_SINT_Handler        = (void*) XDMAC1_SINT_Handler, /* 145 Extensible DMA Controller */
        .pfnXDMAC2_SINT_Handler        = (void*) XDMAC2_SINT_Handler, /* 146 Extensible DMA Controller */
        .pfnAES_SINT_Handler           = (void*) AES_SINT_Handler, /* 147 Advanced Encryption Standard */
        .pfnGMAC0_Q1_Handler           = (void*) GMAC0_Q1_Handler, /* 148 Gigabit Ethernet MAC */
        .pfnGMAC0_Q2_Handler           = (void*) GMAC0_Q2_Handler, /* 149 Gigabit Ethernet MAC */
        .pfnGMAC0_Q3_Handler           = (void*) GMAC0_Q3_Handler, /* 150 Gigabit Ethernet MAC */
        .pfnGMAC0_Q4_Handler           = (void*) GMAC0_Q4_Handler, /* 151 Gigabit Ethernet MAC */
        .pfnGMAC0_Q5_Handler           = (void*) GMAC0_Q5_Handler, /* 152 Gigabit Ethernet MAC */
        .pfnGMAC1_Q1_Handler           = (void*) GMAC1_Q1_Handler, /* 153 Gigabit Ethernet MAC */
        .pfnICM_SINT_Handler           = (void*) ICM_SINT_Handler, /* 154 Integrity Check Monitor */
        .pfnMCAN0_INT1_Handler         = (void*) MCAN0_INT1_Handler, /* 155 Controller Area Network */
        .pfnMCAN1_INT1_Handler         = (void*) MCAN1_INT1_Handler, /* 156 Controller Area Network */
        .pfnMCAN2_INT1_Handler         = (void*) MCAN2_INT1_Handler, /* 157 Controller Area Network */
        .pfnMCAN3_INT1_Handler         = (void*) MCAN3_INT1_Handler, /* 158 Controller Area Network */
        .pfnMCAN4_INT1_Handler         = (void*) MCAN4_INT1_Handler, /* 159 Controller Area Network */
        .pfnMCAN5_INT1_Handler         = (void*) MCAN5_INT1_Handler, /* 160 Controller Area Network */
        .pfnPIOA_SINT_Handler          = (void*) PIOA_SINT_Handler, /* 161 Parallel Input/Output Controller */
        .pfnPIOB_SINT_Handler          = (void*) PIOB_SINT_Handler, /* 162 Parallel Input/Output Controller */
        .pfnPIOC_SINT_Handler          = (void*) PIOC_SINT_Handler, /* 163 Parallel Input/Output Controller */
        .pfnPIOD_SINT_Handler          = (void*) PIOD_SINT_Handler, /* 164 Parallel Input/Output Controller */
        .pfnPIOE_SINT_Handler          = (void*) PIOE_SINT_Handler, /* 165 Parallel Input/Output Controller */
        .pvReserved166                 = (void*) (0UL),          /* 166 Reserved */
        .pfnPIT64B0_SINT_Handler       = (void*) PIT64B0_SINT_Handler, /* 167 Periodic Interval Timer 64-bit */
        .pfnPIT64B1_SINT_Handler       = (void*) PIT64B1_SINT_Handler, /* 168 Periodic Interval Timer 64-bit */
        .pfnPIT64B2_SINT_Handler       = (void*) PIT64B2_SINT_Handler, /* 169 Periodic Interval Timer 64-bit */
        .pfnPIT64B3_SINT_Handler       = (void*) PIT64B3_SINT_Handler, /* 170 Periodic Interval Timer 64-bit */
        .pfnPIT64B4_SINT_Handler       = (void*) PIT64B4_SINT_Handler, /* 171 Periodic Interval Timer 64-bit */
        .pfnPIT64B5_SINT_Handler       = (void*) PIT64B5_SINT_Handler, /* 172 Periodic Interval Timer 64-bit */
        .pfnSDMMC0_TIMER_Handler       = (void*) SDMMC0_TIMER_Handler, /* 173 Secure Digital MultiMedia Card Controller */
        .pfnSDMMC1_TIMER_Handler       = (void*) SDMMC1_TIMER_Handler, /* 174 Secure Digital MultiMedia Card Controller */
        .pfnSDMMC2_TIMER_Handler       = (void*) SDMMC2_TIMER_Handler, /* 175 Secure Digital MultiMedia Card Controller */
        .pfnSHA_SINT_Handler           = (void*) SHA_SINT_Handler, /* 176 Secure Hash Algorithm */
        .pfnTC0_SINT0_Handler          = (void*) TC0_SINT0_Handler, /* 177 Timer Counter */
        .pfnTC0_SINT1_Handler          = (void*) TC0_SINT1_Handler, /* 178 Timer Counter */
        .pfnTC0_SINT2_Handler          = (void*) TC0_SINT2_Handler, /* 179 Timer Counter */
        .pfnTC1_SINT0_Handler          = (void*) TC1_SINT0_Handler, /* 180 Timer Counter */
        .pfnTC1_SINT1_Handler          = (void*) TC1_SINT1_Handler, /* 181 Timer Counter */
        .pfnTC1_SINT2_Handler          = (void*) TC1_SINT2_Handler, /* 182 Timer Counter */
        .pfnTDES_SINT_Handler          = (void*) TDES_SINT_Handler, /* 183 Triple Data Encryption Standard */
        .pfnTRNG_SINT_Handler          = (void*) TRNG_SINT_Handler, /* 184 True Random Number Generator */
        .pfnEIC_EXT_IRQ0_Handler       = (void*) EIC_EXT_IRQ0_Handler, /* 185 External Interrupt Controller */
        .pfnEIC_EXT_IRQ1_Handler       = (void*) EIC_EXT_IRQ1_Handler  /* 186 External Interrupt Controller */
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
