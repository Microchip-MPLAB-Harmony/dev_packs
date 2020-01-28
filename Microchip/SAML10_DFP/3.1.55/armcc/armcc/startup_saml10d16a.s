;/*****************************************************************************
; * \file     startup_saml10d16a.s
; * \brief    ARMCC startup file for ATSAML10D16A
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
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SVC_Handler               ; SVC Handler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     PendSV_Handler            ; PendSV Handler
                DCD     SysTick_Handler           ; SysTick Handler

                ; External Interrupts
                DCD     SYSTEM_Handler            ; 0  Main Clock Handler
                DCD     WDT_Handler               ; 1  Watchdog Timer Handler
                DCD     RTC_Handler               ; 2  Real-Time Counter Handler
                DCD     EIC_0_Handler             ; 3  External Interrupt Controller Handler
                DCD     EIC_1_Handler             ; 4  External Interrupt Controller Handler
                DCD     EIC_2_Handler             ; 5  External Interrupt Controller Handler
                DCD     EIC_3_Handler             ; 6  External Interrupt Controller Handler
                DCD     EIC_OTHER_Handler         ; 7  External Interrupt Controller Handler
                DCD     FREQM_Handler             ; 8  Frequency Meter Handler
                DCD     NVMCTRL_Handler           ; 9  Non-Volatile Memory Controller Handler
                DCD     PORT_Handler              ; 10 Port Module Handler
                DCD     DMAC_0_Handler            ; 11 Direct Memory Access Controller Handler
                DCD     DMAC_1_Handler            ; 12 Direct Memory Access Controller Handler
                DCD     DMAC_2_Handler            ; 13 Direct Memory Access Controller Handler
                DCD     DMAC_3_Handler            ; 14 Direct Memory Access Controller Handler
                DCD     DMAC_OTHER_Handler        ; 15 Direct Memory Access Controller Handler
                DCD     EVSYS_0_Handler           ; 16 Event System Interface Handler
                DCD     EVSYS_1_Handler           ; 17 Event System Interface Handler
                DCD     EVSYS_2_Handler           ; 18 Event System Interface Handler
                DCD     EVSYS_3_Handler           ; 19 Event System Interface Handler
                DCD     EVSYS_NSCHK_Handler       ; 20 Event System Interface Handler
                DCD     PAC_Handler               ; 21 Peripheral Access Controller Handler
                DCD     SERCOM0_0_Handler         ; 22 Serial Communication Interface Handler
                DCD     SERCOM0_1_Handler         ; 23 Serial Communication Interface Handler
                DCD     SERCOM0_2_Handler         ; 24 Serial Communication Interface Handler
                DCD     SERCOM0_OTHER_Handler     ; 25 Serial Communication Interface Handler
                DCD     SERCOM1_0_Handler         ; 26 Serial Communication Interface Handler
                DCD     SERCOM1_1_Handler         ; 27 Serial Communication Interface Handler
                DCD     SERCOM1_2_Handler         ; 28 Serial Communication Interface Handler
                DCD     SERCOM1_OTHER_Handler     ; 29 Serial Communication Interface Handler
                DCD     0                         ; 30 Reserved
                DCD     0                         ; 31 Reserved
                DCD     0                         ; 32 Reserved
                DCD     0                         ; 33 Reserved
                DCD     TC0_Handler               ; 34 Basic Timer Counter Handler
                DCD     TC1_Handler               ; 35 Basic Timer Counter Handler
                DCD     TC2_Handler               ; 36 Basic Timer Counter Handler
                DCD     ADC_OTHER_Handler         ; 37 Analog Digital Converter Handler
                DCD     ADC_RESRDY_Handler        ; 38 Analog Digital Converter Handler
                DCD     AC_Handler                ; 39 Analog Comparators Handler
                DCD     DAC_UNDERRUN_A_Handler    ; 40 Digital Analog Converter Handler
                DCD     DAC_EMPTY_Handler         ; 41 Digital Analog Converter Handler
                DCD     PTC_Handler               ; 42 Peripheral Touch Controller Handler
                DCD     TRNG_Handler              ; 43 True Random Generator Handler
                DCD     TRAM_Handler              ; 44 TrustRAM Handler
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
SVC_Handler               PROC
                          EXPORT SVC_Handler               [WEAK] 
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
                EXPORT  SYSTEM_Handler            [WEAK]
                EXPORT  WDT_Handler               [WEAK]
                EXPORT  RTC_Handler               [WEAK]
                EXPORT  EIC_0_Handler             [WEAK]
                EXPORT  EIC_1_Handler             [WEAK]
                EXPORT  EIC_2_Handler             [WEAK]
                EXPORT  EIC_3_Handler             [WEAK]
                EXPORT  EIC_OTHER_Handler         [WEAK]
                EXPORT  FREQM_Handler             [WEAK]
                EXPORT  NVMCTRL_Handler           [WEAK]
                EXPORT  PORT_Handler              [WEAK]
                EXPORT  DMAC_0_Handler            [WEAK]
                EXPORT  DMAC_1_Handler            [WEAK]
                EXPORT  DMAC_2_Handler            [WEAK]
                EXPORT  DMAC_3_Handler            [WEAK]
                EXPORT  DMAC_OTHER_Handler        [WEAK]
                EXPORT  EVSYS_0_Handler           [WEAK]
                EXPORT  EVSYS_1_Handler           [WEAK]
                EXPORT  EVSYS_2_Handler           [WEAK]
                EXPORT  EVSYS_3_Handler           [WEAK]
                EXPORT  EVSYS_NSCHK_Handler       [WEAK]
                EXPORT  PAC_Handler               [WEAK]
                EXPORT  SERCOM0_0_Handler         [WEAK]
                EXPORT  SERCOM0_1_Handler         [WEAK]
                EXPORT  SERCOM0_2_Handler         [WEAK]
                EXPORT  SERCOM0_OTHER_Handler     [WEAK]
                EXPORT  SERCOM1_0_Handler         [WEAK]
                EXPORT  SERCOM1_1_Handler         [WEAK]
                EXPORT  SERCOM1_2_Handler         [WEAK]
                EXPORT  SERCOM1_OTHER_Handler     [WEAK]
                EXPORT  TC0_Handler               [WEAK]
                EXPORT  TC1_Handler               [WEAK]
                EXPORT  TC2_Handler               [WEAK]
                EXPORT  ADC_OTHER_Handler         [WEAK]
                EXPORT  ADC_RESRDY_Handler        [WEAK]
                EXPORT  AC_Handler                [WEAK]
                EXPORT  DAC_UNDERRUN_A_Handler    [WEAK]
                EXPORT  DAC_EMPTY_Handler         [WEAK]
                EXPORT  PTC_Handler               [WEAK]
                EXPORT  TRNG_Handler              [WEAK]
                EXPORT  TRAM_Handler              [WEAK]


SYSTEM_Handler           
WDT_Handler              
RTC_Handler              
EIC_0_Handler            
EIC_1_Handler            
EIC_2_Handler            
EIC_3_Handler            
EIC_OTHER_Handler        
FREQM_Handler            
NVMCTRL_Handler          
PORT_Handler             
DMAC_0_Handler           
DMAC_1_Handler           
DMAC_2_Handler           
DMAC_3_Handler           
DMAC_OTHER_Handler       
EVSYS_0_Handler          
EVSYS_1_Handler          
EVSYS_2_Handler          
EVSYS_3_Handler          
EVSYS_NSCHK_Handler      
PAC_Handler              
SERCOM0_0_Handler        
SERCOM0_1_Handler        
SERCOM0_2_Handler        
SERCOM0_OTHER_Handler    
SERCOM1_0_Handler        
SERCOM1_1_Handler        
SERCOM1_2_Handler        
SERCOM1_OTHER_Handler    
TC0_Handler              
TC1_Handler              
TC2_Handler              
ADC_OTHER_Handler        
ADC_RESRDY_Handler       
AC_Handler               
DAC_UNDERRUN_A_Handler   
DAC_EMPTY_Handler        
PTC_Handler              
TRNG_Handler             
TRAM_Handler             
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

