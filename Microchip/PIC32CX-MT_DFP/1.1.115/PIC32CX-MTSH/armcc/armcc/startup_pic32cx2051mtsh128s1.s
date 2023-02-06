;/*****************************************************************************
; * \file     startup_pic32cx2051mtsh128s1.s
; * \brief    ARMCC startup file for PIC32CX2051MTSH128S1
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
                DCD     DWDT0_Handler             ; 4  Dual Watchdog Timer Handler
                DCD     DWDT1_Handler             ; 5  Dual Watchdog Timer Handler
                DCD     PMC_Handler               ; 6  Power Management Controller Handler
                DCD     0                         ; 7  Reserved
                DCD     0                         ; 8  Reserved
                DCD     FLEXCOM0_Handler          ; 9  Flexible Serial Communication Handler
                DCD     FLEXCOM1_Handler          ; 10 Flexible Serial Communication Handler
                DCD     FLEXCOM2_Handler          ; 11 Flexible Serial Communication Handler
                DCD     FLEXCOM3_Handler          ; 12 Flexible Serial Communication Handler
                DCD     FLEXCOM4_Handler          ; 13 Flexible Serial Communication Handler
                DCD     FLEXCOM5_Handler          ; 14 Flexible Serial Communication Handler
                DCD     FLEXCOM6_Handler          ; 15 Flexible Serial Communication Handler
                DCD     FLEXCOM7_Handler          ; 16 Flexible Serial Communication Handler
                DCD     PIOA_Handler              ; 17 Parallel Input/Output Controller Handler
                DCD     PIOA_SEC_Handler          ; 18 Parallel Input/Output Controller Handler
                DCD     PIOB_Handler              ; 19 Parallel Input/Output Controller Handler
                DCD     PIOB_SEC_Handler          ; 20 Parallel Input/Output Controller Handler
                DCD     PIOC_Handler              ; 21 Parallel Input/Output Controller Handler
                DCD     PIOC_SEC_Handler          ; 22 Parallel Input/Output Controller Handler
                DCD     QSPI_Handler              ; 23 Quad Serial Peripheral Interface Handler
                DCD     ADC_Handler               ; 24 Analog-to-Digital Converter Handler
                DCD     ACC_Handler               ; 25 Analog Comparator Controller Handler
                DCD     0                         ; 26 Reserved
                DCD     0                         ; 27 Reserved
                DCD     IPC0_Handler              ; 28 Inter-processor Communication Handler
                DCD     SLCDC_Handler             ; 29 Segment LCD Controller Handler
                DCD     MEM2MEM0_Handler          ; 30 Memory to Memory Handler
                DCD     TC0_CH0_Handler           ; 31 Timer Counter Handler
                DCD     TC0_CH1_Handler           ; 32 Timer Counter Handler
                DCD     TC0_CH2_Handler           ; 33 Timer Counter Handler
                DCD     TC1_CH0_Handler           ; 34 Timer Counter Handler
                DCD     TC1_CH1_Handler           ; 35 Timer Counter Handler
                DCD     TC1_CH2_Handler           ; 36 Timer Counter Handler
                DCD     TC2_CH0_Handler           ; 37 Timer Counter Handler
                DCD     TC2_CH1_Handler           ; 38 Timer Counter Handler
                DCD     TC2_CH2_Handler           ; 39 Timer Counter Handler
                DCD     TC0_C0SEC_Handler         ; 40 Timer Counter Handler
                DCD     TC0_C1SEC_Handler         ; 41 Timer Counter Handler
                DCD     TC0_C2SEC_Handler         ; 42 Timer Counter Handler
                DCD     TC1_C0SEC_Handler         ; 43 Timer Counter Handler
                DCD     TC1_C1SEC_Handler         ; 44 Timer Counter Handler
                DCD     TC1_C2SEC_Handler         ; 45 Timer Counter Handler
                DCD     TC2_C0SEC_Handler         ; 46 Timer Counter Handler
                DCD     TC2_C1SEC_Handler         ; 47 Timer Counter Handler
                DCD     TC2_C2SEC_Handler         ; 48 Timer Counter Handler
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
                DCD     MATRIX1_Handler           ; 61 AHB Bus Matrix Handler
                DCD     SUPC_WKUP3_Handler        ; 62 Supply Controller Handler
                DCD     SUPC_WKUP4_Handler        ; 63 Supply Controller Handler
                DCD     SUPC_WKUP5_Handler        ; 64 Supply Controller Handler
                DCD     SUPC_WKUP6_Handler        ; 65 Supply Controller Handler
                DCD     SUPC_WKUP7_Handler        ; 66 Supply Controller Handler
                DCD     SUPC_WKUP8_Handler        ; 67 Supply Controller Handler
                DCD     SUPC_WKUP9_Handler        ; 68 Supply Controller Handler
                DCD     SUPC_WKUP10_Handler       ; 69 Supply Controller Handler
                DCD     SUPC_WKUP11_Handler       ; 70 Supply Controller Handler
                DCD     SUPC_WKUP12_Handler       ; 71 Supply Controller Handler
                DCD     SUPC_WKUP13_Handler       ; 72 Supply Controller Handler
                DCD     SUPC_WKUP14_Handler       ; 73 Supply Controller Handler
                DCD     SUPC_WKUP15_Handler       ; 74 Supply Controller Handler
                DCD     0                         ; 75 Reserved
                DCD     EMAFE_SLINK_Handler       ; 76 Energy Metering Analog Front End Handler
                DCD     EMAFE_DATA_Handler        ; 77 Energy Metering Analog Front End Handler
                DCD     MEM2MEM1_Handler          ; 78 Memory to Memory Handler
                DCD     TC3_CH0_Handler           ; 79 Timer Counter Handler
                DCD     TC3_CH1_Handler           ; 80 Timer Counter Handler
                DCD     TC3_CH2_Handler           ; 81 Timer Counter Handler
                DCD     TC3_C0SEC_Handler         ; 82 Timer Counter Handler
                DCD     TC3_C1SEC_Handler         ; 83 Timer Counter Handler
                DCD     TC3_C2SEC_Handler         ; 84 Timer Counter Handler
                DCD     PIOD_Handler              ; 85 Parallel Input/Output Controller Handler
                DCD     PIOD_SEC_Handler          ; 86 Parallel Input/Output Controller Handler
                DCD     UART_Handler              ; 87 Universal Asynchronous Receiver Transmitter Handler
                DCD     IPC1_Handler              ; 88 Inter-processor Communication Handler
                DCD     MCSPI_Handler             ; 89 Multi Channel Serial Peripheral Interface Handler
                DCD     PWM_Handler               ; 90 Pulse Width Modulation Controller Handler
                DCD     0                         ; 91 Reserved
                DCD     0                         ; 92 Reserved
                DCD     0                         ; 93 Reserved
                DCD     MATRIX2_Handler           ; 94 AHB Bus Matrix Handler
                DCD     MATRIX3_Handler           ; 95 AHB Bus Matrix Handler
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
                EXPORT  DWDT0_Handler             [WEAK]
                EXPORT  DWDT1_Handler             [WEAK]
                EXPORT  PMC_Handler               [WEAK]
                EXPORT  FLEXCOM0_Handler          [WEAK]
                EXPORT  FLEXCOM1_Handler          [WEAK]
                EXPORT  FLEXCOM2_Handler          [WEAK]
                EXPORT  FLEXCOM3_Handler          [WEAK]
                EXPORT  FLEXCOM4_Handler          [WEAK]
                EXPORT  FLEXCOM5_Handler          [WEAK]
                EXPORT  FLEXCOM6_Handler          [WEAK]
                EXPORT  FLEXCOM7_Handler          [WEAK]
                EXPORT  PIOA_Handler              [WEAK]
                EXPORT  PIOA_SEC_Handler          [WEAK]
                EXPORT  PIOB_Handler              [WEAK]
                EXPORT  PIOB_SEC_Handler          [WEAK]
                EXPORT  PIOC_Handler              [WEAK]
                EXPORT  PIOC_SEC_Handler          [WEAK]
                EXPORT  QSPI_Handler              [WEAK]
                EXPORT  ADC_Handler               [WEAK]
                EXPORT  ACC_Handler               [WEAK]
                EXPORT  IPC0_Handler              [WEAK]
                EXPORT  SLCDC_Handler             [WEAK]
                EXPORT  MEM2MEM0_Handler          [WEAK]
                EXPORT  TC0_CH0_Handler           [WEAK]
                EXPORT  TC0_CH1_Handler           [WEAK]
                EXPORT  TC0_CH2_Handler           [WEAK]
                EXPORT  TC1_CH0_Handler           [WEAK]
                EXPORT  TC1_CH1_Handler           [WEAK]
                EXPORT  TC1_CH2_Handler           [WEAK]
                EXPORT  TC2_CH0_Handler           [WEAK]
                EXPORT  TC2_CH1_Handler           [WEAK]
                EXPORT  TC2_CH2_Handler           [WEAK]
                EXPORT  TC0_C0SEC_Handler         [WEAK]
                EXPORT  TC0_C1SEC_Handler         [WEAK]
                EXPORT  TC0_C2SEC_Handler         [WEAK]
                EXPORT  TC1_C0SEC_Handler         [WEAK]
                EXPORT  TC1_C1SEC_Handler         [WEAK]
                EXPORT  TC1_C2SEC_Handler         [WEAK]
                EXPORT  TC2_C0SEC_Handler         [WEAK]
                EXPORT  TC2_C1SEC_Handler         [WEAK]
                EXPORT  TC2_C2SEC_Handler         [WEAK]
                EXPORT  MATRIX1_Handler           [WEAK]
                EXPORT  SUPC_WKUP3_Handler        [WEAK]
                EXPORT  SUPC_WKUP4_Handler        [WEAK]
                EXPORT  SUPC_WKUP5_Handler        [WEAK]
                EXPORT  SUPC_WKUP6_Handler        [WEAK]
                EXPORT  SUPC_WKUP7_Handler        [WEAK]
                EXPORT  SUPC_WKUP8_Handler        [WEAK]
                EXPORT  SUPC_WKUP9_Handler        [WEAK]
                EXPORT  SUPC_WKUP10_Handler       [WEAK]
                EXPORT  SUPC_WKUP11_Handler       [WEAK]
                EXPORT  SUPC_WKUP12_Handler       [WEAK]
                EXPORT  SUPC_WKUP13_Handler       [WEAK]
                EXPORT  SUPC_WKUP14_Handler       [WEAK]
                EXPORT  SUPC_WKUP15_Handler       [WEAK]
                EXPORT  EMAFE_SLINK_Handler       [WEAK]
                EXPORT  EMAFE_DATA_Handler        [WEAK]
                EXPORT  MEM2MEM1_Handler          [WEAK]
                EXPORT  TC3_CH0_Handler           [WEAK]
                EXPORT  TC3_CH1_Handler           [WEAK]
                EXPORT  TC3_CH2_Handler           [WEAK]
                EXPORT  TC3_C0SEC_Handler         [WEAK]
                EXPORT  TC3_C1SEC_Handler         [WEAK]
                EXPORT  TC3_C2SEC_Handler         [WEAK]
                EXPORT  PIOD_Handler              [WEAK]
                EXPORT  PIOD_SEC_Handler          [WEAK]
                EXPORT  UART_Handler              [WEAK]
                EXPORT  IPC1_Handler              [WEAK]
                EXPORT  MCSPI_Handler             [WEAK]
                EXPORT  PWM_Handler               [WEAK]
                EXPORT  MATRIX2_Handler           [WEAK]
                EXPORT  MATRIX3_Handler           [WEAK]


SUPC_Handler             
RSTC_Handler             
RTC_Handler              
RTT_Handler              
DWDT0_Handler            
DWDT1_Handler            
PMC_Handler              
FLEXCOM0_Handler         
FLEXCOM1_Handler         
FLEXCOM2_Handler         
FLEXCOM3_Handler         
FLEXCOM4_Handler         
FLEXCOM5_Handler         
FLEXCOM6_Handler         
FLEXCOM7_Handler         
PIOA_Handler             
PIOA_SEC_Handler         
PIOB_Handler             
PIOB_SEC_Handler         
PIOC_Handler             
PIOC_SEC_Handler         
QSPI_Handler             
ADC_Handler              
ACC_Handler              
IPC0_Handler             
SLCDC_Handler            
MEM2MEM0_Handler         
TC0_CH0_Handler          
TC0_CH1_Handler          
TC0_CH2_Handler          
TC1_CH0_Handler          
TC1_CH1_Handler          
TC1_CH2_Handler          
TC2_CH0_Handler          
TC2_CH1_Handler          
TC2_CH2_Handler          
TC0_C0SEC_Handler        
TC0_C1SEC_Handler        
TC0_C2SEC_Handler        
TC1_C0SEC_Handler        
TC1_C1SEC_Handler        
TC1_C2SEC_Handler        
TC2_C0SEC_Handler        
TC2_C1SEC_Handler        
TC2_C2SEC_Handler        
MATRIX1_Handler          
SUPC_WKUP3_Handler       
SUPC_WKUP4_Handler       
SUPC_WKUP5_Handler       
SUPC_WKUP6_Handler       
SUPC_WKUP7_Handler       
SUPC_WKUP8_Handler       
SUPC_WKUP9_Handler       
SUPC_WKUP10_Handler      
SUPC_WKUP11_Handler      
SUPC_WKUP12_Handler      
SUPC_WKUP13_Handler      
SUPC_WKUP14_Handler      
SUPC_WKUP15_Handler      
EMAFE_SLINK_Handler      
EMAFE_DATA_Handler       
MEM2MEM1_Handler         
TC3_CH0_Handler          
TC3_CH1_Handler          
TC3_CH2_Handler          
TC3_C0SEC_Handler        
TC3_C1SEC_Handler        
TC3_C2SEC_Handler        
PIOD_Handler             
PIOD_SEC_Handler         
UART_Handler             
IPC1_Handler             
MCSPI_Handler            
PWM_Handler              
MATRIX2_Handler          
MATRIX3_Handler          
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

