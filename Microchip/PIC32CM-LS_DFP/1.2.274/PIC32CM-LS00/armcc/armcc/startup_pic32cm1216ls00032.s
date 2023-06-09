;/*****************************************************************************
; * \file     startup_pic32cm1216ls00032.s
; * \brief    ARMCC startup file for PIC32CM1216LS00032
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
                DCD     EIC_EXTINT_0_Handler      ; 3  External Interrupt Controller Handler
                DCD     EIC_EXTINT_1_Handler      ; 4  External Interrupt Controller Handler
                DCD     EIC_EXTINT_2_Handler      ; 5  External Interrupt Controller Handler
                DCD     EIC_EXTINT_3_Handler      ; 6  External Interrupt Controller Handler
                DCD     EIC_EXTINT_4_Handler      ; 7  External Interrupt Controller Handler
                DCD     EIC_EXTINT_5_Handler      ; 8  External Interrupt Controller Handler
                DCD     EIC_EXTINT_6_Handler      ; 9  External Interrupt Controller Handler
                DCD     EIC_EXTINT_7_Handler      ; 10 External Interrupt Controller Handler
                DCD     EIC_OTHER_Handler         ; 11 External Interrupt Controller Handler
                DCD     FREQM_Handler             ; 12 Frequency Meter Handler
                DCD     NVMCTRL_Handler           ; 13 Non-Volatile Memory Controller Handler
                DCD     PORT_Handler              ; 14 Port Module Handler
                DCD     DMAC_0_Handler            ; 15 Direct Memory Access Controller Handler
                DCD     DMAC_1_Handler            ; 16 Direct Memory Access Controller Handler
                DCD     DMAC_2_Handler            ; 17 Direct Memory Access Controller Handler
                DCD     DMAC_3_Handler            ; 18 Direct Memory Access Controller Handler
                DCD     DMAC_OTHER_Handler        ; 19 Direct Memory Access Controller Handler
                DCD     USB_Handler               ; 20 Universal Serial Bus Handler
                DCD     EVSYS_0_Handler           ; 21 Event System Interface Handler
                DCD     EVSYS_1_Handler           ; 22 Event System Interface Handler
                DCD     EVSYS_2_Handler           ; 23 Event System Interface Handler
                DCD     EVSYS_3_Handler           ; 24 Event System Interface Handler
                DCD     EVSYS_4_Handler           ; 25 Event System Interface Handler
                DCD     EVSYS_5_Handler           ; 26 Event System Interface Handler
                DCD     EVSYS_6_Handler           ; 27 Event System Interface Handler
                DCD     EVSYS_7_Handler           ; 28 Event System Interface Handler
                DCD     EVSYS_NSCHK_Handler       ; 29 Event System Interface Handler
                DCD     PAC_Handler               ; 30 Peripheral Access Controller Handler
                DCD     SERCOM0_0_Handler         ; 31 Serial Communication Interface Handler
                DCD     SERCOM0_1_Handler         ; 32 Serial Communication Interface Handler
                DCD     SERCOM0_2_Handler         ; 33 Serial Communication Interface Handler
                DCD     SERCOM0_OTHER_Handler     ; 34 Serial Communication Interface Handler
                DCD     SERCOM1_0_Handler         ; 35 Serial Communication Interface Handler
                DCD     SERCOM1_1_Handler         ; 36 Serial Communication Interface Handler
                DCD     SERCOM1_2_Handler         ; 37 Serial Communication Interface Handler
                DCD     SERCOM1_OTHER_Handler     ; 38 Serial Communication Interface Handler
                DCD     SERCOM2_0_Handler         ; 39 Serial Communication Interface Handler
                DCD     SERCOM2_1_Handler         ; 40 Serial Communication Interface Handler
                DCD     SERCOM2_2_Handler         ; 41 Serial Communication Interface Handler
                DCD     SERCOM2_OTHER_Handler     ; 42 Serial Communication Interface Handler
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
                DCD     TC0_Handler               ; 55 Basic Timer Counter Handler
                DCD     TC1_Handler               ; 56 Basic Timer Counter Handler
                DCD     TC2_Handler               ; 57 Basic Timer Counter Handler
                DCD     0                         ; 58 Reserved
                DCD     0                         ; 59 Reserved
                DCD     0                         ; 60 Reserved
                DCD     0                         ; 61 Reserved
                DCD     ADC_OTHER_Handler         ; 62 Analog Digital Converter Handler
                DCD     ADC_RESRDY_Handler        ; 63 Analog Digital Converter Handler
                DCD     AC_Handler                ; 64 Analog Comparators Handler
                DCD     DAC_UNDERRUN_Handler      ; 65 Digital-to-Analog Converter Handler
                DCD     DAC_EMPTY_Handler         ; 66 Digital-to-Analog Converter Handler
                DCD     PTC_Handler               ; 67 Peripheral Touch Controller Handler
                DCD     TRNG_Handler              ; 68 True Random Generator Handler
                DCD     0                         ; 69 Reserved
                DCD     TRAM_Handler              ; 70 TrustRAM Handler
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
                EXPORT  EIC_EXTINT_0_Handler      [WEAK]
                EXPORT  EIC_EXTINT_1_Handler      [WEAK]
                EXPORT  EIC_EXTINT_2_Handler      [WEAK]
                EXPORT  EIC_EXTINT_3_Handler      [WEAK]
                EXPORT  EIC_EXTINT_4_Handler      [WEAK]
                EXPORT  EIC_EXTINT_5_Handler      [WEAK]
                EXPORT  EIC_EXTINT_6_Handler      [WEAK]
                EXPORT  EIC_EXTINT_7_Handler      [WEAK]
                EXPORT  EIC_OTHER_Handler         [WEAK]
                EXPORT  FREQM_Handler             [WEAK]
                EXPORT  NVMCTRL_Handler           [WEAK]
                EXPORT  PORT_Handler              [WEAK]
                EXPORT  DMAC_0_Handler            [WEAK]
                EXPORT  DMAC_1_Handler            [WEAK]
                EXPORT  DMAC_2_Handler            [WEAK]
                EXPORT  DMAC_3_Handler            [WEAK]
                EXPORT  DMAC_OTHER_Handler        [WEAK]
                EXPORT  USB_Handler               [WEAK]
                EXPORT  EVSYS_0_Handler           [WEAK]
                EXPORT  EVSYS_1_Handler           [WEAK]
                EXPORT  EVSYS_2_Handler           [WEAK]
                EXPORT  EVSYS_3_Handler           [WEAK]
                EXPORT  EVSYS_4_Handler           [WEAK]
                EXPORT  EVSYS_5_Handler           [WEAK]
                EXPORT  EVSYS_6_Handler           [WEAK]
                EXPORT  EVSYS_7_Handler           [WEAK]
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
                EXPORT  SERCOM2_0_Handler         [WEAK]
                EXPORT  SERCOM2_1_Handler         [WEAK]
                EXPORT  SERCOM2_2_Handler         [WEAK]
                EXPORT  SERCOM2_OTHER_Handler     [WEAK]
                EXPORT  TC0_Handler               [WEAK]
                EXPORT  TC1_Handler               [WEAK]
                EXPORT  TC2_Handler               [WEAK]
                EXPORT  ADC_OTHER_Handler         [WEAK]
                EXPORT  ADC_RESRDY_Handler        [WEAK]
                EXPORT  AC_Handler                [WEAK]
                EXPORT  DAC_UNDERRUN_Handler      [WEAK]
                EXPORT  DAC_EMPTY_Handler         [WEAK]
                EXPORT  PTC_Handler               [WEAK]
                EXPORT  TRNG_Handler              [WEAK]
                EXPORT  TRAM_Handler              [WEAK]


SYSTEM_Handler           
WDT_Handler              
RTC_Handler              
EIC_EXTINT_0_Handler     
EIC_EXTINT_1_Handler     
EIC_EXTINT_2_Handler     
EIC_EXTINT_3_Handler     
EIC_EXTINT_4_Handler     
EIC_EXTINT_5_Handler     
EIC_EXTINT_6_Handler     
EIC_EXTINT_7_Handler     
EIC_OTHER_Handler        
FREQM_Handler            
NVMCTRL_Handler          
PORT_Handler             
DMAC_0_Handler           
DMAC_1_Handler           
DMAC_2_Handler           
DMAC_3_Handler           
DMAC_OTHER_Handler       
USB_Handler              
EVSYS_0_Handler          
EVSYS_1_Handler          
EVSYS_2_Handler          
EVSYS_3_Handler          
EVSYS_4_Handler          
EVSYS_5_Handler          
EVSYS_6_Handler          
EVSYS_7_Handler          
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
SERCOM2_0_Handler        
SERCOM2_1_Handler        
SERCOM2_2_Handler        
SERCOM2_OTHER_Handler    
TC0_Handler              
TC1_Handler              
TC2_Handler              
ADC_OTHER_Handler        
ADC_RESRDY_Handler       
AC_Handler               
DAC_UNDERRUN_Handler     
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

