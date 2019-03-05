/**
 * \file
 *
 * \brief Header file for ATSAMA5D21
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

/* file generated from device description version 2019-01-23T22:42:01Z */
#ifndef _SAMA5D21_H_
#define _SAMA5D21_H_

/** \addtogroup SAMA5D21_definitions SAMA5D21 definitions
  This file defines all structures and symbols for SAMA5D21:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
 *  @{
 */

#ifdef __cplusplus
 extern "C" {
#endif

/** \defgroup Atmel_glob_defs Atmel Global Defines

    <strong>IO Type Qualifiers</strong> are used
    \li to specify the access to peripheral variables.
    \li for automatic generation of peripheral register debug information.

    \remark
    CMSIS core has a syntax that differs from this using i.e. __I, __O, or __IO followed by 'uint<size>_t' respective types.
    Default the header files will follow the CMSIS core syntax.
 *  @{
 */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#include <stdint.h>

/* IO definitions (access restrictions to peripheral registers) */
#ifndef __cplusplus
typedef volatile const uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile const uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile const uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#else
typedef volatile       uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile       uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile       uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#endif
typedef volatile       uint32_t WoReg;   /**< Write only 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t WoReg16; /**< Write only 16-bit register (volatile unsigned int) */
typedef volatile       uint8_t  WoReg8;  /**< Write only  8-bit register (volatile unsigned int) */
typedef volatile       uint32_t RwReg;   /**< Read-Write 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t RwReg16; /**< Read-Write 16-bit register (volatile unsigned int) */
typedef volatile       uint8_t  RwReg8;  /**< Read-Write  8-bit register (volatile unsigned int) */

#define CAST(type, value) ((type *)(value)) /**< Pointer Type Conversion Macro for C/C++ */
#define REG_ACCESS(type, address) (*(type*)(address)) /**< C code: Register value */
#else /* Assembler */
#define CAST(type, value) (value) /**< Pointer Type Conversion Macro for Assembler */
#define REG_ACCESS(type, address) (address) /**< Assembly code: Register address */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !defined(SKIP_INTEGER_LITERALS)

#if defined(_U_) || defined(_L_) || defined(_UL_)
  #error "Integer Literals macros already defined elsewhere"
#endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with adding suffixes to integer literal constants for C/C++ */
#define _U_(x) x ## U    /**< C code: Unsigned integer literal constant value */
#define _L_(x) x ## L    /**< C code: Long integer literal constant value */
#define _UL_(x) x ## UL  /**< C code: Unsigned Long integer literal constant value */

#else /* Assembler */

#define _U_(x) x    /**< Assembler: Unsigned integer literal constant value */
#define _L_(x) x    /**< Assembler: Long integer literal constant value */
#define _UL_(x) x   /**< Assembler: Unsigned Long integer literal constant value */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* SKIP_INTEGER_LITERALS */
/** @}  end of Atmel Global Defines */

/** \addtogroup SAMA5D21_cmsis CMSIS Definitions
 *  @{
 */
/* ************************************************************************** */
/*   CMSIS DEFINITIONS FOR SAMA5D21 */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-A5 Processor Exceptions Numbers ******************************/
/******  SAMA5D21 specific Interrupt Numbers ***********************************/
  SAIC_IRQn                 = 0  , /**< 0   SAMA5D21 Advanced Interrupt Controller (SAIC) */
  PIT_IRQn                  = 3  , /**< 3   SAMA5D21 Periodic Interval Timer (PIT) */
  WDT_IRQn                  = 4  , /**< 4   SAMA5D21 Watchdog Timer (WDT)       */
  GMAC_IRQn                 = 5  , /**< 5   SAMA5D21 Gigabit Ethernet MAC (GMAC) */
  XDMAC0_IRQn               = 6  , /**< 6   SAMA5D21 Extensible DMA Controller (XDMAC0) */
  XDMAC1_IRQn               = 7  , /**< 7   SAMA5D21 Extensible DMA Controller (XDMAC1) */
  ICM_IRQn                  = 8  , /**< 8   SAMA5D21 Integrity Check Monitor (ICM) */
  AES_IRQn                  = 9  , /**< 9   SAMA5D21 Advanced Encryption Standard (AES) */
  AESB_IRQn                 = 10 , /**< 10  SAMA5D21 Advanced Encryption Standard Bridge (AESB) */
  TDES_IRQn                 = 11 , /**< 11  SAMA5D21 Triple Data Encryption Standard (TDES) */
  SHA_IRQn                  = 12 , /**< 12  SAMA5D21 Secure Hash Algorithm (SHA) */
  MPDDRC_IRQn               = 13 , /**< 13  SAMA5D21 AHB Multiport DDR-SDRAM Controller (MPDDRC) */
  MATRIX1_IRQn              = 14 , /**< 14  SAMA5D21 AHB Bus Matrix (MATRIX1)   */
  MATRIX0_IRQn              = 15 , /**< 15  SAMA5D21 AHB Bus Matrix (MATRIX0)   */
  SECUMOD_IRQn              = 16 , /**< 16  SAMA5D21 Security Module (SECUMOD)  */
  PIOA_IRQn                 = 18 , /**< 18  SAMA5D21 Parallel Input/Output Controller (PIOA) */
  FLEXCOM0_IRQn             = 19 , /**< 19  SAMA5D21 Flexible Serial Communication (FLEXCOM0) */
  FLEXCOM1_IRQn             = 20 , /**< 20  SAMA5D21 Flexible Serial Communication (FLEXCOM1) */
  FLEXCOM3_IRQn             = 22 , /**< 22  SAMA5D21 Flexible Serial Communication (FLEXCOM3) */
  FLEXCOM4_IRQn             = 23 , /**< 23  SAMA5D21 Flexible Serial Communication (FLEXCOM4) */
  UART0_IRQn                = 24 , /**< 24  SAMA5D21 Universal Asynchronous Receiver Transmitter (UART0) */
  UART1_IRQn                = 25 , /**< 25  SAMA5D21 Universal Asynchronous Receiver Transmitter (UART1) */
  UART2_IRQn                = 26 , /**< 26  SAMA5D21 Universal Asynchronous Receiver Transmitter (UART2) */
  UART3_IRQn                = 27 , /**< 27  SAMA5D21 Universal Asynchronous Receiver Transmitter (UART3) */
  UART4_IRQn                = 28 , /**< 28  SAMA5D21 Universal Asynchronous Receiver Transmitter (UART4) */
  TWIHS0_IRQn               = 29 , /**< 29  SAMA5D21 Two-wire Interface High Speed (TWIHS0) */
  TWIHS1_IRQn               = 30 , /**< 30  SAMA5D21 Two-wire Interface High Speed (TWIHS1) */
  SDMMC1_IRQn               = 32 , /**< 32  SAMA5D21 Secure Digital MultiMedia Card Controller (SDMMC1) */
  SPI0_IRQn                 = 33 , /**< 33  SAMA5D21 Serial Peripheral Interface (SPI0) */
  SPI1_IRQn                 = 34 , /**< 34  SAMA5D21 Serial Peripheral Interface (SPI1) */
  TC0_IRQn                  = 35 , /**< 35  SAMA5D21 Timer Counter (TC0)        */
  TC1_IRQn                  = 36 , /**< 36  SAMA5D21 Timer Counter (TC0)        */
  PWM_IRQn                  = 38 , /**< 38  SAMA5D21 Pulse Width Modulation Controller (PWM) */
  ADC_IRQn                  = 40 , /**< 40  SAMA5D21 Analog-to-Digital Converter (ADC) */
  UDPHS_IRQn                = 42 , /**< 42  SAMA5D21 USB High Speed Device Port (UDPHS) */
  SSC0_IRQn                 = 43 , /**< 43  SAMA5D21 Synchronous Serial Controller (SSC0) */
  SSC1_IRQn                 = 44 , /**< 44  SAMA5D21 Synchronous Serial Controller (SSC1) */
  LCDC_IRQn                 = 45 , /**< 45  SAMA5D21 LCD Controller (LCDC)      */
  ISC_IRQn                  = 46 , /**< 46  SAMA5D21 Image Sensor Controller (ISC) */
  TRNG_IRQn                 = 47 , /**< 47  SAMA5D21 True Random Number Generator (TRNG) */
  PDMIC_IRQn                = 48 , /**< 48  SAMA5D21 Pulse Density Modulation Interface Controller (PDMIC) */
  AIC_IRQn                  = 49 , /**< 49  SAMA5D21 Advanced Interrupt Controller (AIC) */
  SFC_IRQn                  = 50 , /**< 50  SAMA5D21 Secure Fuse Controller (SFC) */
  QSPI0_IRQn                = 52 , /**< 52  SAMA5D21 Quad Serial Peripheral Interface (QSPI0) */
  QSPI1_IRQn                = 53 , /**< 53  SAMA5D21 Quad Serial Peripheral Interface (QSPI1) */
  I2SC0_IRQn                = 54 , /**< 54  SAMA5D21 Inter-IC Sound Controller (I2SC0) */
  I2SC1_IRQn                = 55 , /**< 55  SAMA5D21 Inter-IC Sound Controller (I2SC1) */
  MCAN0_INT0_IRQn           = 56 , /**< 56  SAMA5D21 Controller Area Network (MCAN0) */
  PTC_IRQn                  = 58 , /**< 58  SAMA5D21 Peripheral Touch Controller (PTC) */
  CLASSD_IRQn               = 59 , /**< 59  SAMA5D21 Audio Class D Amplifier (CLASSD) (CLASSD) */
  L2CC_IRQn                 = 63 , /**< 63  SAMA5D21 L2 Cache Controller (L2CC) */
  MCAN0_INT1_IRQn           = 64 , /**< 64  SAMA5D21 Controller Area Network (MCAN0) */
  GMAC_Q1_IRQn              = 66 , /**< 66  SAMA5D21 Gigabit Ethernet MAC (GMAC) */
  GMAC_Q2_IRQn              = 67 , /**< 67  SAMA5D21 Gigabit Ethernet MAC (GMAC) */
  PIOB_IRQn                 = 68 , /**< 68  SAMA5D21 Parallel Input/Output Controller (PIOB) */
  PIOC_IRQn                 = 69 , /**< 69  SAMA5D21 Parallel Input/Output Controller (PIOC) */
  PIOD_IRQn                 = 70 , /**< 70  SAMA5D21 Parallel Input/Output Controller (PIOD) */
  SDMMC1_TIMER_IRQn         = 72 , /**< 72  SAMA5D21 Secure Digital MultiMedia Card Controller (SDMMC1) */
  SYSC_IRQn                 = 74 , /**< 74  SAMA5D21 Power Management Controller (PMC) */
  ACC_IRQn                  = 75 , /**< 75  SAMA5D21 Analog Comparator Controller (ACC) */
  RXLP_IRQn                 = 76 , /**< 76  SAMA5D21 Low Power Asynchronous Receiver (RXLP) */

  PERIPH_COUNT_IRQn        = 77  /**< Number of peripheral IDs */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* Cortex-M handlers */
  void* pvReservedC15;
  void* pvReservedC14;
  void* pvReservedC13;
  void* pvReservedC12;
  void* pvReservedC11;
  void* pvReservedC10;
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pvReservedC5;
  void* pvReservedC4;
  void* pvReservedC3;
  void* pvReservedC2;
  void* pvReservedC1;


  /* Peripheral handlers */
  void* pfnSAIC_Handler;                         /* 0   SAMA5D21 Advanced Interrupt Controller (SAIC) */
  void* pvReserved1;
  void* pvReserved2;
  void* pfnPIT_Handler;                          /* 3   SAMA5D21 Periodic Interval Timer (PIT) */
  void* pfnWDT_Handler;                          /* 4   SAMA5D21 Watchdog Timer (WDT)  */
  void* pfnGMAC_Handler;                         /* 5   SAMA5D21 Gigabit Ethernet MAC (GMAC) */
  void* pfnXDMAC0_Handler;                       /* 6   SAMA5D21 Extensible DMA Controller (XDMAC0) */
  void* pfnXDMAC1_Handler;                       /* 7   SAMA5D21 Extensible DMA Controller (XDMAC1) */
  void* pfnICM_Handler;                          /* 8   SAMA5D21 Integrity Check Monitor (ICM) */
  void* pfnAES_Handler;                          /* 9   SAMA5D21 Advanced Encryption Standard (AES) */
  void* pfnAESB_Handler;                         /* 10  SAMA5D21 Advanced Encryption Standard Bridge (AESB) */
  void* pfnTDES_Handler;                         /* 11  SAMA5D21 Triple Data Encryption Standard (TDES) */
  void* pfnSHA_Handler;                          /* 12  SAMA5D21 Secure Hash Algorithm (SHA) */
  void* pfnMPDDRC_Handler;                       /* 13  SAMA5D21 AHB Multiport DDR-SDRAM Controller (MPDDRC) */
  void* pfnMATRIX1_Handler;                      /* 14  SAMA5D21 AHB Bus Matrix (MATRIX1) */
  void* pfnMATRIX0_Handler;                      /* 15  SAMA5D21 AHB Bus Matrix (MATRIX0) */
  void* pfnSECUMOD_Handler;                      /* 16  SAMA5D21 Security Module (SECUMOD) */
  void* pvReserved17;
  void* pfnPIOA_Handler;                         /* 18  SAMA5D21 Parallel Input/Output Controller (PIOA) */
  void* pfnFLEXCOM0_Handler;                     /* 19  SAMA5D21 Flexible Serial Communication (FLEXCOM0) */
  void* pfnFLEXCOM1_Handler;                     /* 20  SAMA5D21 Flexible Serial Communication (FLEXCOM1) */
  void* pvReserved21;
  void* pfnFLEXCOM3_Handler;                     /* 22  SAMA5D21 Flexible Serial Communication (FLEXCOM3) */
  void* pfnFLEXCOM4_Handler;                     /* 23  SAMA5D21 Flexible Serial Communication (FLEXCOM4) */
  void* pfnUART0_Handler;                        /* 24  SAMA5D21 Universal Asynchronous Receiver Transmitter (UART0) */
  void* pfnUART1_Handler;                        /* 25  SAMA5D21 Universal Asynchronous Receiver Transmitter (UART1) */
  void* pfnUART2_Handler;                        /* 26  SAMA5D21 Universal Asynchronous Receiver Transmitter (UART2) */
  void* pfnUART3_Handler;                        /* 27  SAMA5D21 Universal Asynchronous Receiver Transmitter (UART3) */
  void* pfnUART4_Handler;                        /* 28  SAMA5D21 Universal Asynchronous Receiver Transmitter (UART4) */
  void* pfnTWIHS0_Handler;                       /* 29  SAMA5D21 Two-wire Interface High Speed (TWIHS0) */
  void* pfnTWIHS1_Handler;                       /* 30  SAMA5D21 Two-wire Interface High Speed (TWIHS1) */
  void* pvReserved31;
  void* pfnSDMMC1_Handler;                       /* 32  SAMA5D21 Secure Digital MultiMedia Card Controller (SDMMC1) */
  void* pfnSPI0_Handler;                         /* 33  SAMA5D21 Serial Peripheral Interface (SPI0) */
  void* pfnSPI1_Handler;                         /* 34  SAMA5D21 Serial Peripheral Interface (SPI1) */
  void* pfnTC0_Handler;                          /* 35  SAMA5D21 Timer Counter (TC0)   */
  void* pfnTC1_Handler;                          /* 36  SAMA5D21 Timer Counter (TC0)   */
  void* pvReserved37;
  void* pfnPWM_Handler;                          /* 38  SAMA5D21 Pulse Width Modulation Controller (PWM) */
  void* pvReserved39;
  void* pfnADC_Handler;                          /* 40  SAMA5D21 Analog-to-Digital Converter (ADC) */
  void* pvReserved41;
  void* pfnUDPHS_Handler;                        /* 42  SAMA5D21 USB High Speed Device Port (UDPHS) */
  void* pfnSSC0_Handler;                         /* 43  SAMA5D21 Synchronous Serial Controller (SSC0) */
  void* pfnSSC1_Handler;                         /* 44  SAMA5D21 Synchronous Serial Controller (SSC1) */
  void* pfnLCDC_Handler;                         /* 45  SAMA5D21 LCD Controller (LCDC) */
  void* pfnISC_Handler;                          /* 46  SAMA5D21 Image Sensor Controller (ISC) */
  void* pfnTRNG_Handler;                         /* 47  SAMA5D21 True Random Number Generator (TRNG) */
  void* pfnPDMIC_Handler;                        /* 48  SAMA5D21 Pulse Density Modulation Interface Controller (PDMIC) */
  void* pfnAIC_Handler;                          /* 49  SAMA5D21 Advanced Interrupt Controller (AIC) */
  void* pfnSFC_Handler;                          /* 50  SAMA5D21 Secure Fuse Controller (SFC) */
  void* pvReserved51;
  void* pfnQSPI0_Handler;                        /* 52  SAMA5D21 Quad Serial Peripheral Interface (QSPI0) */
  void* pfnQSPI1_Handler;                        /* 53  SAMA5D21 Quad Serial Peripheral Interface (QSPI1) */
  void* pfnI2SC0_Handler;                        /* 54  SAMA5D21 Inter-IC Sound Controller (I2SC0) */
  void* pfnI2SC1_Handler;                        /* 55  SAMA5D21 Inter-IC Sound Controller (I2SC1) */
  void* pfnMCAN0_INT0_Handler;                   /* 56  SAMA5D21 Controller Area Network (MCAN0) */
  void* pvReserved57;
  void* pfnPTC_Handler;                          /* 58  SAMA5D21 Peripheral Touch Controller (PTC) */
  void* pfnCLASSD_Handler;                       /* 59  SAMA5D21 Audio Class D Amplifier (CLASSD) (CLASSD) */
  void* pvReserved60;
  void* pvReserved61;
  void* pvReserved62;
  void* pfnL2CC_Handler;                         /* 63  SAMA5D21 L2 Cache Controller (L2CC) */
  void* pfnMCAN0_INT1_Handler;                   /* 64  SAMA5D21 Controller Area Network (MCAN0) */
  void* pvReserved65;
  void* pfnGMAC_Q1_Handler;                      /* 66  SAMA5D21 Gigabit Ethernet MAC (GMAC) */
  void* pfnGMAC_Q2_Handler;                      /* 67  SAMA5D21 Gigabit Ethernet MAC (GMAC) */
  void* pfnPIOB_Handler;                         /* 68  SAMA5D21 Parallel Input/Output Controller (PIOB) */
  void* pfnPIOC_Handler;                         /* 69  SAMA5D21 Parallel Input/Output Controller (PIOC) */
  void* pfnPIOD_Handler;                         /* 70  SAMA5D21 Parallel Input/Output Controller (PIOD) */
  void* pvReserved71;
  void* pfnSDMMC1_TIMER_Handler;                 /* 72  SAMA5D21 Secure Digital MultiMedia Card Controller (SDMMC1) */
  void* pvReserved73;
  void* pfnSYSC_Handler;                         /* 74  SAMA5D21 Power Management Controller (PMC) */
  void* pfnACC_Handler;                          /* 75  SAMA5D21 Analog Comparator Controller (ACC) */
  void* pfnRXLP_Handler;                         /* 76  SAMA5D21 Low Power Asynchronous Receiver (RXLP) */
} DeviceVectors;

/* Defines for Deprecated Interrupt and Exceptions handler names */
#define pfnMemManage_Handler      pfnMemoryManagement_Handler     /**< \deprecated  Backward compatibility for ASF */
#define pfnDebugMon_Handler       pfnDebugMonitor_Handler         /**< \deprecated  Backward compatibility for ASF */
#define pfnNMI_Handler            pfnNonMaskableInt_Handler       /**< \deprecated  Backward compatibility for ASF */
#define pfnSVC_Handler            pfnSVCall_Handler               /**< \deprecated  Backward compatibility for ASF */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS

/* CORTEX-A5 core handlers */
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS

/* Peripherals handlers */
void ACC_Handler                   ( void );
void ADC_Handler                   ( void );
void AESB_Handler                  ( void );
void AES_Handler                   ( void );
void AIC_Handler                   ( void );
void CLASSD_Handler                ( void );
void FLEXCOM0_Handler              ( void );
void FLEXCOM1_Handler              ( void );
void FLEXCOM3_Handler              ( void );
void FLEXCOM4_Handler              ( void );
void GMAC_Handler                  ( void );
void GMAC_Q1_Handler               ( void );
void GMAC_Q2_Handler               ( void );
void I2SC0_Handler                 ( void );
void I2SC1_Handler                 ( void );
void ICM_Handler                   ( void );
void ISC_Handler                   ( void );
void L2CC_Handler                  ( void );
void LCDC_Handler                  ( void );
void MATRIX0_Handler               ( void );
void MATRIX1_Handler               ( void );
void MCAN0_INT0_Handler            ( void );
void MCAN0_INT1_Handler            ( void );
void MPDDRC_Handler                ( void );
void PDMIC_Handler                 ( void );
void PIOA_Handler                  ( void );
void PIOB_Handler                  ( void );
void PIOC_Handler                  ( void );
void PIOD_Handler                  ( void );
void PIT_Handler                   ( void );
void PTC_Handler                   ( void );
void PWM_Handler                   ( void );
void QSPI0_Handler                 ( void );
void QSPI1_Handler                 ( void );
void RXLP_Handler                  ( void );
void SAIC_Handler                  ( void );
void SDMMC1_Handler                ( void );
void SDMMC1_TIMER_Handler          ( void );
void SECUMOD_Handler               ( void );
void SFC_Handler                   ( void );
void SHA_Handler                   ( void );
void SPI0_Handler                  ( void );
void SPI1_Handler                  ( void );
void SSC0_Handler                  ( void );
void SSC1_Handler                  ( void );
void SYSC_Handler                  ( void );
void TC0_Handler                   ( void );
void TC1_Handler                   ( void );
void TDES_Handler                  ( void );
void TRNG_Handler                  ( void );
void TWIHS0_Handler                ( void );
void TWIHS1_Handler                ( void );
void UART0_Handler                 ( void );
void UART1_Handler                 ( void );
void UART2_Handler                 ( void );
void UART3_Handler                 ( void );
void UART4_Handler                 ( void );
void UDPHS_Handler                 ( void );
void WDT_Handler                   ( void );
void XDMAC0_Handler                ( void );
void XDMAC1_Handler                ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */


/* Defines for Deprecated Interrupt and Exceptions handler names */
#define MemManage_Handler         MemoryManagement_Handler        /**< \deprecated  Backward compatibility for ASF */
#define DebugMon_Handler          DebugMonitor_Handler            /**< \deprecated  Backward compatibility for ASF */
#define NMI_Handler               NonMaskableInt_Handler          /**< \deprecated  Backward compatibility for ASF */
#define SVC_Handler               SVCall_Handler                  /**< \deprecated  Backward compatibility for ASF */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */


/*
 * \brief Configuration of the CORTEX-A5 Processor and Core Peripherals
 */

#define __CA_REV                  0x0001 /**< CA5 Core Revision                                                         */
#define __FPU_PRESENT                  1 /**< FPU is present on core                                                    */
#define __GIC_PRESENT                  0 /**< GIC is present on core                                                    */
#define __TIM_PRESENT                  0 /**< Private Timer is present on core                                          */
#define __L2CC_PRESENT                 1 /**< L2C-310 cache controller is present                                       */

/*
 * \brief CMSIS includes
 */
#include <core_ca.h>
#if !defined DONT_USE_CMSIS_INIT
#include "system_sama5d2.h"
#endif /* DONT_USE_CMSIS_INIT */

/** @}  end of SAMA5D21_cmsis CMSIS Definitions */

/** \defgroup SAMA5D21_api Peripheral Software API
 *  @{
 */

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAMA5D21 */
/* ************************************************************************** */
#include "component/acc.h"
#include "component/adc.h"
#include "component/aes.h"
#include "component/aesb.h"
#include "component/aic.h"
#include "component/aximx.h"
#include "component/chipid.h"
#include "component/classd.h"
#include "component/flexcom.h"
#include "component/gmac.h"
#include "component/i2sc.h"
#include "component/icm.h"
#include "component/isc.h"
#include "component/l2cc.h"
#include "component/lcdc.h"
#include "component/matrix.h"
#include "component/mcan.h"
#include "component/mpddrc.h"
#include "component/pdmic.h"
#include "component/pio.h"
#include "component/pio_ctrl.h"
#include "component/pit.h"
#include "component/pmc.h"
#include "component/ptc.h"
#include "component/pwm.h"
#include "component/qspi.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/rxlp.h"
#include "component/sckc.h"
#include "component/sdmmc.h"
#include "component/secumod.h"
#include "component/sfc.h"
#include "component/sfr.h"
#include "component/sfrbu.h"
#include "component/sha.h"
#include "component/shdwc.h"
#include "component/smc.h"
#include "component/spi.h"
#include "component/ssc.h"
#include "component/tc.h"
#include "component/tdes.h"
#include "component/trng.h"
#include "component/twihs.h"
#include "component/uart.h"
#include "component/udphs.h"
#include "component/uhphs.h"
#include "component/wdt.h"
#include "component/xdmac.h"
/** @}  end of Peripheral Software API */

/** \defgroup SAMA5D21_reg Registers Access Definitions
 *  @{
 */

/* ************************************************************************** */
/*   REGISTER ACCESS DEFINITIONS FOR SAMA5D21 */
/* ************************************************************************** */
#include "instance/acc.h"
#include "instance/adc.h"
#include "instance/aes.h"
#include "instance/aesb.h"
#include "instance/aic.h"
#include "instance/saic.h"
#include "instance/aximx.h"
#include "instance/chipid.h"
#include "instance/classd.h"
#include "instance/flexcom0.h"
#include "instance/flexcom1.h"
#include "instance/flexcom3.h"
#include "instance/flexcom4.h"
#include "instance/gmac.h"
#include "instance/i2sc0.h"
#include "instance/i2sc1.h"
#include "instance/icm.h"
#include "instance/isc.h"
#include "instance/l2cc.h"
#include "instance/lcdc.h"
#include "instance/matrix0.h"
#include "instance/matrix1.h"
#include "instance/mcan0.h"
#include "instance/mpddrc.h"
#include "instance/pdmic.h"
#include "instance/pioa.h"
#include "instance/piob.h"
#include "instance/pioc.h"
#include "instance/piod.h"
#include "instance/pio_ctrl.h"
#include "instance/pit.h"
#include "instance/pmc.h"
#include "instance/ptc.h"
#include "instance/pwm.h"
#include "instance/qspi0.h"
#include "instance/qspi1.h"
#include "instance/rstc.h"
#include "instance/rtc.h"
#include "instance/rxlp.h"
#include "instance/sckc.h"
#include "instance/sdmmc1.h"
#include "instance/secumod.h"
#include "instance/sfc.h"
#include "instance/sfr.h"
#include "instance/sfrbu.h"
#include "instance/sha.h"
#include "instance/shdwc.h"
#include "instance/smc.h"
#include "instance/spi0.h"
#include "instance/spi1.h"
#include "instance/ssc0.h"
#include "instance/ssc1.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tdes.h"
#include "instance/trng.h"
#include "instance/twihs0.h"
#include "instance/twihs1.h"
#include "instance/uart0.h"
#include "instance/uart1.h"
#include "instance/uart2.h"
#include "instance/uart3.h"
#include "instance/uart4.h"
#include "instance/udphs.h"
#include "instance/wdt.h"
#include "instance/xdmac0.h"
#include "instance/xdmac1.h"
/** @}  end of Registers Access Definitions */

/** \addtogroup SAMA5D21_id Peripheral Ids Definitions
 *  @{
 */

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR SAMA5D21 */
/* ************************************************************************** */
#define ID_PIT          (  3) /**< \brief Periodic Interval Timer (PIT) */
#define ID_WDT          (  4) /**< \brief Watchdog Timer (WDT) */
#define ID_GMAC         (  5) /**< \brief Gigabit Ethernet MAC (GMAC) */
#define ID_XDMAC0       (  6) /**< \brief Extensible DMA Controller (XDMAC0) */
#define ID_XDMAC1       (  7) /**< \brief Extensible DMA Controller (XDMAC1) */
#define ID_ICM          (  8) /**< \brief Integrity Check Monitor (ICM) */
#define ID_AES          (  9) /**< \brief Advanced Encryption Standard (AES) */
#define ID_AESB         ( 10) /**< \brief Advanced Encryption Standard Bridge (AESB) */
#define ID_TDES         ( 11) /**< \brief Triple Data Encryption Standard (TDES) */
#define ID_SHA          ( 12) /**< \brief Secure Hash Algorithm (SHA) */
#define ID_MPDDRC       ( 13) /**< \brief AHB Multiport DDR-SDRAM Controller (MPDDRC) */
#define ID_MATRIX1      ( 14) /**< \brief AHB Bus Matrix (MATRIX1) */
#define ID_MATRIX0      ( 15) /**< \brief AHB Bus Matrix (MATRIX0) */
#define ID_SECUMOD      ( 16) /**< \brief Security Module (SECUMOD) */
#define ID_SMC          ( 17) /**< \brief Static Memory Controller (SMC) */
#define ID_PIOA         ( 18) /**< \brief Parallel Input/Output Controller (PIOA) */
#define ID_FLEXCOM0     ( 19) /**< \brief Flexible Serial Communication (FLEXCOM0) */
#define ID_FLEXCOM1     ( 20) /**< \brief Flexible Serial Communication (FLEXCOM1) */
#define ID_FLEXCOM3     ( 22) /**< \brief Flexible Serial Communication (FLEXCOM3) */
#define ID_FLEXCOM4     ( 23) /**< \brief Flexible Serial Communication (FLEXCOM4) */
#define ID_UART0        ( 24) /**< \brief Universal Asynchronous Receiver Transmitter (UART0) */
#define ID_UART1        ( 25) /**< \brief Universal Asynchronous Receiver Transmitter (UART1) */
#define ID_UART2        ( 26) /**< \brief Universal Asynchronous Receiver Transmitter (UART2) */
#define ID_UART3        ( 27) /**< \brief Universal Asynchronous Receiver Transmitter (UART3) */
#define ID_UART4        ( 28) /**< \brief Universal Asynchronous Receiver Transmitter (UART4) */
#define ID_TWIHS0       ( 29) /**< \brief Two-wire Interface High Speed (TWIHS0) */
#define ID_TWIHS1       ( 30) /**< \brief Two-wire Interface High Speed (TWIHS1) */
#define ID_SDMMC1       ( 32) /**< \brief Secure Digital MultiMedia Card Controller (SDMMC1) */
#define ID_SPI0         ( 33) /**< \brief Serial Peripheral Interface (SPI0) */
#define ID_SPI1         ( 34) /**< \brief Serial Peripheral Interface (SPI1) */
#define ID_TC0          ( 35) /**< \brief Timer Counter (TC0) */
#define ID_TC1          ( 36) /**< \brief Timer Counter (TC1) */
#define ID_PWM          ( 38) /**< \brief Pulse Width Modulation Controller (PWM) */
#define ID_ADC          ( 40) /**< \brief Analog-to-Digital Converter (ADC) */
#define ID_UDPHS        ( 42) /**< \brief USB High Speed Device Port (UDPHS) */
#define ID_SSC0         ( 43) /**< \brief Synchronous Serial Controller (SSC0) */
#define ID_SSC1         ( 44) /**< \brief Synchronous Serial Controller (SSC1) */
#define ID_LCDC         ( 45) /**< \brief LCD Controller (LCDC) */
#define ID_ISC          ( 46) /**< \brief Image Sensor Controller (ISC) */
#define ID_TRNG         ( 47) /**< \brief True Random Number Generator (TRNG) */
#define ID_PDMIC        ( 48) /**< \brief Pulse Density Modulation Interface Controller (PDMIC) */
#define ID_SFC          ( 50) /**< \brief Secure Fuse Controller (SFC) */
#define ID_QSPI0        ( 52) /**< \brief Quad Serial Peripheral Interface (QSPI0) */
#define ID_QSPI1        ( 53) /**< \brief Quad Serial Peripheral Interface (QSPI1) */
#define ID_I2SC0        ( 54) /**< \brief Inter-IC Sound Controller (I2SC0) */
#define ID_I2SC1        ( 55) /**< \brief Inter-IC Sound Controller (I2SC1) */
#define ID_MCAN0        ( 56) /**< \brief Controller Area Network (MCAN0) */
#define ID_PTC          ( 58) /**< \brief Peripheral Touch Controller (PTC) */
#define ID_CLASSD       ( 59) /**< \brief Audio Class D Amplifier (CLASSD) (CLASSD) */
#define ID_SFR          ( 60) /**< \brief Special Function Registers (SFR) */
#define ID_SAIC         ( 61) /**< \brief Advanced Interrupt Controller (SAIC) */
#define ID_AIC          ( 62) /**< \brief Advanced Interrupt Controller (AIC) */
#define ID_L2CC         ( 63) /**< \brief L2 Cache Controller (L2CC) */
#define ID_PIOB         ( 68) /**< \brief Parallel Input/Output Controller (PIOB) */
#define ID_PIOC         ( 69) /**< \brief Parallel Input/Output Controller (PIOC) */
#define ID_PIOD         ( 70) /**< \brief Parallel Input/Output Controller (PIOD) */
#define ID_ACC          ( 75) /**< \brief Analog Comparator Controller (ACC) */
#define ID_RXLP         ( 76) /**< \brief Low Power Asynchronous Receiver (RXLP) */
#define ID_SFRBU        ( 77) /**< \brief Special Function Registers Backup (SFRBU) */
#define ID_CHIPID       ( 78) /**< \brief Chip Identifier (CHIPID) */

#define ID_PERIPH_COUNT ( 79) /**< \brief Number of peripheral IDs */
/** @}  end of Peripheral Ids Definitions */

/** \addtogroup SAMA5D21_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAMA5D21 */
/* ************************************************************************** */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define ACC                    (0xF804A000)                   /**< \brief (ACC       ) Base Address */
#define ADC                    (0xFC030000)                   /**< \brief (ADC       ) Base Address */
#define AES                    (0xF002C000)                   /**< \brief (AES       ) Base Address */
#define AESB                   (0xF001C000)                   /**< \brief (AESB      ) Base Address */
#define AIC                    (0xFC020000)                   /**< \brief (AIC       ) Base Address */
#define SAIC                   (0xF803C000)                   /**< \brief (SAIC      ) Base Address */
#define AXIMX                  (0x00600000)                   /**< \brief (AXIMX     ) Base Address */
#define CHIPID                 (0xFC069000)                   /**< \brief (CHIPID    ) Base Address */
#define CLASSD                 (0xFC048000)                   /**< \brief (CLASSD    ) Base Address */
#define FLEXCOM0               (0xF8034000)                   /**< \brief (FLEXCOM0  ) Base Address */
#define FLEXCOM1               (0xF8038000)                   /**< \brief (FLEXCOM1  ) Base Address */
#define FLEXCOM3               (0xFC014000)                   /**< \brief (FLEXCOM3  ) Base Address */
#define FLEXCOM4               (0xFC018000)                   /**< \brief (FLEXCOM4  ) Base Address */
#define GMAC                   (0xF8008000)                   /**< \brief (GMAC      ) Base Address */
#define I2SC0                  (0xF8050000)                   /**< \brief (I2SC0     ) Base Address */
#define I2SC1                  (0xFC04C000)                   /**< \brief (I2SC1     ) Base Address */
#define ICM                    (0xF8040000)                   /**< \brief (ICM       ) Base Address */
#define ISC                    (0xF0008000)                   /**< \brief (ISC       ) Base Address */
#define L2CC                   (0x00A00000)                   /**< \brief (L2CC      ) Base Address */
#define LCDC                   (0xF0000000)                   /**< \brief (LCDC      ) Base Address */
#define MATRIX0                (0xF0018000)                   /**< \brief (MATRIX0   ) Base Address */
#define MATRIX1                (0xFC03C000)                   /**< \brief (MATRIX1   ) Base Address */
#define MCAN0                  (0xF8054000)                   /**< \brief (MCAN0     ) Base Address */
#define MPDDRC                 (0xF000C000)                   /**< \brief (MPDDRC    ) Base Address */
#define PDMIC                  (0xF8018000)                   /**< \brief (PDMIC     ) Base Address */
#define PIOA                   (0xFC038000)                   /**< \brief (PIOA      ) Base Address */
#define PIOB                   (0xFC038040)                   /**< \brief (PIOB      ) Base Address */
#define PIOC                   (0xFC038080)                   /**< \brief (PIOC      ) Base Address */
#define PIOD                   (0xFC0380C0)                   /**< \brief (PIOD      ) Base Address */
#define PIO_CTRL               (0xFC038500)                   /**< \brief (PIO_CTRL  ) Base Address */
#define PIT                    (0xF8048030)                   /**< \brief (PIT       ) Base Address */
#define PMC                    (0xF0014000)                   /**< \brief (PMC       ) Base Address */
#define PTC                    (0xFC060000)                   /**< \brief (PTC       ) Base Address */
#define PWM                    (0xF802C000)                   /**< \brief (PWM       ) Base Address */
#define QSPI0                  (0xF0020000)                   /**< \brief (QSPI0     ) Base Address */
#define QSPI1                  (0xF0024000)                   /**< \brief (QSPI1     ) Base Address */
#define RSTC                   (0xF8048000)                   /**< \brief (RSTC      ) Base Address */
#define RTC                    (0xF80480B0)                   /**< \brief (RTC       ) Base Address */
#define RXLP                   (0xF8049000)                   /**< \brief (RXLP      ) Base Address */
#define SCKC                   (0xF8048050)                   /**< \brief (SCKC      ) Base Address */
#define SDMMC1                 (0xB0000000)                   /**< \brief (SDMMC1    ) Base Address */
#define SECUMOD                (0xFC040000)                   /**< \brief (SECUMOD   ) Base Address */
#define SFC                    (0xF804C000)                   /**< \brief (SFC       ) Base Address */
#define SFR                    (0xF8030000)                   /**< \brief (SFR       ) Base Address */
#define SFRBU                  (0xFC05C000)                   /**< \brief (SFRBU     ) Base Address */
#define SHA                    (0xF0028000)                   /**< \brief (SHA       ) Base Address */
#define SHDWC                  (0xF8048010)                   /**< \brief (SHDWC     ) Base Address */
#define HSMC                   (0xF8014000)                   /**< \brief (SMC       ) Base Address */
#define SPI0                   (0xF8000000)                   /**< \brief (SPI0      ) Base Address */
#define SPI1                   (0xFC000000)                   /**< \brief (SPI1      ) Base Address */
#define SSC0                   (0xF8004000)                   /**< \brief (SSC0      ) Base Address */
#define SSC1                   (0xFC004000)                   /**< \brief (SSC1      ) Base Address */
#define TC0                    (0xF800C000)                   /**< \brief (TC0       ) Base Address */
#define TC1                    (0xF8010000)                   /**< \brief (TC1       ) Base Address */
#define TDES                   (0xFC044000)                   /**< \brief (TDES      ) Base Address */
#define TRNG                   (0xFC01C000)                   /**< \brief (TRNG      ) Base Address */
#define TWIHS0                 (0xF8028000)                   /**< \brief (TWIHS0    ) Base Address */
#define TWIHS1                 (0xFC028000)                   /**< \brief (TWIHS1    ) Base Address */
#define UART0                  (0xF801C000)                   /**< \brief (UART0     ) Base Address */
#define UART1                  (0xF8020000)                   /**< \brief (UART1     ) Base Address */
#define UART2                  (0xF8024000)                   /**< \brief (UART2     ) Base Address */
#define UART3                  (0xFC008000)                   /**< \brief (UART3     ) Base Address */
#define UART4                  (0xFC00C000)                   /**< \brief (UART4     ) Base Address */
#define UDPHS                  (0xFC02C000)                   /**< \brief (UDPHS     ) Base Address */
#define WDT                    (0xF8048040)                   /**< \brief (WDT       ) Base Address */
#define XDMAC0                 (0xF0010000)                   /**< \brief (XDMAC0    ) Base Address */
#define XDMAC1                 (0xF0004000)                   /**< \brief (XDMAC1    ) Base Address */

#else /* For C/C++ compiler */

#define ACC                    ((Acc *)0xF804A000U)           /**< \brief (ACC       ) Base Address */
#define ACC_INST_NUM           1                              /**< \brief (ACC       ) Number of instances */
#define ACC_INSTS              { ACC }                        /**< \brief (ACC       ) Instances List */

#define ADC                    ((Adc *)0xFC030000U)           /**< \brief (ADC       ) Base Address */
#define ADC_INST_NUM           1                              /**< \brief (ADC       ) Number of instances */
#define ADC_INSTS              { ADC }                        /**< \brief (ADC       ) Instances List */

#define AES                    ((Aes *)0xF002C000U)           /**< \brief (AES       ) Base Address */
#define AES_INST_NUM           1                              /**< \brief (AES       ) Number of instances */
#define AES_INSTS              { AES }                        /**< \brief (AES       ) Instances List */

#define AESB                   ((Aesb *)0xF001C000U)          /**< \brief (AESB      ) Base Address */
#define AESB_INST_NUM          1                              /**< \brief (AESB      ) Number of instances */
#define AESB_INSTS             { AESB }                       /**< \brief (AESB      ) Instances List */

#define AIC                    ((Aic *)0xFC020000U)           /**< \brief (AIC       ) Base Address */
#define SAIC                   ((Aic *)0xF803C000U)           /**< \brief (SAIC      ) Base Address */
#define AIC_INST_NUM           2                              /**< \brief (AIC       ) Number of instances */
#define AIC_INSTS              { AIC, SAIC }                  /**< \brief (AIC       ) Instances List */

#define AXIMX                  ((Aximx *)0x00600000U)         /**< \brief (AXIMX     ) Base Address */
#define AXIMX_INST_NUM         1                              /**< \brief (AXIMX     ) Number of instances */
#define AXIMX_INSTS            { AXIMX }                      /**< \brief (AXIMX     ) Instances List */

#define CHIPID                 ((Chipid *)0xFC069000U)        /**< \brief (CHIPID    ) Base Address */
#define CHIPID_INST_NUM        1                              /**< \brief (CHIPID    ) Number of instances */
#define CHIPID_INSTS           { CHIPID }                     /**< \brief (CHIPID    ) Instances List */

#define CLASSD                 ((Classd *)0xFC048000U)        /**< \brief (CLASSD    ) Base Address */
#define CLASSD_INST_NUM        1                              /**< \brief (CLASSD    ) Number of instances */
#define CLASSD_INSTS           { CLASSD }                     /**< \brief (CLASSD    ) Instances List */

#define FLEXCOM0               ((Flexcom *)0xF8034000U)       /**< \brief (FLEXCOM0  ) Base Address */
#define FLEXCOM1               ((Flexcom *)0xF8038000U)       /**< \brief (FLEXCOM1  ) Base Address */
#define FLEXCOM3               ((Flexcom *)0xFC014000U)       /**< \brief (FLEXCOM3  ) Base Address */
#define FLEXCOM4               ((Flexcom *)0xFC018000U)       /**< \brief (FLEXCOM4  ) Base Address */
#define FLEXCOM_INST_NUM       4                              /**< \brief (FLEXCOM   ) Number of instances */
#define FLEXCOM_INSTS          { FLEXCOM0, FLEXCOM1, FLEXCOM3, FLEXCOM4 } /**< \brief (FLEXCOM   ) Instances List */

#define GMAC                   ((Gmac *)0xF8008000U)          /**< \brief (GMAC      ) Base Address */
#define GMAC_INST_NUM          1                              /**< \brief (GMAC      ) Number of instances */
#define GMAC_INSTS             { GMAC }                       /**< \brief (GMAC      ) Instances List */

#define I2SC0                  ((I2sc *)0xF8050000U)          /**< \brief (I2SC0     ) Base Address */
#define I2SC1                  ((I2sc *)0xFC04C000U)          /**< \brief (I2SC1     ) Base Address */
#define I2SC_INST_NUM          2                              /**< \brief (I2SC      ) Number of instances */
#define I2SC_INSTS             { I2SC0, I2SC1 }               /**< \brief (I2SC      ) Instances List */

#define ICM                    ((Icm *)0xF8040000U)           /**< \brief (ICM       ) Base Address */
#define ICM_INST_NUM           1                              /**< \brief (ICM       ) Number of instances */
#define ICM_INSTS              { ICM }                        /**< \brief (ICM       ) Instances List */

#define ISC                    ((Isc *)0xF0008000U)           /**< \brief (ISC       ) Base Address */
#define ISC_INST_NUM           1                              /**< \brief (ISC       ) Number of instances */
#define ISC_INSTS              { ISC }                        /**< \brief (ISC       ) Instances List */

#define L2CC                   ((L2cc *)0x00A00000U)          /**< \brief (L2CC      ) Base Address */
#define L2CC_INST_NUM          1                              /**< \brief (L2CC      ) Number of instances */
#define L2CC_INSTS             { L2CC }                       /**< \brief (L2CC      ) Instances List */

#define LCDC                   ((Lcdc *)0xF0000000U)          /**< \brief (LCDC      ) Base Address */
#define LCDC_INST_NUM          1                              /**< \brief (LCDC      ) Number of instances */
#define LCDC_INSTS             { LCDC }                       /**< \brief (LCDC      ) Instances List */

#define MATRIX0                ((Matrix *)0xF0018000U)        /**< \brief (MATRIX0   ) Base Address */
#define MATRIX1                ((Matrix *)0xFC03C000U)        /**< \brief (MATRIX1   ) Base Address */
#define MATRIX_INST_NUM        2                              /**< \brief (MATRIX    ) Number of instances */
#define MATRIX_INSTS           { MATRIX0, MATRIX1 }           /**< \brief (MATRIX    ) Instances List */

#define MCAN0                  ((Mcan *)0xF8054000U)          /**< \brief (MCAN0     ) Base Address */
#define MCAN_INST_NUM          1                              /**< \brief (MCAN      ) Number of instances */
#define MCAN_INSTS             { MCAN0 }                      /**< \brief (MCAN      ) Instances List */

#define MPDDRC                 ((Mpddrc *)0xF000C000U)        /**< \brief (MPDDRC    ) Base Address */
#define MPDDRC_INST_NUM        1                              /**< \brief (MPDDRC    ) Number of instances */
#define MPDDRC_INSTS           { MPDDRC }                     /**< \brief (MPDDRC    ) Instances List */

#define PDMIC                  ((Pdmic *)0xF8018000U)         /**< \brief (PDMIC     ) Base Address */
#define PDMIC_INST_NUM         1                              /**< \brief (PDMIC     ) Number of instances */
#define PDMIC_INSTS            { PDMIC }                      /**< \brief (PDMIC     ) Instances List */

#define PIOA                   ((Pio *)0xFC038000U)           /**< \brief (PIOA      ) Base Address */
#define PIOB                   ((Pio *)0xFC038040U)           /**< \brief (PIOB      ) Base Address */
#define PIOC                   ((Pio *)0xFC038080U)           /**< \brief (PIOC      ) Base Address */
#define PIOD                   ((Pio *)0xFC0380C0U)           /**< \brief (PIOD      ) Base Address */
#define PIO_INST_NUM           4                              /**< \brief (PIO       ) Number of instances */
#define PIO_INSTS              { PIOA, PIOB, PIOC, PIOD }     /**< \brief (PIO       ) Instances List */

#define PIO_CTRL               ((PioCtrl *)0xFC038500U)       /**< \brief (PIO_CTRL  ) Base Address */
#define PIO_CTRL_INST_NUM      1                              /**< \brief (PIO_CTRL  ) Number of instances */
#define PIO_CTRL_INSTS         { PIO_CTRL }                   /**< \brief (PIO_CTRL  ) Instances List */

#define PIT                    ((Pit *)0xF8048030U)           /**< \brief (PIT       ) Base Address */
#define PIT_INST_NUM           1                              /**< \brief (PIT       ) Number of instances */
#define PIT_INSTS              { PIT }                        /**< \brief (PIT       ) Instances List */

#define PMC                    ((Pmc *)0xF0014000U)           /**< \brief (PMC       ) Base Address */
#define PMC_INST_NUM           1                              /**< \brief (PMC       ) Number of instances */
#define PMC_INSTS              { PMC }                        /**< \brief (PMC       ) Instances List */

#define PTC                    ((Ptc *)0xFC060000U)           /**< \brief (PTC       ) Base Address */
#define PTC_INST_NUM           1                              /**< \brief (PTC       ) Number of instances */
#define PTC_INSTS              { PTC }                        /**< \brief (PTC       ) Instances List */

#define PWM                    ((Pwm *)0xF802C000U)           /**< \brief (PWM       ) Base Address */
#define PWM_INST_NUM           1                              /**< \brief (PWM       ) Number of instances */
#define PWM_INSTS              { PWM }                        /**< \brief (PWM       ) Instances List */

#define QSPI0                  ((Qspi *)0xF0020000U)          /**< \brief (QSPI0     ) Base Address */
#define QSPI1                  ((Qspi *)0xF0024000U)          /**< \brief (QSPI1     ) Base Address */
#define QSPI_INST_NUM          2                              /**< \brief (QSPI      ) Number of instances */
#define QSPI_INSTS             { QSPI0, QSPI1 }               /**< \brief (QSPI      ) Instances List */

#define RSTC                   ((Rstc *)0xF8048000U)          /**< \brief (RSTC      ) Base Address */
#define RSTC_INST_NUM          1                              /**< \brief (RSTC      ) Number of instances */
#define RSTC_INSTS             { RSTC }                       /**< \brief (RSTC      ) Instances List */

#define RTC                    ((Rtc *)0xF80480B0U)           /**< \brief (RTC       ) Base Address */
#define RTC_INST_NUM           1                              /**< \brief (RTC       ) Number of instances */
#define RTC_INSTS              { RTC }                        /**< \brief (RTC       ) Instances List */

#define RXLP                   ((Rxlp *)0xF8049000U)          /**< \brief (RXLP      ) Base Address */
#define RXLP_INST_NUM          1                              /**< \brief (RXLP      ) Number of instances */
#define RXLP_INSTS             { RXLP }                       /**< \brief (RXLP      ) Instances List */

#define SCKC                   ((Sckc *)0xF8048050U)          /**< \brief (SCKC      ) Base Address */
#define SCKC_INST_NUM          1                              /**< \brief (SCKC      ) Number of instances */
#define SCKC_INSTS             { SCKC }                       /**< \brief (SCKC      ) Instances List */

#define SDMMC1                 ((Sdmmc *)0xB0000000U)         /**< \brief (SDMMC1    ) Base Address */
#define SDMMC_INST_NUM         1                              /**< \brief (SDMMC     ) Number of instances */
#define SDMMC_INSTS            { SDMMC1 }                     /**< \brief (SDMMC     ) Instances List */

#define SECUMOD                ((Secumod *)0xFC040000U)       /**< \brief (SECUMOD   ) Base Address */
#define SECUMOD_INST_NUM       1                              /**< \brief (SECUMOD   ) Number of instances */
#define SECUMOD_INSTS          { SECUMOD }                    /**< \brief (SECUMOD   ) Instances List */

#define SFC                    ((Sfc *)0xF804C000U)           /**< \brief (SFC       ) Base Address */
#define SFC_INST_NUM           1                              /**< \brief (SFC       ) Number of instances */
#define SFC_INSTS              { SFC }                        /**< \brief (SFC       ) Instances List */

#define SFR                    ((Sfr *)0xF8030000U)           /**< \brief (SFR       ) Base Address */
#define SFR_INST_NUM           1                              /**< \brief (SFR       ) Number of instances */
#define SFR_INSTS              { SFR }                        /**< \brief (SFR       ) Instances List */

#define SFRBU                  ((Sfrbu *)0xFC05C000U)         /**< \brief (SFRBU     ) Base Address */
#define SFRBU_INST_NUM         1                              /**< \brief (SFRBU     ) Number of instances */
#define SFRBU_INSTS            { SFRBU }                      /**< \brief (SFRBU     ) Instances List */

#define SHA                    ((Sha *)0xF0028000U)           /**< \brief (SHA       ) Base Address */
#define SHA_INST_NUM           1                              /**< \brief (SHA       ) Number of instances */
#define SHA_INSTS              { SHA }                        /**< \brief (SHA       ) Instances List */

#define SHDWC                  ((Shdwc *)0xF8048010U)         /**< \brief (SHDWC     ) Base Address */
#define SHDWC_INST_NUM         1                              /**< \brief (SHDWC     ) Number of instances */
#define SHDWC_INSTS            { SHDWC }                      /**< \brief (SHDWC     ) Instances List */

#define HSMC                   ((Smc *)0xF8014000U)           /**< \brief (SMC       ) Base Address */
#define SMC_INST_NUM           1                              /**< \brief (SMC       ) Number of instances */
#define SMC_INSTS              { SMC }                        /**< \brief (SMC       ) Instances List */

#define SPI0                   ((Spi *)0xF8000000U)           /**< \brief (SPI0      ) Base Address */
#define SPI1                   ((Spi *)0xFC000000U)           /**< \brief (SPI1      ) Base Address */
#define SPI_INST_NUM           2                              /**< \brief (SPI       ) Number of instances */
#define SPI_INSTS              { SPI0, SPI1 }                 /**< \brief (SPI       ) Instances List */

#define SSC0                   ((Ssc *)0xF8004000U)           /**< \brief (SSC0      ) Base Address */
#define SSC1                   ((Ssc *)0xFC004000U)           /**< \brief (SSC1      ) Base Address */
#define SSC_INST_NUM           2                              /**< \brief (SSC       ) Number of instances */
#define SSC_INSTS              { SSC0, SSC1 }                 /**< \brief (SSC       ) Instances List */

#define TC0                    ((Tc *)0xF800C000U)            /**< \brief (TC0       ) Base Address */
#define TC1                    ((Tc *)0xF8010000U)            /**< \brief (TC1       ) Base Address */
#define TC_INST_NUM            2                              /**< \brief (TC        ) Number of instances */
#define TC_INSTS               { TC0, TC1 }                   /**< \brief (TC        ) Instances List */

#define TDES                   ((Tdes *)0xFC044000U)          /**< \brief (TDES      ) Base Address */
#define TDES_INST_NUM          1                              /**< \brief (TDES      ) Number of instances */
#define TDES_INSTS             { TDES }                       /**< \brief (TDES      ) Instances List */

#define TRNG                   ((Trng *)0xFC01C000U)          /**< \brief (TRNG      ) Base Address */
#define TRNG_INST_NUM          1                              /**< \brief (TRNG      ) Number of instances */
#define TRNG_INSTS             { TRNG }                       /**< \brief (TRNG      ) Instances List */

#define TWIHS0                 ((Twihs *)0xF8028000U)         /**< \brief (TWIHS0    ) Base Address */
#define TWIHS1                 ((Twihs *)0xFC028000U)         /**< \brief (TWIHS1    ) Base Address */
#define TWIHS_INST_NUM         2                              /**< \brief (TWIHS     ) Number of instances */
#define TWIHS_INSTS            { TWIHS0, TWIHS1 }             /**< \brief (TWIHS     ) Instances List */

#define UART0                  ((Uart *)0xF801C000U)          /**< \brief (UART0     ) Base Address */
#define UART1                  ((Uart *)0xF8020000U)          /**< \brief (UART1     ) Base Address */
#define UART2                  ((Uart *)0xF8024000U)          /**< \brief (UART2     ) Base Address */
#define UART3                  ((Uart *)0xFC008000U)          /**< \brief (UART3     ) Base Address */
#define UART4                  ((Uart *)0xFC00C000U)          /**< \brief (UART4     ) Base Address */
#define UART_INST_NUM          5                              /**< \brief (UART      ) Number of instances */
#define UART_INSTS             { UART0, UART1, UART2, UART3, UART4 } /**< \brief (UART      ) Instances List */

#define UDPHS                  ((Udphs *)0xFC02C000U)         /**< \brief (UDPHS     ) Base Address */
#define UDPHS_INST_NUM         1                              /**< \brief (UDPHS     ) Number of instances */
#define UDPHS_INSTS            { UDPHS }                      /**< \brief (UDPHS     ) Instances List */

#define WDT                    ((Wdt *)0xF8048040U)           /**< \brief (WDT       ) Base Address */
#define WDT_INST_NUM           1                              /**< \brief (WDT       ) Number of instances */
#define WDT_INSTS              { WDT }                        /**< \brief (WDT       ) Instances List */

#define XDMAC0                 ((Xdmac *)0xF0010000U)         /**< \brief (XDMAC0    ) Base Address */
#define XDMAC1                 ((Xdmac *)0xF0004000U)         /**< \brief (XDMAC1    ) Base Address */
#define XDMAC_INST_NUM         2                              /**< \brief (XDMAC     ) Number of instances */
#define XDMAC_INSTS            { XDMAC0, XDMAC1 }             /**< \brief (XDMAC     ) Instances List */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAMA5D21_pio Peripheral Pio Definitions
 *  @{
 */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAMA5D21*/
/* ************************************************************************** */
#include "pio/sama5d21.h"
/** @}  end of Peripheral Pio Definitions */

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAMA5D21*/
/* ************************************************************************** */

#define EBI_CS0_SIZE             _U_(0x10000000)       /* 262144kB Memory segment type: other */
#define DDR_CS_SIZE              _U_(0x20000000)       /* 524288kB Memory segment type: other */
#define DDR_AES_CS_SIZE          _U_(0x20000000)       /* 524288kB Memory segment type: other */
#define EBI_CS1_SIZE             _U_(0x10000000)       /* 262144kB Memory segment type: other */
#define EBI_CS2_SIZE             _U_(0x10000000)       /* 262144kB Memory segment type: other */
#define EBI_CS3_SIZE             _U_(0x08000000)       /* 131072kB Memory segment type: other */
#define QSPI_AES0_SIZE           _U_(0x08000000)       /* 131072kB Memory segment type: other */
#define QSPI_AES1_SIZE           _U_(0x08000000)       /* 131072kB Memory segment type: other */
#define SDMMC1_SIZE              _U_(0x00001000)       /*    4kB Memory segment type: other */
#define NFC_SIZE                 _U_(0x10000000)       /* 262144kB Memory segment type: other */
#define QSPI0MEM_SIZE            _U_(0x08000000)       /* 131072kB Memory segment type: other */
#define QSPI1MEM_SIZE            _U_(0x08000000)       /* 131072kB Memory segment type: other */
#define PERIPHERALS_SIZE         _U_(0x10000000)       /* 262144kB Memory segment type: io */
#define IROM_SIZE                _U_(0x00010000)       /*   64kB Memory segment type: rom */
#define ECC_ROM_SIZE             _U_(0x00018000)       /*   96kB Memory segment type: other */
#define NFC_RAM_SIZE             _U_(0x00002400)       /*    9kB Memory segment type: other */
#define SRAM0_SIZE               _U_(0x00020000)       /*  128kB Memory segment type: other */
#define SRAM1_SIZE               _U_(0x00020000)       /*  128kB Memory segment type: other */
#define UDPHS_RAM_SIZE           _U_(0x00100000)       /* 1024kB Memory segment type: other */
#define UHPHS_OHCI_SIZE          _U_(0x00100000)       /* 1024kB Memory segment type: other */
#define UHPHS_EHCI_SIZE          _U_(0x00100000)       /* 1024kB Memory segment type: other */
#define AXIMX_SIZE               _U_(0x00100000)       /* 1024kB Memory segment type: other */
#define DAP_SIZE                 _U_(0x00100000)       /* 1024kB Memory segment type: other */
#define PTCMEM_SIZE              _U_(0x00100000)       /* 1024kB Memory segment type: other */
#define SECURAM_SIZE             _U_(0x00004000)       /*   16kB Memory segment type: other */

#define EBI_CS0_ADDR             _U_(0x10000000)       /**< EBI_CS0 base address (type: other)*/
#define DDR_CS_ADDR              _U_(0x20000000)       /**< DDR_CS base address (type: other)*/
#define DDR_AES_CS_ADDR          _U_(0x40000000)       /**< DDR_AES_CS base address (type: other)*/
#define EBI_CS1_ADDR             _U_(0x60000000)       /**< EBI_CS1 base address (type: other)*/
#define EBI_CS2_ADDR             _U_(0x70000000)       /**< EBI_CS2 base address (type: other)*/
#define EBI_CS3_ADDR             _U_(0x80000000)       /**< EBI_CS3 base address (type: other)*/
#define QSPI_AES0_ADDR           _U_(0x90000000)       /**< QSPI_AES0 base address (type: other)*/
#define QSPI_AES1_ADDR           _U_(0x98000000)       /**< QSPI_AES1 base address (type: other)*/
#define SDMMC1_ADDR              _U_(0xb0000000)       /**< SDMMC1 base address (type: other)*/
#define NFC_ADDR                 _U_(0xc0000000)       /**< NFC base address (type: other)*/
#define QSPI0MEM_ADDR            _U_(0xd0000000)       /**< QSPI0MEM base address (type: other)*/
#define QSPI1MEM_ADDR            _U_(0xd8000000)       /**< QSPI1MEM base address (type: other)*/
#define PERIPHERALS_ADDR         _U_(0xf0000000)       /**< PERIPHERALS base address (type: io)*/
#define IROM_ADDR                _U_(0x00000000)       /**< IROM base address (type: rom)*/
#define ECC_ROM_ADDR             _U_(0x00040000)       /**< ECC_ROM base address (type: other)*/
#define NFC_RAM_ADDR             _U_(0x00100000)       /**< NFC_RAM base address (type: other)*/
#define SRAM0_ADDR               _U_(0x00200000)       /**< SRAM0 base address (type: other)*/
#define SRAM1_ADDR               _U_(0x00220000)       /**< SRAM1 base address (type: other)*/
#define UDPHS_RAM_ADDR           _U_(0x00300000)       /**< UDPHS_RAM base address (type: other)*/
#define UHPHS_OHCI_ADDR          _U_(0x00400000)       /**< UHPHS_OHCI base address (type: other)*/
#define UHPHS_EHCI_ADDR          _U_(0x00500000)       /**< UHPHS_EHCI base address (type: other)*/
#define AXIMX_ADDR               _U_(0x00600000)       /**< AXIMX base address (type: other)*/
#define DAP_ADDR                 _U_(0x00700000)       /**< DAP base address (type: other)*/
#define PTCMEM_ADDR              _U_(0x00800000)       /**< PTCMEM base address (type: other)*/
#define SECURAM_ADDR             _U_(0xf8044000)       /**< SECURAM base address (type: other)*/

/* ************************************************************************** */
/**  DEVICE SIGNATURES FOR SAMA5D21 */
/* ************************************************************************** */
#define JTAGID                   _UL_(0X05B3F03F)
#define CHIP_JTAGID              _UL_(0X05B3F03F)
#define CHIP_CIDR                _UL_(0X8A5C08C0)
#define CHIP_EXID                _UL_(0X00000002)

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR SAMA5D21 */
/* ************************************************************************** */



#ifdef __cplusplus
}
#endif

/** @}  end of SAMA5D21 definitions */


#endif /* _SAMA5D21_H_ */
