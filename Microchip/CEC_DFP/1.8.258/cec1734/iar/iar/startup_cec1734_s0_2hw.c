/**
 * \file
 *
 * \brief IAR startup file for CEC1734_S0_2HW
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

#include "cec1734_s0_2hw.h"

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
#pragma weak GIRQ13_Handler=Dummy_Handler
#pragma weak GIRQ14_Handler=Dummy_Handler
#pragma weak GIRQ15_Handler=Dummy_Handler
#pragma weak GIRQ16_Handler=Dummy_Handler
#pragma weak GIRQ17_Handler=Dummy_Handler
#pragma weak GIRQ18_Handler=Dummy_Handler
#pragma weak GIRQ20_Handler=Dummy_Handler
#pragma weak GIRQ21_Handler=Dummy_Handler
#pragma weak GIRQ23_Handler=Dummy_Handler
#pragma weak GIRQ24_Handler=Dummy_Handler
#pragma weak GIRQ26_Handler=Dummy_Handler
#pragma weak I2CSMB0_Handler=Dummy_Handler
#pragma weak I2CSMB1_Handler=Dummy_Handler
#pragma weak I2CSMB2_Handler=Dummy_Handler
#pragma weak I2CSMB3_Handler=Dummy_Handler
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
#pragma weak UART0_Handler=Dummy_Handler
#pragma weak PKE_ERR_Handler=Dummy_Handler
#pragma weak PKE_END_Handler=Dummy_Handler
#pragma weak RNG_Handler=Dummy_Handler
#pragma weak AES_Handler=Dummy_Handler
#pragma weak HASH_Handler=Dummy_Handler
#pragma weak LED0_Handler=Dummy_Handler
#pragma weak LED1_Handler=Dummy_Handler
#pragma weak SPT0_Handler=Dummy_Handler
#pragma weak QMSPI0_Handler=Dummy_Handler
#pragma weak RTMR_Handler=Dummy_Handler
#pragma weak HTMR0_Handler=Dummy_Handler
#pragma weak HTMR1_Handler=Dummy_Handler
#pragma weak EMC_Handler=Dummy_Handler
#pragma weak TIMER32_0_Handler=Dummy_Handler
#pragma weak TIMER32_1_Handler=Dummy_Handler
#pragma weak CCT_Handler=Dummy_Handler
#pragma weak CCT_CAP0_Handler=Dummy_Handler
#pragma weak CCT_CAP1_Handler=Dummy_Handler
#pragma weak CCT_CAP2_Handler=Dummy_Handler
#pragma weak CCT_CAP3_Handler=Dummy_Handler
#pragma weak CCT_CAP4_Handler=Dummy_Handler
#pragma weak CCT_CAP5_Handler=Dummy_Handler
#pragma weak CCT_CMP0_Handler=Dummy_Handler
#pragma weak CCT_CMP1_Handler=Dummy_Handler
#pragma weak I2CSMB4_Handler=Dummy_Handler
#pragma weak WDT_Handler=Dummy_Handler
#pragma weak CLK_MON_Handler=Dummy_Handler
#pragma weak SWI0_Handler=Dummy_Handler
#pragma weak SWI1_Handler=Dummy_Handler
#pragma weak SWI2_Handler=Dummy_Handler
#pragma weak SWI3_Handler=Dummy_Handler
#pragma weak IMSPI_Handler=Dummy_Handler
#pragma weak SPT1_Handler=Dummy_Handler
#pragma weak SPIMON0_VLTN_Handler=Dummy_Handler
#pragma weak SPIMON0_MTMON_Handler=Dummy_Handler
#pragma weak SPIMON0_LTMON_Handler=Dummy_Handler
#pragma weak SPIMON1_VLTN_Handler=Dummy_Handler
#pragma weak SPIMON1_MTMON_Handler=Dummy_Handler
#pragma weak SPIMON1_LTMON_Handler=Dummy_Handler
#pragma weak VTR1_PAD_MON_Handler=Dummy_Handler
#pragma weak VTR2_PAD_MON_Handler=Dummy_Handler

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
        .pfnGIRQ08_Handler             = (void*) GIRQ08_Handler, /* 0  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ09_Handler             = (void*) GIRQ09_Handler, /* 1  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ10_Handler             = (void*) GIRQ10_Handler, /* 2  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ11_Handler             = (void*) GIRQ11_Handler, /* 3  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ12_Handler             = (void*) GIRQ12_Handler, /* 4  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ13_Handler             = (void*) GIRQ13_Handler, /* 5  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ14_Handler             = (void*) GIRQ14_Handler, /* 6  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ15_Handler             = (void*) GIRQ15_Handler, /* 7  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ16_Handler             = (void*) GIRQ16_Handler, /* 8  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ17_Handler             = (void*) GIRQ17_Handler, /* 9  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ18_Handler             = (void*) GIRQ18_Handler, /* 10 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pvReserved11                  = (void*) (0UL),          /* 11 Reserved */
        .pfnGIRQ20_Handler             = (void*) GIRQ20_Handler, /* 12 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ21_Handler             = (void*) GIRQ21_Handler, /* 13 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ23_Handler             = (void*) GIRQ23_Handler, /* 14 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pfnGIRQ24_Handler             = (void*) GIRQ24_Handler, /* 15 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pvReserved16                  = (void*) (0UL),          /* 16 Reserved */
        .pfnGIRQ26_Handler             = (void*) GIRQ26_Handler, /* 17 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
        .pvReserved18                  = (void*) (0UL),          /* 18 Reserved */
        .pvReserved19                  = (void*) (0UL),          /* 19 Reserved */
        .pfnI2CSMB0_Handler            = (void*) I2CSMB0_Handler, /* 20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnI2CSMB1_Handler            = (void*) I2CSMB1_Handler, /* 21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnI2CSMB2_Handler            = (void*) I2CSMB2_Handler, /* 22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnI2CSMB3_Handler            = (void*) I2CSMB3_Handler, /* 23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnDMA_CH00_Handler           = (void*) DMA_CH00_Handler, /* 24 DMA Channel 00 Registers */
        .pfnDMA_CH01_Handler           = (void*) DMA_CH01_Handler, /* 25 DMA Channel 01 Registers */
        .pfnDMA_CH02_Handler           = (void*) DMA_CH02_Handler, /* 26 DMA Channel 02 Registers */
        .pfnDMA_CH03_Handler           = (void*) DMA_CH03_Handler, /* 27 DMA Channel 02 Registers */
        .pfnDMA_CH04_Handler           = (void*) DMA_CH04_Handler, /* 28 DMA Channel 02 Registers */
        .pfnDMA_CH05_Handler           = (void*) DMA_CH05_Handler, /* 29 DMA Channel 02 Registers */
        .pfnDMA_CH06_Handler           = (void*) DMA_CH06_Handler, /* 30 DMA Channel 02 Registers */
        .pfnDMA_CH07_Handler           = (void*) DMA_CH07_Handler, /* 31 DMA Channel 02 Registers */
        .pfnDMA_CH08_Handler           = (void*) DMA_CH08_Handler, /* 32 DMA Channel 02 Registers */
        .pfnDMA_CH09_Handler           = (void*) DMA_CH09_Handler, /* 33 DMA Channel 02 Registers */
        .pvReserved34                  = (void*) (0UL),          /* 34 Reserved */
        .pvReserved35                  = (void*) (0UL),          /* 35 Reserved */
        .pvReserved36                  = (void*) (0UL),          /* 36 Reserved */
        .pvReserved37                  = (void*) (0UL),          /* 37 Reserved */
        .pvReserved38                  = (void*) (0UL),          /* 38 Reserved */
        .pvReserved39                  = (void*) (0UL),          /* 39 Reserved */
        .pfnUART0_Handler              = (void*) UART0_Handler,  /* 40 The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        .pvReserved41                  = (void*) (0UL),          /* 41 Reserved */
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
        .pfnPKE_ERR_Handler            = (void*) PKE_ERR_Handler, /* 65 Crypto block interrupt */
        .pfnPKE_END_Handler            = (void*) PKE_END_Handler, /* 66 Crypto block interrupt */
        .pfnRNG_Handler                = (void*) RNG_Handler,    /* 67 Crypto block interrupt */
        .pfnAES_Handler                = (void*) AES_Handler,    /* 68 Crypto block interrupt */
        .pfnHASH_Handler               = (void*) HASH_Handler,   /* 69 Crypto block interrupt */
        .pvReserved70                  = (void*) (0UL),          /* 70 Reserved */
        .pvReserved71                  = (void*) (0UL),          /* 71 Reserved */
        .pvReserved72                  = (void*) (0UL),          /* 72 Reserved */
        .pvReserved73                  = (void*) (0UL),          /* 73 Reserved */
        .pvReserved74                  = (void*) (0UL),          /* 74 Reserved */
        .pvReserved75                  = (void*) (0UL),          /* 75 Reserved */
        .pvReserved76                  = (void*) (0UL),          /* 76 Reserved */
        .pvReserved77                  = (void*) (0UL),          /* 77 Reserved */
        .pvReserved78                  = (void*) (0UL),          /* 78 Reserved */
        .pvReserved79                  = (void*) (0UL),          /* 79 Reserved */
        .pvReserved80                  = (void*) (0UL),          /* 80 Reserved */
        .pvReserved81                  = (void*) (0UL),          /* 81 Reserved */
        .pvReserved82                  = (void*) (0UL),          /* 82 Reserved */
        .pfnLED0_Handler               = (void*) LED0_Handler,   /* 83 The LED is implemented using a PWM that can be driven either by the 48 MHz clock or by a 32.768 KHz clock input. */
        .pfnLED1_Handler               = (void*) LED1_Handler,   /* 84 The LED is implemented using a PWM that can be driven either by the 48 MHz clock or by a 32.768 KHz clock input. */
        .pvReserved85                  = (void*) (0UL),          /* 85 Reserved */
        .pvReserved86                  = (void*) (0UL),          /* 86 Reserved */
        .pvReserved87                  = (void*) (0UL),          /* 87 Reserved */
        .pvReserved88                  = (void*) (0UL),          /* 88 Reserved */
        .pvReserved89                  = (void*) (0UL),          /* 89 Reserved */
        .pfnSPT0_Handler               = (void*) SPT0_Handler,   /* 90 SPI Peripheral Target Register. */
        .pfnQMSPI0_Handler             = (void*) QMSPI0_Handler, /* 91 The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface. */
        .pvReserved92                  = (void*) (0UL),          /* 92 Reserved */
        .pvReserved93                  = (void*) (0UL),          /* 93 Reserved */
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
        .pfnRTMR_Handler               = (void*) RTMR_Handler,   /* 111 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. */
        .pfnHTMR0_Handler              = (void*) HTMR0_Handler,  /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode. */
        .pfnHTMR1_Handler              = (void*) HTMR1_Handler,  /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode. */
        .pvReserved114                 = (void*) (0UL),          /* 114 Reserved */
        .pvReserved115                 = (void*) (0UL),          /* 115 Reserved */
        .pvReserved116                 = (void*) (0UL),          /* 116 Reserved */
        .pvReserved117                 = (void*) (0UL),          /* 117 Reserved */
        .pvReserved118                 = (void*) (0UL),          /* 118 Reserved */
        .pvReserved119                 = (void*) (0UL),          /* 119 Reserved */
        .pvReserved120                 = (void*) (0UL),          /* 120 Reserved */
        .pvReserved121                 = (void*) (0UL),          /* 121 Reserved */
        .pvReserved122                 = (void*) (0UL),          /* 122 Reserved */
        .pvReserved123                 = (void*) (0UL),          /* 123 Reserved */
        .pvReserved124                 = (void*) (0UL),          /* 124 Reserved */
        .pvReserved125                 = (void*) (0UL),          /* 125 Reserved */
        .pvReserved126                 = (void*) (0UL),          /* 126 Reserved */
        .pvReserved127                 = (void*) (0UL),          /* 127 Reserved */
        .pvReserved128                 = (void*) (0UL),          /* 128 Reserved */
        .pvReserved129                 = (void*) (0UL),          /* 129 Reserved */
        .pvReserved130                 = (void*) (0UL),          /* 130 Reserved */
        .pvReserved131                 = (void*) (0UL),          /* 131 Reserved */
        .pvReserved132                 = (void*) (0UL),          /* 132 Reserved */
        .pvReserved133                 = (void*) (0UL),          /* 133 Reserved */
        .pfnEMC_Handler                = (void*) EMC_Handler,    /* 134 Environmental Monitor Block */
        .pvReserved135                 = (void*) (0UL),          /* 135 Reserved */
        .pvReserved136                 = (void*) (0UL),          /* 136 Reserved */
        .pvReserved137                 = (void*) (0UL),          /* 137 Reserved */
        .pvReserved138                 = (void*) (0UL),          /* 138 Reserved */
        .pvReserved139                 = (void*) (0UL),          /* 139 Reserved */
        .pfnTIMER32_0_Handler          = (void*) TIMER32_0_Handler, /* 140 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base. */
        .pfnTIMER32_1_Handler          = (void*) TIMER32_1_Handler, /* 141 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base. */
        .pvReserved142                 = (void*) (0UL),          /* 142 Reserved */
        .pvReserved143                 = (void*) (0UL),          /* 143 Reserved */
        .pvReserved144                 = (void*) (0UL),          /* 144 Reserved */
        .pvReserved145                 = (void*) (0UL),          /* 145 Reserved */
        .pfnCCT_Handler                = (void*) CCT_Handler,    /* 146 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CAP0_Handler           = (void*) CCT_CAP0_Handler, /* 147 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CAP1_Handler           = (void*) CCT_CAP1_Handler, /* 148 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CAP2_Handler           = (void*) CCT_CAP2_Handler, /* 149 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CAP3_Handler           = (void*) CCT_CAP3_Handler, /* 150 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CAP4_Handler           = (void*) CCT_CAP4_Handler, /* 151 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CAP5_Handler           = (void*) CCT_CAP5_Handler, /* 152 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CMP0_Handler           = (void*) CCT_CMP0_Handler, /* 153 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CMP1_Handler           = (void*) CCT_CMP1_Handler, /* 154 This is a 16-bit auto-reloading timer/counter. */
        .pvReserved155                 = (void*) (0UL),          /* 155 Reserved */
        .pvReserved156                 = (void*) (0UL),          /* 156 Reserved */
        .pvReserved157                 = (void*) (0UL),          /* 157 Reserved */
        .pfnI2CSMB4_Handler            = (void*) I2CSMB4_Handler, /* 158 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pvReserved159                 = (void*) (0UL),          /* 159 Reserved */
        .pvReserved160                 = (void*) (0UL),          /* 160 Reserved */
        .pvReserved161                 = (void*) (0UL),          /* 161 Reserved */
        .pvReserved162                 = (void*) (0UL),          /* 162 Reserved */
        .pvReserved163                 = (void*) (0UL),          /* 163 Reserved */
        .pvReserved164                 = (void*) (0UL),          /* 164 Reserved */
        .pvReserved165                 = (void*) (0UL),          /* 165 Reserved */
        .pvReserved166                 = (void*) (0UL),          /* 166 Reserved */
        .pvReserved167                 = (void*) (0UL),          /* 167 Reserved */
        .pvReserved168                 = (void*) (0UL),          /* 168 Reserved */
        .pvReserved169                 = (void*) (0UL),          /* 169 Reserved */
        .pvReserved170                 = (void*) (0UL),          /* 170 Reserved */
        .pfnWDT_Handler                = (void*) WDT_Handler,    /* 171 The function of the Watchdog Timer is to provide a mechanism to detect if the internal embedded controller has failed. */
        .pvReserved172                 = (void*) (0UL),          /* 172 Reserved */
        .pvReserved173                 = (void*) (0UL),          /* 173 Reserved */
        .pfnCLK_MON_Handler            = (void*) CLK_MON_Handler, /* 174 The Power, Clocks, and Resets (PCR) Section identifies clock sources, and reset inputs to the chip. */
        .pvReserved175                 = (void*) (0UL),          /* 175 Reserved */
        .pvReserved176                 = (void*) (0UL),          /* 176 Reserved */
        .pvReserved177                 = (void*) (0UL),          /* 177 Reserved */
        .pvReserved178                 = (void*) (0UL),          /* 178 Reserved */
        .pvReserved179                 = (void*) (0UL),          /* 179 Reserved */
        .pvReserved180                 = (void*) (0UL),          /* 180 Reserved */
        .pfnSWI0_Handler               = (void*) SWI0_Handler,   /* 181 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. */
        .pfnSWI1_Handler               = (void*) SWI1_Handler,   /* 182 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. */
        .pfnSWI2_Handler               = (void*) SWI2_Handler,   /* 183 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. */
        .pfnSWI3_Handler               = (void*) SWI3_Handler,   /* 184 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. */
        .pfnIMSPI_Handler              = (void*) IMSPI_Handler,  /* 185 Internal Master SPI. */
        .pvReserved186                 = (void*) (0UL),          /* 186 Reserved */
        .pfnSPT1_Handler               = (void*) SPT1_Handler,   /* 187 SPI Peripheral Target Register. */
        .pfnSPIMON0_VLTN_Handler       = (void*) SPIMON0_VLTN_Handler, /* 188 SPI Monitor Block */
        .pfnSPIMON0_MTMON_Handler      = (void*) SPIMON0_MTMON_Handler, /* 189 SPI Monitor Block */
        .pfnSPIMON0_LTMON_Handler      = (void*) SPIMON0_LTMON_Handler, /* 190 SPI Monitor Block */
        .pfnSPIMON1_VLTN_Handler       = (void*) SPIMON1_VLTN_Handler, /* 191 SPI Monitor Block */
        .pfnSPIMON1_MTMON_Handler      = (void*) SPIMON1_MTMON_Handler, /* 192 SPI Monitor Block */
        .pfnSPIMON1_LTMON_Handler      = (void*) SPIMON1_LTMON_Handler, /* 193 SPI Monitor Block */
        .pfnVTR1_PAD_MON_Handler       = (void*) VTR1_PAD_MON_Handler, /* 194 This block is designed to be accessed internally by the EC via the register interface. */
        .pfnVTR2_PAD_MON_Handler       = (void*) VTR2_PAD_MON_Handler  /* 195 This block is designed to be accessed internally by the EC via the register interface. */
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
