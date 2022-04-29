/*
 * Header file for CEC1736_S0_2ZW
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
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

/* File generated from device description version 2021-05-26T17:25:30Z */
#ifndef _CEC1736_S0_2ZW_H_
#define _CEC1736_S0_2ZW_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.1.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (1)
#define HEADER_FORMAT_VERSION_PATCH (0)

/* CEC1736_S0_2ZW definitions
  This file defines all structures and symbols for CEC1736_S0_2ZW:
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
/* CMSIS DEFINITIONS FOR CEC1736_S0_2ZW                                     */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M4 Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /* -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13, /* -13 Hard Fault, all classes of Fault    */
  BusFault_IRQn             = -11, /* -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault */
  UsageFault_IRQn           = -10, /* -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
  SVCall_IRQn               =  -5, /* -5  System Service Call via SVC instruction */
  DebugMonitor_IRQn         =  -4, /* -4  Debug Monitor                       */
  PendSV_IRQn               =  -2, /* -2  Pendable request for system service */
  SysTick_IRQn              =  -1, /* -1  System Tick Timer                   */

/******  CEC1736_S0_2ZW specific Interrupt Numbers ***********************************/
  GIRQ08_IRQn               =   0, /* 0   The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ09_IRQn               =   1, /* 1   The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ10_IRQn               =   2, /* 2   The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ11_IRQn               =   3, /* 3   The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ12_IRQn               =   4, /* 4   The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ13_IRQn               =   5, /* 5   The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ14_IRQn               =   6, /* 6   The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ15_IRQn               =   7, /* 7   The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ16_IRQn               =   8, /* 8   The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ17_IRQn               =   9, /* 9   The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ18_IRQn               =  10, /* 10  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ20_IRQn               =  12, /* 12  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ21_IRQn               =  13, /* 13  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ23_IRQn               =  14, /* 14  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ24_IRQn               =  15, /* 15  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  GIRQ26_IRQn               =  17, /* 17  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  I2CSMB0_IRQn              =  20, /* 20  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB0) */
  I2CSMB1_IRQn              =  21, /* 21  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB1) */
  I2CSMB2_IRQn              =  22, /* 22  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB2) */
  I2CSMB3_IRQn              =  23, /* 23  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB3) */
  DMA_CH00_IRQn             =  24, /* 24  DMA Channel 00 Registers (DMA_CHAN00) */
  DMA_CH01_IRQn             =  25, /* 25  DMA Channel 01 Registers (DMA_CHAN01) */
  DMA_CH02_IRQn             =  26, /* 26  DMA Channel 02 Registers (DMA_CHAN02) */
  DMA_CH03_IRQn             =  27, /* 27  DMA Channel 02 Registers (DMA_CHAN03) */
  DMA_CH04_IRQn             =  28, /* 28  DMA Channel 02 Registers (DMA_CHAN04) */
  DMA_CH05_IRQn             =  29, /* 29  DMA Channel 02 Registers (DMA_CHAN05) */
  DMA_CH06_IRQn             =  30, /* 30  DMA Channel 02 Registers (DMA_CHAN06) */
  DMA_CH07_IRQn             =  31, /* 31  DMA Channel 02 Registers (DMA_CHAN07) */
  DMA_CH08_IRQn             =  32, /* 32  DMA Channel 02 Registers (DMA_CHAN08) */
  DMA_CH09_IRQn             =  33, /* 33  DMA Channel 02 Registers (DMA_CHAN09) */
  UART0_IRQn                =  40, /* 40  The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART0) */
  PKE_ERR_IRQn              =  65, /* 65  Crypto block interrupt (PKE_ERR)    */
  PKE_END_IRQn              =  66, /* 66  Crypto block interrupt (PKE_END)    */
  RNG_IRQn                  =  67, /* 67  Crypto block interrupt (RNG)        */
  AES_IRQn                  =  68, /* 68  Crypto block interrupt (AES)        */
  HASH_IRQn                 =  69, /* 69  Crypto block interrupt (HASH)       */
  LED0_IRQn                 =  83, /* 83  The LED is implemented using a PWM that can be driven either by the 48 MHz clock or by a 32.768 KHz clock input. (LED0) */
  LED1_IRQn                 =  84, /* 84  The LED is implemented using a PWM that can be driven either by the 48 MHz clock or by a 32.768 KHz clock input. (LED1) */
  SPT0_IRQn                 =  90, /* 90  SPI Peripheral Target Register. (SPT0) */
  QMSPI0_IRQn               =  91, /* 91  The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface. (QMSPI0) */
  QMSPI1_IRQn               =  92, /* 92  The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface. (QMSPI1) */
  RTMR_IRQn                 = 111, /* 111 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. (RTOS) */
  HTMR0_IRQn                = 112, /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode. (HTM0) */
  HTMR1_IRQn                = 113, /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode. (HTM1) */
  EMC_IRQn                  = 134, /* 134 Environmental Monitor Block (ENV_MON) */
  TIMER32_0_IRQn            = 140, /* 140 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base. (TIMER32_0) */
  TIMER32_1_IRQn            = 141, /* 141 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base. (TIMER32_1) */
  CCT_IRQn                  = 146, /* 146 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CAP0_IRQn             = 147, /* 147 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CAP1_IRQn             = 148, /* 148 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CAP2_IRQn             = 149, /* 149 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CAP3_IRQn             = 150, /* 150 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CAP4_IRQn             = 151, /* 151 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CAP5_IRQn             = 152, /* 152 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CMP0_IRQn             = 153, /* 153 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CMP1_IRQn             = 154, /* 154 This is a 16-bit auto-reloading timer/counter. (CCT) */
  I2CSMB4_IRQn              = 158, /* 158 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB4) */
  WDT_IRQn                  = 171, /* 171 The function of the Watchdog Timer is to provide a mechanism to detect if the internal embedded controller has failed. (WDT) */
  CLK_MON_IRQn              = 174, /* 174 The Power, Clocks, and Resets (PCR) Section identifies clock sources, and reset inputs to the chip. (PCR) */
  SWI0_IRQn                 = 181, /* 181 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. (RTOS) */
  SWI1_IRQn                 = 182, /* 182 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. (RTOS) */
  SWI2_IRQn                 = 183, /* 183 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. (RTOS) */
  SWI3_IRQn                 = 184, /* 184 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. (RTOS) */
  IMSPI_IRQn                = 185, /* 185 Internal Master SPI. (IMSPI)        */
  SPT1_IRQn                 = 187, /* 187 SPI Peripheral Target Register. (SPT1) */
  SPIMON0_VLTN_IRQn         = 188, /* 188 SPI Monitor Block (SPI_MON0)        */
  SPIMON0_MTMON_IRQn        = 189, /* 189 SPI Monitor Block (SPI_MON0)        */
  SPIMON0_LTMON_IRQn        = 190, /* 190 SPI Monitor Block (SPI_MON0)        */
  SPIMON1_VLTN_IRQn         = 191, /* 191 SPI Monitor Block (SPI_MON1)        */
  SPIMON1_MTMON_IRQn        = 192, /* 192 SPI Monitor Block (SPI_MON1)        */
  SPIMON1_LTMON_IRQn        = 193, /* 193 SPI Monitor Block (SPI_MON1)        */
  VTR1_PAD_MON_IRQn         = 194, /* 194 This block is designed to be accessed internally by the EC via the register interface. (EC_REG_BANK) */
  VTR2_PAD_MON_IRQn         = 195, /* 195 This block is designed to be accessed internally by the EC via the register interface. (EC_REG_BANK) */

  PERIPH_MAX_IRQn           = 195  /* Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M4 handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault */
  void* pvReservedC12;
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
  void* pfnGIRQ08_Handler;                       /*   0 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ09_Handler;                       /*   1 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ10_Handler;                       /*   2 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ11_Handler;                       /*   3 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ12_Handler;                       /*   4 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ13_Handler;                       /*   5 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ14_Handler;                       /*   6 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ15_Handler;                       /*   7 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ16_Handler;                       /*   8 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ17_Handler;                       /*   9 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ18_Handler;                       /*  10 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pvReserved11;
  void* pfnGIRQ20_Handler;                       /*  12 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ21_Handler;                       /*  13 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ23_Handler;                       /*  14 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pfnGIRQ24_Handler;                       /*  15 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pvReserved16;
  void* pfnGIRQ26_Handler;                       /*  17 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. (ECIA) */
  void* pvReserved18;
  void* pvReserved19;
  void* pfnI2CSMB0_Handler;                      /*  20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB0) */
  void* pfnI2CSMB1_Handler;                      /*  21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB1) */
  void* pfnI2CSMB2_Handler;                      /*  22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB2) */
  void* pfnI2CSMB3_Handler;                      /*  23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB3) */
  void* pfnDMA_CH00_Handler;                     /*  24 DMA Channel 00 Registers (DMA_CHAN00) */
  void* pfnDMA_CH01_Handler;                     /*  25 DMA Channel 01 Registers (DMA_CHAN01) */
  void* pfnDMA_CH02_Handler;                     /*  26 DMA Channel 02 Registers (DMA_CHAN02) */
  void* pfnDMA_CH03_Handler;                     /*  27 DMA Channel 02 Registers (DMA_CHAN03) */
  void* pfnDMA_CH04_Handler;                     /*  28 DMA Channel 02 Registers (DMA_CHAN04) */
  void* pfnDMA_CH05_Handler;                     /*  29 DMA Channel 02 Registers (DMA_CHAN05) */
  void* pfnDMA_CH06_Handler;                     /*  30 DMA Channel 02 Registers (DMA_CHAN06) */
  void* pfnDMA_CH07_Handler;                     /*  31 DMA Channel 02 Registers (DMA_CHAN07) */
  void* pfnDMA_CH08_Handler;                     /*  32 DMA Channel 02 Registers (DMA_CHAN08) */
  void* pfnDMA_CH09_Handler;                     /*  33 DMA Channel 02 Registers (DMA_CHAN09) */
  void* pvReserved34;
  void* pvReserved35;
  void* pvReserved36;
  void* pvReserved37;
  void* pvReserved38;
  void* pvReserved39;
  void* pfnUART0_Handler;                        /*  40 The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART0) */
  void* pvReserved41;
  void* pvReserved42;
  void* pvReserved43;
  void* pvReserved44;
  void* pvReserved45;
  void* pvReserved46;
  void* pvReserved47;
  void* pvReserved48;
  void* pvReserved49;
  void* pvReserved50;
  void* pvReserved51;
  void* pvReserved52;
  void* pvReserved53;
  void* pvReserved54;
  void* pvReserved55;
  void* pvReserved56;
  void* pvReserved57;
  void* pvReserved58;
  void* pvReserved59;
  void* pvReserved60;
  void* pvReserved61;
  void* pvReserved62;
  void* pvReserved63;
  void* pvReserved64;
  void* pfnPKE_ERR_Handler;                      /*  65 Crypto block interrupt (PKE_ERR) */
  void* pfnPKE_END_Handler;                      /*  66 Crypto block interrupt (PKE_END) */
  void* pfnRNG_Handler;                          /*  67 Crypto block interrupt (RNG) */
  void* pfnAES_Handler;                          /*  68 Crypto block interrupt (AES) */
  void* pfnHASH_Handler;                         /*  69 Crypto block interrupt (HASH) */
  void* pvReserved70;
  void* pvReserved71;
  void* pvReserved72;
  void* pvReserved73;
  void* pvReserved74;
  void* pvReserved75;
  void* pvReserved76;
  void* pvReserved77;
  void* pvReserved78;
  void* pvReserved79;
  void* pvReserved80;
  void* pvReserved81;
  void* pvReserved82;
  void* pfnLED0_Handler;                         /*  83 The LED is implemented using a PWM that can be driven either by the 48 MHz clock or by a 32.768 KHz clock input. (LED0) */
  void* pfnLED1_Handler;                         /*  84 The LED is implemented using a PWM that can be driven either by the 48 MHz clock or by a 32.768 KHz clock input. (LED1) */
  void* pvReserved85;
  void* pvReserved86;
  void* pvReserved87;
  void* pvReserved88;
  void* pvReserved89;
  void* pfnSPT0_Handler;                         /*  90 SPI Peripheral Target Register. (SPT0) */
  void* pfnQMSPI0_Handler;                       /*  91 The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface. (QMSPI0) */
  void* pfnQMSPI1_Handler;                       /*  92 The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface. (QMSPI1) */
  void* pvReserved93;
  void* pvReserved94;
  void* pvReserved95;
  void* pvReserved96;
  void* pvReserved97;
  void* pvReserved98;
  void* pvReserved99;
  void* pvReserved100;
  void* pvReserved101;
  void* pvReserved102;
  void* pvReserved103;
  void* pvReserved104;
  void* pvReserved105;
  void* pvReserved106;
  void* pvReserved107;
  void* pvReserved108;
  void* pvReserved109;
  void* pvReserved110;
  void* pfnRTMR_Handler;                         /* 111 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. (RTOS) */
  void* pfnHTMR0_Handler;                        /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode. (HTM0) */
  void* pfnHTMR1_Handler;                        /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode. (HTM1) */
  void* pvReserved114;
  void* pvReserved115;
  void* pvReserved116;
  void* pvReserved117;
  void* pvReserved118;
  void* pvReserved119;
  void* pvReserved120;
  void* pvReserved121;
  void* pvReserved122;
  void* pvReserved123;
  void* pvReserved124;
  void* pvReserved125;
  void* pvReserved126;
  void* pvReserved127;
  void* pvReserved128;
  void* pvReserved129;
  void* pvReserved130;
  void* pvReserved131;
  void* pvReserved132;
  void* pvReserved133;
  void* pfnEMC_Handler;                          /* 134 Environmental Monitor Block (ENV_MON) */
  void* pvReserved135;
  void* pvReserved136;
  void* pvReserved137;
  void* pvReserved138;
  void* pvReserved139;
  void* pfnTIMER32_0_Handler;                    /* 140 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base. (TIMER32_0) */
  void* pfnTIMER32_1_Handler;                    /* 141 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base. (TIMER32_1) */
  void* pvReserved142;
  void* pvReserved143;
  void* pvReserved144;
  void* pvReserved145;
  void* pfnCCT_Handler;                          /* 146 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CAP0_Handler;                     /* 147 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CAP1_Handler;                     /* 148 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CAP2_Handler;                     /* 149 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CAP3_Handler;                     /* 150 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CAP4_Handler;                     /* 151 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CAP5_Handler;                     /* 152 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CMP0_Handler;                     /* 153 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CMP1_Handler;                     /* 154 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pvReserved155;
  void* pvReserved156;
  void* pvReserved157;
  void* pfnI2CSMB4_Handler;                      /* 158 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB4) */
  void* pvReserved159;
  void* pvReserved160;
  void* pvReserved161;
  void* pvReserved162;
  void* pvReserved163;
  void* pvReserved164;
  void* pvReserved165;
  void* pvReserved166;
  void* pvReserved167;
  void* pvReserved168;
  void* pvReserved169;
  void* pvReserved170;
  void* pfnWDT_Handler;                          /* 171 The function of the Watchdog Timer is to provide a mechanism to detect if the internal embedded controller has failed. (WDT) */
  void* pvReserved172;
  void* pvReserved173;
  void* pfnCLK_MON_Handler;                      /* 174 The Power, Clocks, and Resets (PCR) Section identifies clock sources, and reset inputs to the chip. (PCR) */
  void* pvReserved175;
  void* pvReserved176;
  void* pvReserved177;
  void* pvReserved178;
  void* pvReserved179;
  void* pvReserved180;
  void* pfnSWI0_Handler;                         /* 181 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. (RTOS) */
  void* pfnSWI1_Handler;                         /* 182 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. (RTOS) */
  void* pfnSWI2_Handler;                         /* 183 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. (RTOS) */
  void* pfnSWI3_Handler;                         /* 184 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. (RTOS) */
  void* pfnIMSPI_Handler;                        /* 185 Internal Master SPI. (IMSPI) */
  void* pvReserved186;
  void* pfnSPT1_Handler;                         /* 187 SPI Peripheral Target Register. (SPT1) */
  void* pfnSPIMON0_VLTN_Handler;                 /* 188 SPI Monitor Block (SPI_MON0) */
  void* pfnSPIMON0_MTMON_Handler;                /* 189 SPI Monitor Block (SPI_MON0) */
  void* pfnSPIMON0_LTMON_Handler;                /* 190 SPI Monitor Block (SPI_MON0) */
  void* pfnSPIMON1_VLTN_Handler;                 /* 191 SPI Monitor Block (SPI_MON1) */
  void* pfnSPIMON1_MTMON_Handler;                /* 192 SPI Monitor Block (SPI_MON1) */
  void* pfnSPIMON1_LTMON_Handler;                /* 193 SPI Monitor Block (SPI_MON1) */
  void* pfnVTR1_PAD_MON_Handler;                 /* 194 This block is designed to be accessed internally by the EC via the register interface. (EC_REG_BANK) */
  void* pfnVTR2_PAD_MON_Handler;                 /* 195 This block is designed to be accessed internally by the EC via the register interface. (EC_REG_BANK) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M4 exception handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void BusFault_Handler              ( void );
void UsageFault_Handler            ( void );
void SVCall_Handler                ( void );
void DebugMonitor_Handler          ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS
/* Peripherals interrupt handlers */
void GIRQ08_Handler                ( void );
void GIRQ09_Handler                ( void );
void GIRQ10_Handler                ( void );
void GIRQ11_Handler                ( void );
void GIRQ12_Handler                ( void );
void GIRQ13_Handler                ( void );
void GIRQ14_Handler                ( void );
void GIRQ15_Handler                ( void );
void GIRQ16_Handler                ( void );
void GIRQ17_Handler                ( void );
void GIRQ18_Handler                ( void );
void GIRQ20_Handler                ( void );
void GIRQ21_Handler                ( void );
void GIRQ23_Handler                ( void );
void GIRQ24_Handler                ( void );
void GIRQ26_Handler                ( void );
void I2CSMB0_Handler               ( void );
void I2CSMB1_Handler               ( void );
void I2CSMB2_Handler               ( void );
void I2CSMB3_Handler               ( void );
void DMA_CH00_Handler              ( void );
void DMA_CH01_Handler              ( void );
void DMA_CH02_Handler              ( void );
void DMA_CH03_Handler              ( void );
void DMA_CH04_Handler              ( void );
void DMA_CH05_Handler              ( void );
void DMA_CH06_Handler              ( void );
void DMA_CH07_Handler              ( void );
void DMA_CH08_Handler              ( void );
void DMA_CH09_Handler              ( void );
void UART0_Handler                 ( void );
void PKE_ERR_Handler               ( void );
void PKE_END_Handler               ( void );
void RNG_Handler                   ( void );
void AES_Handler                   ( void );
void HASH_Handler                  ( void );
void LED0_Handler                  ( void );
void LED1_Handler                  ( void );
void SPT0_Handler                  ( void );
void QMSPI0_Handler                ( void );
void QMSPI1_Handler                ( void );
void RTMR_Handler                  ( void );
void HTMR0_Handler                 ( void );
void HTMR1_Handler                 ( void );
void EMC_Handler                   ( void );
void TIMER32_0_Handler             ( void );
void TIMER32_1_Handler             ( void );
void CCT_Handler                   ( void );
void CCT_CAP0_Handler              ( void );
void CCT_CAP1_Handler              ( void );
void CCT_CAP2_Handler              ( void );
void CCT_CAP3_Handler              ( void );
void CCT_CAP4_Handler              ( void );
void CCT_CAP5_Handler              ( void );
void CCT_CMP0_Handler              ( void );
void CCT_CMP1_Handler              ( void );
void I2CSMB4_Handler               ( void );
void WDT_Handler                   ( void );
void CLK_MON_Handler               ( void );
void SWI0_Handler                  ( void );
void SWI1_Handler                  ( void );
void SWI2_Handler                  ( void );
void SWI3_Handler                  ( void );
void IMSPI_Handler                 ( void );
void SPT1_Handler                  ( void );
void SPIMON0_VLTN_Handler          ( void );
void SPIMON0_MTMON_Handler         ( void );
void SPIMON0_LTMON_Handler         ( void );
void SPIMON1_VLTN_Handler          ( void );
void SPIMON1_MTMON_Handler         ( void );
void SPIMON1_LTMON_Handler         ( void );
void VTR1_PAD_MON_Handler          ( void );
void VTR2_PAD_MON_Handler          ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-M4 Processor and Core Peripherals */
#define __FPU_PRESENT                      1 /* FPU present                                                               */
#define __MPU_PRESENT                      1 /* MPU present                                                               */
#define __CM4_REV                     0x0100 /* CM4 Core Revision                                                         */
#define __NVIC_PRIO_BITS                   3 /* Number of Bits used for Priority Levels                                   */
#define __Vendor_SysTickConfig             0 /* Set to 1 if different SysTick Config is used                              */
#define __VTOR_PRESENT                     1 /* Vector Table Offset Regisrer present or not                               */
#define __ARCH_ARM                         1
#define __ARCH_ARM_CORTEX_M                1

/* CMSIS includes */
#include "core_cm4.h"
#if defined USE_CMSIS_INIT
#include "system_cec.h"
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*   SOFTWARE PERIPHERAL API DEFINITION FOR CEC1736_S0_2ZW                    */
/* ************************************************************************** */
#include "component/cct.h"
#include "component/dma_chan00.h"
#include "component/dma_chan01.h"
#include "component/dma_chan02.h"
#include "component/dma_main.h"
#include "component/ecia.h"
#include "component/ec_reg_bank.h"
#include "component/env_mon.h"
#include "component/gcr.h"
#include "component/gpio.h"
#include "component/htm.h"
#include "component/imspi.h"
#include "component/led.h"
#include "component/otp.h"
#include "component/pcr.h"
#include "component/pwm.h"
#include "component/qmspi.h"
#include "component/rtos.h"
#include "component/smb.h"
#include "component/spi_mon.h"
#include "component/spt.h"
#include "component/tfdp.h"
#include "component/timer32.h"
#include "component/uart.h"
#include "component/vtr_reg_bank.h"
#include "component/wdt.h"

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR CEC1736_S0_2ZW */
/* ************************************************************************** */
#include "instance/cct.h"
#include "instance/dma_chan00.h"
#include "instance/dma_chan01.h"
#include "instance/dma_chan02.h"
#include "instance/dma_chan03.h"
#include "instance/dma_chan04.h"
#include "instance/dma_chan05.h"
#include "instance/dma_chan06.h"
#include "instance/dma_chan07.h"
#include "instance/dma_chan08.h"
#include "instance/dma_chan09.h"
#include "instance/dma_main.h"
#include "instance/ecia.h"
#include "instance/ec_reg_bank.h"
#include "instance/env_mon.h"
#include "instance/gcr.h"
#include "instance/gpio.h"
#include "instance/htm0.h"
#include "instance/htm1.h"
#include "instance/imspi.h"
#include "instance/led0.h"
#include "instance/led1.h"
#include "instance/otp.h"
#include "instance/pcr.h"
#include "instance/pwm0.h"
#include "instance/qmspi0.h"
#include "instance/qmspi1.h"
#include "instance/rtos.h"
#include "instance/smb0.h"
#include "instance/smb1.h"
#include "instance/smb2.h"
#include "instance/smb3.h"
#include "instance/smb4.h"
#include "instance/spi_mon0.h"
#include "instance/spi_mon1.h"
#include "instance/spt0.h"
#include "instance/spt1.h"
#include "instance/tfdp.h"
#include "instance/timer32_0.h"
#include "instance/timer32_1.h"
#include "instance/uart0.h"
#include "instance/vtr_reg_bank.h"
#include "instance/wdt.h"

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR CEC1736_S0_2ZW                              */
/* ************************************************************************** */

#define ID_PERIPH_MAX    (  0) /* Number of peripheral IDs */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR CEC1736_S0_2ZW                */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define PCR_REGS                         ((pcr_registers_t*)0x40080100)                /* PCR Registers Address        */
#define DMA_MAIN_REGS                    ((dma_main_registers_t*)0x40002400)           /* DMA_MAIN Registers Address   */
#define DMA_CHAN00_REGS                  ((dma_chan00_registers_t*)0x40002440)         /* DMA_CHAN00 Registers Address */
#define DMA_CHAN01_REGS                  ((dma_chan01_registers_t*)0x40002480)         /* DMA_CHAN01 Registers Address */
#define DMA_CHAN02_REGS                  ((dma_chan02_registers_t*)0x400024c0)         /* DMA_CHAN02 Registers Address */
#define DMA_CHAN03_REGS                  ((dma_chan02_registers_t*)0x40002500)         /* DMA_CHAN03 Registers Address */
#define DMA_CHAN04_REGS                  ((dma_chan02_registers_t*)0x40002540)         /* DMA_CHAN04 Registers Address */
#define DMA_CHAN05_REGS                  ((dma_chan02_registers_t*)0x40002580)         /* DMA_CHAN05 Registers Address */
#define DMA_CHAN06_REGS                  ((dma_chan02_registers_t*)0x400025c0)         /* DMA_CHAN06 Registers Address */
#define DMA_CHAN07_REGS                  ((dma_chan02_registers_t*)0x40002600)         /* DMA_CHAN07 Registers Address */
#define DMA_CHAN08_REGS                  ((dma_chan02_registers_t*)0x40002640)         /* DMA_CHAN08 Registers Address */
#define DMA_CHAN09_REGS                  ((dma_chan02_registers_t*)0x40002680)         /* DMA_CHAN09 Registers Address */
#define ECIA_REGS                        ((ecia_registers_t*)0x4000e000)               /* ECIA Registers Address       */
#define GCR_REGS                         ((gcr_registers_t*)0x400fff00)                /* GCR Registers Address        */
#define UART0_REGS                       ((uart_registers_t*)0x4000c400)               /* UART0 Registers Address      */
#define GPIO_REGS                        ((gpio_registers_t*)0x40081000)               /* GPIO Registers Address       */
#define WDT_REGS                         ((wdt_registers_t*)0x40000400)                /* WDT Registers Address        */
#define TIMER32_0_REGS                   ((timer32_registers_t*)0x40000c80)            /* TIMER32_0 Registers Address  */
#define TIMER32_1_REGS                   ((timer32_registers_t*)0x40000ca0)            /* TIMER32_1 Registers Address  */
#define CCT_REGS                         ((cct_registers_t*)0x40001000)                /* CCT Registers Address        */
#define HTM0_REGS                        ((htm_registers_t*)0x40009800)                /* HTM0 Registers Address       */
#define HTM1_REGS                        ((htm_registers_t*)0x40009820)                /* HTM1 Registers Address       */
#define RTOS_REGS                        ((rtos_registers_t*)0x40007400)               /* RTOS Registers Address       */
#define PWM0_REGS                        ((pwm_registers_t*)0x40005800)                /* PWM0 Registers Address       */
#define LED0_REGS                        ((led_registers_t*)0x4000b800)                /* LED0 Registers Address       */
#define LED1_REGS                        ((led_registers_t*)0x4000b900)                /* LED1 Registers Address       */
#define SMB0_REGS                        ((smb_registers_t*)0x40004000)                /* SMB0 Registers Address       */
#define SMB1_REGS                        ((smb_registers_t*)0x40004400)                /* SMB1 Registers Address       */
#define SMB2_REGS                        ((smb_registers_t*)0x40004800)                /* SMB2 Registers Address       */
#define SMB3_REGS                        ((smb_registers_t*)0x40004c00)                /* SMB3 Registers Address       */
#define SMB4_REGS                        ((smb_registers_t*)0x40005000)                /* SMB4 Registers Address       */
#define QMSPI0_REGS                      ((qmspi_registers_t*)0x40070000)              /* QMSPI0 Registers Address     */
#define QMSPI1_REGS                      ((qmspi_registers_t*)0x40070200)              /* QMSPI1 Registers Address     */
#define TFDP_REGS                        ((tfdp_registers_t*)0x40008c00)               /* TFDP Registers Address       */
#define VTR_REG_BANK_REGS                ((vtr_reg_bank_registers_t*)0x4000a400)       /* VTR_REG_BANK Registers Address */
#define EC_REG_BANK_REGS                 ((ec_reg_bank_registers_t*)0x4000fc00)        /* EC_REG_BANK Registers Address */
#define OTP_REGS                         ((otp_registers_t*)0x40082000)                /* OTP Registers Address        */
#define SPT0_REGS                        ((spt_registers_t*)0x40007000)                /* SPT0 Registers Address       */
#define SPT1_REGS                        ((spt_registers_t*)0x40006c00)                /* SPT1 Registers Address       */
#define IMSPI_REGS                       ((imspi_registers_t*)0x40220000)              /* IMSPI Registers Address      */
#define ENV_MON_REGS                     ((env_mon_registers_t*)0x40200600)            /* ENV_MON Registers Address    */
#define SPI_MON0_REGS                    ((spi_mon_registers_t*)0x40010000)            /* SPI_MON0 Registers Address   */
#define SPI_MON1_REGS                    ((spi_mon_registers_t*)0x40010400)            /* SPI_MON1 Registers Address   */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR CEC1736_S0_2ZW                              */
/* ************************************************************************** */
#define PCR_BASE_ADDRESS                 _UINT32_(0x40080100)                          /* PCR Base Address */
#define DMA_MAIN_BASE_ADDRESS            _UINT32_(0x40002400)                          /* DMA_MAIN Base Address */
#define DMA_CHAN00_BASE_ADDRESS          _UINT32_(0x40002440)                          /* DMA_CHAN00 Base Address */
#define DMA_CHAN01_BASE_ADDRESS          _UINT32_(0x40002480)                          /* DMA_CHAN01 Base Address */
#define DMA_CHAN02_BASE_ADDRESS          _UINT32_(0x400024c0)                          /* DMA_CHAN02 Base Address */
#define DMA_CHAN03_BASE_ADDRESS          _UINT32_(0x40002500)                          /* DMA_CHAN03 Base Address */
#define DMA_CHAN04_BASE_ADDRESS          _UINT32_(0x40002540)                          /* DMA_CHAN04 Base Address */
#define DMA_CHAN05_BASE_ADDRESS          _UINT32_(0x40002580)                          /* DMA_CHAN05 Base Address */
#define DMA_CHAN06_BASE_ADDRESS          _UINT32_(0x400025c0)                          /* DMA_CHAN06 Base Address */
#define DMA_CHAN07_BASE_ADDRESS          _UINT32_(0x40002600)                          /* DMA_CHAN07 Base Address */
#define DMA_CHAN08_BASE_ADDRESS          _UINT32_(0x40002640)                          /* DMA_CHAN08 Base Address */
#define DMA_CHAN09_BASE_ADDRESS          _UINT32_(0x40002680)                          /* DMA_CHAN09 Base Address */
#define ECIA_BASE_ADDRESS                _UINT32_(0x4000e000)                          /* ECIA Base Address */
#define GCR_BASE_ADDRESS                 _UINT32_(0x400fff00)                          /* GCR Base Address */
#define UART0_BASE_ADDRESS               _UINT32_(0x4000c400)                          /* UART0 Base Address */
#define GPIO_BASE_ADDRESS                _UINT32_(0x40081000)                          /* GPIO Base Address */
#define WDT_BASE_ADDRESS                 _UINT32_(0x40000400)                          /* WDT Base Address */
#define TIMER32_0_BASE_ADDRESS           _UINT32_(0x40000c80)                          /* TIMER32_0 Base Address */
#define TIMER32_1_BASE_ADDRESS           _UINT32_(0x40000ca0)                          /* TIMER32_1 Base Address */
#define CCT_BASE_ADDRESS                 _UINT32_(0x40001000)                          /* CCT Base Address */
#define HTM0_BASE_ADDRESS                _UINT32_(0x40009800)                          /* HTM0 Base Address */
#define HTM1_BASE_ADDRESS                _UINT32_(0x40009820)                          /* HTM1 Base Address */
#define RTOS_BASE_ADDRESS                _UINT32_(0x40007400)                          /* RTOS Base Address */
#define PWM0_BASE_ADDRESS                _UINT32_(0x40005800)                          /* PWM0 Base Address */
#define LED0_BASE_ADDRESS                _UINT32_(0x4000b800)                          /* LED0 Base Address */
#define LED1_BASE_ADDRESS                _UINT32_(0x4000b900)                          /* LED1 Base Address */
#define SMB0_BASE_ADDRESS                _UINT32_(0x40004000)                          /* SMB0 Base Address */
#define SMB1_BASE_ADDRESS                _UINT32_(0x40004400)                          /* SMB1 Base Address */
#define SMB2_BASE_ADDRESS                _UINT32_(0x40004800)                          /* SMB2 Base Address */
#define SMB3_BASE_ADDRESS                _UINT32_(0x40004c00)                          /* SMB3 Base Address */
#define SMB4_BASE_ADDRESS                _UINT32_(0x40005000)                          /* SMB4 Base Address */
#define QMSPI0_BASE_ADDRESS              _UINT32_(0x40070000)                          /* QMSPI0 Base Address */
#define QMSPI1_BASE_ADDRESS              _UINT32_(0x40070200)                          /* QMSPI1 Base Address */
#define TFDP_BASE_ADDRESS                _UINT32_(0x40008c00)                          /* TFDP Base Address */
#define VTR_REG_BANK_BASE_ADDRESS        _UINT32_(0x4000a400)                          /* VTR_REG_BANK Base Address */
#define EC_REG_BANK_BASE_ADDRESS         _UINT32_(0x4000fc00)                          /* EC_REG_BANK Base Address */
#define OTP_BASE_ADDRESS                 _UINT32_(0x40082000)                          /* OTP Base Address */
#define SPT0_BASE_ADDRESS                _UINT32_(0x40007000)                          /* SPT0 Base Address */
#define SPT1_BASE_ADDRESS                _UINT32_(0x40006c00)                          /* SPT1 Base Address */
#define IMSPI_BASE_ADDRESS               _UINT32_(0x40220000)                          /* IMSPI Base Address */
#define ENV_MON_BASE_ADDRESS             _UINT32_(0x40200600)                          /* ENV_MON Base Address */
#define SPI_MON0_BASE_ADDRESS            _UINT32_(0x40010000)                          /* SPI_MON0 Base Address */
#define SPI_MON1_BASE_ADDRESS            _UINT32_(0x40010400)                          /* SPI_MON1 Base Address */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR CEC1736_S0_2ZW                                       */
/* ************************************************************************** */
#include "pio/cec1736_s0_2zw.h"

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR CEC1736_S0_2ZW                            */
/* ************************************************************************** */
#define CODE_SRAM_SIZE                 _UINT32_(0x00050000)    /*  320kB Memory segment type: ram */
#define DATA_SRAM_SIZE                 _UINT32_(0x00010000)    /*   64kB Memory segment type: ram */
#define DATA_SRAM2_SIZE                _UINT32_(0x00010000)    /*   64kB Memory segment type: ram */
#define DATA_SRAM3_SIZE                _UINT32_(0x00010000)    /*   64kB Memory segment type: ram */
#define DATA_SRAM_ALIAS_SIZE           _UINT32_(0x00008000)    /*   32kB Memory segment type: ram */
#define EC_DEVICE_REGISTERS_SIZE       _UINT32_(0x00080000)    /*  512kB Memory segment type: io */
#define GPIO_REGISTERS_SIZE            _UINT32_(0x00010000)    /*   64kB Memory segment type: io */
#define HOST_DEVICE_REGISTERS_SIZE     _UINT32_(0x00100000)    /* 1024kB Memory segment type: io */
#define CRYPTO_RAM_SIZE                _UINT32_(0x00006000)    /*   24kB Memory segment type: ram */
#define SCS_SIZE                       _UINT32_(0x00001000)    /*    4kB Memory segment type: io */
#define EXTERNAL_FLASH_SIZE            _UINT32_(0x08000000)    /* 131072kB Memory segment type: flash */

#define CODE_SRAM_ADDR                 _UINT32_(0x000c8000)    /* CODE_SRAM base address (type: ram)*/
#define DATA_SRAM_ADDR                 _UINT32_(0x00118000)    /* DATA_SRAM base address (type: ram)*/
#define DATA_SRAM2_ADDR                _UINT32_(0x00128000)    /* DATA_SRAM2 base address (type: ram)*/
#define DATA_SRAM3_ADDR                _UINT32_(0x00138000)    /* DATA_SRAM3 base address (type: ram)*/
#define DATA_SRAM_ALIAS_ADDR           _UINT32_(0x20000000)    /* DATA_SRAM_ALIAS base address (type: ram)*/
#define EC_DEVICE_REGISTERS_ADDR       _UINT32_(0x40000000)    /* EC_DEVICE_REGISTERS base address (type: io)*/
#define GPIO_REGISTERS_ADDR            _UINT32_(0x40080000)    /* GPIO_REGISTERS base address (type: io)*/
#define HOST_DEVICE_REGISTERS_ADDR     _UINT32_(0x400f0000)    /* HOST_DEVICE_REGISTERS base address (type: io)*/
#define CRYPTO_RAM_ADDR                _UINT32_(0x40100000)    /* CRYPTO_RAM base address (type: ram)*/
#define SCS_ADDR                       _UINT32_(0xe000e000)    /* SCS base address (type: io)*/
#define EXTERNAL_FLASH_ADDR            _UINT32_(0x50000000)    /* EXTERNAL_FLASH base address (type: flash)*/

/* ************************************************************************** */
/*   DEVICE SIGNATURES FOR CEC1736_S0_2ZW                                     */
/* ************************************************************************** */

/* ************************************************************************** */
/*   ELECTRICAL DEFINITIONS FOR CEC1736_S0_2ZW                                */
/* ************************************************************************** */



#ifdef __cplusplus
}
#endif

#endif /* _CEC1736_S0_2ZW_H_ */

