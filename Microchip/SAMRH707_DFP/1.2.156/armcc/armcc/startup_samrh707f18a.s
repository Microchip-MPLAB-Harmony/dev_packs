;/*****************************************************************************
; * \file     startup_samrh707f18a.s
; * \brief    ARMCC startup file for ATSAMRH707F18A
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
                DCD     MATRIX0_Handler           ; 6  AHB Bus Matrix Handler
                DCD     FLEXCOM0_Handler          ; 7  Flexible Serial Communication Handler
                DCD     FLEXCOM1_Handler          ; 8  Flexible Serial Communication Handler
                DCD     NMIC_Handler              ; 9  Non-maskable Interrupt Controller Handler
                DCD     PIOA_Handler              ; 10 Parallel Input/Output Controller Handler
                DCD     PIOB_Handler              ; 11 Parallel Input/Output Controller Handler
                DCD     PIOC_Handler              ; 12 Parallel Input/Output Controller Handler
                DCD     FLEXCOM2_Handler          ; 13 Flexible Serial Communication Handler
                DCD     FLEXCOM3_Handler          ; 14 Flexible Serial Communication Handler
                DCD     0                         ; 15 Reserved
                DCD     PIOD_Handler              ; 16 Parallel Input/Output Controller Handler
                DCD     0                         ; 17 Reserved
                DCD     CCW_Handler               ; 18 System Control Block Handler
                DCD     CCF_Handler               ; 19 System Control Block Handler
                DCD     FPU_Handler               ; 20 Floating Point Unit Handler
                DCD     IXC_Handler               ; 21 Floating Point Unit Handler
                DCD     CRCCU_Handler             ; 22 Cyclic Redundancy Check Calculation Unit Handler
                DCD     ADC_Handler               ; 23 Analog-to-Digital Converter Handler
                DCD     DACC_Handler              ; 24 Digital-to-Analog Converter Controller Handler
                DCD     TC0_Handler               ; 25 Timer Counter Handler
                DCD     TC1_Handler               ; 26 Timer Counter Handler
                DCD     TC2_Handler               ; 27 Timer Counter Handler
                DCD     TC3_Handler               ; 28 Timer Counter Handler
                DCD     TC4_Handler               ; 29 Timer Counter Handler
                DCD     TC5_Handler               ; 30 Timer Counter Handler
                DCD     PWM0_Handler              ; 31 Pulse Width Modulation Controller Handler
                DCD     PWM1_Handler              ; 32 Pulse Width Modulation Controller Handler
                DCD     ICM_Handler               ; 33 Integrity Check Monitor Handler
                DCD     0                         ; 34 Reserved
                DCD     0                         ; 35 Reserved
                DCD     MCAN0_INT0_Handler        ; 36 Controller Area Network Handler
                DCD     MCAN0_INT1_Handler        ; 37 Controller Area Network Handler
                DCD     MCAN1_INT0_Handler        ; 38 Controller Area Network Handler
                DCD     MCAN1_INT1_Handler        ; 39 Controller Area Network Handler
                DCD     TCMECC_INTFIX_Handler     ; 40 TCMECC Handler
                DCD     TCMECC_INTNOFIX_Handler   ; 41 TCMECC Handler
                DCD     FLEXRAMECC_INTFIX_Handler ; 42 FLEXRAMECC Handler
                DCD     FLEXRAMECC_INTNOFIX_Handler ; 43 FLEXRAMECC Handler
                DCD     SHA_Handler               ; 44 Secure Hash Algorithm Handler
                DCD     PCC_Handler               ; 45 Parallel Capture Controller Handler
                DCD     0                         ; 46 Reserved
                DCD     RSWDT_Handler             ; 47 Reinforced Safety Watchdog Timer Handler
                DCD     0                         ; 48 Reserved
                DCD     0                         ; 49 Reserved
                DCD     HEFC_INT0_Handler         ; 50 Harden Embedded Flash Controller Handler
                DCD     HEFC_INTFIX_Handler       ; 51 Harden Embedded Flash Controller Handler
                DCD     HEFC_INTNOFIX_Handler     ; 52 Harden Embedded Flash Controller Handler
                DCD     TC6_Handler               ; 53 Timer Counter Handler
                DCD     TC7_Handler               ; 54 Timer Counter Handler
                DCD     TC8_Handler               ; 55 Timer Counter Handler
                DCD     0                         ; 56 Reserved
                DCD     0                         ; 57 Reserved
                DCD     0                         ; 58 Reserved
                DCD     HEMC_INTHEMC_Handler      ; 59 HEMC Handler
                DCD     HEMC_INTFIX_Handler       ; 60 HEMC Handler
                DCD     HEMC_INTNOFIX_Handler     ; 61 HEMC Handler
                DCD     SFR_Handler               ; 62 Special Function Registers Handler
                DCD     TRNG_Handler              ; 63 True Random Number Generator Handler
                DCD     XDMAC_Handler             ; 64 Extensible DMA Controller Handler
                DCD     SPW_Handler               ; 65 SpW Handler
                DCD     0                         ; 66 Reserved
                DCD     0                         ; 67 Reserved
                DCD     IP1553_Handler            ; 68 IP 1553 Handler
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
                EXPORT  MATRIX0_Handler           [WEAK]
                EXPORT  FLEXCOM0_Handler          [WEAK]
                EXPORT  FLEXCOM1_Handler          [WEAK]
                EXPORT  NMIC_Handler              [WEAK]
                EXPORT  PIOA_Handler              [WEAK]
                EXPORT  PIOB_Handler              [WEAK]
                EXPORT  PIOC_Handler              [WEAK]
                EXPORT  FLEXCOM2_Handler          [WEAK]
                EXPORT  FLEXCOM3_Handler          [WEAK]
                EXPORT  PIOD_Handler              [WEAK]
                EXPORT  CCW_Handler               [WEAK]
                EXPORT  CCF_Handler               [WEAK]
                EXPORT  FPU_Handler               [WEAK]
                EXPORT  IXC_Handler               [WEAK]
                EXPORT  CRCCU_Handler             [WEAK]
                EXPORT  ADC_Handler               [WEAK]
                EXPORT  DACC_Handler              [WEAK]
                EXPORT  TC0_Handler               [WEAK]
                EXPORT  TC1_Handler               [WEAK]
                EXPORT  TC2_Handler               [WEAK]
                EXPORT  TC3_Handler               [WEAK]
                EXPORT  TC4_Handler               [WEAK]
                EXPORT  TC5_Handler               [WEAK]
                EXPORT  PWM0_Handler              [WEAK]
                EXPORT  PWM1_Handler              [WEAK]
                EXPORT  ICM_Handler               [WEAK]
                EXPORT  MCAN0_INT0_Handler        [WEAK]
                EXPORT  MCAN0_INT1_Handler        [WEAK]
                EXPORT  MCAN1_INT0_Handler        [WEAK]
                EXPORT  MCAN1_INT1_Handler        [WEAK]
                EXPORT  TCMECC_INTFIX_Handler     [WEAK]
                EXPORT  TCMECC_INTNOFIX_Handler   [WEAK]
                EXPORT  FLEXRAMECC_INTFIX_Handler [WEAK]
                EXPORT  FLEXRAMECC_INTNOFIX_Handler [WEAK]
                EXPORT  SHA_Handler               [WEAK]
                EXPORT  PCC_Handler               [WEAK]
                EXPORT  RSWDT_Handler             [WEAK]
                EXPORT  HEFC_INT0_Handler         [WEAK]
                EXPORT  HEFC_INTFIX_Handler       [WEAK]
                EXPORT  HEFC_INTNOFIX_Handler     [WEAK]
                EXPORT  TC6_Handler               [WEAK]
                EXPORT  TC7_Handler               [WEAK]
                EXPORT  TC8_Handler               [WEAK]
                EXPORT  HEMC_INTHEMC_Handler      [WEAK]
                EXPORT  HEMC_INTFIX_Handler       [WEAK]
                EXPORT  HEMC_INTNOFIX_Handler     [WEAK]
                EXPORT  SFR_Handler               [WEAK]
                EXPORT  TRNG_Handler              [WEAK]
                EXPORT  XDMAC_Handler             [WEAK]
                EXPORT  SPW_Handler               [WEAK]
                EXPORT  IP1553_Handler            [WEAK]


SUPC_Handler             
RSTC_Handler             
RTC_Handler              
RTT_Handler              
WDT_Handler              
PMC_Handler              
MATRIX0_Handler          
FLEXCOM0_Handler         
FLEXCOM1_Handler         
NMIC_Handler             
PIOA_Handler             
PIOB_Handler             
PIOC_Handler             
FLEXCOM2_Handler         
FLEXCOM3_Handler         
PIOD_Handler             
CCW_Handler              
CCF_Handler              
FPU_Handler              
IXC_Handler              
CRCCU_Handler            
ADC_Handler              
DACC_Handler             
TC0_Handler              
TC1_Handler              
TC2_Handler              
TC3_Handler              
TC4_Handler              
TC5_Handler              
PWM0_Handler             
PWM1_Handler             
ICM_Handler              
MCAN0_INT0_Handler       
MCAN0_INT1_Handler       
MCAN1_INT0_Handler       
MCAN1_INT1_Handler       
TCMECC_INTFIX_Handler    
TCMECC_INTNOFIX_Handler  
FLEXRAMECC_INTFIX_Handler
FLEXRAMECC_INTNOFIX_Handler
SHA_Handler              
PCC_Handler              
RSWDT_Handler            
HEFC_INT0_Handler        
HEFC_INTFIX_Handler      
HEFC_INTNOFIX_Handler    
TC6_Handler              
TC7_Handler              
TC8_Handler              
HEMC_INTHEMC_Handler     
HEMC_INTFIX_Handler      
HEMC_INTNOFIX_Handler    
SFR_Handler              
TRNG_Handler             
XDMAC_Handler            
SPW_Handler              
IP1553_Handler           
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

