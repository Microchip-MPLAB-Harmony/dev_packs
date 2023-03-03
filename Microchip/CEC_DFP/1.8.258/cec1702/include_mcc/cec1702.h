/*
 * Header file for CEC1702
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

/* File generated from device description version 2018-10-01T10:50:03Z */
#ifndef _CEC1702_H_
#define _CEC1702_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.1.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (1)
#define HEADER_FORMAT_VERSION_PATCH (0)

/* CEC1702 definitions
  This file defines all structures and symbols for CEC1702:
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
/* CMSIS DEFINITIONS FOR CEC1702                                            */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M4 Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /* -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /* -14 Non Maskable Interrupt              */
  HardFault_IRQn            = -13, /* -13  Hard Fault Interrupt               */
  MemoryManagement_IRQn     = -12, /* -12  Memory Management Interrupt        */
  BusFault_IRQn             = -11, /* -11  Bus Fault Interrupt                */
  UsageFault_IRQn           = -10, /* -10  Usage Fault Interrupt              */
  SVCall_IRQn               =  -5, /* -5   SV Call Interrupt                  */
  DebugMonitor_IRQn         =  -4, /* -4   Debug Monitor Interrupt            */
  PendSV_IRQn               =  -2, /* -2   Pend SV Interrupt                  */
  SysTick_IRQn              =  -1, /* -1   System Tick Interrupt              */

/******  CEC1702 specific Interrupt Numbers ***********************************/
  GIRQ08_IRQn               =   0, /* 0   GPIO Pin Control Registers (GPIO)   */
  GIRQ09_IRQn               =   1, /* 1   GPIO Pin Control Registers (GPIO)   */
  GIRQ10_IRQn               =   2, /* 2   GPIO Pin Control Registers (GPIO)   */
  GIRQ11_IRQn               =   3, /* 3   GPIO Pin Control Registers (GPIO)   */
  GIRQ12_IRQn               =   4, /* 4   GPIO Pin Control Registers (GPIO)   */
  GIRQ26_IRQn               =  17, /* 17  GPIO Pin Control Registers (GPIO)   */
  SMB0_IRQn                 =  20, /* 20  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB0) */
  SMB1_IRQn                 =  21, /* 21  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB1) */
  SMB2_IRQn                 =  22, /* 22  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB2) */
  SMB3_IRQn                 =  23, /* 23  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB3) */
  DMA_CH00_IRQn             =  24, /* 24  DMA Channel 00 Registers (DMA_CHAN00) */
  DMA_CH01_IRQn             =  25, /* 25  DMA Channel 01 Registers (DMA_CHAN01) */
  DMA_CH02_IRQn             =  26, /* 26  DMA Channel 00 Registers (DMA_CHAN02) */
  DMA_CH03_IRQn             =  27, /* 27  DMA Channel 00 Registers (DMA_CHAN03) */
  DMA_CH04_IRQn             =  28, /* 28  DMA Channel 00 Registers (DMA_CHAN04) */
  DMA_CH05_IRQn             =  29, /* 29  DMA Channel 00 Registers (DMA_CHAN05) */
  DMA_CH06_IRQn             =  30, /* 30  DMA Channel 00 Registers (DMA_CHAN06) */
  DMA_CH07_IRQn             =  31, /* 31  DMA Channel 00 Registers (DMA_CHAN07) */
  DMA_CH08_IRQn             =  32, /* 32  DMA Channel 00 Registers (DMA_CHAN08) */
  DMA_CH09_IRQn             =  33, /* 33  DMA Channel 00 Registers (DMA_CHAN09) */
  DMA_CH10_IRQn             =  34, /* 34  DMA Channel 00 Registers (DMA_CHAN10) */
  DMA_CH11_IRQn             =  35, /* 35  DMA Channel 00 Registers (DMA_CHAN11) */
  DMA_CH12_IRQn             =  36, /* 36  DMA Channel 00 Registers (DMA_CHAN12) */
  DMA_CH13_IRQn             =  37, /* 37  DMA Channel 00 Registers (DMA_CHAN13) */
  UART0_IRQn                =  40, /* 40  The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n          full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART0) */
  UART1_IRQn                =  41, /* 41  The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n          full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART1) */
  TACH0_IRQn                =  71, /* 71  This block monitors TACH output signals (or locked rotor signals) from\n       various types of fans, and determines their speed. (TACH0) */
  TACH1_IRQn                =  72, /* 72  This block monitors TACH output signals (or locked rotor signals) from\n       various types of fans, and determines their speed. (TACH1) */
  RPM2PWM_0_FAIL_IRQn       =  74, /* 74  The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. (FAN0) */
  RPM2PWM_0_STALL_IRQn      =  75, /* 75  The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. (FAN0) */
  RPM2PWM_1_FAIL_IRQn       =  76, /* 76  The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. (FAN1) */
  RPM2PWM_1_STALL_IRQn      =  77, /* 77  The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. (FAN1) */
  SNGL_IRQn                 =  78, /* 78  This block is designed to convert external analog voltage readings into digital values. (ADC) */
  RPT_IRQn                  =  79, /* 79  This block is designed to convert external analog voltage readings into digital values. (ADC) */
  RC_ID0_IRQn               =  80, /* 80  This interface provides a single pin interface which can discriminate a number of quantized RC constants. (RC_ID0) */
  RC_ID1_IRQn               =  81, /* 81  This interface provides a single pin interface which can discriminate a number of quantized RC constants. (RC_ID1) */
  LED0_IRQn                 =  83, /* 83  The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n      clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n      PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. (LED0) */
  LED1_IRQn                 =  84, /* 84  The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n      clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n      PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. (LED1) */
  QMSPI_IRQn                =  91, /* 91  The Quad SPI Master Controller may be used to communicate with various \n        peripheral devices that use a Serial Peripheral Interface, such as EEPROMS, DACs and ADCs.\n        The controller can be configured to support advanced SPI Flash devices with multi-phase access protocols. (QMSPI) */
  TX0_IRQn                  =  92, /* 92  The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n       to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n         standard Serial Peripheral Interface. (GP_SPI0) */
  RX0_IRQn                  =  93, /* 93  The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n       to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n         standard Serial Peripheral Interface. (GP_SPI0) */
  TIMER_IRQn                = 111, /* 111 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n      chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n      wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n      timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n      halted during debug by hardware or via a software control bit. (RTOS) */
  HTM0_IRQn                 = 112, /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n        This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n        in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. (HTM0) */
  HTM1_IRQn                 = 113, /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n        This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n        in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. (HTM1) */
  ALARM_INT_IRQn            = 114, /* 114 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  WKSUB_IRQn                = 115, /* 115 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  WKSEC_IRQn                = 116, /* 116 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  WKSUBSEC_IRQn             = 117, /* 117 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  SYSPWR_IRQn               = 118, /* 118 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  RTC_IRQn                  = 119, /* 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. (RTC) */
  RTC_ALARM_IRQn            = 120, /* 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. (RTC) */
  OVRD_IN_IRQn              = 121, /* 121 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  IN0_IRQn                  = 122, /* 122 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  IN1_IRQn                  = 123, /* 123 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  IN2_IRQn                  = 124, /* 124 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  IN3_IRQn                  = 125, /* 125 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  IN4_IRQn                  = 126, /* 126 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  IN5_IRQn                  = 127, /* 127 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  IN6_IRQn                  = 128, /* 128 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  KMS_IRQn                  = 135, /* 135 The Keyboard Scan Interface block provides a register interface to the EC\n      to directly scan an external keyboard matrix of size up to 18x8. (KMS) */
  TIMER16_0_IRQn            = 136, /* 136 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. (TIMER16_0) */
  TIMER16_1_IRQn            = 137, /* 137 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. (TIMER16_1) */
  TIMER16_2_IRQn            = 138, /* 138 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. (TIMER16_2) */
  TIMER16_3_IRQn            = 139, /* 139 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. (TIMER16_3) */
  TIMER32_0_IRQn            = 140, /* 140 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n      32 bits. The name of the timer instance indicates the size of the timer. (TIMER32_0) */
  TIMER32_1_IRQn            = 141, /* 141 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n      32 bits. The name of the timer instance indicates the size of the timer. (TIMER32_1) */
  CNT_TMR0_IRQn             = 142, /* 142 This interface is a 16-bit auto-reloading timer/counter. (CNT_TMR0) */
  CNT_TMR1_IRQn             = 143, /* 143 This interface is a 16-bit auto-reloading timer/counter. (CNT_TMR1) */
  CNT_TMR2_IRQn             = 144, /* 144 This interface is a 16-bit auto-reloading timer/counter. (CNT_TMR2) */
  CNT_TMR3_IRQn             = 145, /* 145 This interface is a 16-bit auto-reloading timer/counter. (CNT_TMR3) */
  CAPTURE_TIMER_IRQn        = 146, /* 146 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CAPTURE_0_IRQn            = 147, /* 147 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CAPTURE_1_IRQn            = 148, /* 148 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CAPTURE_2_IRQn            = 149, /* 149 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CAPTURE_3_IRQn            = 150, /* 150 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CAPTURE_4_IRQn            = 151, /* 151 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CAPTURE_5_IRQn            = 152, /* 152 This is a 16-bit auto-reloading timer/counter. (CCT) */
  COMPARE_0_IRQn            = 153, /* 153 This is a 16-bit auto-reloading timer/counter. (CCT) */
  COMPARE_1_IRQn            = 154, /* 154 This is a 16-bit auto-reloading timer/counter. (CCT) */

  PERIPH_MAX_IRQn           = 154  /* Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M4 handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset */
  void* pfnNonMaskableInt_Handler;               /* -14 Non Maskable Interrupt */
  void* pfnHardFault_Handler;                    /* -13  Hard Fault Interrupt */
  void* pfnMemoryManagement_Handler;             /* -12  Memory Management Interrupt */
  void* pfnBusFault_Handler;                     /* -11  Bus Fault Interrupt */
  void* pfnUsageFault_Handler;                   /* -10  Usage Fault Interrupt */
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5  SV Call Interrupt */
  void* pfnDebugMonitor_Handler;                 /*  -4  Debug Monitor Interrupt */
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2  Pend SV Interrupt */
  void* pfnSysTick_Handler;                      /*  -1  System Tick Interrupt */

  /* Peripheral handlers */
  void* pfnGIRQ08_Handler;                       /*   0 GPIO Pin Control Registers (GPIO) */
  void* pfnGIRQ09_Handler;                       /*   1 GPIO Pin Control Registers (GPIO) */
  void* pfnGIRQ10_Handler;                       /*   2 GPIO Pin Control Registers (GPIO) */
  void* pfnGIRQ11_Handler;                       /*   3 GPIO Pin Control Registers (GPIO) */
  void* pfnGIRQ12_Handler;                       /*   4 GPIO Pin Control Registers (GPIO) */
  void* pvReserved5;
  void* pvReserved6;
  void* pvReserved7;
  void* pvReserved8;
  void* pvReserved9;
  void* pvReserved10;
  void* pvReserved11;
  void* pvReserved12;
  void* pvReserved13;
  void* pvReserved14;
  void* pvReserved15;
  void* pvReserved16;
  void* pfnGIRQ26_Handler;                       /*  17 GPIO Pin Control Registers (GPIO) */
  void* pvReserved18;
  void* pvReserved19;
  void* pfnSMB0_Handler;                         /*  20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB0) */
  void* pfnSMB1_Handler;                         /*  21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB1) */
  void* pfnSMB2_Handler;                         /*  22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB2) */
  void* pfnSMB3_Handler;                         /*  23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB3) */
  void* pfnDMA_CH00_Handler;                     /*  24 DMA Channel 00 Registers (DMA_CHAN00) */
  void* pfnDMA_CH01_Handler;                     /*  25 DMA Channel 01 Registers (DMA_CHAN01) */
  void* pfnDMA_CH02_Handler;                     /*  26 DMA Channel 00 Registers (DMA_CHAN02) */
  void* pfnDMA_CH03_Handler;                     /*  27 DMA Channel 00 Registers (DMA_CHAN03) */
  void* pfnDMA_CH04_Handler;                     /*  28 DMA Channel 00 Registers (DMA_CHAN04) */
  void* pfnDMA_CH05_Handler;                     /*  29 DMA Channel 00 Registers (DMA_CHAN05) */
  void* pfnDMA_CH06_Handler;                     /*  30 DMA Channel 00 Registers (DMA_CHAN06) */
  void* pfnDMA_CH07_Handler;                     /*  31 DMA Channel 00 Registers (DMA_CHAN07) */
  void* pfnDMA_CH08_Handler;                     /*  32 DMA Channel 00 Registers (DMA_CHAN08) */
  void* pfnDMA_CH09_Handler;                     /*  33 DMA Channel 00 Registers (DMA_CHAN09) */
  void* pfnDMA_CH10_Handler;                     /*  34 DMA Channel 00 Registers (DMA_CHAN10) */
  void* pfnDMA_CH11_Handler;                     /*  35 DMA Channel 00 Registers (DMA_CHAN11) */
  void* pfnDMA_CH12_Handler;                     /*  36 DMA Channel 00 Registers (DMA_CHAN12) */
  void* pfnDMA_CH13_Handler;                     /*  37 DMA Channel 00 Registers (DMA_CHAN13) */
  void* pvReserved38;
  void* pvReserved39;
  void* pfnUART0_Handler;                        /*  40 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n          full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART0) */
  void* pfnUART1_Handler;                        /*  41 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n          full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART1) */
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
  void* pvReserved65;
  void* pvReserved66;
  void* pvReserved67;
  void* pvReserved68;
  void* pvReserved69;
  void* pvReserved70;
  void* pfnTACH0_Handler;                        /*  71 This block monitors TACH output signals (or locked rotor signals) from\n       various types of fans, and determines their speed. (TACH0) */
  void* pfnTACH1_Handler;                        /*  72 This block monitors TACH output signals (or locked rotor signals) from\n       various types of fans, and determines their speed. (TACH1) */
  void* pvReserved73;
  void* pfnRPM2PWM_0_FAIL_Handler;               /*  74 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. (FAN0) */
  void* pfnRPM2PWM_0_STALL_Handler;              /*  75 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. (FAN0) */
  void* pfnRPM2PWM_1_FAIL_Handler;               /*  76 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. (FAN1) */
  void* pfnRPM2PWM_1_STALL_Handler;              /*  77 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. (FAN1) */
  void* pfnSNGL_Handler;                         /*  78 This block is designed to convert external analog voltage readings into digital values. (ADC) */
  void* pfnRPT_Handler;                          /*  79 This block is designed to convert external analog voltage readings into digital values. (ADC) */
  void* pfnRC_ID0_Handler;                       /*  80 This interface provides a single pin interface which can discriminate a number of quantized RC constants. (RC_ID0) */
  void* pfnRC_ID1_Handler;                       /*  81 This interface provides a single pin interface which can discriminate a number of quantized RC constants. (RC_ID1) */
  void* pvReserved82;
  void* pfnLED0_Handler;                         /*  83 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n      clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n      PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. (LED0) */
  void* pfnLED1_Handler;                         /*  84 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n      clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n      PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. (LED1) */
  void* pvReserved85;
  void* pvReserved86;
  void* pvReserved87;
  void* pvReserved88;
  void* pvReserved89;
  void* pvReserved90;
  void* pfnQMSPI_Handler;                        /*  91 The Quad SPI Master Controller may be used to communicate with various \n        peripheral devices that use a Serial Peripheral Interface, such as EEPROMS, DACs and ADCs.\n        The controller can be configured to support advanced SPI Flash devices with multi-phase access protocols. (QMSPI) */
  void* pfnTX0_Handler;                          /*  92 The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n       to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n         standard Serial Peripheral Interface. (GP_SPI0) */
  void* pfnRX0_Handler;                          /*  93 The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n       to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n         standard Serial Peripheral Interface. (GP_SPI0) */
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
  void* pfnTIMER_Handler;                        /* 111 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n      chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n      wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n      timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n      halted during debug by hardware or via a software control bit. (RTOS) */
  void* pfnHTM0_Handler;                         /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n        This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n        in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. (HTM0) */
  void* pfnHTM1_Handler;                         /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n        This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n        in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. (HTM1) */
  void* pfnALARM_INT_Handler;                    /* 114 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  void* pfnWKSUB_Handler;                        /* 115 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  void* pfnWKSEC_Handler;                        /* 116 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  void* pfnWKSUBSEC_Handler;                     /* 117 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  void* pfnSYSPWR_Handler;                       /* 118 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  void* pfnRTC_Handler;                          /* 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. (RTC) */
  void* pfnRTC_ALARM_Handler;                    /* 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. (RTC) */
  void* pfnOVRD_IN_Handler;                      /* 121 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnIN0_Handler;                          /* 122 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnIN1_Handler;                          /* 123 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnIN2_Handler;                          /* 124 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnIN3_Handler;                          /* 125 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnIN4_Handler;                          /* 126 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnIN5_Handler;                          /* 127 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnIN6_Handler;                          /* 128 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pvReserved129;
  void* pvReserved130;
  void* pvReserved131;
  void* pvReserved132;
  void* pvReserved133;
  void* pvReserved134;
  void* pfnKMS_Handler;                          /* 135 The Keyboard Scan Interface block provides a register interface to the EC\n      to directly scan an external keyboard matrix of size up to 18x8. (KMS) */
  void* pfnTIMER16_0_Handler;                    /* 136 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. (TIMER16_0) */
  void* pfnTIMER16_1_Handler;                    /* 137 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. (TIMER16_1) */
  void* pfnTIMER16_2_Handler;                    /* 138 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. (TIMER16_2) */
  void* pfnTIMER16_3_Handler;                    /* 139 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. (TIMER16_3) */
  void* pfnTIMER32_0_Handler;                    /* 140 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n      32 bits. The name of the timer instance indicates the size of the timer. (TIMER32_0) */
  void* pfnTIMER32_1_Handler;                    /* 141 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n      32 bits. The name of the timer instance indicates the size of the timer. (TIMER32_1) */
  void* pfnCNT_TMR0_Handler;                     /* 142 This interface is a 16-bit auto-reloading timer/counter. (CNT_TMR0) */
  void* pfnCNT_TMR1_Handler;                     /* 143 This interface is a 16-bit auto-reloading timer/counter. (CNT_TMR1) */
  void* pfnCNT_TMR2_Handler;                     /* 144 This interface is a 16-bit auto-reloading timer/counter. (CNT_TMR2) */
  void* pfnCNT_TMR3_Handler;                     /* 145 This interface is a 16-bit auto-reloading timer/counter. (CNT_TMR3) */
  void* pfnCAPTURE_TIMER_Handler;                /* 146 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCAPTURE_0_Handler;                    /* 147 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCAPTURE_1_Handler;                    /* 148 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCAPTURE_2_Handler;                    /* 149 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCAPTURE_3_Handler;                    /* 150 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCAPTURE_4_Handler;                    /* 151 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCAPTURE_5_Handler;                    /* 152 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCOMPARE_0_Handler;                    /* 153 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCOMPARE_1_Handler;                    /* 154 This is a 16-bit auto-reloading timer/counter. (CCT) */
} DeviceVectors;

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
void GIRQ08_Handler                ( void );
void GIRQ09_Handler                ( void );
void GIRQ10_Handler                ( void );
void GIRQ11_Handler                ( void );
void GIRQ12_Handler                ( void );
void GIRQ26_Handler                ( void );
void SMB0_Handler                  ( void );
void SMB1_Handler                  ( void );
void SMB2_Handler                  ( void );
void SMB3_Handler                  ( void );
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
void DMA_CH10_Handler              ( void );
void DMA_CH11_Handler              ( void );
void DMA_CH12_Handler              ( void );
void DMA_CH13_Handler              ( void );
void UART0_Handler                 ( void );
void UART1_Handler                 ( void );
void TACH0_Handler                 ( void );
void TACH1_Handler                 ( void );
void RPM2PWM_0_FAIL_Handler        ( void );
void RPM2PWM_0_STALL_Handler       ( void );
void RPM2PWM_1_FAIL_Handler        ( void );
void RPM2PWM_1_STALL_Handler       ( void );
void SNGL_Handler                  ( void );
void RPT_Handler                   ( void );
void RC_ID0_Handler                ( void );
void RC_ID1_Handler                ( void );
void LED0_Handler                  ( void );
void LED1_Handler                  ( void );
void QMSPI_Handler                 ( void );
void TX0_Handler                   ( void );
void RX0_Handler                   ( void );
void TIMER_Handler                 ( void );
void HTM0_Handler                  ( void );
void HTM1_Handler                  ( void );
void ALARM_INT_Handler             ( void );
void WKSUB_Handler                 ( void );
void WKSEC_Handler                 ( void );
void WKSUBSEC_Handler              ( void );
void SYSPWR_Handler                ( void );
void RTC_Handler                   ( void );
void RTC_ALARM_Handler             ( void );
void OVRD_IN_Handler               ( void );
void IN0_Handler                   ( void );
void IN1_Handler                   ( void );
void IN2_Handler                   ( void );
void IN3_Handler                   ( void );
void IN4_Handler                   ( void );
void IN5_Handler                   ( void );
void IN6_Handler                   ( void );
void KMS_Handler                   ( void );
void TIMER16_0_Handler             ( void );
void TIMER16_1_Handler             ( void );
void TIMER16_2_Handler             ( void );
void TIMER16_3_Handler             ( void );
void TIMER32_0_Handler             ( void );
void TIMER32_1_Handler             ( void );
void CNT_TMR0_Handler              ( void );
void CNT_TMR1_Handler              ( void );
void CNT_TMR2_Handler              ( void );
void CNT_TMR3_Handler              ( void );
void CAPTURE_TIMER_Handler         ( void );
void CAPTURE_0_Handler             ( void );
void CAPTURE_1_Handler             ( void );
void CAPTURE_2_Handler             ( void );
void CAPTURE_3_Handler             ( void );
void CAPTURE_4_Handler             ( void );
void CAPTURE_5_Handler             ( void );
void COMPARE_0_Handler             ( void );
void COMPARE_1_Handler             ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-M4 Processor and Core Peripherals */
#define __CM4_REV                     0x0100 /* CM4 Core Revision                                                         */
#define __MPU_PRESENT                      1 /* MPU present or not                                                        */
#define __NVIC_PRIO_BITS                   3 /* Number of Bits used for Priority Levels                                   */
#define __Vendor_SysTickConfig             0 /* Set to 1 if different SysTick Config is used                              */
#define __VTOR_PRESENT                     1 /* Vector Table Offset Register present or not                               */
#define __FPU_PRESENT                      1
#define __ARCH_ARM                         1
#define __ARCH_ARM_CORTEX_M                1

/* CMSIS includes */
#include "core_cm4.h"
#if defined USE_CMSIS_INIT
#include "system_cec1702q.h"
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*   SOFTWARE PERIPHERAL API DEFINITION FOR CEC1702                           */
/* ************************************************************************** */
#include "component/adc.h"
#include "component/cct.h"
#include "component/cnt_tmr.h"
#include "component/dma_chan00.h"
#include "component/dma_chan01.h"
#include "component/dma_chan02.h"
#include "component/dma_main.h"
#include "component/ecia.h"
#include "component/ec_reg_bank.h"
#include "component/efuse.h"
#include "component/fan.h"
#include "component/gcr.h"
#include "component/gpio.h"
#include "component/gp_spi.h"
#include "component/htm.h"
#include "component/kms.h"
#include "component/led.h"
#include "component/pcr.h"
#include "component/pwm.h"
#include "component/qmspi.h"
#include "component/rc_id.h"
#include "component/rtc.h"
#include "component/rtos.h"
#include "component/smb.h"
#include "component/tach.h"
#include "component/tfdp.h"
#include "component/timer16.h"
#include "component/timer32.h"
#include "component/uart.h"
#include "component/vbat.h"
#include "component/vbat_ram.h"
#include "component/vci.h"
#include "component/wdt.h"
#include "component/week.h"

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR CEC1702 */
/* ************************************************************************** */
#include "instance/adc.h"
#include "instance/cct.h"
#include "instance/cnt_tmr0.h"
#include "instance/cnt_tmr1.h"
#include "instance/cnt_tmr2.h"
#include "instance/cnt_tmr3.h"
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
#include "instance/dma_chan10.h"
#include "instance/dma_chan11.h"
#include "instance/dma_chan12.h"
#include "instance/dma_chan13.h"
#include "instance/dma_main.h"
#include "instance/ecia.h"
#include "instance/ec_reg_bank.h"
#include "instance/efuse.h"
#include "instance/fan0.h"
#include "instance/fan1.h"
#include "instance/gcr.h"
#include "instance/gpio.h"
#include "instance/gp_spi0.h"
#include "instance/htm0.h"
#include "instance/htm1.h"
#include "instance/kms.h"
#include "instance/led0.h"
#include "instance/led1.h"
#include "instance/pcr.h"
#include "instance/pwm0.h"
#include "instance/pwm1.h"
#include "instance/pwm10.h"
#include "instance/pwm2.h"
#include "instance/pwm3.h"
#include "instance/pwm4.h"
#include "instance/pwm5.h"
#include "instance/qmspi.h"
#include "instance/rc_id0.h"
#include "instance/rc_id1.h"
#include "instance/rtc.h"
#include "instance/rtos.h"
#include "instance/smb0.h"
#include "instance/smb1.h"
#include "instance/smb2.h"
#include "instance/smb3.h"
#include "instance/tach0.h"
#include "instance/tach1.h"
#include "instance/tfdp.h"
#include "instance/timer16_0.h"
#include "instance/timer16_1.h"
#include "instance/timer16_2.h"
#include "instance/timer16_3.h"
#include "instance/timer32_0.h"
#include "instance/timer32_1.h"
#include "instance/uart0.h"
#include "instance/uart1.h"
#include "instance/vbat.h"
#include "instance/vbat_ram.h"
#include "instance/vci.h"
#include "instance/wdt.h"
#include "instance/week.h"

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR CEC1702                                     */
/* ************************************************************************** */

#define ID_PERIPH_MAX    (  0) /* Number of peripheral IDs */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR CEC1702                       */
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
#define DMA_CHAN10_REGS                  ((dma_chan02_registers_t*)0x400026c0)         /* DMA_CHAN10 Registers Address */
#define DMA_CHAN11_REGS                  ((dma_chan02_registers_t*)0x40002700)         /* DMA_CHAN11 Registers Address */
#define DMA_CHAN12_REGS                  ((dma_chan02_registers_t*)0x40002740)         /* DMA_CHAN12 Registers Address */
#define DMA_CHAN13_REGS                  ((dma_chan02_registers_t*)0x40002780)         /* DMA_CHAN13 Registers Address */
#define ECIA_REGS                        ((ecia_registers_t*)0x4000e000)               /* ECIA Registers Address       */
#define GCR_REGS                         ((gcr_registers_t*)0x400fff00)                /* GCR Registers Address        */
#define UART0_REGS                       ((uart_registers_t*)0x400f2400)               /* UART0 Registers Address      */
#define UART1_REGS                       ((uart_registers_t*)0x400f2800)               /* UART1 Registers Address      */
#define GPIO_REGS                        ((gpio_registers_t*)0x40081000)               /* GPIO Registers Address       */
#define WDT_REGS                         ((wdt_registers_t*)0x40000000)                /* WDT Registers Address        */
#define TIMER16_0_REGS                   ((timer16_registers_t*)0x40000c00)            /* TIMER16_0 Registers Address  */
#define TIMER16_1_REGS                   ((timer16_registers_t*)0x40000c20)            /* TIMER16_1 Registers Address  */
#define TIMER16_2_REGS                   ((timer16_registers_t*)0x40000c40)            /* TIMER16_2 Registers Address  */
#define TIMER16_3_REGS                   ((timer16_registers_t*)0x40000c80)            /* TIMER16_3 Registers Address  */
#define TIMER32_0_REGS                   ((timer32_registers_t*)0x40000c80)            /* TIMER32_0 Registers Address  */
#define TIMER32_1_REGS                   ((timer32_registers_t*)0x40000ca0)            /* TIMER32_1 Registers Address  */
#define CNT_TMR0_REGS                    ((cnt_tmr_registers_t*)0x40000d00)            /* CNT_TMR0 Registers Address   */
#define CNT_TMR1_REGS                    ((cnt_tmr_registers_t*)0x40000d20)            /* CNT_TMR1 Registers Address   */
#define CNT_TMR2_REGS                    ((cnt_tmr_registers_t*)0x40000d40)            /* CNT_TMR2 Registers Address   */
#define CNT_TMR3_REGS                    ((cnt_tmr_registers_t*)0x40000d60)            /* CNT_TMR3 Registers Address   */
#define CCT_REGS                         ((cct_registers_t*)0x40001000)                /* CCT Registers Address        */
#define HTM0_REGS                        ((htm_registers_t*)0x40009800)                /* HTM0 Registers Address       */
#define HTM1_REGS                        ((htm_registers_t*)0x40009820)                /* HTM1 Registers Address       */
#define RTOS_REGS                        ((rtos_registers_t*)0x40007400)               /* RTOS Registers Address       */
#define RTC_REGS                         ((rtc_registers_t*)0x400f5000)                /* RTC Registers Address        */
#define WEEK_REGS                        ((week_registers_t*)0x4000ac80)               /* WEEK Registers Address       */
#define TACH0_REGS                       ((tach_registers_t*)0x40006000)               /* TACH0 Registers Address      */
#define TACH1_REGS                       ((tach_registers_t*)0x40006010)               /* TACH1 Registers Address      */
#define PWM0_REGS                        ((pwm_registers_t*)0x40005800)                /* PWM0 Registers Address       */
#define PWM1_REGS                        ((pwm_registers_t*)0x40005810)                /* PWM1 Registers Address       */
#define PWM2_REGS                        ((pwm_registers_t*)0x40005820)                /* PWM2 Registers Address       */
#define PWM3_REGS                        ((pwm_registers_t*)0x40005830)                /* PWM3 Registers Address       */
#define PWM4_REGS                        ((pwm_registers_t*)0x40005840)                /* PWM4 Registers Address       */
#define PWM5_REGS                        ((pwm_registers_t*)0x40005850)                /* PWM5 Registers Address       */
#define PWM10_REGS                       ((pwm_registers_t*)0x400058a0)                /* PWM10 Registers Address      */
#define ADC_REGS                         ((adc_registers_t*)0x40007c00)                /* ADC Registers Address        */
#define FAN0_REGS                        ((fan_registers_t*)0x4000a000)                /* FAN0 Registers Address       */
#define FAN1_REGS                        ((fan_registers_t*)0x4000a080)                /* FAN1 Registers Address       */
#define LED0_REGS                        ((led_registers_t*)0x4000b800)                /* LED0 Registers Address       */
#define LED1_REGS                        ((led_registers_t*)0x4000b900)                /* LED1 Registers Address       */
#define RC_ID0_REGS                      ((rc_id_registers_t*)0x40001400)              /* RC_ID0 Registers Address     */
#define RC_ID1_REGS                      ((rc_id_registers_t*)0x40001480)              /* RC_ID1 Registers Address     */
#define KMS_REGS                         ((kms_registers_t*)0x40009c00)                /* KMS Registers Address        */
#define SMB0_REGS                        ((smb_registers_t*)0x40004000)                /* SMB0 Registers Address       */
#define SMB1_REGS                        ((smb_registers_t*)0x40004400)                /* SMB1 Registers Address       */
#define SMB2_REGS                        ((smb_registers_t*)0x40004800)                /* SMB2 Registers Address       */
#define SMB3_REGS                        ((smb_registers_t*)0x40004c00)                /* SMB3 Registers Address       */
#define GP_SPI0_REGS                     ((gp_spi_registers_t*)0x40009400)             /* GP_SPI0 Registers Address    */
#define QMSPI_REGS                       ((qmspi_registers_t*)0x40005400)              /* QMSPI Registers Address      */
#define TFDP_REGS                        ((tfdp_registers_t*)0x40008c00)               /* TFDP Registers Address       */
#define VCI_REGS                         ((vci_registers_t*)0x4000ae00)                /* VCI Registers Address        */
#define VBAT_RAM_REGS                    ((vbat_ram_registers_t*)0x4000a800)           /* VBAT_RAM Registers Address   */
#define VBAT_REGS                        ((vbat_registers_t*)0x4000a400)               /* VBAT Registers Address       */
#define EC_REG_BANK_REGS                 ((ec_reg_bank_registers_t*)0x4000fc04)        /* EC_REG_BANK Registers Address */
#define EFUSE_REGS                       ((efuse_registers_t*)0x40082000)              /* EFUSE Registers Address      */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR CEC1702                                     */
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
#define DMA_CHAN10_BASE_ADDRESS          _UINT32_(0x400026c0)                          /* DMA_CHAN10 Base Address */
#define DMA_CHAN11_BASE_ADDRESS          _UINT32_(0x40002700)                          /* DMA_CHAN11 Base Address */
#define DMA_CHAN12_BASE_ADDRESS          _UINT32_(0x40002740)                          /* DMA_CHAN12 Base Address */
#define DMA_CHAN13_BASE_ADDRESS          _UINT32_(0x40002780)                          /* DMA_CHAN13 Base Address */
#define ECIA_BASE_ADDRESS                _UINT32_(0x4000e000)                          /* ECIA Base Address */
#define GCR_BASE_ADDRESS                 _UINT32_(0x400fff00)                          /* GCR Base Address */
#define UART0_BASE_ADDRESS               _UINT32_(0x400f2400)                          /* UART0 Base Address */
#define UART1_BASE_ADDRESS               _UINT32_(0x400f2800)                          /* UART1 Base Address */
#define GPIO_BASE_ADDRESS                _UINT32_(0x40081000)                          /* GPIO Base Address */
#define WDT_BASE_ADDRESS                 _UINT32_(0x40000000)                          /* WDT Base Address */
#define TIMER16_0_BASE_ADDRESS           _UINT32_(0x40000c00)                          /* TIMER16_0 Base Address */
#define TIMER16_1_BASE_ADDRESS           _UINT32_(0x40000c20)                          /* TIMER16_1 Base Address */
#define TIMER16_2_BASE_ADDRESS           _UINT32_(0x40000c40)                          /* TIMER16_2 Base Address */
#define TIMER16_3_BASE_ADDRESS           _UINT32_(0x40000c80)                          /* TIMER16_3 Base Address */
#define TIMER32_0_BASE_ADDRESS           _UINT32_(0x40000c80)                          /* TIMER32_0 Base Address */
#define TIMER32_1_BASE_ADDRESS           _UINT32_(0x40000ca0)                          /* TIMER32_1 Base Address */
#define CNT_TMR0_BASE_ADDRESS            _UINT32_(0x40000d00)                          /* CNT_TMR0 Base Address */
#define CNT_TMR1_BASE_ADDRESS            _UINT32_(0x40000d20)                          /* CNT_TMR1 Base Address */
#define CNT_TMR2_BASE_ADDRESS            _UINT32_(0x40000d40)                          /* CNT_TMR2 Base Address */
#define CNT_TMR3_BASE_ADDRESS            _UINT32_(0x40000d60)                          /* CNT_TMR3 Base Address */
#define CCT_BASE_ADDRESS                 _UINT32_(0x40001000)                          /* CCT Base Address */
#define HTM0_BASE_ADDRESS                _UINT32_(0x40009800)                          /* HTM0 Base Address */
#define HTM1_BASE_ADDRESS                _UINT32_(0x40009820)                          /* HTM1 Base Address */
#define RTOS_BASE_ADDRESS                _UINT32_(0x40007400)                          /* RTOS Base Address */
#define RTC_BASE_ADDRESS                 _UINT32_(0x400f5000)                          /* RTC Base Address */
#define WEEK_BASE_ADDRESS                _UINT32_(0x4000ac80)                          /* WEEK Base Address */
#define TACH0_BASE_ADDRESS               _UINT32_(0x40006000)                          /* TACH0 Base Address */
#define TACH1_BASE_ADDRESS               _UINT32_(0x40006010)                          /* TACH1 Base Address */
#define PWM0_BASE_ADDRESS                _UINT32_(0x40005800)                          /* PWM0 Base Address */
#define PWM1_BASE_ADDRESS                _UINT32_(0x40005810)                          /* PWM1 Base Address */
#define PWM2_BASE_ADDRESS                _UINT32_(0x40005820)                          /* PWM2 Base Address */
#define PWM3_BASE_ADDRESS                _UINT32_(0x40005830)                          /* PWM3 Base Address */
#define PWM4_BASE_ADDRESS                _UINT32_(0x40005840)                          /* PWM4 Base Address */
#define PWM5_BASE_ADDRESS                _UINT32_(0x40005850)                          /* PWM5 Base Address */
#define PWM10_BASE_ADDRESS               _UINT32_(0x400058a0)                          /* PWM10 Base Address */
#define ADC_BASE_ADDRESS                 _UINT32_(0x40007c00)                          /* ADC Base Address */
#define FAN0_BASE_ADDRESS                _UINT32_(0x4000a000)                          /* FAN0 Base Address */
#define FAN1_BASE_ADDRESS                _UINT32_(0x4000a080)                          /* FAN1 Base Address */
#define LED0_BASE_ADDRESS                _UINT32_(0x4000b800)                          /* LED0 Base Address */
#define LED1_BASE_ADDRESS                _UINT32_(0x4000b900)                          /* LED1 Base Address */
#define RC_ID0_BASE_ADDRESS              _UINT32_(0x40001400)                          /* RC_ID0 Base Address */
#define RC_ID1_BASE_ADDRESS              _UINT32_(0x40001480)                          /* RC_ID1 Base Address */
#define KMS_BASE_ADDRESS                 _UINT32_(0x40009c00)                          /* KMS Base Address */
#define SMB0_BASE_ADDRESS                _UINT32_(0x40004000)                          /* SMB0 Base Address */
#define SMB1_BASE_ADDRESS                _UINT32_(0x40004400)                          /* SMB1 Base Address */
#define SMB2_BASE_ADDRESS                _UINT32_(0x40004800)                          /* SMB2 Base Address */
#define SMB3_BASE_ADDRESS                _UINT32_(0x40004c00)                          /* SMB3 Base Address */
#define GP_SPI0_BASE_ADDRESS             _UINT32_(0x40009400)                          /* GP_SPI0 Base Address */
#define QMSPI_BASE_ADDRESS               _UINT32_(0x40005400)                          /* QMSPI Base Address */
#define TFDP_BASE_ADDRESS                _UINT32_(0x40008c00)                          /* TFDP Base Address */
#define VCI_BASE_ADDRESS                 _UINT32_(0x4000ae00)                          /* VCI Base Address */
#define VBAT_RAM_BASE_ADDRESS            _UINT32_(0x4000a800)                          /* VBAT_RAM Base Address */
#define VBAT_BASE_ADDRESS                _UINT32_(0x4000a400)                          /* VBAT Base Address */
#define EC_REG_BANK_BASE_ADDRESS         _UINT32_(0x4000fc04)                          /* EC_REG_BANK Base Address */
#define EFUSE_BASE_ADDRESS               _UINT32_(0x40082000)                          /* EFUSE Base Address */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR CEC1702                                              */
/* ************************************************************************** */
#include "pio/cec1702.h"

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR CEC1702                                   */
/* ************************************************************************** */
#define CODE_SRAM_SIZE                 _UINT32_(0x00068000)    /*  416kB Memory segment type: ram */
#define DATA_SRAM_SIZE                 _UINT32_(0x00010000)    /*   64kB Memory segment type: ram */
#define DATA_SRAM_ALIAS_SIZE           _UINT32_(0x00010000)    /*   64kB Memory segment type: ram */
#define EC_DEVICE_REGISTERS_SIZE       _UINT32_(0x00010000)    /*   64kB Memory segment type: io */
#define GPIO_REGISTERS_SIZE            _UINT32_(0x00010000)    /*   64kB Memory segment type: io */
#define HOST_DEVICE_REGISTERS_SIZE     _UINT32_(0x00010000)    /*   64kB Memory segment type: io */
#define CRYPTO_RAM_SIZE                _UINT32_(0x00006000)    /*   24kB Memory segment type: ram */
#define SCS_SIZE                       _UINT32_(0x00001000)    /*    4kB Memory segment type: io */
#define EXTERNAL_FLASH_SIZE            _UINT32_(0x08000000)    /* 131072kB Memory segment type: flash */

#define CODE_SRAM_ADDR                 _UINT32_(0x000b0000)    /* CODE_SRAM base address (type: ram)*/
#define DATA_SRAM_ADDR                 _UINT32_(0x00118000)    /* DATA_SRAM base address (type: ram)*/
#define DATA_SRAM_ALIAS_ADDR           _UINT32_(0x20000000)    /* DATA_SRAM_ALIAS base address (type: ram)*/
#define EC_DEVICE_REGISTERS_ADDR       _UINT32_(0x40000000)    /* EC_DEVICE_REGISTERS base address (type: io)*/
#define GPIO_REGISTERS_ADDR            _UINT32_(0x40080000)    /* GPIO_REGISTERS base address (type: io)*/
#define HOST_DEVICE_REGISTERS_ADDR     _UINT32_(0x400f0000)    /* HOST_DEVICE_REGISTERS base address (type: io)*/
#define CRYPTO_RAM_ADDR                _UINT32_(0x40100000)    /* CRYPTO_RAM base address (type: ram)*/
#define SCS_ADDR                       _UINT32_(0xe000e000)    /* SCS base address (type: io)*/
#define EXTERNAL_FLASH_ADDR            _UINT32_(0x50000000)    /* EXTERNAL_FLASH base address (type: flash)*/

/* ************************************************************************** */
/*   DEVICE SIGNATURES FOR CEC1702                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*   ELECTRICAL DEFINITIONS FOR CEC1702                                       */
/* ************************************************************************** */



#ifdef __cplusplus
}
#endif

#endif /* _CEC1702_H_ */

