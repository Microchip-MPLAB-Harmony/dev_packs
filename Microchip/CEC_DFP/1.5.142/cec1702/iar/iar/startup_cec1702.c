/**
 * \file
 *
 * \brief IAR startup file for CEC1702
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

#include "cec1702.h"

typedef void (*intfunc) (void);
typedef union { intfunc __fun; void * __ptr; } intvec_elem;

void __iar_program_start(void);
int __low_level_init(void);

/* Reset handler */
void Reset_Handler(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M4 core handlers */
#pragma weak NonMaskableInt_Handler=Dummy_Handler
#pragma weak HardFault_Handler=Dummy_Handler
#pragma weak MemoryManagement_Handler=Dummy_Handler
#pragma weak BusFault_Handler=Dummy_Handler
#pragma weak UsageFault_Handler=Dummy_Handler
#pragma weak SVCall_Handler=Dummy_Handler
#pragma weak DebugMonitor_Handler=Dummy_Handler
#pragma weak PendSV_Handler=Dummy_Handler
#pragma weak SysTick_Handler=Dummy_Handler

/* Peripherals handlers */
#pragma weak GIRQ08_Handler=Dummy_Handler
#pragma weak GIRQ09_Handler=Dummy_Handler
#pragma weak GIRQ10_Handler=Dummy_Handler
#pragma weak GIRQ11_Handler=Dummy_Handler
#pragma weak GIRQ12_Handler=Dummy_Handler
#pragma weak GIRQ26_Handler=Dummy_Handler
#pragma weak SMB0_Handler=Dummy_Handler
#pragma weak SMB1_Handler=Dummy_Handler
#pragma weak SMB2_Handler=Dummy_Handler
#pragma weak SMB3_Handler=Dummy_Handler
#pragma weak DMA_CH00_Handler=Dummy_Handler
#pragma weak DMA_CH01_Handler=Dummy_Handler
#pragma weak DMA_CH02_Handler=Dummy_Handler
#pragma weak DMA_CH03_Handler=Dummy_Handler
#pragma weak DMA_CH04_Handler=Dummy_Handler
#pragma weak DMA_CH05_Handler=Dummy_Handler
#pragma weak DMA_CH06_Handler=Dummy_Handler
#pragma weak DMA_CH07_Handler=Dummy_Handler
#pragma weak DMA_CH08_Handler=Dummy_Handler
#pragma weak DMA_CH09_Handler=Dummy_Handler
#pragma weak DMA_CH10_Handler=Dummy_Handler
#pragma weak DMA_CH11_Handler=Dummy_Handler
#pragma weak DMA_CH12_Handler=Dummy_Handler
#pragma weak DMA_CH13_Handler=Dummy_Handler
#pragma weak UART0_Handler=Dummy_Handler
#pragma weak UART1_Handler=Dummy_Handler
#pragma weak TACH0_Handler=Dummy_Handler
#pragma weak TACH1_Handler=Dummy_Handler
#pragma weak RPM2PWM_0_FAIL_Handler=Dummy_Handler
#pragma weak RPM2PWM_0_STALL_Handler=Dummy_Handler
#pragma weak RPM2PWM_1_FAIL_Handler=Dummy_Handler
#pragma weak RPM2PWM_1_STALL_Handler=Dummy_Handler
#pragma weak SNGL_Handler=Dummy_Handler
#pragma weak RPT_Handler=Dummy_Handler
#pragma weak RC_ID0_Handler=Dummy_Handler
#pragma weak RC_ID1_Handler=Dummy_Handler
#pragma weak LED0_Handler=Dummy_Handler
#pragma weak LED1_Handler=Dummy_Handler
#pragma weak QMSPI_Handler=Dummy_Handler
#pragma weak TX0_Handler=Dummy_Handler
#pragma weak RX0_Handler=Dummy_Handler
#pragma weak TIMER_Handler=Dummy_Handler
#pragma weak HTM0_Handler=Dummy_Handler
#pragma weak HTM1_Handler=Dummy_Handler
#pragma weak ALARM_INT_Handler=Dummy_Handler
#pragma weak WKSUB_Handler=Dummy_Handler
#pragma weak WKSEC_Handler=Dummy_Handler
#pragma weak WKSUBSEC_Handler=Dummy_Handler
#pragma weak SYSPWR_Handler=Dummy_Handler
#pragma weak RTC_Handler=Dummy_Handler
#pragma weak RTC_ALARM_Handler=Dummy_Handler
#pragma weak OVRD_IN_Handler=Dummy_Handler
#pragma weak IN0_Handler=Dummy_Handler
#pragma weak IN1_Handler=Dummy_Handler
#pragma weak IN2_Handler=Dummy_Handler
#pragma weak IN3_Handler=Dummy_Handler
#pragma weak IN4_Handler=Dummy_Handler
#pragma weak IN5_Handler=Dummy_Handler
#pragma weak IN6_Handler=Dummy_Handler
#pragma weak KMS_Handler=Dummy_Handler
#pragma weak TIMER16_0_Handler=Dummy_Handler
#pragma weak TIMER16_1_Handler=Dummy_Handler
#pragma weak TIMER16_2_Handler=Dummy_Handler
#pragma weak TIMER16_3_Handler=Dummy_Handler
#pragma weak TIMER32_0_Handler=Dummy_Handler
#pragma weak TIMER32_1_Handler=Dummy_Handler
#pragma weak CNT_TMR0_Handler=Dummy_Handler
#pragma weak CNT_TMR1_Handler=Dummy_Handler
#pragma weak CNT_TMR2_Handler=Dummy_Handler
#pragma weak CNT_TMR3_Handler=Dummy_Handler
#pragma weak CAPTURE_TIMER_Handler=Dummy_Handler
#pragma weak CAPTURE_0_Handler=Dummy_Handler
#pragma weak CAPTURE_1_Handler=Dummy_Handler
#pragma weak CAPTURE_2_Handler=Dummy_Handler
#pragma weak CAPTURE_3_Handler=Dummy_Handler
#pragma weak CAPTURE_4_Handler=Dummy_Handler
#pragma weak CAPTURE_5_Handler=Dummy_Handler
#pragma weak COMPARE_0_Handler=Dummy_Handler
#pragma weak COMPARE_1_Handler=Dummy_Handler

/* Exception Table */
#pragma language = extended
#pragma segment = "CSTACK"

/* The name "__vector_table" has special meaning for C-SPY: */
/* it is where the SP start value is found, and the NVIC vector */
/* table register (VTOR) is initialized to this address if != 0 */

#pragma section = ".intvec"
#pragma location = ".intvec"
const DeviceVectors __vector_table = {
        (void*) __sfe("CSTACK"),

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
        .pfnGIRQ08_Handler             = (void*) GIRQ08_Handler, /* 0  GPIO Pin Control Registers */
        .pfnGIRQ09_Handler             = (void*) GIRQ09_Handler, /* 1  GPIO Pin Control Registers */
        .pfnGIRQ10_Handler             = (void*) GIRQ10_Handler, /* 2  GPIO Pin Control Registers */
        .pfnGIRQ11_Handler             = (void*) GIRQ11_Handler, /* 3  GPIO Pin Control Registers */
        .pfnGIRQ12_Handler             = (void*) GIRQ12_Handler, /* 4  GPIO Pin Control Registers */
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
        .pfnGIRQ26_Handler             = (void*) GIRQ26_Handler, /* 17 GPIO Pin Control Registers */
        .pvReserved18                  = (void*) (0UL),          /* 18 Reserved */
        .pvReserved19                  = (void*) (0UL),          /* 19 Reserved */
        .pfnSMB0_Handler               = (void*) SMB0_Handler,   /* 20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnSMB1_Handler               = (void*) SMB1_Handler,   /* 21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnSMB2_Handler               = (void*) SMB2_Handler,   /* 22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnSMB3_Handler               = (void*) SMB3_Handler,   /* 23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnDMA_CH00_Handler           = (void*) DMA_CH00_Handler, /* 24 DMA Channel 00 Registers */
        .pfnDMA_CH01_Handler           = (void*) DMA_CH01_Handler, /* 25 DMA Channel 01 Registers */
        .pfnDMA_CH02_Handler           = (void*) DMA_CH02_Handler, /* 26 DMA Channel 00 Registers */
        .pfnDMA_CH03_Handler           = (void*) DMA_CH03_Handler, /* 27 DMA Channel 00 Registers */
        .pfnDMA_CH04_Handler           = (void*) DMA_CH04_Handler, /* 28 DMA Channel 00 Registers */
        .pfnDMA_CH05_Handler           = (void*) DMA_CH05_Handler, /* 29 DMA Channel 00 Registers */
        .pfnDMA_CH06_Handler           = (void*) DMA_CH06_Handler, /* 30 DMA Channel 00 Registers */
        .pfnDMA_CH07_Handler           = (void*) DMA_CH07_Handler, /* 31 DMA Channel 00 Registers */
        .pfnDMA_CH08_Handler           = (void*) DMA_CH08_Handler, /* 32 DMA Channel 00 Registers */
        .pfnDMA_CH09_Handler           = (void*) DMA_CH09_Handler, /* 33 DMA Channel 00 Registers */
        .pfnDMA_CH10_Handler           = (void*) DMA_CH10_Handler, /* 34 DMA Channel 00 Registers */
        .pfnDMA_CH11_Handler           = (void*) DMA_CH11_Handler, /* 35 DMA Channel 00 Registers */
        .pfnDMA_CH12_Handler           = (void*) DMA_CH12_Handler, /* 36 DMA Channel 00 Registers */
        .pfnDMA_CH13_Handler           = (void*) DMA_CH13_Handler, /* 37 DMA Channel 00 Registers */
        .pvReserved38                  = (void*) (0UL),          /* 38 Reserved */
        .pvReserved39                  = (void*) (0UL),          /* 39 Reserved */
        .pfnUART0_Handler              = (void*) UART0_Handler,  /* 40 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n          full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        .pfnUART1_Handler              = (void*) UART1_Handler,  /* 41 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n          full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        .pvReserved42                  = (void*) (0UL),          /* 42 Reserved */
        .pvReserved43                  = (void*) (0UL),          /* 43 Reserved */
        .pvReserved44                  = (void*) (0UL),          /* 44 Reserved */
        .pvReserved45                  = (void*) (0UL),          /* 45 Reserved */
        .pvReserved46                  = (void*) (0UL),          /* 46 Reserved */
        .pvReserved47                  = (void*) (0UL),          /* 47 Reserved */
        .pvReserved48                  = (void*) (0UL),          /* 48 Reserved */
        .pvReserved49                  = (void*) (0UL),          /* 49 Reserved */
        .pvReserved50                  = (void*) (0UL),          /* 50 Reserved */
        .pvReserved51                  = (void*) (0UL),          /* 51 Reserved */
        .pvReserved52                  = (void*) (0UL),          /* 52 Reserved */
        .pvReserved53                  = (void*) (0UL),          /* 53 Reserved */
        .pvReserved54                  = (void*) (0UL),          /* 54 Reserved */
        .pvReserved55                  = (void*) (0UL),          /* 55 Reserved */
        .pvReserved56                  = (void*) (0UL),          /* 56 Reserved */
        .pvReserved57                  = (void*) (0UL),          /* 57 Reserved */
        .pvReserved58                  = (void*) (0UL),          /* 58 Reserved */
        .pvReserved59                  = (void*) (0UL),          /* 59 Reserved */
        .pvReserved60                  = (void*) (0UL),          /* 60 Reserved */
        .pvReserved61                  = (void*) (0UL),          /* 61 Reserved */
        .pvReserved62                  = (void*) (0UL),          /* 62 Reserved */
        .pvReserved63                  = (void*) (0UL),          /* 63 Reserved */
        .pvReserved64                  = (void*) (0UL),          /* 64 Reserved */
        .pvReserved65                  = (void*) (0UL),          /* 65 Reserved */
        .pvReserved66                  = (void*) (0UL),          /* 66 Reserved */
        .pvReserved67                  = (void*) (0UL),          /* 67 Reserved */
        .pvReserved68                  = (void*) (0UL),          /* 68 Reserved */
        .pvReserved69                  = (void*) (0UL),          /* 69 Reserved */
        .pvReserved70                  = (void*) (0UL),          /* 70 Reserved */
        .pfnTACH0_Handler              = (void*) TACH0_Handler,  /* 71 This block monitors TACH output signals (or locked rotor signals) from\n       various types of fans, and determines their speed. */
        .pfnTACH1_Handler              = (void*) TACH1_Handler,  /* 72 This block monitors TACH output signals (or locked rotor signals) from\n       various types of fans, and determines their speed. */
        .pvReserved73                  = (void*) (0UL),          /* 73 Reserved */
        .pfnRPM2PWM_0_FAIL_Handler     = (void*) RPM2PWM_0_FAIL_Handler, /* 74 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
        .pfnRPM2PWM_0_STALL_Handler    = (void*) RPM2PWM_0_STALL_Handler, /* 75 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
        .pfnRPM2PWM_1_FAIL_Handler     = (void*) RPM2PWM_1_FAIL_Handler, /* 76 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
        .pfnRPM2PWM_1_STALL_Handler    = (void*) RPM2PWM_1_STALL_Handler, /* 77 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
        .pfnSNGL_Handler               = (void*) SNGL_Handler,   /* 78 This block is designed to convert external analog voltage readings into digital values. */
        .pfnRPT_Handler                = (void*) RPT_Handler,    /* 79 This block is designed to convert external analog voltage readings into digital values. */
        .pfnRC_ID0_Handler             = (void*) RC_ID0_Handler, /* 80 This interface provides a single pin interface which can discriminate a number of quantized RC constants. */
        .pfnRC_ID1_Handler             = (void*) RC_ID1_Handler, /* 81 This interface provides a single pin interface which can discriminate a number of quantized RC constants. */
        .pvReserved82                  = (void*) (0UL),          /* 82 Reserved */
        .pfnLED0_Handler               = (void*) LED0_Handler,   /* 83 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n      clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n      PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
        .pfnLED1_Handler               = (void*) LED1_Handler,   /* 84 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n      clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n      PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
        .pvReserved85                  = (void*) (0UL),          /* 85 Reserved */
        .pvReserved86                  = (void*) (0UL),          /* 86 Reserved */
        .pvReserved87                  = (void*) (0UL),          /* 87 Reserved */
        .pvReserved88                  = (void*) (0UL),          /* 88 Reserved */
        .pvReserved89                  = (void*) (0UL),          /* 89 Reserved */
        .pvReserved90                  = (void*) (0UL),          /* 90 Reserved */
        .pfnQMSPI_Handler              = (void*) QMSPI_Handler,  /* 91 The Quad SPI Master Controller may be used to communicate with various \n        peripheral devices that use a Serial Peripheral Interface, such as EEPROMS, DACs and ADCs.\n        The controller can be configured to support advanced SPI Flash devices with multi-phase access protocols. */
        .pfnTX0_Handler                = (void*) TX0_Handler,    /* 92 The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n       to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n         standard Serial Peripheral Interface. */
        .pfnRX0_Handler                = (void*) RX0_Handler,    /* 93 The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n       to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n         standard Serial Peripheral Interface. */
        .pvReserved94                  = (void*) (0UL),          /* 94 Reserved */
        .pvReserved95                  = (void*) (0UL),          /* 95 Reserved */
        .pvReserved96                  = (void*) (0UL),          /* 96 Reserved */
        .pvReserved97                  = (void*) (0UL),          /* 97 Reserved */
        .pvReserved98                  = (void*) (0UL),          /* 98 Reserved */
        .pvReserved99                  = (void*) (0UL),          /* 99 Reserved */
        .pvReserved100                 = (void*) (0UL),          /* 100 Reserved */
        .pvReserved101                 = (void*) (0UL),          /* 101 Reserved */
        .pvReserved102                 = (void*) (0UL),          /* 102 Reserved */
        .pvReserved103                 = (void*) (0UL),          /* 103 Reserved */
        .pvReserved104                 = (void*) (0UL),          /* 104 Reserved */
        .pvReserved105                 = (void*) (0UL),          /* 105 Reserved */
        .pvReserved106                 = (void*) (0UL),          /* 106 Reserved */
        .pvReserved107                 = (void*) (0UL),          /* 107 Reserved */
        .pvReserved108                 = (void*) (0UL),          /* 108 Reserved */
        .pvReserved109                 = (void*) (0UL),          /* 109 Reserved */
        .pvReserved110                 = (void*) (0UL),          /* 110 Reserved */
        .pfnTIMER_Handler              = (void*) TIMER_Handler,  /* 111 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n      chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n      wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n      timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n      halted during debug by hardware or via a software control bit. */
        .pfnHTM0_Handler               = (void*) HTM0_Handler,   /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n        This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n        in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. */
        .pfnHTM1_Handler               = (void*) HTM1_Handler,   /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n        This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n        in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. */
        .pfnALARM_INT_Handler          = (void*) ALARM_INT_Handler, /* 114 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        .pfnWKSUB_Handler              = (void*) WKSUB_Handler,  /* 115 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        .pfnWKSEC_Handler              = (void*) WKSEC_Handler,  /* 116 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        .pfnWKSUBSEC_Handler           = (void*) WKSUBSEC_Handler, /* 117 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        .pfnSYSPWR_Handler             = (void*) SYSPWR_Handler, /* 118 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */
        .pfnRTC_ALARM_Handler          = (void*) RTC_ALARM_Handler, /* 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */
        .pfnOVRD_IN_Handler            = (void*) OVRD_IN_Handler, /* 121 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pfnIN0_Handler                = (void*) IN0_Handler,    /* 122 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pfnIN1_Handler                = (void*) IN1_Handler,    /* 123 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pfnIN2_Handler                = (void*) IN2_Handler,    /* 124 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pfnIN3_Handler                = (void*) IN3_Handler,    /* 125 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pfnIN4_Handler                = (void*) IN4_Handler,    /* 126 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pfnIN5_Handler                = (void*) IN5_Handler,    /* 127 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pfnIN6_Handler                = (void*) IN6_Handler,    /* 128 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pvReserved129                 = (void*) (0UL),          /* 129 Reserved */
        .pvReserved130                 = (void*) (0UL),          /* 130 Reserved */
        .pvReserved131                 = (void*) (0UL),          /* 131 Reserved */
        .pvReserved132                 = (void*) (0UL),          /* 132 Reserved */
        .pvReserved133                 = (void*) (0UL),          /* 133 Reserved */
        .pvReserved134                 = (void*) (0UL),          /* 134 Reserved */
        .pfnKMS_Handler                = (void*) KMS_Handler,    /* 135 The Keyboard Scan Interface block provides a register interface to the EC\n      to directly scan an external keyboard matrix of size up to 18x8. */
        .pfnTIMER16_0_Handler          = (void*) TIMER16_0_Handler, /* 136 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. */
        .pfnTIMER16_1_Handler          = (void*) TIMER16_1_Handler, /* 137 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. */
        .pfnTIMER16_2_Handler          = (void*) TIMER16_2_Handler, /* 138 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. */
        .pfnTIMER16_3_Handler          = (void*) TIMER16_3_Handler, /* 139 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. */
        .pfnTIMER32_0_Handler          = (void*) TIMER32_0_Handler, /* 140 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n      32 bits. The name of the timer instance indicates the size of the timer. */
        .pfnTIMER32_1_Handler          = (void*) TIMER32_1_Handler, /* 141 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n      32 bits. The name of the timer instance indicates the size of the timer. */
        .pfnCNT_TMR0_Handler           = (void*) CNT_TMR0_Handler, /* 142 This interface is a 16-bit auto-reloading timer/counter. */
        .pfnCNT_TMR1_Handler           = (void*) CNT_TMR1_Handler, /* 143 This interface is a 16-bit auto-reloading timer/counter. */
        .pfnCNT_TMR2_Handler           = (void*) CNT_TMR2_Handler, /* 144 This interface is a 16-bit auto-reloading timer/counter. */
        .pfnCNT_TMR3_Handler           = (void*) CNT_TMR3_Handler, /* 145 This interface is a 16-bit auto-reloading timer/counter. */
        .pfnCAPTURE_TIMER_Handler      = (void*) CAPTURE_TIMER_Handler, /* 146 This is a 16-bit auto-reloading timer/counter. */
        .pfnCAPTURE_0_Handler          = (void*) CAPTURE_0_Handler, /* 147 This is a 16-bit auto-reloading timer/counter. */
        .pfnCAPTURE_1_Handler          = (void*) CAPTURE_1_Handler, /* 148 This is a 16-bit auto-reloading timer/counter. */
        .pfnCAPTURE_2_Handler          = (void*) CAPTURE_2_Handler, /* 149 This is a 16-bit auto-reloading timer/counter. */
        .pfnCAPTURE_3_Handler          = (void*) CAPTURE_3_Handler, /* 150 This is a 16-bit auto-reloading timer/counter. */
        .pfnCAPTURE_4_Handler          = (void*) CAPTURE_4_Handler, /* 151 This is a 16-bit auto-reloading timer/counter. */
        .pfnCAPTURE_5_Handler          = (void*) CAPTURE_5_Handler, /* 152 This is a 16-bit auto-reloading timer/counter. */
        .pfnCOMPARE_0_Handler          = (void*) COMPARE_0_Handler, /* 153 This is a 16-bit auto-reloading timer/counter. */
        .pfnCOMPARE_1_Handler          = (void*) COMPARE_1_Handler  /* 154 This is a 16-bit auto-reloading timer/counter. */
};

/**------------------------------------------------------------------------------
 * This is the code that gets called on processor reset. To initialize the
 * device.
 *------------------------------------------------------------------------------*/
int __low_level_init(void)
{
        uint32_t *pSrc = __section_begin(".intvec");

        SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);

        return 1; /* if return 0, the data sections will not be initialized */
}

/**------------------------------------------------------------------------------
 * This is the code that gets called on processor reset. To initialize the
 * device.
 *------------------------------------------------------------------------------*/
void Reset_Handler(void)
{
        __iar_program_start();
}

/**
 * \brief Default interrupt handler for unused IRQs.
 */
void Dummy_Handler(void)
{
        while (1) {
        }
}
