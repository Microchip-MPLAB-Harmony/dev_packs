;/*****************************************************************************
; * \file     startup_cec1734_s0_2zw.s
; * \brief    ARMCC startup file for CEC1734_S0_2ZW
; *
; * \note
; * Copyright (C) 2022 Microchip Technology Inc.
; *
; * \par
; * SPDX-License-Identifier: Apache-2.0
; *
; * Licensed under the Apache License, Version 2.0 (the "License");
; * you may not use this file except in compliance with the License.
; * You may obtain a copy of the License at
; *
; *   http://www.apache.org/licenses/LICENSE-2.0
; *
; * Unless required by applicable law or agreed to in writing, software
; * distributed under the License is distributed on an "AS IS" BASIS,
; * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
; * See the License for the specific language governing permissions and
; * limitations under the License.
; *
; ******************************************************************************/


; <h> Stack Configuration
;   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Stack_Size      EQU     0x00000200

                AREA    STACK, NOINIT, READWRITE, ALIGN=3
Stack_Mem       SPACE   Stack_Size
__initial_sp


; <h> Heap Configuration
;   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Heap_Size       EQU     0x00000000

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit


                PRESERVE8
                THUMB


; Vector Table Mapped to Address 0 at Reset

                AREA    RESET, DATA, READONLY
                EXPORT  __Vectors
                EXPORT  __Vectors_End
                EXPORT  __Vectors_Size

__Vectors       DCD     __initial_sp              ; Top of Stack
                DCD     Reset_Handler             ; Reset Handler
                DCD     NonMaskableInt_Handler    ; NonMaskableInt Handler
                DCD     HardFault_Handler         ; HardFault Handler
                DCD     MemMgnt_Handler           ; MemMgnt Handler
                DCD     BusFault_Handler          ; BusFault Handler
                DCD     UsageFault_Handler        ; UsageFault Handler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SVC_Handler               ; SVC Handler
                DCD     DebugMonitor_Handler      ; DebugMonitor Handler
                DCD     0                         ; Reserved
                DCD     PendSV_Handler            ; PendSV Handler
                DCD     SysTick_Handler           ; SysTick Handler

                ; External Interrupts
                DCD     GIRQ08_Handler            ; 0  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ09_Handler            ; 1  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ10_Handler            ; 2  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ11_Handler            ; 3  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ12_Handler            ; 4  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ13_Handler            ; 5  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ14_Handler            ; 6  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ15_Handler            ; 7  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ16_Handler            ; 8  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ17_Handler            ; 9  The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ18_Handler            ; 10 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     0                         ; 11 Reserved
                DCD     GIRQ20_Handler            ; 12 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ21_Handler            ; 13 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ23_Handler            ; 14 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     GIRQ24_Handler            ; 15 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     0                         ; 16 Reserved
                DCD     GIRQ26_Handler            ; 17 The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. Handler
                DCD     0                         ; 18 Reserved
                DCD     0                         ; 19 Reserved
                DCD     I2CSMB0_Handler           ; 20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. Handler
                DCD     I2CSMB1_Handler           ; 21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. Handler
                DCD     I2CSMB2_Handler           ; 22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. Handler
                DCD     I2CSMB3_Handler           ; 23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. Handler
                DCD     DMA_CH00_Handler          ; 24 DMA Channel 00 Registers Handler
                DCD     DMA_CH01_Handler          ; 25 DMA Channel 01 Registers Handler
                DCD     DMA_CH02_Handler          ; 26 DMA Channel 02 Registers Handler
                DCD     DMA_CH03_Handler          ; 27 DMA Channel 02 Registers Handler
                DCD     DMA_CH04_Handler          ; 28 DMA Channel 02 Registers Handler
                DCD     DMA_CH05_Handler          ; 29 DMA Channel 02 Registers Handler
                DCD     DMA_CH06_Handler          ; 30 DMA Channel 02 Registers Handler
                DCD     DMA_CH07_Handler          ; 31 DMA Channel 02 Registers Handler
                DCD     DMA_CH08_Handler          ; 32 DMA Channel 02 Registers Handler
                DCD     DMA_CH09_Handler          ; 33 DMA Channel 02 Registers Handler
                DCD     0                         ; 34 Reserved
                DCD     0                         ; 35 Reserved
                DCD     0                         ; 36 Reserved
                DCD     0                         ; 37 Reserved
                DCD     0                         ; 38 Reserved
                DCD     0                         ; 39 Reserved
                DCD     UART0_Handler             ; 40 The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. Handler
                DCD     0                         ; 41 Reserved
                DCD     0                         ; 42 Reserved
                DCD     0                         ; 43 Reserved
                DCD     0                         ; 44 Reserved
                DCD     0                         ; 45 Reserved
                DCD     0                         ; 46 Reserved
                DCD     0                         ; 47 Reserved
                DCD     0                         ; 48 Reserved
                DCD     0                         ; 49 Reserved
                DCD     0                         ; 50 Reserved
                DCD     0                         ; 51 Reserved
                DCD     0                         ; 52 Reserved
                DCD     0                         ; 53 Reserved
                DCD     0                         ; 54 Reserved
                DCD     0                         ; 55 Reserved
                DCD     0                         ; 56 Reserved
                DCD     0                         ; 57 Reserved
                DCD     0                         ; 58 Reserved
                DCD     0                         ; 59 Reserved
                DCD     0                         ; 60 Reserved
                DCD     0                         ; 61 Reserved
                DCD     0                         ; 62 Reserved
                DCD     0                         ; 63 Reserved
                DCD     0                         ; 64 Reserved
                DCD     PKE_ERR_Handler           ; 65 Crypto block interrupt Handler
                DCD     PKE_END_Handler           ; 66 Crypto block interrupt Handler
                DCD     RNG_Handler               ; 67 Crypto block interrupt Handler
                DCD     AES_Handler               ; 68 Crypto block interrupt Handler
                DCD     HASH_Handler              ; 69 Crypto block interrupt Handler
                DCD     0                         ; 70 Reserved
                DCD     0                         ; 71 Reserved
                DCD     0                         ; 72 Reserved
                DCD     0                         ; 73 Reserved
                DCD     0                         ; 74 Reserved
                DCD     0                         ; 75 Reserved
                DCD     0                         ; 76 Reserved
                DCD     0                         ; 77 Reserved
                DCD     0                         ; 78 Reserved
                DCD     0                         ; 79 Reserved
                DCD     0                         ; 80 Reserved
                DCD     0                         ; 81 Reserved
                DCD     0                         ; 82 Reserved
                DCD     LED0_Handler              ; 83 The LED is implemented using a PWM that can be driven either by the 48 MHz clock or by a 32.768 KHz clock input. Handler
                DCD     LED1_Handler              ; 84 The LED is implemented using a PWM that can be driven either by the 48 MHz clock or by a 32.768 KHz clock input. Handler
                DCD     0                         ; 85 Reserved
                DCD     0                         ; 86 Reserved
                DCD     0                         ; 87 Reserved
                DCD     0                         ; 88 Reserved
                DCD     0                         ; 89 Reserved
                DCD     SPT0_Handler              ; 90 SPI Peripheral Target Register. Handler
                DCD     QMSPI0_Handler            ; 91 The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface. Handler
                DCD     QMSPI1_Handler            ; 92 The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface. Handler
                DCD     0                         ; 93 Reserved
                DCD     0                         ; 94 Reserved
                DCD     0                         ; 95 Reserved
                DCD     0                         ; 96 Reserved
                DCD     0                         ; 97 Reserved
                DCD     0                         ; 98 Reserved
                DCD     0                         ; 99 Reserved
                DCD     0                         ; 100 Reserved
                DCD     0                         ; 101 Reserved
                DCD     0                         ; 102 Reserved
                DCD     0                         ; 103 Reserved
                DCD     0                         ; 104 Reserved
                DCD     0                         ; 105 Reserved
                DCD     0                         ; 106 Reserved
                DCD     0                         ; 107 Reserved
                DCD     0                         ; 108 Reserved
                DCD     0                         ; 109 Reserved
                DCD     0                         ; 110 Reserved
                DCD     RTMR_Handler              ; 111 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. Handler
                DCD     HTMR0_Handler             ; 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode. Handler
                DCD     HTMR1_Handler             ; 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode. Handler
                DCD     0                         ; 114 Reserved
                DCD     0                         ; 115 Reserved
                DCD     0                         ; 116 Reserved
                DCD     0                         ; 117 Reserved
                DCD     0                         ; 118 Reserved
                DCD     0                         ; 119 Reserved
                DCD     0                         ; 120 Reserved
                DCD     0                         ; 121 Reserved
                DCD     0                         ; 122 Reserved
                DCD     0                         ; 123 Reserved
                DCD     0                         ; 124 Reserved
                DCD     0                         ; 125 Reserved
                DCD     0                         ; 126 Reserved
                DCD     0                         ; 127 Reserved
                DCD     0                         ; 128 Reserved
                DCD     0                         ; 129 Reserved
                DCD     0                         ; 130 Reserved
                DCD     0                         ; 131 Reserved
                DCD     0                         ; 132 Reserved
                DCD     0                         ; 133 Reserved
                DCD     EMC_Handler               ; 134 Environmental Monitor Block Handler
                DCD     0                         ; 135 Reserved
                DCD     0                         ; 136 Reserved
                DCD     0                         ; 137 Reserved
                DCD     0                         ; 138 Reserved
                DCD     0                         ; 139 Reserved
                DCD     TIMER32_0_Handler         ; 140 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base. Handler
                DCD     TIMER32_1_Handler         ; 141 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base. Handler
                DCD     0                         ; 142 Reserved
                DCD     0                         ; 143 Reserved
                DCD     0                         ; 144 Reserved
                DCD     0                         ; 145 Reserved
                DCD     CCT_Handler               ; 146 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CCT_CAP0_Handler          ; 147 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CCT_CAP1_Handler          ; 148 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CCT_CAP2_Handler          ; 149 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CCT_CAP3_Handler          ; 150 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CCT_CAP4_Handler          ; 151 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CCT_CAP5_Handler          ; 152 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CCT_CMP0_Handler          ; 153 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CCT_CMP1_Handler          ; 154 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     0                         ; 155 Reserved
                DCD     0                         ; 156 Reserved
                DCD     0                         ; 157 Reserved
                DCD     I2CSMB4_Handler           ; 158 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. Handler
                DCD     0                         ; 159 Reserved
                DCD     0                         ; 160 Reserved
                DCD     0                         ; 161 Reserved
                DCD     0                         ; 162 Reserved
                DCD     0                         ; 163 Reserved
                DCD     0                         ; 164 Reserved
                DCD     0                         ; 165 Reserved
                DCD     0                         ; 166 Reserved
                DCD     0                         ; 167 Reserved
                DCD     0                         ; 168 Reserved
                DCD     0                         ; 169 Reserved
                DCD     0                         ; 170 Reserved
                DCD     WDT_Handler               ; 171 The function of the Watchdog Timer is to provide a mechanism to detect if the internal embedded controller has failed. Handler
                DCD     0                         ; 172 Reserved
                DCD     0                         ; 173 Reserved
                DCD     CLK_MON_Handler           ; 174 The Power, Clocks, and Resets (PCR) Section identifies clock sources, and reset inputs to the chip. Handler
                DCD     0                         ; 175 Reserved
                DCD     0                         ; 176 Reserved
                DCD     0                         ; 177 Reserved
                DCD     0                         ; 178 Reserved
                DCD     0                         ; 179 Reserved
                DCD     0                         ; 180 Reserved
                DCD     SWI0_Handler              ; 181 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. Handler
                DCD     SWI1_Handler              ; 182 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. Handler
                DCD     SWI2_Handler              ; 183 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. Handler
                DCD     SWI3_Handler              ; 184 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. Handler
                DCD     IMSPI_Handler             ; 185 Internal Master SPI. Handler
                DCD     0                         ; 186 Reserved
                DCD     SPT1_Handler              ; 187 SPI Peripheral Target Register. Handler
                DCD     SPIMON0_VLTN_Handler      ; 188 SPI Monitor Block Handler
                DCD     SPIMON0_MTMON_Handler     ; 189 SPI Monitor Block Handler
                DCD     SPIMON0_LTMON_Handler     ; 190 SPI Monitor Block Handler
                DCD     SPIMON1_VLTN_Handler      ; 191 SPI Monitor Block Handler
                DCD     SPIMON1_MTMON_Handler     ; 192 SPI Monitor Block Handler
                DCD     SPIMON1_LTMON_Handler     ; 193 SPI Monitor Block Handler
                DCD     VTR1_PAD_MON_Handler      ; 194 This block is designed to be accessed internally by the EC via the register interface. Handler
                DCD     VTR2_PAD_MON_Handler      ; 195 This block is designed to be accessed internally by the EC via the register interface. Handler
__Vectors_End

__Vectors_Size  EQU     __Vectors_End - __Vectors

                AREA    |.text|, CODE, READONLY


; Reset Handler

Reset_Handler   PROC
                EXPORT  Reset_Handler             [WEAK]
                IMPORT  SystemInit
                IMPORT  __main
                LDR     R0, =SystemInit
                BLX     R0
                LDR     R0, =__main
                BX      R0
                ENDP


; Dummy Exception Handlers (infinite loops which can be modified)

NonMaskableInt_Handler    PROC
                          EXPORT NonMaskableInt_Handler    [WEAK] 
                          B       .
                          ENDP
HardFault_Handler         PROC
                          EXPORT HardFault_Handler         [WEAK] 
                          B       .
                          ENDP
MemMgnt_Handler           PROC
                          EXPORT MemMgnt_Handler           [WEAK] 
                          B       .
                          ENDP
BusFault_Handler          PROC
                          EXPORT BusFault_Handler          [WEAK] 
                          B       .
                          ENDP
UsageFault_Handler        PROC
                          EXPORT UsageFault_Handler        [WEAK] 
                          B       .
                          ENDP
SVC_Handler               PROC
                          EXPORT SVC_Handler               [WEAK] 
                          B       .
                          ENDP
DebugMonitor_Handler      PROC
                          EXPORT DebugMonitor_Handler      [WEAK] 
                          B       .
                          ENDP
PendSV_Handler            PROC
                          EXPORT PendSV_Handler            [WEAK] 
                          B       .
                          ENDP
SysTick_Handler           PROC
                          EXPORT SysTick_Handler           [WEAK] 
                          B       .
                          ENDP

Default_Handler PROC
                EXPORT  GIRQ08_Handler            [WEAK]
                EXPORT  GIRQ09_Handler            [WEAK]
                EXPORT  GIRQ10_Handler            [WEAK]
                EXPORT  GIRQ11_Handler            [WEAK]
                EXPORT  GIRQ12_Handler            [WEAK]
                EXPORT  GIRQ13_Handler            [WEAK]
                EXPORT  GIRQ14_Handler            [WEAK]
                EXPORT  GIRQ15_Handler            [WEAK]
                EXPORT  GIRQ16_Handler            [WEAK]
                EXPORT  GIRQ17_Handler            [WEAK]
                EXPORT  GIRQ18_Handler            [WEAK]
                EXPORT  GIRQ20_Handler            [WEAK]
                EXPORT  GIRQ21_Handler            [WEAK]
                EXPORT  GIRQ23_Handler            [WEAK]
                EXPORT  GIRQ24_Handler            [WEAK]
                EXPORT  GIRQ26_Handler            [WEAK]
                EXPORT  I2CSMB0_Handler           [WEAK]
                EXPORT  I2CSMB1_Handler           [WEAK]
                EXPORT  I2CSMB2_Handler           [WEAK]
                EXPORT  I2CSMB3_Handler           [WEAK]
                EXPORT  DMA_CH00_Handler          [WEAK]
                EXPORT  DMA_CH01_Handler          [WEAK]
                EXPORT  DMA_CH02_Handler          [WEAK]
                EXPORT  DMA_CH03_Handler          [WEAK]
                EXPORT  DMA_CH04_Handler          [WEAK]
                EXPORT  DMA_CH05_Handler          [WEAK]
                EXPORT  DMA_CH06_Handler          [WEAK]
                EXPORT  DMA_CH07_Handler          [WEAK]
                EXPORT  DMA_CH08_Handler          [WEAK]
                EXPORT  DMA_CH09_Handler          [WEAK]
                EXPORT  UART0_Handler             [WEAK]
                EXPORT  PKE_ERR_Handler           [WEAK]
                EXPORT  PKE_END_Handler           [WEAK]
                EXPORT  RNG_Handler               [WEAK]
                EXPORT  AES_Handler               [WEAK]
                EXPORT  HASH_Handler              [WEAK]
                EXPORT  LED0_Handler              [WEAK]
                EXPORT  LED1_Handler              [WEAK]
                EXPORT  SPT0_Handler              [WEAK]
                EXPORT  QMSPI0_Handler            [WEAK]
                EXPORT  QMSPI1_Handler            [WEAK]
                EXPORT  RTMR_Handler              [WEAK]
                EXPORT  HTMR0_Handler             [WEAK]
                EXPORT  HTMR1_Handler             [WEAK]
                EXPORT  EMC_Handler               [WEAK]
                EXPORT  TIMER32_0_Handler         [WEAK]
                EXPORT  TIMER32_1_Handler         [WEAK]
                EXPORT  CCT_Handler               [WEAK]
                EXPORT  CCT_CAP0_Handler          [WEAK]
                EXPORT  CCT_CAP1_Handler          [WEAK]
                EXPORT  CCT_CAP2_Handler          [WEAK]
                EXPORT  CCT_CAP3_Handler          [WEAK]
                EXPORT  CCT_CAP4_Handler          [WEAK]
                EXPORT  CCT_CAP5_Handler          [WEAK]
                EXPORT  CCT_CMP0_Handler          [WEAK]
                EXPORT  CCT_CMP1_Handler          [WEAK]
                EXPORT  I2CSMB4_Handler           [WEAK]
                EXPORT  WDT_Handler               [WEAK]
                EXPORT  CLK_MON_Handler           [WEAK]
                EXPORT  SWI0_Handler              [WEAK]
                EXPORT  SWI1_Handler              [WEAK]
                EXPORT  SWI2_Handler              [WEAK]
                EXPORT  SWI3_Handler              [WEAK]
                EXPORT  IMSPI_Handler             [WEAK]
                EXPORT  SPT1_Handler              [WEAK]
                EXPORT  SPIMON0_VLTN_Handler      [WEAK]
                EXPORT  SPIMON0_MTMON_Handler     [WEAK]
                EXPORT  SPIMON0_LTMON_Handler     [WEAK]
                EXPORT  SPIMON1_VLTN_Handler      [WEAK]
                EXPORT  SPIMON1_MTMON_Handler     [WEAK]
                EXPORT  SPIMON1_LTMON_Handler     [WEAK]
                EXPORT  VTR1_PAD_MON_Handler      [WEAK]
                EXPORT  VTR2_PAD_MON_Handler      [WEAK]


GIRQ08_Handler           
GIRQ09_Handler           
GIRQ10_Handler           
GIRQ11_Handler           
GIRQ12_Handler           
GIRQ13_Handler           
GIRQ14_Handler           
GIRQ15_Handler           
GIRQ16_Handler           
GIRQ17_Handler           
GIRQ18_Handler           
GIRQ20_Handler           
GIRQ21_Handler           
GIRQ23_Handler           
GIRQ24_Handler           
GIRQ26_Handler           
I2CSMB0_Handler          
I2CSMB1_Handler          
I2CSMB2_Handler          
I2CSMB3_Handler          
DMA_CH00_Handler         
DMA_CH01_Handler         
DMA_CH02_Handler         
DMA_CH03_Handler         
DMA_CH04_Handler         
DMA_CH05_Handler         
DMA_CH06_Handler         
DMA_CH07_Handler         
DMA_CH08_Handler         
DMA_CH09_Handler         
UART0_Handler            
PKE_ERR_Handler          
PKE_END_Handler          
RNG_Handler              
AES_Handler              
HASH_Handler             
LED0_Handler             
LED1_Handler             
SPT0_Handler             
QMSPI0_Handler           
QMSPI1_Handler           
RTMR_Handler             
HTMR0_Handler            
HTMR1_Handler            
EMC_Handler              
TIMER32_0_Handler        
TIMER32_1_Handler        
CCT_Handler              
CCT_CAP0_Handler         
CCT_CAP1_Handler         
CCT_CAP2_Handler         
CCT_CAP3_Handler         
CCT_CAP4_Handler         
CCT_CAP5_Handler         
CCT_CMP0_Handler         
CCT_CMP1_Handler         
I2CSMB4_Handler          
WDT_Handler              
CLK_MON_Handler          
SWI0_Handler             
SWI1_Handler             
SWI2_Handler             
SWI3_Handler             
IMSPI_Handler            
SPT1_Handler             
SPIMON0_VLTN_Handler     
SPIMON0_MTMON_Handler    
SPIMON0_LTMON_Handler    
SPIMON1_VLTN_Handler     
SPIMON1_MTMON_Handler    
SPIMON1_LTMON_Handler    
VTR1_PAD_MON_Handler     
VTR2_PAD_MON_Handler     
                B       .
                ENDP


                ALIGN


; User Initial Stack & Heap

                IF      :DEF:__MICROLIB

                EXPORT  __initial_sp
                EXPORT  __heap_base
                EXPORT  __heap_limit

                ELSE

                IMPORT  __use_two_region_memory
                EXPORT  __user_initial_stackheap
__user_initial_stackheap

                LDR     R0, =  Heap_Mem
                LDR     R1, =(Stack_Mem + Stack_Size)
                LDR     R2, = (Heap_Mem +  Heap_Size)
                LDR     R3, = Stack_Mem
                BX      LR

                ALIGN

                ENDIF


                END

