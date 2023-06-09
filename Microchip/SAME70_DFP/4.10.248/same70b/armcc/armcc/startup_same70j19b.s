;/*****************************************************************************
; * \file     startup_same70j19b.s
; * \brief    ARMCC startup file for ATSAME70J19B
; *
; * \note
; * Copyright (C) 2023 Microchip Technology Inc.
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
                DCD     UART0_Handler             ; 7  Universal Asynchronous Receiver Transmitter Handler
                DCD     UART1_Handler             ; 8  Universal Asynchronous Receiver Transmitter Handler
                DCD     0                         ; 9  Reserved
                DCD     PIOA_Handler              ; 10 Parallel Input/Output Controller Handler
                DCD     PIOB_Handler              ; 11 Parallel Input/Output Controller Handler
                DCD     0                         ; 12 Reserved
                DCD     USART0_Handler            ; 13 Universal Synchronous Asynchronous Receiver Transmitter Handler
                DCD     USART1_Handler            ; 14 Universal Synchronous Asynchronous Receiver Transmitter Handler
                DCD     0                         ; 15 Reserved
                DCD     PIOD_Handler              ; 16 Parallel Input/Output Controller Handler
                DCD     0                         ; 17 Reserved
                DCD     0                         ; 18 Reserved
                DCD     TWIHS0_Handler            ; 19 Two-wire Interface High Speed Handler
                DCD     TWIHS1_Handler            ; 20 Two-wire Interface High Speed Handler
                DCD     0                         ; 21 Reserved
                DCD     SSC_Handler               ; 22 Synchronous Serial Controller Handler
                DCD     TC0_CH0_Handler           ; 23 Timer/Counter 0 Channel 0 Handler
                DCD     TC0_CH1_Handler           ; 24 Timer/Counter 0 Channel 1 Handler
                DCD     TC0_CH2_Handler           ; 25 Timer/Counter 0 Channel 2 Handler
                DCD     TC1_CH0_Handler           ; 26 Timer/Counter 1 Channel 0 Handler
                DCD     TC1_CH1_Handler           ; 27 Timer/Counter 1 Channel 1 Handler
                DCD     TC1_CH2_Handler           ; 28 Timer/Counter 1 Channel 2 Handler
                DCD     AFEC0_Handler             ; 29 Analog Front-End Controller Handler
                DCD     DACC_Handler              ; 30 Digital-to-Analog Converter Controller Handler
                DCD     PWM0_Handler              ; 31 Pulse Width Modulation Controller Handler
                DCD     ICM_Handler               ; 32 Integrity Check Monitor Handler
                DCD     ACC_Handler               ; 33 Analog Comparator Controller Handler
                DCD     USBHS_Handler             ; 34 USB High-Speed Interface Handler
                DCD     MCAN0_INT0_Handler        ; 35 Controller Area Network Handler
                DCD     MCAN0_INT1_Handler        ; 36 Controller Area Network Handler
                DCD     0                         ; 37 Reserved
                DCD     0                         ; 38 Reserved
                DCD     GMAC_Handler              ; 39 Gigabit Ethernet MAC Handler
                DCD     AFEC1_Handler             ; 40 Analog Front-End Controller Handler
                DCD     0                         ; 41 Reserved
                DCD     0                         ; 42 Reserved
                DCD     QSPI_Handler              ; 43 Quad Serial Peripheral Interface Handler
                DCD     UART2_Handler             ; 44 Universal Asynchronous Receiver Transmitter Handler
                DCD     0                         ; 45 Reserved
                DCD     0                         ; 46 Reserved
                DCD     TC2_CH0_Handler           ; 47 Timer/Counter 2 Channel 0 Handler
                DCD     TC2_CH1_Handler           ; 48 Timer/Counter 2 Channel 1 Handler
                DCD     TC2_CH2_Handler           ; 49 Timer/Counter 2 Channel 2 Handler
                DCD     TC3_CH0_Handler           ; 50 Timer/Counter 3 Channel 0 Handler
                DCD     TC3_CH1_Handler           ; 51 Timer/Counter 3 Channel 1 Handler
                DCD     TC3_CH2_Handler           ; 52 Timer/Counter 3 Channel 2 Handler
                DCD     0                         ; 53 Reserved
                DCD     0                         ; 54 Reserved
                DCD     0                         ; 55 Reserved
                DCD     AES_Handler               ; 56 Advanced Encryption Standard Handler
                DCD     TRNG_Handler              ; 57 True Random Number Generator Handler
                DCD     XDMAC_Handler             ; 58 Extensible DMA Controller Handler
                DCD     ISI_Handler               ; 59 Image Sensor Interface Handler
                DCD     PWM1_Handler              ; 60 Pulse Width Modulation Controller Handler
                DCD     FPU_Handler               ; 61 Floating Point Unit Handler
                DCD     0                         ; 62 Reserved
                DCD     RSWDT_Handler             ; 63 Reinforced Safety Watchdog Timer Handler
                DCD     CCW_Handler               ; 64 System Control Block Handler
                DCD     CCF_Handler               ; 65 System Control Block Handler
                DCD     GMAC_Q1_Handler           ; 66 Gigabit Ethernet MAC Handler
                DCD     GMAC_Q2_Handler           ; 67 Gigabit Ethernet MAC Handler
                DCD     IXC_Handler               ; 68 Floating Point Unit Handler
                DCD     0                         ; 69 Reserved
                DCD     0                         ; 70 Reserved
                DCD     GMAC_Q3_Handler           ; 71 Gigabit Ethernet MAC Handler
                DCD     GMAC_Q4_Handler           ; 72 Gigabit Ethernet MAC Handler
                DCD     GMAC_Q5_Handler           ; 73 Gigabit Ethernet MAC Handler
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
                EXPORT  USART0_Handler            [WEAK]
                EXPORT  USART1_Handler            [WEAK]
                EXPORT  PIOD_Handler              [WEAK]
                EXPORT  TWIHS0_Handler            [WEAK]
                EXPORT  TWIHS1_Handler            [WEAK]
                EXPORT  SSC_Handler               [WEAK]
                EXPORT  TC0_CH0_Handler           [WEAK]
                EXPORT  TC0_CH1_Handler           [WEAK]
                EXPORT  TC0_CH2_Handler           [WEAK]
                EXPORT  TC1_CH0_Handler           [WEAK]
                EXPORT  TC1_CH1_Handler           [WEAK]
                EXPORT  TC1_CH2_Handler           [WEAK]
                EXPORT  AFEC0_Handler             [WEAK]
                EXPORT  DACC_Handler              [WEAK]
                EXPORT  PWM0_Handler              [WEAK]
                EXPORT  ICM_Handler               [WEAK]
                EXPORT  ACC_Handler               [WEAK]
                EXPORT  USBHS_Handler             [WEAK]
                EXPORT  MCAN0_INT0_Handler        [WEAK]
                EXPORT  MCAN0_INT1_Handler        [WEAK]
                EXPORT  GMAC_Handler              [WEAK]
                EXPORT  AFEC1_Handler             [WEAK]
                EXPORT  QSPI_Handler              [WEAK]
                EXPORT  UART2_Handler             [WEAK]
                EXPORT  TC2_CH0_Handler           [WEAK]
                EXPORT  TC2_CH1_Handler           [WEAK]
                EXPORT  TC2_CH2_Handler           [WEAK]
                EXPORT  TC3_CH0_Handler           [WEAK]
                EXPORT  TC3_CH1_Handler           [WEAK]
                EXPORT  TC3_CH2_Handler           [WEAK]
                EXPORT  AES_Handler               [WEAK]
                EXPORT  TRNG_Handler              [WEAK]
                EXPORT  XDMAC_Handler             [WEAK]
                EXPORT  ISI_Handler               [WEAK]
                EXPORT  PWM1_Handler              [WEAK]
                EXPORT  FPU_Handler               [WEAK]
                EXPORT  RSWDT_Handler             [WEAK]
                EXPORT  CCW_Handler               [WEAK]
                EXPORT  CCF_Handler               [WEAK]
                EXPORT  GMAC_Q1_Handler           [WEAK]
                EXPORT  GMAC_Q2_Handler           [WEAK]
                EXPORT  IXC_Handler               [WEAK]
                EXPORT  GMAC_Q3_Handler           [WEAK]
                EXPORT  GMAC_Q4_Handler           [WEAK]
                EXPORT  GMAC_Q5_Handler           [WEAK]


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
USART0_Handler           
USART1_Handler           
PIOD_Handler             
TWIHS0_Handler           
TWIHS1_Handler           
SSC_Handler              
TC0_CH0_Handler          
TC0_CH1_Handler          
TC0_CH2_Handler          
TC1_CH0_Handler          
TC1_CH1_Handler          
TC1_CH2_Handler          
AFEC0_Handler            
DACC_Handler             
PWM0_Handler             
ICM_Handler              
ACC_Handler              
USBHS_Handler            
MCAN0_INT0_Handler       
MCAN0_INT1_Handler       
GMAC_Handler             
AFEC1_Handler            
QSPI_Handler             
UART2_Handler            
TC2_CH0_Handler          
TC2_CH1_Handler          
TC2_CH2_Handler          
TC3_CH0_Handler          
TC3_CH1_Handler          
TC3_CH2_Handler          
AES_Handler              
TRNG_Handler             
XDMAC_Handler            
ISI_Handler              
PWM1_Handler             
FPU_Handler              
RSWDT_Handler            
CCW_Handler              
CCF_Handler              
GMAC_Q1_Handler          
GMAC_Q2_Handler          
IXC_Handler              
GMAC_Q3_Handler          
GMAC_Q4_Handler          
GMAC_Q5_Handler          
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

