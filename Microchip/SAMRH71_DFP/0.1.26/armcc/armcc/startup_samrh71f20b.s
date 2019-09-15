;/*****************************************************************************
; * \file     startup_samrh71f20b.s
; * \brief    ARMCC startup file for ATSAMRH71F20B
; *
; * \note
; * Copyright (C) 2019 Microchip Technology Inc.
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
                DCD     SVCall_Handler            ; SVCall Handler
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
                DCD     FLEXCOM4_Handler          ; 15 Flexible Serial Communication Handler
                DCD     PIOD_Handler              ; 16 Parallel Input/Output Controller Handler
                DCD     PIOE_Handler              ; 17 Parallel Input/Output Controller Handler
                DCD     CCW_Handler               ; 18 System Control Block Handler
                DCD     CCF_Handler               ; 19 System Control Block Handler
                DCD     FPU_Handler               ; 20 Floating Point Unit Handler
                DCD     IXC_Handler               ; 21 Floating Point Unit Handler
                DCD     FLEXCOM5_Handler          ; 22 Flexible Serial Communication Handler
                DCD     FLEXCOM6_Handler          ; 23 Flexible Serial Communication Handler
                DCD     FLEXCOM7_Handler          ; 24 Flexible Serial Communication Handler
                DCD     TC0_CH0_Handler           ; 25 Timer/Counter 0 Channel 0 Handler
                DCD     TC0_CH1_Handler           ; 26 Timer/Counter 0 Channel 1 Handler
                DCD     TC0_CH2_Handler           ; 27 Timer/Counter 0 Channel 2 Handler
                DCD     TC1_CH0_Handler           ; 28 Timer/Counter 1 Channel 0 Handler
                DCD     TC1_CH1_Handler           ; 29 Timer/Counter 1 Channel 1 Handler
                DCD     TC1_CH2_Handler           ; 30 Timer/Counter 1 Channel 2 Handler
                DCD     PWM0_Handler              ; 31 Pulse Width Modulation Controller Handler
                DCD     PWM1_Handler              ; 32 Pulse Width Modulation Controller Handler
                DCD     ICM_Handler               ; 33 Integrity Check Monitor Handler
                DCD     PIOF_Handler              ; 34 Parallel Input/Output Controller Handler
                DCD     PIOG_Handler              ; 35 Parallel Input/Output Controller Handler
                DCD     MCAN0_INT0_Handler        ; 36 Controller Area Network Handler
                DCD     MCAN0_INT1_Handler        ; 37 Controller Area Network Handler
                DCD     MCAN1_INT0_Handler        ; 38 Controller Area Network Handler
                DCD     MCAN1_INT1_Handler        ; 39 Controller Area Network Handler
                DCD     TCMRAM_INTFIX_Handler     ; 40 HECC Handler
                DCD     TCMRAM_INTNOFIX_Handler   ; 41 HECC Handler
                DCD     FLEXRAM_INTFIX_Handler    ; 42 FLEXRAMECC Handler
                DCD     FLEXRAM_INTNOFIX_Handler  ; 43 FLEXRAMECC Handler
                DCD     SHA_Handler               ; 44 Secure Hash Algorithm Handler
                DCD     FLEXCOM8_Handler          ; 45 Flexible Serial Communication Handler
                DCD     FLEXCOM9_Handler          ; 46 Flexible Serial Communication Handler
                DCD     WDT1_Handler              ; 47 Watchdog Timer Handler
                DCD     0                         ; 48 Reserved
                DCD     QSPI_Handler              ; 49 Quad Serial Peripheral Interface Handler
                DCD     HEFC_INT0_Handler         ; 50 Harden Embedded Flash Controller Handler
                DCD     HEFC_INTFIX_Handler       ; 51 Harden Embedded Flash Controller Handler
                DCD     HEFC_INTNOFIX_Handler     ; 52 Harden Embedded Flash Controller Handler
                DCD     TC2_CH0_Handler           ; 53 Timer/Counter 2 Channel 0 Handler
                DCD     TC2_CH1_Handler           ; 54 Timer/Counter 2 Channel 1 Handler
                DCD     TC2_CH2_Handler           ; 55 Timer/Counter 2 Channel 2 Handler
                DCD     TC3_CH0_Handler           ; 56 Timer/Counter 3 Channel 0 Handler
                DCD     TC3_CH1_Handler           ; 57 Timer/Counter 3 Channel 1 Handler
                DCD     TC3_CH2_Handler           ; 58 Timer/Counter 3 Channel 2 Handler
                DCD     HEMC_INTSDRAMC_Handler    ; 59 HEMC Handler
                DCD     HEMC_INTFIX_Handler       ; 60 HEMC Handler
                DCD     HEMC_INTNOFIX_Handler     ; 61 HEMC Handler
                DCD     SFR_Handler               ; 62 Special Function Registers Handler
                DCD     TRNG_Handler              ; 63 True Random Number Generator Handler
                DCD     XDMAC_Handler             ; 64 Extensible DMA Controller Handler
                DCD     SPW_INT0_Handler          ; 65 SpW Handler
                DCD     SPW_INT1_Handler          ; 66 SpW Handler
                DCD     0                         ; 67 Reserved
                DCD     IP1553_Handler            ; 68 IP 1553 Handler
                DCD     GMAC_Handler              ; 69 Gigabit Ethernet MAC Handler
                DCD     GMAC_Q1_Handler           ; 70 Gigabit Ethernet MAC Handler
                DCD     GMAC_Q2_Handler           ; 71 Gigabit Ethernet MAC Handler
                DCD     GMAC_Q3_Handler           ; 72 Gigabit Ethernet MAC Handler
                DCD     GMAC_Q4_Handler           ; 73 Gigabit Ethernet MAC Handler
                DCD     GMAC_Q5_Handler           ; 74 Gigabit Ethernet MAC Handler
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
SVCall_Handler            PROC
                          EXPORT SVCall_Handler            [WEAK] 
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
                EXPORT  FLEXCOM4_Handler          [WEAK]
                EXPORT  PIOD_Handler              [WEAK]
                EXPORT  PIOE_Handler              [WEAK]
                EXPORT  CCW_Handler               [WEAK]
                EXPORT  CCF_Handler               [WEAK]
                EXPORT  FPU_Handler               [WEAK]
                EXPORT  IXC_Handler               [WEAK]
                EXPORT  FLEXCOM5_Handler          [WEAK]
                EXPORT  FLEXCOM6_Handler          [WEAK]
                EXPORT  FLEXCOM7_Handler          [WEAK]
                EXPORT  TC0_CH0_Handler           [WEAK]
                EXPORT  TC0_CH1_Handler           [WEAK]
                EXPORT  TC0_CH2_Handler           [WEAK]
                EXPORT  TC1_CH0_Handler           [WEAK]
                EXPORT  TC1_CH1_Handler           [WEAK]
                EXPORT  TC1_CH2_Handler           [WEAK]
                EXPORT  PWM0_Handler              [WEAK]
                EXPORT  PWM1_Handler              [WEAK]
                EXPORT  ICM_Handler               [WEAK]
                EXPORT  PIOF_Handler              [WEAK]
                EXPORT  PIOG_Handler              [WEAK]
                EXPORT  MCAN0_INT0_Handler        [WEAK]
                EXPORT  MCAN0_INT1_Handler        [WEAK]
                EXPORT  MCAN1_INT0_Handler        [WEAK]
                EXPORT  MCAN1_INT1_Handler        [WEAK]
                EXPORT  TCMRAM_INTFIX_Handler     [WEAK]
                EXPORT  TCMRAM_INTNOFIX_Handler   [WEAK]
                EXPORT  FLEXRAM_INTFIX_Handler    [WEAK]
                EXPORT  FLEXRAM_INTNOFIX_Handler  [WEAK]
                EXPORT  SHA_Handler               [WEAK]
                EXPORT  FLEXCOM8_Handler          [WEAK]
                EXPORT  FLEXCOM9_Handler          [WEAK]
                EXPORT  WDT1_Handler              [WEAK]
                EXPORT  QSPI_Handler              [WEAK]
                EXPORT  HEFC_INT0_Handler         [WEAK]
                EXPORT  HEFC_INTFIX_Handler       [WEAK]
                EXPORT  HEFC_INTNOFIX_Handler     [WEAK]
                EXPORT  TC2_CH0_Handler           [WEAK]
                EXPORT  TC2_CH1_Handler           [WEAK]
                EXPORT  TC2_CH2_Handler           [WEAK]
                EXPORT  TC3_CH0_Handler           [WEAK]
                EXPORT  TC3_CH1_Handler           [WEAK]
                EXPORT  TC3_CH2_Handler           [WEAK]
                EXPORT  HEMC_INTSDRAMC_Handler    [WEAK]
                EXPORT  HEMC_INTFIX_Handler       [WEAK]
                EXPORT  HEMC_INTNOFIX_Handler     [WEAK]
                EXPORT  SFR_Handler               [WEAK]
                EXPORT  TRNG_Handler              [WEAK]
                EXPORT  XDMAC_Handler             [WEAK]
                EXPORT  SPW_INT0_Handler          [WEAK]
                EXPORT  SPW_INT1_Handler          [WEAK]
                EXPORT  IP1553_Handler            [WEAK]
                EXPORT  GMAC_Handler              [WEAK]
                EXPORT  GMAC_Q1_Handler           [WEAK]
                EXPORT  GMAC_Q2_Handler           [WEAK]
                EXPORT  GMAC_Q3_Handler           [WEAK]
                EXPORT  GMAC_Q4_Handler           [WEAK]
                EXPORT  GMAC_Q5_Handler           [WEAK]


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
FLEXCOM4_Handler         
PIOD_Handler             
PIOE_Handler             
CCW_Handler              
CCF_Handler              
FPU_Handler              
IXC_Handler              
FLEXCOM5_Handler         
FLEXCOM6_Handler         
FLEXCOM7_Handler         
TC0_CH0_Handler          
TC0_CH1_Handler          
TC0_CH2_Handler          
TC1_CH0_Handler          
TC1_CH1_Handler          
TC1_CH2_Handler          
PWM0_Handler             
PWM1_Handler             
ICM_Handler              
PIOF_Handler             
PIOG_Handler             
MCAN0_INT0_Handler       
MCAN0_INT1_Handler       
MCAN1_INT0_Handler       
MCAN1_INT1_Handler       
TCMRAM_INTFIX_Handler    
TCMRAM_INTNOFIX_Handler  
FLEXRAM_INTFIX_Handler   
FLEXRAM_INTNOFIX_Handler 
SHA_Handler              
FLEXCOM8_Handler         
FLEXCOM9_Handler         
WDT1_Handler             
QSPI_Handler             
HEFC_INT0_Handler        
HEFC_INTFIX_Handler      
HEFC_INTNOFIX_Handler    
TC2_CH0_Handler          
TC2_CH1_Handler          
TC2_CH2_Handler          
TC3_CH0_Handler          
TC3_CH1_Handler          
TC3_CH2_Handler          
HEMC_INTSDRAMC_Handler   
HEMC_INTFIX_Handler      
HEMC_INTNOFIX_Handler    
SFR_Handler              
TRNG_Handler             
XDMAC_Handler            
SPW_INT0_Handler         
SPW_INT1_Handler         
IP1553_Handler           
GMAC_Handler             
GMAC_Q1_Handler          
GMAC_Q2_Handler          
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

