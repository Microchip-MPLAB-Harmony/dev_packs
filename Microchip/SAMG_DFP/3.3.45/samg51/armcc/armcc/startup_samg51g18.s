;/*****************************************************************************
; * \file     startup_samg51g18.s
; * \brief    ARMCC startup file for ATSAMG51G18
; *
; * \note
; * Copyright (C) 2020 Microchip Technology Inc.
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
                DCD     MemoryManagement_Handler  ; MemoryManagement Handler
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
                DCD     SUPC_Handler              ; 0  Supply Controller Handler
                DCD     RSTC_Handler              ; 1  Reset Controller Handler
                DCD     RTC_Handler               ; 2  Real-time Clock Handler
                DCD     RTT_Handler               ; 3  Real-time Timer Handler
                DCD     WDT_Handler               ; 4  Watchdog Timer Handler
                DCD     PMC_Handler               ; 5  Power Management Controller Handler
                DCD     EFC_Handler               ; 6  Embedded Flash Controller Handler
                DCD     0                         ; 7  Reserved
                DCD     UART0_Handler             ; 8  Universal Asynchronous Receiver Transmitter Handler
                DCD     UART1_Handler             ; 9  Universal Asynchronous Receiver Transmitter Handler
                DCD     0                         ; 10 Reserved
                DCD     PIOA_Handler              ; 11 Parallel Input/Output Controller Handler
                DCD     PIOB_Handler              ; 12 Parallel Input/Output Controller Handler
                DCD     0                         ; 13 Reserved
                DCD     USART_Handler             ; 14 Universal Synchronous Asynchronous Receiver Transmitter Handler
                DCD     MEM2MEM_Handler           ; 15 Memory to Memory Handler
                DCD     0                         ; 16 Reserved
                DCD     0                         ; 17 Reserved
                DCD     0                         ; 18 Reserved
                DCD     TWI0_Handler              ; 19 Two-wire Interface High Speed Handler
                DCD     TWI1_Handler              ; 20 Two-wire Interface Handler
                DCD     SPI_Handler               ; 21 Serial Peripheral Interface Handler
                DCD     TWI2_Handler              ; 22 Two-wire Interface Handler
                DCD     TC0_CH0_Handler           ; 23 Timer/Counter 0 Channel 0 Handler
                DCD     TC0_CH1_Handler           ; 24 Timer/Counter 0 Channel 1 Handler
                DCD     TC0_CH2_Handler           ; 25 Timer/Counter 0 Channel 2 Handler
                DCD     0                         ; 26 Reserved
                DCD     0                         ; 27 Reserved
                DCD     0                         ; 28 Reserved
                DCD     ADC_Handler               ; 29 Analog-to-Digital Converter Handler
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
MemoryManagement_Handler  PROC
                          EXPORT MemoryManagement_Handler  [WEAK] 
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
                EXPORT  SUPC_Handler              [WEAK]
                EXPORT  RSTC_Handler              [WEAK]
                EXPORT  RTC_Handler               [WEAK]
                EXPORT  RTT_Handler               [WEAK]
                EXPORT  WDT_Handler               [WEAK]
                EXPORT  PMC_Handler               [WEAK]
                EXPORT  EFC_Handler               [WEAK]
                EXPORT  UART0_Handler             [WEAK]
                EXPORT  UART1_Handler             [WEAK]
                EXPORT  PIOA_Handler              [WEAK]
                EXPORT  PIOB_Handler              [WEAK]
                EXPORT  USART_Handler             [WEAK]
                EXPORT  MEM2MEM_Handler           [WEAK]
                EXPORT  TWI0_Handler              [WEAK]
                EXPORT  TWI1_Handler              [WEAK]
                EXPORT  SPI_Handler               [WEAK]
                EXPORT  TWI2_Handler              [WEAK]
                EXPORT  TC0_CH0_Handler           [WEAK]
                EXPORT  TC0_CH1_Handler           [WEAK]
                EXPORT  TC0_CH2_Handler           [WEAK]
                EXPORT  ADC_Handler               [WEAK]


SUPC_Handler             
RSTC_Handler             
RTC_Handler              
RTT_Handler              
WDT_Handler              
PMC_Handler              
EFC_Handler              
UART0_Handler            
UART1_Handler            
PIOA_Handler             
PIOB_Handler             
USART_Handler            
MEM2MEM_Handler          
TWI0_Handler             
TWI1_Handler             
SPI_Handler              
TWI2_Handler             
TC0_CH0_Handler          
TC0_CH1_Handler          
TC0_CH2_Handler          
ADC_Handler              
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

