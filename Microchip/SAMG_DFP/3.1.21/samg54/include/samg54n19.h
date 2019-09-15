/**
 * \brief Header file for ATSAMG54N19
 *
 * Copyright (c) 2019 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2018-07-03T15:23:17Z */
#ifndef _SAMG54N19_H_
#define _SAMG54N19_H_

// Header version uses Semantic Versioning 2.0.0 (https://semver.org/)
#define HEADER_FORMAT_VERSION "2.0.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (0)

/** \addtogroup SAMG54N19_definitions SAMG54N19 definitions
  This file defines all structures and symbols for SAMG54N19:
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
/*   CMSIS DEFINITIONS FOR SAMG54N19                                          */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M4 Processor Exceptions Numbers ******************************/
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
/******  SAMG54N19 specific Interrupt Numbers ***********************************/
  SUPC_IRQn                 =   0, /**< 0   Supply Controller (SUPC)            */
  RSTC_IRQn                 =   1, /**< 1   Reset Controller (RSTC)             */
  RTC_IRQn                  =   2, /**< 2   Real-time Clock (RTC)               */
  RTT_IRQn                  =   3, /**< 3   Real-time Timer (RTT)               */
  WDT_IRQn                  =   4, /**< 4   Watchdog Timer (WDT)                */
  PMC_IRQn                  =   5, /**< 5   Power Management Controller (PMC)   */
  EFC_IRQn                  =   6, /**< 6   Embedded Flash Controller (EFC)     */
  UART0_IRQn                =   8, /**< 8   Universal Asynchronous Receiver Transmitter (UART0) */
  UART1_IRQn                =   9, /**< 9   Universal Asynchronous Receiver Transmitter (UART1) */
  PIOA_IRQn                 =  11, /**< 11  Parallel Input/Output Controller (PIOA) */
  PIOB_IRQn                 =  12, /**< 12  Parallel Input/Output Controller (PIOB) */
  PDMIC0_IRQn               =  13, /**< 13  Pulse Density Modulation Interface Controller (PDMIC0) */
  USART_IRQn                =  14, /**< 14  Universal Synchronous Asynchronous Receiver Transmitter (USART) */
  MEM2MEM_IRQn              =  15, /**< 15  Memory to Memory (MEM2MEM)          */
  I2SC0_IRQn                =  16, /**< 16  Inter-IC Sound Controller (I2SC0)   */
  I2SC1_IRQn                =  17, /**< 17  Inter-IC Sound Controller (I2SC1)   */
  PDMIC1_IRQn               =  18, /**< 18  Pulse Density Modulation Interface Controller (PDMIC1) */
  TWI0_IRQn                 =  19, /**< 19  Two-wire Interface High Speed (TWI0) */
  TWI1_IRQn                 =  20, /**< 20  Two-wire Interface (TWI1)           */
  SPI_IRQn                  =  21, /**< 21  Serial Peripheral Interface (SPI)   */
  TWI2_IRQn                 =  22, /**< 22  Two-wire Interface (TWI2)           */
  TC0_IRQn                  =  23, /**< 23  Timer Counter (TC0)                 */
  TC1_IRQn                  =  24, /**< 24  Timer Counter (TC0)                 */
  TC2_IRQn                  =  25, /**< 25  Timer Counter (TC0)                 */
  TC3_IRQn                  =  26, /**< 26  Timer Counter (TC1)                 */
  TC4_IRQn                  =  27, /**< 27  Timer Counter (TC1)                 */
  TC5_IRQn                  =  28, /**< 28  Timer Counter (TC1)                 */
  ADC_IRQn                  =  29, /**< 29  Analog-to-Digital Converter (ADC)   */

  PERIPH_MAX_IRQn           =  29  /**< Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* Cortex-M handlers */
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
  void* pfnEFC_Handler;                          /*   6 Embedded Flash Controller (EFC) */
  void* pvReserved7;
  void* pfnUART0_Handler;                        /*   8 Universal Asynchronous Receiver Transmitter (UART0) */
  void* pfnUART1_Handler;                        /*   9 Universal Asynchronous Receiver Transmitter (UART1) */
  void* pvReserved10;
  void* pfnPIOA_Handler;                         /*  11 Parallel Input/Output Controller (PIOA) */
  void* pfnPIOB_Handler;                         /*  12 Parallel Input/Output Controller (PIOB) */
  void* pfnPDMIC0_Handler;                       /*  13 Pulse Density Modulation Interface Controller (PDMIC0) */
  void* pfnUSART_Handler;                        /*  14 Universal Synchronous Asynchronous Receiver Transmitter (USART) */
  void* pfnMEM2MEM_Handler;                      /*  15 Memory to Memory (MEM2MEM) */
  void* pfnI2SC0_Handler;                        /*  16 Inter-IC Sound Controller (I2SC0) */
  void* pfnI2SC1_Handler;                        /*  17 Inter-IC Sound Controller (I2SC1) */
  void* pfnPDMIC1_Handler;                       /*  18 Pulse Density Modulation Interface Controller (PDMIC1) */
  void* pfnTWI0_Handler;                         /*  19 Two-wire Interface High Speed (TWI0) */
  void* pfnTWI1_Handler;                         /*  20 Two-wire Interface (TWI1) */
  void* pfnSPI_Handler;                          /*  21 Serial Peripheral Interface (SPI) */
  void* pfnTWI2_Handler;                         /*  22 Two-wire Interface (TWI2) */
  void* pfnTC0_Handler;                          /*  23 Timer Counter (TC0) */
  void* pfnTC1_Handler;                          /*  24 Timer Counter (TC0) */
  void* pfnTC2_Handler;                          /*  25 Timer Counter (TC0) */
  void* pfnTC3_Handler;                          /*  26 Timer Counter (TC1) */
  void* pfnTC4_Handler;                          /*  27 Timer Counter (TC1) */
  void* pfnTC5_Handler;                          /*  28 Timer Counter (TC1) */
  void* pfnADC_Handler;                          /*  29 Analog-to-Digital Converter (ADC) */
} DeviceVectors;

/* Defines for Deprecated Interrupt and Exceptions handler names */
#define pfnMemManage_Handler      pfnMemoryManagement_Handler     /**< \deprecated  Backward compatibility for ASF*/
#define pfnDebugMon_Handler       pfnDebugMonitor_Handler         /**< \deprecated  Backward compatibility for ASF*/
#define pfnNMI_Handler            pfnNonMaskableInt_Handler       /**< \deprecated  Backward compatibility for ASF*/
#define pfnSVC_Handler            pfnSVCall_Handler               /**< \deprecated  Backward compatibility for ASF*/

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M4 exception handlers */
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
void EFC_Handler                   ( void );
void UART0_Handler                 ( void );
void UART1_Handler                 ( void );
void PIOA_Handler                  ( void );
void PIOB_Handler                  ( void );
void PDMIC0_Handler                ( void );
void USART_Handler                 ( void );
void MEM2MEM_Handler               ( void );
void I2SC0_Handler                 ( void );
void I2SC1_Handler                 ( void );
void PDMIC1_Handler                ( void );
void TWI0_Handler                  ( void );
void TWI1_Handler                  ( void );
void SPI_Handler                   ( void );
void TWI2_Handler                  ( void );
void TC0_Handler                   ( void );
void TC1_Handler                   ( void );
void TC2_Handler                   ( void );
void TC3_Handler                   ( void );
void TC4_Handler                   ( void );
void TC5_Handler                   ( void );
void ADC_Handler                   ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
/* Defines for Deprecated Interrupt and Exceptions handler names */
#define MemManage_Handler         MemoryManagement_Handler        /**< \deprecated  Backward compatibility*/
#define DebugMon_Handler          DebugMonitor_Handler            /**< \deprecated  Backward compatibility*/
#define NMI_Handler               NonMaskableInt_Handler          /**< \deprecated  Backward compatibility*/
#define SVC_Handler               SVCall_Handler                  /**< \deprecated  Backward compatibility*/

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/*
 * \brief Configuration of the CORTEX-M4 Processor and Core Peripherals
 */
#define __CM4_REV                 0x0001 /**< CM4 Core Revision                                                         */
#define __NVIC_PRIO_BITS               4 /**< Number of Bits used for Priority Levels                                   */
#define __Vendor_SysTickConfig         0 /**< Set to 1 if different SysTick Config is used                              */
#define __MPU_PRESENT                  1 /**< MPU present or not                                                        */
#define __VTOR_PRESENT                 1 /**< Vector Table Offset Register present or not                               */
#define __FPU_PRESENT                  1 /**< FPU present or not                                                        */
#define __ARCH_ARM                     1
#define __ARCH_ARM_CORTEX_M            1
#define __DEVICE_IS_SAM                1

/*
 * \brief CMSIS includes
 */
#include "core_cm4.h"
#if defined USE_CMSIS_INIT
#include "system_samg54.h"
#endif /* USE_CMSIS_INIT */

/** \defgroup SAMG54N19_api Peripheral Software API
 *  @{
 */

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAMG54N19                         */
/* ************************************************************************** */
#include "component/adc.h"
#include "component/chipid.h"
#include "component/efc.h"
#include "component/gpbr.h"
#include "component/i2sc.h"
#include "component/matrix.h"
#include "component/mem2mem.h"
#include "component/pdc.h"
#include "component/pdmic.h"
#include "component/pio.h"
#include "component/pmc.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/rtt.h"
#include "component/spi.h"
#include "component/supc.h"
#include "component/tc.h"
#include "component/twi.h"
#include "component/twihs.h"
#include "component/uart.h"
#include "component/usart.h"
#include "component/wdt.h"
/** @}  end of Peripheral Software API */

/** \addtogroup SAMG54N19_id Peripheral Ids Definitions
 *  @{
 */

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR SAMG54N19                                   */
/* ************************************************************************** */
#define ID_SUPC          (  0) /**< \brief Supply Controller (SUPC) */
#define ID_RSTC          (  1) /**< \brief Reset Controller (RSTC) */
#define ID_RTC           (  2) /**< \brief Real-time Clock (RTC) */
#define ID_RTT           (  3) /**< \brief Real-time Timer (RTT) */
#define ID_WDT           (  4) /**< \brief Watchdog Timer (WDT) */
#define ID_PMC           (  5) /**< \brief Power Management Controller (PMC) */
#define ID_EFC           (  6) /**< \brief Embedded Flash Controller (EFC) */
#define ID_UART0         (  8) /**< \brief Universal Asynchronous Receiver Transmitter (UART0) */
#define ID_UART1         (  9) /**< \brief Universal Asynchronous Receiver Transmitter (UART1) */
#define ID_PIOA          ( 11) /**< \brief Parallel Input/Output Controller (PIOA) */
#define ID_PIOB          ( 12) /**< \brief Parallel Input/Output Controller (PIOB) */
#define ID_PDMIC0        ( 13) /**< \brief Pulse Density Modulation Interface Controller (PDMIC0) */
#define ID_USART         ( 14) /**< \brief Universal Synchronous Asynchronous Receiver Transmitter (USART) */
#define ID_MEM2MEM       ( 15) /**< \brief Memory to Memory (MEM2MEM) */
#define ID_I2SC0         ( 16) /**< \brief Inter-IC Sound Controller (I2SC0) */
#define ID_I2SC1         ( 17) /**< \brief Inter-IC Sound Controller (I2SC1) */
#define ID_PDMIC1        ( 18) /**< \brief Pulse Density Modulation Interface Controller (PDMIC1) */
#define ID_TWI0          ( 19) /**< \brief Two-wire Interface High Speed (TWI0) */
#define ID_TWI1          ( 20) /**< \brief Two-wire Interface (TWI1) */
#define ID_SPI           ( 21) /**< \brief Serial Peripheral Interface (SPI) */
#define ID_TWI2          ( 22) /**< \brief Two-wire Interface (TWI2) */
#define ID_TC0_CHANNEL0  ( 23) /**< \brief Timer Counter (TC0_CHANNEL0) */
#define ID_TC0_CHANNEL1  ( 24) /**< \brief Timer Counter (TC0_CHANNEL1) */
#define ID_TC0_CHANNEL2  ( 25) /**< \brief Timer Counter (TC0_CHANNEL2) */
#define ID_TC1_CHANNEL0  ( 26) /**< \brief Timer Counter (TC1_CHANNEL0) */
#define ID_TC1_CHANNEL1  ( 27) /**< \brief Timer Counter (TC1_CHANNEL1) */
#define ID_TC1_CHANNEL2  ( 28) /**< \brief Timer Counter (TC1_CHANNEL2) */
#define ID_ADC           ( 29) /**< \brief Analog-to-Digital Converter (ADC) */

#define ID_PERIPH_MAX    ( 29) /**< \brief Number of peripheral IDs */
/** @}  end of Peripheral Ids Definitions */

/** \addtogroup SAMG54N19_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR SAMG54N19                     */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define ADC_REGS                         ((adc_registers_t*)0x40038000)                /**< \brief ADC Registers Address        */
#define CHIPID_REGS                      ((chipid_registers_t*)0x400e0740)             /**< \brief CHIPID Registers Address     */
#define EFC_REGS                         ((efc_registers_t*)0x400e0a00)                /**< \brief EFC Registers Address        */
#define GPBR_REGS                        ((gpbr_registers_t*)0x400e1490)               /**< \brief GPBR Registers Address       */
#define I2SC0_REGS                       ((i2sc_registers_t*)0x40000000)               /**< \brief I2SC0 Registers Address      */
#define I2SC1_REGS                       ((i2sc_registers_t*)0x40004000)               /**< \brief I2SC1 Registers Address      */
#define MATRIX_REGS                      ((matrix_registers_t*)0x400e0200)             /**< \brief MATRIX Registers Address     */
#define MEM2MEM_REGS                     ((mem2mem_registers_t*)0x40028000)            /**< \brief MEM2MEM Registers Address    */
#define PDMIC0_REGS                      ((pdmic_registers_t*)0x4002c000)              /**< \brief PDMIC0 Registers Address     */
#define PDMIC1_REGS                      ((pdmic_registers_t*)0x40030000)              /**< \brief PDMIC1 Registers Address     */
#define PIOA_REGS                        ((pio_registers_t*)0x400e0e00)                /**< \brief PIOA Registers Address       */
#define PIOB_REGS                        ((pio_registers_t*)0x400e1000)                /**< \brief PIOB Registers Address       */
#define PMC_REGS                         ((pmc_registers_t*)0x400e0400)                /**< \brief PMC Registers Address        */
#define RSTC_REGS                        ((rstc_registers_t*)0x400e1400)               /**< \brief RSTC Registers Address       */
#define RTC_REGS                         ((rtc_registers_t*)0x400e1460)                /**< \brief RTC Registers Address        */
#define RTT_REGS                         ((rtt_registers_t*)0x400e1430)                /**< \brief RTT Registers Address        */
#define SPI_REGS                         ((spi_registers_t*)0x40008000)                /**< \brief SPI Registers Address        */
#define SUPC_REGS                        ((supc_registers_t*)0x400e1410)               /**< \brief SUPC Registers Address       */
#define TC0_REGS                         ((tc_registers_t*)0x40010000)                 /**< \brief TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0x40014000)                 /**< \brief TC1 Registers Address        */
#define TWI1_REGS                        ((twi_registers_t*)0x4001c000)                /**< \brief TWI1 Registers Address       */
#define TWI2_REGS                        ((twi_registers_t*)0x40040000)                /**< \brief TWI2 Registers Address       */
#define TWI0_REGS                        ((twihs_registers_t*)0x40018000)              /**< \brief TWI0 Registers Address       */
#define UART0_REGS                       ((uart_registers_t*)0x400e0600)               /**< \brief UART0 Registers Address      */
#define UART1_REGS                       ((uart_registers_t*)0x400e0800)               /**< \brief UART1 Registers Address      */
#define USART_REGS                       ((usart_registers_t*)0x40024000)              /**< \brief USART Registers Address      */
#define WDT_REGS                         ((wdt_registers_t*)0x400e1450)                /**< \brief WDT Registers Address        */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAMG54N19_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAMG54N19                                   */
/* ************************************************************************** */
#define ADC_BASE_ADDRESS                 _UL_(0x40038000)                              /**< \brief ADC Base Address */
#define CHIPID_BASE_ADDRESS              _UL_(0x400e0740)                              /**< \brief CHIPID Base Address */
#define EFC_BASE_ADDRESS                 _UL_(0x400e0a00)                              /**< \brief EFC Base Address */
#define GPBR_BASE_ADDRESS                _UL_(0x400e1490)                              /**< \brief GPBR Base Address */
#define I2SC0_BASE_ADDRESS               _UL_(0x40000000)                              /**< \brief I2SC0 Base Address */
#define I2SC1_BASE_ADDRESS               _UL_(0x40004000)                              /**< \brief I2SC1 Base Address */
#define MATRIX_BASE_ADDRESS              _UL_(0x400e0200)                              /**< \brief MATRIX Base Address */
#define MEM2MEM_BASE_ADDRESS             _UL_(0x40028000)                              /**< \brief MEM2MEM Base Address */
#define PDMIC0_BASE_ADDRESS              _UL_(0x4002c000)                              /**< \brief PDMIC0 Base Address */
#define PDMIC1_BASE_ADDRESS              _UL_(0x40030000)                              /**< \brief PDMIC1 Base Address */
#define PIOA_BASE_ADDRESS                _UL_(0x400e0e00)                              /**< \brief PIOA Base Address */
#define PIOB_BASE_ADDRESS                _UL_(0x400e1000)                              /**< \brief PIOB Base Address */
#define PMC_BASE_ADDRESS                 _UL_(0x400e0400)                              /**< \brief PMC Base Address */
#define RSTC_BASE_ADDRESS                _UL_(0x400e1400)                              /**< \brief RSTC Base Address */
#define RTC_BASE_ADDRESS                 _UL_(0x400e1460)                              /**< \brief RTC Base Address */
#define RTT_BASE_ADDRESS                 _UL_(0x400e1430)                              /**< \brief RTT Base Address */
#define SPI_BASE_ADDRESS                 _UL_(0x40008000)                              /**< \brief SPI Base Address */
#define SUPC_BASE_ADDRESS                _UL_(0x400e1410)                              /**< \brief SUPC Base Address */
#define TC0_BASE_ADDRESS                 _UL_(0x40010000)                              /**< \brief TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UL_(0x40014000)                              /**< \brief TC1 Base Address */
#define TWI1_BASE_ADDRESS                _UL_(0x4001c000)                              /**< \brief TWI1 Base Address */
#define TWI2_BASE_ADDRESS                _UL_(0x40040000)                              /**< \brief TWI2 Base Address */
#define TWI0_BASE_ADDRESS                _UL_(0x40018000)                              /**< \brief TWI0 Base Address */
#define UART0_BASE_ADDRESS               _UL_(0x400e0600)                              /**< \brief UART0 Base Address */
#define UART1_BASE_ADDRESS               _UL_(0x400e0800)                              /**< \brief UART1 Base Address */
#define USART_BASE_ADDRESS               _UL_(0x40024000)                              /**< \brief USART Base Address */
#define WDT_BASE_ADDRESS                 _UL_(0x400e1450)                              /**< \brief WDT Base Address */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAMG54N19_pio Peripheral Pio Definitions
 *  @{
 */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAMG54N19                                            */
/* ************************************************************************** */
#include "pio/samg54n19.h"
/** @}  end of Peripheral Pio Definitions */

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAMG54N19                                 */
/* ************************************************************************** */

#define PERIPHERALS_SIZE               _UL_(0x20000000)    /* 524288kB Memory segment type: io */
#define SYSTEM_SIZE                    _UL_(0x10000000)    /* 262144kB Memory segment type: io */
#define IFLASH_SIZE                    _UL_(0x00080000)    /*  512kB Memory segment type: flash */
#define IFLASH_PAGE_SIZE               _UL_(       512)
#define IFLASH_NB_OF_PAGES             _UL_(      1024)

#define IROM_SIZE                      _UL_(0x00400000)    /* 4096kB Memory segment type: rom */
#define IRAM_SIZE                      _UL_(0x00018000)    /*   96kB Memory segment type: ram */

#define PERIPHERALS_ADDR               _UL_(0x40000000)    /**< PERIPHERALS base address (type: io)*/
#define SYSTEM_ADDR                    _UL_(0xe0000000)    /**< SYSTEM base address (type: io)*/
#define IFLASH_ADDR                    _UL_(0x00400000)    /**< IFLASH base address (type: flash)*/
#define IROM_ADDR                      _UL_(0x00800000)    /**< IROM base address (type: rom)*/
#define IRAM_ADDR                      _UL_(0x20000000)    /**< IRAM base address (type: ram)*/

/* ************************************************************************** */
/**  DEVICE SIGNATURES FOR SAMG54N19                                          */
/* ************************************************************************** */
#define CHIP_JTAGID                    _UL_(0X05B3C03F)
#define CHIP_CIDR                      _UL_(0X247E0AEA)
#define CHIP_EXID                      _UL_(0X00000000)

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR SAMG54N19                                     */
/* ************************************************************************** */
#define CHIP_FREQ_SLCK_RC_MIN          _UL_(20000)         
#define CHIP_FREQ_SLCK_RC              _UL_(32000)         /**< \brief Typical Slow Clock Internal RC frequency */
#define CHIP_FREQ_SLCK_RC_MAX          _UL_(44000)         
#define CHIP_FREQ_MAINCK_RC_8MHZ       _UL_(8000000)       
#define CHIP_FREQ_MAINCK_RC_16MHZ      _UL_(16000000)      
#define CHIP_FREQ_MAINCK_RC_24MHZ      _UL_(24000000)      
#define CHIP_FREQ_CPU_MAX              _UL_(96000000)      
#define CHIP_FREQ_XTAL_32K             _UL_(32768)         
#define CHIP_FLASH_WRITE_WAIT_STATE    _UL_(7)             /**< \brief Embedded Flash Write Wait State */
#define CHIP_FREQ_FWS_0                _UL_(12500000)      /**< \brief Maximum operating frequency when FWS is 0 */
#define CHIP_FREQ_FWS_1                _UL_(25000000)      /**< \brief Maximum operating frequency when FWS is 1 */
#define CHIP_FREQ_FWS_2                _UL_(38000000)      /**< \brief Maximum operating frequency when FWS is 2 */
#define CHIP_FREQ_FWS_3                _UL_(51000000)      /**< \brief Maximum operating frequency when FWS is 3 */
#define CHIP_FREQ_FWS_4                _UL_(64000000)      /**< \brief Maximum operating frequency when FWS is 4 */
#define CHIP_FREQ_FWS_5                _UL_(76000000)      /**< \brief Maximum operating frequency when FWS is 5 */
#define CHIP_FREQ_FWS_6                _UL_(88000000)      /**< \brief Maximum operating frequency when FWS is 6 */
#define CHIP_FREQ_FWS_7                _UL_(96000000)      /**< \brief Maximum operating frequency when FWS is 7 */
#define CHIP_FREQ_FWS_NUMBER           _UL_(8)             /**< \brief Number of FWS ranges */



#ifdef __cplusplus
}
#endif

/** @}  end of SAMG54N19 definitions */


#endif /* _SAMG54N19_H_ */

