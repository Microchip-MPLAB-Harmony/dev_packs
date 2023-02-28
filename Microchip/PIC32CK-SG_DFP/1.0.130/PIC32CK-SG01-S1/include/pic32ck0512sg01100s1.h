/*
 * Header file for PIC32CK0512SG01100S1
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

/* File generated from device description version 2023-02-20T18:48:42Z */
#ifndef _PIC32CK0512SG01100S1_H_
#define _PIC32CK0512SG01100S1_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.1.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (1)
#define HEADER_FORMAT_VERSION_PATCH (0)

/* PIC32CK0512SG01100S1 definitions
  This file defines all structures and symbols for PIC32CK0512SG01100S1:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
*/

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#  include <stdint.h>
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !defined(SKIP_INTEGER_LITERALS)
#  if defined(_UINT8_) || defined(_UINT16_) || defined(_UINT32_)
#    error "Integer constant value macros already defined elsewhere"
#  endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with sizes of integer constants for C/C++ */
#  define _UINT8_(x)   ((uint8_t)(x))    /* C code: 8-bits unsigned integer constant value */
#  define _UINT16_(x)  ((uint16_t)(x))   /* C code: 16-bits unsigned integer constant value */
#  define _UINT32_(x)  ((uint32_t)(x))   /* C code: 32-bits unsigned integer constant value */

#else /* Assembler */

#  define _UINT8_(x) x    /* Assembler: 8-bits unsigned integer constant value */
#  define _UINT16_(x) x   /* Assembler: 16-bits unsigned integer constant value */
#  define _UINT32_(x) x   /* Assembler: 32-bits unsigned integer constant value */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* SKIP_INTEGER_LITERALS */

/* ************************************************************************** */
/* CMSIS DEFINITIONS FOR PIC32CK0512SG01100S1                               */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M0PLUS Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /* -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13, /* -13 Hard Fault, all classes of Fault    */
  SVCall_IRQn               =  -5, /* -5  System Service Call via SVC instruction */
  PendSV_IRQn               =  -2, /* -2  Pendable request for system service */
  SysTick_IRQn              =  -1, /* -1  System Tick Timer                   */

/******  PIC32CK0512SG01100S1 specific Interrupt Numbers ***********************************/
  CSM_COMMANDCANCEL_IRQn    =   0, /* 0   Control and Status Module (CSM)     */
  INTCTRL_IRQn              =   1, /* 1   eSecure Interrupt Controller Module (INTCTRL) */
  CSM_FCW_IRQn              =   2, /* 2   Control and Status Module (CSM)     */

  PERIPH_MAX_IRQn           =   2  /* Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M0PLUS handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault */
  void* pvReservedC12;
  void* pvReservedC11;
  void* pvReservedC10;
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5 System Service Call via SVC instruction */
  void* pvReservedC4;
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2 Pendable request for system service */
  void* pfnSysTick_Handler;                      /*  -1 System Tick Timer */

  /* Peripheral handlers */
  void* pfnCSM_COMMANDCANCEL_Handler;            /*   0 Control and Status Module (CSM) */
  void* pfnINTCTRL_Handler;                      /*   1 eSecure Interrupt Controller Module (INTCTRL) */
  void* pfnCSM_FCW_Handler;                      /*   2 Control and Status Module (CSM) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M0PLUS exception handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void SVCall_Handler                ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS
/* Peripherals interrupt handlers */
void CSM_COMMANDCANCEL_Handler     ( void );
void INTCTRL_Handler               ( void );
void CSM_FCW_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-M0PLUS Processor and Core Peripherals */
#define __MPU_PRESENT                      0 /* None                                                                      */
#define __NVIC_PRIO_BITS                   2 /* None                                                                      */
#define __VTOR_PRESENT                     1 /* None                                                                      */
#define __Vendor_SysTickConfig             0 /* None                                                                      */
#define __ARCH_ARM                         1
#define __ARCH_ARM_CORTEX_M                1

/* CMSIS includes */
#include "core_cm0plus.h"
#if defined USE_CMSIS_INIT
#include "system_pic32cksg01.h"
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*   SOFTWARE PERIPHERAL API DEFINITION FOR PIC32CK0512SG01100S1              */
/* ************************************************************************** */
#include "component/auxintf.h"
#include "component/csm.h"
#include "component/extdma.h"
#include "component/intctrl.h"
#include "component/mailbox.h"
#include "component/mcramc.h"
#include "component/pkram.h"
#include "component/rtc.h"
#include "component/sysregs.h"
#include "component/tamper.h"
#include "component/timers.h"
#include "component/wdt.h"

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR PIC32CK0512SG01100S1 */
/* ************************************************************************** */
#include "instance/ai.h"
#include "instance/csm.h"
#include "instance/extdma.h"
#include "instance/intctrl.h"
#include "instance/mailbox.h"
#include "instance/mcramc.h"
#include "instance/pkram.h"
#include "instance/rtc.h"
#include "instance/sysregs.h"
#include "instance/tamper.h"
#include "instance/timers.h"
#include "instance/wdt.h"

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR PIC32CK0512SG01100S1                        */
/* ************************************************************************** */

#define ID_PERIPH_MAX    (  0) /* Number of peripheral IDs */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR PIC32CK0512SG01100S1          */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define AI_REGS                          ((auxintf_registers_t*)0x57000100)            /* AI Registers Address         */
#define CSM_REGS                         ((csm_registers_t*)0x57000000)                /* CSM Registers Address        */
#define EXTDMA_REGS                      ((extdma_registers_t*)0x52000800)             /* EXTDMA Registers Address     */
#define INTCTRL_REGS                     ((intctrl_registers_t*)0x52000400)            /* INTCTRL Registers Address    */
#define MAILBOX_REGS                     ((mailbox_registers_t*)0x50000000)            /* MAILBOX Registers Address    */
#define MCRAMC_REGS                      ((mcramc_registers_t*)0x57000300)             /* MCRAMC Registers Address     */
#define PKRAM_REGS                       ((pkram_registers_t*)0x57000200)              /* PKRAM Registers Address      */
#define RTC_REGS                         ((rtc_registers_t*)0x59000000)                /* RTC Registers Address        */
#define SYSREGS_REGS                     ((sysregs_registers_t*)0x52001c00)            /* SYSREGS Registers Address    */
#define TAMPER_REGS                      ((tamper_registers_t*)0x59000400)             /* TAMPER Registers Address     */
#define TIMERS_REGS                      ((timers_registers_t*)0x52001800)             /* TIMERS Registers Address     */
#define WDT_REGS                         ((wdt_registers_t*)0x52000c00)                /* WDT Registers Address        */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR PIC32CK0512SG01100S1                        */
/* ************************************************************************** */
#define AI_BASE_ADDRESS                  _UINT32_(0x57000100)                          /* AI Base Address */
#define CSM_BASE_ADDRESS                 _UINT32_(0x57000000)                          /* CSM Base Address */
#define EXTDMA_BASE_ADDRESS              _UINT32_(0x52000800)                          /* EXTDMA Base Address */
#define INTCTRL_BASE_ADDRESS             _UINT32_(0x52000400)                          /* INTCTRL Base Address */
#define MAILBOX_BASE_ADDRESS             _UINT32_(0x50000000)                          /* MAILBOX Base Address */
#define MCRAMC_BASE_ADDRESS              _UINT32_(0x57000300)                          /* MCRAMC Base Address */
#define PKRAM_BASE_ADDRESS               _UINT32_(0x57000200)                          /* PKRAM Base Address */
#define RTC_BASE_ADDRESS                 _UINT32_(0x59000000)                          /* RTC Base Address */
#define SYSREGS_BASE_ADDRESS             _UINT32_(0x52001c00)                          /* SYSREGS Base Address */
#define TAMPER_BASE_ADDRESS              _UINT32_(0x59000400)                          /* TAMPER Base Address */
#define TIMERS_BASE_ADDRESS              _UINT32_(0x52001800)                          /* TIMERS Base Address */
#define WDT_BASE_ADDRESS                 _UINT32_(0x52000c00)                          /* WDT Base Address */


/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR PIC32CK0512SG01100S1                      */
/* ************************************************************************** */
#define RAM_SIZE                       _UINT32_(0x00020000)    /*  128kB Memory segment type: ram */
#define ROM_SIZE                       _UINT32_(0x00008000)    /*   32kB Memory segment type: rom */
#define APBA_SIZE                      _UINT32_(0x03000000)    /* 49152kB Memory segment type: io */
#define BATTREGS_SIZE                  _UINT32_(0x00000020)    /*    0kB Memory segment type: ram */
#define APBB_SIZE                      _UINT32_(0x0c000000)    /* 196608kB Memory segment type: io */
#define AUX_INTF_SIZE                  _UINT32_(0x10000000)    /* 262144kB Memory segment type: ram */
#define PPB_SIZE                       _UINT32_(0x20000000)    /* 524288kB Memory segment type: io */

#define RAM_ADDR                       _UINT32_(0x10000000)    /* RAM base address (type: ram)*/
#define ROM_ADDR                       _UINT32_(0x20000000)    /* ROM base address (type: rom)*/
#define APBA_ADDR                      _UINT32_(0x50000000)    /* APBA base address (type: io)*/
#define BATTREGS_ADDR                  _UINT32_(0x53800000)    /* BATTREGS base address (type: ram)*/
#define APBB_ADDR                      _UINT32_(0x54000000)    /* APBB base address (type: io)*/
#define AUX_INTF_ADDR                  _UINT32_(0x60000000)    /* AUX_INTF base address (type: ram)*/
#define PPB_ADDR                       _UINT32_(0xe0000000)    /* PPB base address (type: io)*/

/* ************************************************************************** */
/*   DEVICE SIGNATURES FOR PIC32CK0512SG01100S1                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*   ELECTRICAL DEFINITIONS FOR PIC32CK0512SG01100S1                          */
/* ************************************************************************** */



#ifdef __cplusplus
}
#endif

#endif /* _PIC32CK0512SG01100S1_H_ */

