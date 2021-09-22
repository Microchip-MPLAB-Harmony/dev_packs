/**
 * \brief Header file for ATSAMRH707F18A
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2021-05-04T18:07:51Z */
#ifndef _SAMRH707F18A_H_
#define _SAMRH707F18A_H_

// Header version uses Semantic Versioning 2.0.0 (https://semver.org/)
#define HEADER_FORMAT_VERSION "2.0.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (0)

/** \addtogroup SAMRH707F18A_definitions SAMRH707F18A definitions
  This file defines all structures and symbols for SAMRH707F18A:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
 *  @{
 */

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#  include <stdint.h>
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !defined(SKIP_INTEGER_LITERALS)
#  if defined(_U_) || defined(_L_) || defined(_UL_)
#    error "Integer Literals macros already defined elsewhere"
#  endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with adding suffixes to integer literal constants for C/C++ */
#  define _U_(x) (x ## U)    /**< C code: Unsigned integer literal constant value */
#  define _L_(x) (x ## L)    /**< C code: Long integer literal constant value */
#  define _UL_(x) (x ## UL)  /**< C code: Unsigned Long integer literal constant value */

#else /* Assembler */

#  define _U_(x) x    /**< Assembler: Unsigned integer literal constant value */
#  define _L_(x) x    /**< Assembler: Long integer literal constant value */
#  define _UL_(x) x   /**< Assembler: Unsigned Long integer literal constant value */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* SKIP_INTEGER_LITERALS */
/** @}  end of Atmel Global Defines */

/* ************************************************************************** */
/*   CMSIS DEFINITIONS FOR SAMRH707F18A                                       */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M7 Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /**< -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /**< -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13, /**< -13 Hard Fault, all classes of Fault    */
  MemoryManagement_IRQn     = -12, /**< -12 Memory Management, MPU mismatch, including Access Violation and No Match */
  BusFault_IRQn             = -11, /**< -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault */
  UsageFault_IRQn           = -10, /**< -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
  SVCall_IRQn               =  -5, /**< -5  System Service Call via SVC instruction */
  DebugMonitor_IRQn         =  -4, /**< -4  Debug Monitor                       */
  PendSV_IRQn               =  -2, /**< -2  Pendable request for system service */
  SysTick_IRQn              =  -1, /**< -1  System Tick Timer                   */
/******  SAMRH707F18A specific Interrupt Numbers ***********************************/
  SUPC_IRQn                 =   0, /**< 0   Supply Controller (SUPC)            */
  RSTC_IRQn                 =   1, /**< 1   Reset Controller (RSTC)             */
  RTC_IRQn                  =   2, /**< 2   Real-time Clock (RTC)               */
  RTT_IRQn                  =   3, /**< 3   Real-time Timer (RTT)               */
  WDT_IRQn                  =   4, /**< 4   Watchdog Timer (WDT)                */
  PMC_IRQn                  =   5, /**< 5   Power Management Controller (PMC)   */
  MATRIX0_IRQn              =   6, /**< 6   AHB Bus Matrix (MATRIX0)            */
  FLEXCOM0_IRQn             =   7, /**< 7   Flexible Serial Communication (FLEXCOM0) */
  FLEXCOM1_IRQn             =   8, /**< 8   Flexible Serial Communication (FLEXCOM1) */
  NMIC_IRQn                 =   9, /**< 9   Non-maskable Interrupt Controller (NMIC) */
  PIOA_IRQn                 =  10, /**< 10  Parallel Input/Output Controller (PIOA) */
  PIOB_IRQn                 =  11, /**< 11  Parallel Input/Output Controller (PIOB) */
  PIOC_IRQn                 =  12, /**< 12  Parallel Input/Output Controller (PIOC) */
  FLEXCOM2_IRQn             =  13, /**< 13  Flexible Serial Communication (FLEXCOM2) */
  FLEXCOM3_IRQn             =  14, /**< 14  Flexible Serial Communication (FLEXCOM3) */
  PIOD_IRQn                 =  16, /**< 16  Parallel Input/Output Controller (PIOD) */
  CCW_IRQn                  =  18, /**< 18  System Control Block (SCB)          */
  CCF_IRQn                  =  19, /**< 19  System Control Block (SCB)          */
  FPU_IRQn                  =  20, /**< 20  Floating Point Unit (FPU)           */
  IXC_IRQn                  =  21, /**< 21  Floating Point Unit (FPU)           */
  CRCCU_IRQn                =  22, /**< 22  Cyclic Redundancy Check Calculation Unit (CRCCU) */
  ADC_IRQn                  =  23, /**< 23  Analog-to-Digital Converter (ADC)   */
  DACC_IRQn                 =  24, /**< 24  Digital-to-Analog Converter Controller (DACC) */
  TC0_CH0_IRQn              =  25, /**< 25  Timer/Counter 0 Channel 0 (TC0)     */
  TC0_CH1_IRQn              =  26, /**< 26  Timer/Counter 0 Channel 1 (TC0)     */
  TC0_CH2_IRQn              =  27, /**< 27  Timer/Counter 0 Channel 2 (TC0)     */
  TC1_CH0_IRQn              =  28, /**< 28  Timer/Counter 1 Channel 0 (TC1)     */
  TC1_CH1_IRQn              =  29, /**< 29  Timer/Counter 1 Channel 1 (TC1)     */
  TC1_CH2_IRQn              =  30, /**< 30  Timer/Counter 1 Channel 2 (TC1)     */
  PWM0_IRQn                 =  31, /**< 31  Pulse Width Modulation Controller (PWM0) */
  PWM1_IRQn                 =  32, /**< 32  Pulse Width Modulation Controller (PWM1) */
  ICM_IRQn                  =  33, /**< 33  Integrity Check Monitor (ICM)       */
  MCAN0_INT0_IRQn           =  36, /**< 36  Controller Area Network (MCAN0)     */
  MCAN0_INT1_IRQn           =  37, /**< 37  Controller Area Network (MCAN0)     */
  MCAN1_INT0_IRQn           =  38, /**< 38  Controller Area Network (MCAN1)     */
  MCAN1_INT1_IRQn           =  39, /**< 39  Controller Area Network (MCAN1)     */
  TCMECC_INTFIX_IRQn        =  40, /**< 40  TCMECC (TCMECC)                     */
  TCMECC_INTNOFIX_IRQn      =  41, /**< 41  TCMECC (TCMECC)                     */
  FLEXRAMECC_INTFIX_IRQn    =  42, /**< 42  FLEXRAMECC (FLEXRAMECC)             */
  FLEXRAMECC_INTNOFIX_IRQn  =  43, /**< 43  FLEXRAMECC (FLEXRAMECC)             */
  SHA_IRQn                  =  44, /**< 44  Secure Hash Algorithm (SHA)         */
  PCC_IRQn                  =  45, /**< 45  Parallel Capture Controller (PCC)   */
  RSWDT_IRQn                =  47, /**< 47  Reinforced Safety Watchdog Timer (RSWDT) */
  HEFC_INT0_IRQn            =  50, /**< 50  Harden Embedded Flash Controller (HEFC) */
  HEFC_INTFIX_IRQn          =  51, /**< 51  Harden Embedded Flash Controller (HEFC) */
  HEFC_INTNOFIX_IRQn        =  52, /**< 52  Harden Embedded Flash Controller (HEFC) */
  TC2_CH0_IRQn              =  53, /**< 53  Timer/Counter 2 Channel 0 (TC2)     */
  TC2_CH1_IRQn              =  54, /**< 54  Timer/Counter 2 Channel 1 (TC2)     */
  TC2_CH2_IRQn              =  55, /**< 55  Timer/Counter 2 Channel 2 (TC2)     */
  HEMC_INTSDRAMC_IRQn       =  59, /**< 59  HEMC (HEMC)                         */
  HEMC_INTFIX_IRQn          =  60, /**< 60  HEMC (HEMC)                         */
  HEMC_INTNOFIX_IRQn        =  61, /**< 61  HEMC (HEMC)                         */
  SFR_IRQn                  =  62, /**< 62  Special Function Registers (SFR)    */
  TRNG_IRQn                 =  63, /**< 63  True Random Number Generator (TRNG) */
  XDMAC_IRQn                =  64, /**< 64  Extensible DMA Controller (XDMAC)   */
  SPW_IRQn                  =  65, /**< 65  SpW (SPW)                           */
  IP1553_IRQn               =  68, /**< 68  IP 1553 (IP1553)                    */

  PERIPH_MAX_IRQn           =  68  /**< Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M7 handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault */
  void* pfnMemoryManagement_Handler;             /* -12 Memory Management, MPU mismatch, including Access Violation and No Match */
  void* pfnBusFault_Handler;                     /* -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault */
  void* pfnUsageFault_Handler;                   /* -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5 System Service Call via SVC instruction */
  void* pfnDebugMonitor_Handler;                 /*  -4 Debug Monitor */
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2 Pendable request for system service */
  void* pfnSysTick_Handler;                      /*  -1 System Tick Timer */

  /* Peripheral handlers */
  void* pfnSUPC_Handler;                         /*   0 Supply Controller (SUPC) */
  void* pfnRSTC_Handler;                         /*   1 Reset Controller (RSTC) */
  void* pfnRTC_Handler;                          /*   2 Real-time Clock (RTC) */
  void* pfnRTT_Handler;                          /*   3 Real-time Timer (RTT) */
  void* pfnWDT_Handler;                          /*   4 Watchdog Timer (WDT) */
  void* pfnPMC_Handler;                          /*   5 Power Management Controller (PMC) */
  void* pfnMATRIX0_Handler;                      /*   6 AHB Bus Matrix (MATRIX0) */
  void* pfnFLEXCOM0_Handler;                     /*   7 Flexible Serial Communication (FLEXCOM0) */
  void* pfnFLEXCOM1_Handler;                     /*   8 Flexible Serial Communication (FLEXCOM1) */
  void* pfnNMIC_Handler;                         /*   9 Non-maskable Interrupt Controller (NMIC) */
  void* pfnPIOA_Handler;                         /*  10 Parallel Input/Output Controller (PIOA) */
  void* pfnPIOB_Handler;                         /*  11 Parallel Input/Output Controller (PIOB) */
  void* pfnPIOC_Handler;                         /*  12 Parallel Input/Output Controller (PIOC) */
  void* pfnFLEXCOM2_Handler;                     /*  13 Flexible Serial Communication (FLEXCOM2) */
  void* pfnFLEXCOM3_Handler;                     /*  14 Flexible Serial Communication (FLEXCOM3) */
  void* pvReserved15;
  void* pfnPIOD_Handler;                         /*  16 Parallel Input/Output Controller (PIOD) */
  void* pvReserved17;
  void* pfnCCW_Handler;                          /*  18 System Control Block (SCB) */
  void* pfnCCF_Handler;                          /*  19 System Control Block (SCB) */
  void* pfnFPU_Handler;                          /*  20 Floating Point Unit (FPU) */
  void* pfnIXC_Handler;                          /*  21 Floating Point Unit (FPU) */
  void* pfnCRCCU_Handler;                        /*  22 Cyclic Redundancy Check Calculation Unit (CRCCU) */
  void* pfnADC_Handler;                          /*  23 Analog-to-Digital Converter (ADC) */
  void* pfnDACC_Handler;                         /*  24 Digital-to-Analog Converter Controller (DACC) */
  void* pfnTC0_CH0_Handler;                      /*  25 Timer/Counter 0 Channel 0 (TC0) */
  void* pfnTC0_CH1_Handler;                      /*  26 Timer/Counter 0 Channel 1 (TC0) */
  void* pfnTC0_CH2_Handler;                      /*  27 Timer/Counter 0 Channel 2 (TC0) */
  void* pfnTC1_CH0_Handler;                      /*  28 Timer/Counter 1 Channel 0 (TC1) */
  void* pfnTC1_CH1_Handler;                      /*  29 Timer/Counter 1 Channel 1 (TC1) */
  void* pfnTC1_CH2_Handler;                      /*  30 Timer/Counter 1 Channel 2 (TC1) */
  void* pfnPWM0_Handler;                         /*  31 Pulse Width Modulation Controller (PWM0) */
  void* pfnPWM1_Handler;                         /*  32 Pulse Width Modulation Controller (PWM1) */
  void* pfnICM_Handler;                          /*  33 Integrity Check Monitor (ICM) */
  void* pvReserved34;
  void* pvReserved35;
  void* pfnMCAN0_INT0_Handler;                   /*  36 Controller Area Network (MCAN0) */
  void* pfnMCAN0_INT1_Handler;                   /*  37 Controller Area Network (MCAN0) */
  void* pfnMCAN1_INT0_Handler;                   /*  38 Controller Area Network (MCAN1) */
  void* pfnMCAN1_INT1_Handler;                   /*  39 Controller Area Network (MCAN1) */
  void* pfnTCMECC_INTFIX_Handler;                /*  40 TCMECC (TCMECC) */
  void* pfnTCMECC_INTNOFIX_Handler;              /*  41 TCMECC (TCMECC) */
  void* pfnFLEXRAMECC_INTFIX_Handler;            /*  42 FLEXRAMECC (FLEXRAMECC) */
  void* pfnFLEXRAMECC_INTNOFIX_Handler;          /*  43 FLEXRAMECC (FLEXRAMECC) */
  void* pfnSHA_Handler;                          /*  44 Secure Hash Algorithm (SHA) */
  void* pfnPCC_Handler;                          /*  45 Parallel Capture Controller (PCC) */
  void* pvReserved46;
  void* pfnRSWDT_Handler;                        /*  47 Reinforced Safety Watchdog Timer (RSWDT) */
  void* pvReserved48;
  void* pvReserved49;
  void* pfnHEFC_INT0_Handler;                    /*  50 Harden Embedded Flash Controller (HEFC) */
  void* pfnHEFC_INTFIX_Handler;                  /*  51 Harden Embedded Flash Controller (HEFC) */
  void* pfnHEFC_INTNOFIX_Handler;                /*  52 Harden Embedded Flash Controller (HEFC) */
  void* pfnTC2_CH0_Handler;                      /*  53 Timer/Counter 2 Channel 0 (TC2) */
  void* pfnTC2_CH1_Handler;                      /*  54 Timer/Counter 2 Channel 1 (TC2) */
  void* pfnTC2_CH2_Handler;                      /*  55 Timer/Counter 2 Channel 2 (TC2) */
  void* pvReserved56;
  void* pvReserved57;
  void* pvReserved58;
  void* pfnHEMC_INTSDRAMC_Handler;               /*  59 HEMC (HEMC) */
  void* pfnHEMC_INTFIX_Handler;                  /*  60 HEMC (HEMC) */
  void* pfnHEMC_INTNOFIX_Handler;                /*  61 HEMC (HEMC) */
  void* pfnSFR_Handler;                          /*  62 Special Function Registers (SFR) */
  void* pfnTRNG_Handler;                         /*  63 True Random Number Generator (TRNG) */
  void* pfnXDMAC_Handler;                        /*  64 Extensible DMA Controller (XDMAC) */
  void* pfnSPW_Handler;                          /*  65 SpW (SPW) */
  void* pvReserved66;
  void* pvReserved67;
  void* pfnIP1553_Handler;                       /*  68 IP 1553 (IP1553) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M7 exception handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void MemoryManagement_Handler      ( void );
void BusFault_Handler              ( void );
void UsageFault_Handler            ( void );
void SVCall_Handler                ( void );
void DebugMonitor_Handler          ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS
/* Peripherals interrupt handlers */
void SUPC_Handler                  ( void );
void RSTC_Handler                  ( void );
void RTC_Handler                   ( void );
void RTT_Handler                   ( void );
void WDT_Handler                   ( void );
void PMC_Handler                   ( void );
void MATRIX0_Handler               ( void );
void FLEXCOM0_Handler              ( void );
void FLEXCOM1_Handler              ( void );
void NMIC_Handler                  ( void );
void PIOA_Handler                  ( void );
void PIOB_Handler                  ( void );
void PIOC_Handler                  ( void );
void FLEXCOM2_Handler              ( void );
void FLEXCOM3_Handler              ( void );
void PIOD_Handler                  ( void );
void CCW_Handler                   ( void );
void CCF_Handler                   ( void );
void FPU_Handler                   ( void );
void IXC_Handler                   ( void );
void CRCCU_Handler                 ( void );
void ADC_Handler                   ( void );
void DACC_Handler                  ( void );
void TC0_CH0_Handler               ( void );
void TC0_CH1_Handler               ( void );
void TC0_CH2_Handler               ( void );
void TC1_CH0_Handler               ( void );
void TC1_CH1_Handler               ( void );
void TC1_CH2_Handler               ( void );
void PWM0_Handler                  ( void );
void PWM1_Handler                  ( void );
void ICM_Handler                   ( void );
void MCAN0_INT0_Handler            ( void );
void MCAN0_INT1_Handler            ( void );
void MCAN1_INT0_Handler            ( void );
void MCAN1_INT1_Handler            ( void );
void TCMECC_INTFIX_Handler         ( void );
void TCMECC_INTNOFIX_Handler       ( void );
void FLEXRAMECC_INTFIX_Handler     ( void );
void FLEXRAMECC_INTNOFIX_Handler   ( void );
void SHA_Handler                   ( void );
void PCC_Handler                   ( void );
void RSWDT_Handler                 ( void );
void HEFC_INT0_Handler             ( void );
void HEFC_INTFIX_Handler           ( void );
void HEFC_INTNOFIX_Handler         ( void );
void TC2_CH0_Handler               ( void );
void TC2_CH1_Handler               ( void );
void TC2_CH2_Handler               ( void );
void HEMC_INTSDRAMC_Handler        ( void );
void HEMC_INTFIX_Handler           ( void );
void HEMC_INTNOFIX_Handler         ( void );
void SFR_Handler                   ( void );
void TRNG_Handler                  ( void );
void XDMAC_Handler                 ( void );
void SPW_Handler                   ( void );
void IP1553_Handler                ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief Configuration of the CORTEX-M7 Processor and Core Peripherals */
#define __CM7_REV                     0x0101 /**< CM7 Core Revision                                                         */
#define __NVIC_PRIO_BITS                   3 /**< Number of Bits used for Priority Levels                                   */
#define __Vendor_SysTickConfig             0 /**< Set to 1 if different SysTick Config is used                              */
#define __MPU_PRESENT                      1 /**< MPU present or not                                                        */
#define __VTOR_PRESENT                     1 /**< Vector Table Offset Register present or not                               */
#define __FPU_PRESENT                      1 /**< FPU present or not                                                        */
#define __FPU_DP                           1 /**< Double Precision FPU                                                      */
#define __ICACHE_PRESENT                   1 /**< Instruction Cache present                                                 */
#define __DCACHE_PRESENT                   1 /**< Data Cache present                                                        */
#define __ITCM_PRESENT                     1 /**< Instruction TCM present                                                   */
#define __DTCM_PRESENT                     1 /**< Data TCM present                                                          */
#define __DEBUG_LVL                        1
#define __TRACE_LVL                        1
#define __ARCH_ARM                         1
#define __ARCH_ARM_CORTEX_M                1

/*
 * \brief CMSIS includes
 */
#include "core_cm7.h"
#if defined USE_CMSIS_INIT
#include "system_samrh707.h"
#endif /* USE_CMSIS_INIT */

/** \defgroup SAMRH707F18A_api Peripheral Software API
 *  @{
 */

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAMRH707F18A                      */
/* ************************************************************************** */
#include "component/adc.h"
#include "component/chipid.h"
#include "component/crccu.h"
#include "component/dacc.h"
#include "component/flexcom.h"
#include "component/flexramecc.h"
#include "component/fuses.h"
#include "component/hefc.h"
#include "component/hemc.h"
#include "component/hsmc.h"
#include "component/icm.h"
#include "component/ip1553.h"
#include "component/matrix.h"
#include "component/mcan.h"
#include "component/nmic.h"
#include "component/pcc.h"
#include "component/pio.h"
#include "component/pmc.h"
#include "component/pwm.h"
#include "component/rstc.h"
#include "component/rswdt.h"
#include "component/rtc.h"
#include "component/rtt.h"
#include "component/sfr.h"
#include "component/sha.h"
#include "component/spw.h"
#include "component/supc.h"
#include "component/tc.h"
#include "component/tcmecc.h"
#include "component/trng.h"
#include "component/wdt.h"
#include "component/xdmac.h"
/** @}  end of Peripheral Software API */

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR SAMRH707F18A */
/* ************************************************************************** */
#include "instance/adc.h"
#include "instance/chipid.h"
#include "instance/crccu.h"
#include "instance/dacc.h"
#include "instance/flexcom0.h"
#include "instance/flexcom1.h"
#include "instance/flexcom2.h"
#include "instance/flexcom3.h"
#include "instance/flexramecc.h"
#include "instance/fuses.h"
#include "instance/hefc.h"
#include "instance/hemc.h"
#include "instance/hsmc.h"
#include "instance/icm.h"
#include "instance/ip1553.h"
#include "instance/matrix0.h"
#include "instance/mcan0.h"
#include "instance/mcan1.h"
#include "instance/nmic.h"
#include "instance/pcc.h"
#include "instance/pio.h"
#include "instance/pmc.h"
#include "instance/pwm0.h"
#include "instance/pwm1.h"
#include "instance/rstc.h"
#include "instance/rswdt.h"
#include "instance/rtc.h"
#include "instance/rtt.h"
#include "instance/sfr.h"
#include "instance/sha.h"
#include "instance/spw.h"
#include "instance/supc.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tc2.h"
#include "instance/tcmecc.h"
#include "instance/trng.h"
#include "instance/wdt.h"
#include "instance/xdmac.h"

/** \addtogroup SAMRH707F18A_id Peripheral Ids Definitions
 *  @{
 */

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR SAMRH707F18A                                */
/* ************************************************************************** */
#define ID_SUPC          (  0) /**< \brief Supply Controller (SUPC) */
#define ID_RSTC          (  1) /**< \brief Reset Controller (RSTC) */
#define ID_RTC           (  2) /**< \brief Real-time Clock (RTC) */
#define ID_RTT           (  3) /**< \brief Real-time Timer (RTT) */
#define ID_WDT           (  4) /**< \brief Watchdog Timer (WDT) */
#define ID_PMC           (  5) /**< \brief Power Management Controller (PMC) */
#define ID_MATRIX0       (  6) /**< \brief AHB Bus Matrix (MATRIX0) */
#define ID_FLEXCOM0      (  7) /**< \brief Flexible Serial Communication (FLEXCOM0) */
#define ID_FLEXCOM1      (  8) /**< \brief Flexible Serial Communication (FLEXCOM1) */
#define ID_NMIC          (  9) /**< \brief Non-maskable Interrupt Controller (NMIC) */
#define ID_PIOA          ( 10) /**< \brief Parallel Input/Output Controller (PIOA) */
#define ID_PIOB          ( 11) /**< \brief Parallel Input/Output Controller (PIOB) */
#define ID_PIOC          ( 12) /**< \brief Parallel Input/Output Controller (PIOC) */
#define ID_FLEXCOM2      ( 13) /**< \brief Flexible Serial Communication (FLEXCOM2) */
#define ID_FLEXCOM3      ( 14) /**< \brief Flexible Serial Communication (FLEXCOM3) */
#define ID_PIOD          ( 16) /**< \brief Parallel Input/Output Controller (PIOD) */
#define ID_CRCCU         ( 22) /**< \brief Cyclic Redundancy Check Calculation Unit (CRCCU) */
#define ID_ADC           ( 23) /**< \brief Analog-to-Digital Converter (ADC) */
#define ID_DACC          ( 24) /**< \brief Digital-to-Analog Converter Controller (DACC) */
#define ID_TC0_CHANNEL0  ( 25) /**< \brief Timer Counter (TC0_CHANNEL0) */
#define ID_TC0_CHANNEL1  ( 26) /**< \brief Timer Counter (TC0_CHANNEL1) */
#define ID_TC0_CHANNEL2  ( 27) /**< \brief Timer Counter (TC0_CHANNEL2) */
#define ID_TC1_CHANNEL0  ( 28) /**< \brief Timer Counter (TC1_CHANNEL0) */
#define ID_TC1_CHANNEL1  ( 29) /**< \brief Timer Counter (TC1_CHANNEL1) */
#define ID_TC1_CHANNEL2  ( 30) /**< \brief Timer Counter (TC1_CHANNEL2) */
#define ID_PWM0          ( 31) /**< \brief Pulse Width Modulation Controller (PWM0) */
#define ID_PWM1          ( 32) /**< \brief Pulse Width Modulation Controller (PWM1) */
#define ID_ICM           ( 33) /**< \brief Integrity Check Monitor (ICM) */
#define ID_MCAN0         ( 36) /**< \brief Controller Area Network (MCAN0) */
#define ID_MCAN1         ( 38) /**< \brief Controller Area Network (MCAN1) */
#define ID_SHA           ( 44) /**< \brief Secure Hash Algorithm (SHA) */
#define ID_PCC           ( 45) /**< \brief Parallel Capture Controller (PCC) */
#define ID_RSWDT         ( 47) /**< \brief Reinforced Safety Watchdog Timer (RSWDT) */
#define ID_HEFC          ( 50) /**< \brief Harden Embedded Flash Controller (HEFC) */
#define ID_TC2_CHANNEL0  ( 53) /**< \brief Timer Counter (TC2_CHANNEL0) */
#define ID_TC2_CHANNEL1  ( 54) /**< \brief Timer Counter (TC2_CHANNEL1) */
#define ID_TC2_CHANNEL2  ( 55) /**< \brief Timer Counter (TC2_CHANNEL2) */
#define ID_HEMC          ( 59) /**< \brief HEMC (HEMC) */
#define ID_SFR           ( 62) /**< \brief Special Function Registers (SFR) */
#define ID_TRNG          ( 63) /**< \brief True Random Number Generator (TRNG) */
#define ID_XDMAC         ( 64) /**< \brief Extensible DMA Controller (XDMAC) */
#define ID_SPW_SPW       ( 65) /**< \brief SpW (SPW_SPW) */
#define ID_SPW_SPW_TIMETICK ( 66) /**< \brief SpW (SPW_SPW_TIMETICK) */
#define ID_IP1553        ( 68) /**< \brief IP 1553 (IP1553) */

#define ID_PERIPH_MAX    ( 68) /**< \brief Number of peripheral IDs */
/** @}  end of Peripheral Ids Definitions */

/** \addtogroup SAMRH707F18A_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR SAMRH707F18A                  */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define ADC_REGS                         ((adc_registers_t*)0x40200000)                /**< \brief ADC Registers Address        */
#define CHIPID_REGS                      ((chipid_registers_t*)0x40100000)             /**< \brief CHIPID Registers Address     */
#define CRCCU_REGS                       ((crccu_registers_t*)0x40018000)              /**< \brief CRCCU Registers Address      */
#define DACC_REGS                        ((dacc_registers_t*)0x40014000)               /**< \brief DACC Registers Address       */
#define FLEXCOM0_REGS                    ((flexcom_registers_t*)0x40020000)            /**< \brief FLEXCOM0 Registers Address   */
#define FLEXCOM1_REGS                    ((flexcom_registers_t*)0x40024000)            /**< \brief FLEXCOM1 Registers Address   */
#define FLEXCOM2_REGS                    ((flexcom_registers_t*)0x40028000)            /**< \brief FLEXCOM2 Registers Address   */
#define FLEXCOM3_REGS                    ((flexcom_registers_t*)0x4002c000)            /**< \brief FLEXCOM3 Registers Address   */
#define FLEXRAMECC_REGS                  ((flexramecc_registers_t*)0x40100600)         /**< \brief FLEXRAMECC Registers Address */
#define HEFC_REGS                        ((hefc_registers_t*)0x40004000)               /**< \brief HEFC Registers Address       */
#define HEMC_REGS                        ((hemc_registers_t*)0x40080000)               /**< \brief HEMC Registers Address       */
#define HSMC_REGS                        ((hsmc_registers_t*)0x40081000)               /**< \brief HSMC Registers Address       */
#define ICM_REGS                         ((icm_registers_t*)0x4008c000)                /**< \brief ICM Registers Address        */
#define IP1553_REGS                      ((ip1553_registers_t*)0x4003c000)             /**< \brief IP1553 Registers Address     */
#define MATRIX0_REGS                     ((matrix_registers_t*)0x40000000)             /**< \brief MATRIX0 Registers Address    */
#define MCAN0_REGS                       ((mcan_registers_t*)0x40058000)               /**< \brief MCAN0 Registers Address      */
#define MCAN1_REGS                       ((mcan_registers_t*)0x4005c000)               /**< \brief MCAN1 Registers Address      */
#define NMIC_REGS                        ((nmic_registers_t*)0x400a8000)               /**< \brief NMIC Registers Address       */
#define PCC_REGS                         ((pcc_registers_t*)0x4001c000)                /**< \brief PCC Registers Address        */
#define PIO_REGS                         ((pio_registers_t*)0x40008000)                /**< \brief PIO Registers Address        */
#define PMC_REGS                         ((pmc_registers_t*)0x4000c000)                /**< \brief PMC Registers Address        */
#define PWM0_REGS                        ((pwm_registers_t*)0x40068000)                /**< \brief PWM0 Registers Address       */
#define PWM1_REGS                        ((pwm_registers_t*)0x4006c000)                /**< \brief PWM1 Registers Address       */
#define RSTC_REGS                        ((rstc_registers_t*)0x40100200)               /**< \brief RSTC Registers Address       */
#define RSWDT_REGS                       ((rswdt_registers_t*)0x40100300)              /**< \brief RSWDT Registers Address      */
#define RTC_REGS                         ((rtc_registers_t*)0x40100260)                /**< \brief RTC Registers Address        */
#define RTT_REGS                         ((rtt_registers_t*)0x40100230)                /**< \brief RTT Registers Address        */
#define SFR_REGS                         ((sfr_registers_t*)0x400a0000)                /**< \brief SFR Registers Address        */
#define SHA_REGS                         ((sha_registers_t*)0x40094000)                /**< \brief SHA Registers Address        */
#define SPW_REGS                         ((spw_registers_t*)0x40040000)                /**< \brief SPW Registers Address        */
#define SUPC_REGS                        ((supc_registers_t*)0x40100210)               /**< \brief SUPC Registers Address       */
#define TC0_REGS                         ((tc_registers_t*)0x40070000)                 /**< \brief TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0x40074000)                 /**< \brief TC1 Registers Address        */
#define TC2_REGS                         ((tc_registers_t*)0x40078000)                 /**< \brief TC2 Registers Address        */
#define TCMECC_REGS                      ((tcmecc_registers_t*)0x40100400)             /**< \brief TCMECC Registers Address     */
#define TRNG_REGS                        ((trng_registers_t*)0x40090000)               /**< \brief TRNG Registers Address       */
#define WDT_REGS                         ((wdt_registers_t*)0x40100250)                /**< \brief WDT Registers Address        */
#define XDMAC_REGS                       ((xdmac_registers_t*)0x40098000)              /**< \brief XDMAC Registers Address      */
#define GPNVMBITS_REGS                   ((fuses_gpnvmbits_registers_t*)0x00000000)    /**< \brief FUSES Registers Address      */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAMRH707F18A_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAMRH707F18A                                */
/* ************************************************************************** */
#define ADC_BASE_ADDRESS                 _UL_(0x40200000)                              /* ADC Base Address */
#define CHIPID_BASE_ADDRESS              _UL_(0x40100000)                              /* CHIPID Base Address */
#define CRCCU_BASE_ADDRESS               _UL_(0x40018000)                              /* CRCCU Base Address */
#define DACC_BASE_ADDRESS                _UL_(0x40014000)                              /* DACC Base Address */
#define FLEXCOM0_BASE_ADDRESS            _UL_(0x40020000)                              /* FLEXCOM0 Base Address */
#define FLEXCOM1_BASE_ADDRESS            _UL_(0x40024000)                              /* FLEXCOM1 Base Address */
#define FLEXCOM2_BASE_ADDRESS            _UL_(0x40028000)                              /* FLEXCOM2 Base Address */
#define FLEXCOM3_BASE_ADDRESS            _UL_(0x4002c000)                              /* FLEXCOM3 Base Address */
#define FLEXRAMECC_BASE_ADDRESS          _UL_(0x40100600)                              /* FLEXRAMECC Base Address */
#define HEFC_BASE_ADDRESS                _UL_(0x40004000)                              /* HEFC Base Address */
#define HEMC_BASE_ADDRESS                _UL_(0x40080000)                              /* HEMC Base Address */
#define HSMC_BASE_ADDRESS                _UL_(0x40081000)                              /* HSMC Base Address */
#define ICM_BASE_ADDRESS                 _UL_(0x4008c000)                              /* ICM Base Address */
#define IP1553_BASE_ADDRESS              _UL_(0x4003c000)                              /* IP1553 Base Address */
#define MATRIX0_BASE_ADDRESS             _UL_(0x40000000)                              /* MATRIX0 Base Address */
#define MCAN0_BASE_ADDRESS               _UL_(0x40058000)                              /* MCAN0 Base Address */
#define MCAN1_BASE_ADDRESS               _UL_(0x4005c000)                              /* MCAN1 Base Address */
#define NMIC_BASE_ADDRESS                _UL_(0x400a8000)                              /* NMIC Base Address */
#define PCC_BASE_ADDRESS                 _UL_(0x4001c000)                              /* PCC Base Address */
#define PIO_BASE_ADDRESS                 _UL_(0x40008000)                              /* PIO Base Address */
#define PMC_BASE_ADDRESS                 _UL_(0x4000c000)                              /* PMC Base Address */
#define PWM0_BASE_ADDRESS                _UL_(0x40068000)                              /* PWM0 Base Address */
#define PWM1_BASE_ADDRESS                _UL_(0x4006c000)                              /* PWM1 Base Address */
#define RSTC_BASE_ADDRESS                _UL_(0x40100200)                              /* RSTC Base Address */
#define RSWDT_BASE_ADDRESS               _UL_(0x40100300)                              /* RSWDT Base Address */
#define RTC_BASE_ADDRESS                 _UL_(0x40100260)                              /* RTC Base Address */
#define RTT_BASE_ADDRESS                 _UL_(0x40100230)                              /* RTT Base Address */
#define SFR_BASE_ADDRESS                 _UL_(0x400a0000)                              /* SFR Base Address */
#define SHA_BASE_ADDRESS                 _UL_(0x40094000)                              /* SHA Base Address */
#define SPW_BASE_ADDRESS                 _UL_(0x40040000)                              /* SPW Base Address */
#define SUPC_BASE_ADDRESS                _UL_(0x40100210)                              /* SUPC Base Address */
#define TC0_BASE_ADDRESS                 _UL_(0x40070000)                              /* TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UL_(0x40074000)                              /* TC1 Base Address */
#define TC2_BASE_ADDRESS                 _UL_(0x40078000)                              /* TC2 Base Address */
#define TCMECC_BASE_ADDRESS              _UL_(0x40100400)                              /* TCMECC Base Address */
#define TRNG_BASE_ADDRESS                _UL_(0x40090000)                              /* TRNG Base Address */
#define WDT_BASE_ADDRESS                 _UL_(0x40100250)                              /* WDT Base Address */
#define XDMAC_BASE_ADDRESS               _UL_(0x40098000)                              /* XDMAC Base Address */
#define GPNVMBITS_BASE_ADDRESS           _UL_(0x00000000)                              /* FUSES Base Address */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAMRH707F18A_pio Peripheral Pio Definitions
 *  @{
 */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAMRH707F18A                                         */
/* ************************************************************************** */
#include "pio/samrh707f18a.h"
/** @}  end of Peripheral Pio Definitions */

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAMRH707F18A                              */
/* ************************************************************************** */

#define PERIPHERALS_SIZE               _UL_(0x20000000)    /* 524288kB Memory segment type: io */
#define SYSTEM_SIZE                    _UL_(0x10000000)    /* 262144kB Memory segment type: io */
#define AXIMX_SIZE                     _UL_(0x00100000)    /* 1024kB Memory segment type: other */
#define ITCM_SIZE                      _UL_(0x00010000)    /*   64kB Memory segment type: other */
#define IFLASH_SIZE                    _UL_(0x00020000)    /*  128kB Memory segment type: flash */
#define IFLASH_PAGE_SIZE               _UL_(       256)
#define IFLASH_NB_OF_PAGES             _UL_(       512)

#define IROM_SIZE                      _UL_(0x00020000)    /*  128kB Memory segment type: rom */
#define DTCM_SIZE                      _UL_(0x00020000)    /*  128kB Memory segment type: other */
#define FlexRAM_SIZE                   _UL_(0x00020000)    /*  128kB Memory segment type: ram */
#define EBI_CSHEMC_SIZE                _UL_(0x00200000)    /* 2048kB Memory segment type: other */

#define PERIPHERALS_ADDR               _UL_(0x40000000)    /**< PERIPHERALS base address (type: io)*/
#define SYSTEM_ADDR                    _UL_(0xe0000000)    /**< SYSTEM base address (type: io)*/
#define AXIMX_ADDR                     _UL_(0x22000000)    /**< AXIMX base address (type: other)*/
#define ITCM_ADDR                      _UL_(0x00000000)    /**< ITCM base address (type: other)*/
#define IFLASH_ADDR                    _UL_(0x10000000)    /**< IFLASH base address (type: flash)*/
#define IROM_ADDR                      _UL_(0x11000000)    /**< IROM base address (type: rom)*/
#define DTCM_ADDR                      _UL_(0x20000000)    /**< DTCM base address (type: other)*/
#define FLEXRAM_ADDR                   _UL_(0x21000000)    /**< FLEXRAM base address (type: ram)*/
#define EBI_CSHEMC_ADDR                _UL_(0x60000000)    /**< EBI_CSHEMC base address (type: other)*/

/* ************************************************************************** */
/**  DEVICE SIGNATURES FOR SAMRH707F18A                                       */
/* ************************************************************************** */
#define CHIP_JTAGID                    _UL_(0X05D0603F)
#define CHIP_CIDR                      _UL_(0XB1770700)
#define CHIP_EXID                      _UL_(0X00000001)

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR SAMRH707F18A                                  */
/* ************************************************************************** */



#ifdef __cplusplus
}
#endif

/** @}  end of SAMRH707F18A definitions */


#endif /* _SAMRH707F18A_H_ */

