;/*****************************************************************************
; * \file     startup_pic32cx5109bz31032.s
; * \brief    ARMCC startup file for PIC32CX5109BZ31032
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
                DCD     RTC_Handler               ; 0  Real-Time Counter Handler
                DCD     EIC_Handler               ; 1  External Interrupt Controller Handler
                DCD     FREQM_Handler             ; 2  Frequency Meter Handler
                DCD     NVM_Handler               ; 3  flash controller Handler
                DCD     CHANGE_NOTICE_A_Handler   ; 4  GPIO Handler
                DCD     CHANGE_NOTICE_B_Handler   ; 5  GPIO Handler
                DCD     DMAC_0_3_Handler          ; 6  Direct Memory Access Controller Handler
                DCD     DMAC_4_15_Handler         ; 7  Direct Memory Access Controller Handler
                DCD     EVSYS_0_3_Handler         ; 8  Event System Interface Handler
                DCD     EVSYS_4_11_Handler        ; 9  Event System Interface Handler
                DCD     PAC_Handler               ; 10 Peripheral Access Controller Handler
                DCD     RAMECC_Handler            ; 11 RAM ECC Handler
                DCD     SERCOM0_Handler           ; 12 Serial Communication Interface Handler
                DCD     SERCOM1_Handler           ; 13 Serial Communication Interface Handler
                DCD     TCC0_Handler              ; 14 Timer Counter Control Handler
                DCD     TCC1_Handler              ; 15 Timer Counter Control Handler
                DCD     TCC2_Handler              ; 16 Timer Counter Control Handler
                DCD     TC0_Handler               ; 17 Basic Timer Counter Handler
                DCD     TC1_Handler               ; 18 Basic Timer Counter Handler
                DCD     TC2_Handler               ; 19 Basic Timer Counter Handler
                DCD     TC3_Handler               ; 20 Basic Timer Counter Handler
                DCD     TC4_Handler               ; 21 Basic Timer Counter Handler
                DCD     TC5_Handler               ; 22 Basic Timer Counter Handler
                DCD     TC6_Handler               ; 23 Basic Timer Counter Handler
                DCD     TC7_Handler               ; 24 Basic Timer Counter Handler
                DCD     ADCHS_IRQ_Handler         ; 25 12-bit Analog to Digital Converter Handler
                DCD     AC_Handler                ; 26 Analog Comparators Handler
                DCD     SILEX_0_Handler           ; 27  Handler
                DCD     SILEX_1_Handler           ; 28  Handler
                DCD     QSPI_Handler              ; 29 Quad SPI interface Handler
                DCD     ZB_INT0_Handler           ; 30 ZigBee MAC DOS Handler
                DCD     BT_INT0_Handler           ; 31 BLE Handler
                DCD     BT_INT1_Handler           ; 32 BLE Handler
                DCD     ARBITER_Handler           ; 33 Radio Arbiter Handler
                DCD     ADCHS_FAULT_Handler       ; 34 12-bit Analog to Digital Converter Handler
                DCD     ADCHS_FCC_Handler         ; 35 12-bit Analog to Digital Converter Handler
                DCD     ADCHS_BGVR_RDY_Handler    ; 36 12-bit Analog to Digital Converter Handler
                DCD     CLKI_WAKEUP_NMI_Handler   ; 37 BLE Handler
                DCD     CVD_Handler               ; 38 Hardware CVD Controller Macro Handler
                DCD     DGI_SPI_Handler           ; 39 SPI DMA for DGI Macro Handler
                DCD     0                         ; 40 Reserved
                DCD     0                         ; 41 Reserved
                DCD     BT_LC_Handler             ; 42 BLE Handler
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
                EXPORT  RTC_Handler               [WEAK]
                EXPORT  EIC_Handler               [WEAK]
                EXPORT  FREQM_Handler             [WEAK]
                EXPORT  NVM_Handler               [WEAK]
                EXPORT  CHANGE_NOTICE_A_Handler   [WEAK]
                EXPORT  CHANGE_NOTICE_B_Handler   [WEAK]
                EXPORT  DMAC_0_3_Handler          [WEAK]
                EXPORT  DMAC_4_15_Handler         [WEAK]
                EXPORT  EVSYS_0_3_Handler         [WEAK]
                EXPORT  EVSYS_4_11_Handler        [WEAK]
                EXPORT  PAC_Handler               [WEAK]
                EXPORT  RAMECC_Handler            [WEAK]
                EXPORT  SERCOM0_Handler           [WEAK]
                EXPORT  SERCOM1_Handler           [WEAK]
                EXPORT  TCC0_Handler              [WEAK]
                EXPORT  TCC1_Handler              [WEAK]
                EXPORT  TCC2_Handler              [WEAK]
                EXPORT  TC0_Handler               [WEAK]
                EXPORT  TC1_Handler               [WEAK]
                EXPORT  TC2_Handler               [WEAK]
                EXPORT  TC3_Handler               [WEAK]
                EXPORT  TC4_Handler               [WEAK]
                EXPORT  TC5_Handler               [WEAK]
                EXPORT  TC6_Handler               [WEAK]
                EXPORT  TC7_Handler               [WEAK]
                EXPORT  ADCHS_IRQ_Handler         [WEAK]
                EXPORT  AC_Handler                [WEAK]
                EXPORT  SILEX_0_Handler           [WEAK]
                EXPORT  SILEX_1_Handler           [WEAK]
                EXPORT  QSPI_Handler              [WEAK]
                EXPORT  ZB_INT0_Handler           [WEAK]
                EXPORT  BT_INT0_Handler           [WEAK]
                EXPORT  BT_INT1_Handler           [WEAK]
                EXPORT  ARBITER_Handler           [WEAK]
                EXPORT  ADCHS_FAULT_Handler       [WEAK]
                EXPORT  ADCHS_FCC_Handler         [WEAK]
                EXPORT  ADCHS_BGVR_RDY_Handler    [WEAK]
                EXPORT  CLKI_WAKEUP_NMI_Handler   [WEAK]
                EXPORT  CVD_Handler               [WEAK]
                EXPORT  DGI_SPI_Handler           [WEAK]
                EXPORT  BT_LC_Handler             [WEAK]


RTC_Handler              
EIC_Handler              
FREQM_Handler            
NVM_Handler              
CHANGE_NOTICE_A_Handler  
CHANGE_NOTICE_B_Handler  
DMAC_0_3_Handler         
DMAC_4_15_Handler        
EVSYS_0_3_Handler        
EVSYS_4_11_Handler       
PAC_Handler              
RAMECC_Handler           
SERCOM0_Handler          
SERCOM1_Handler          
TCC0_Handler             
TCC1_Handler             
TCC2_Handler             
TC0_Handler              
TC1_Handler              
TC2_Handler              
TC3_Handler              
TC4_Handler              
TC5_Handler              
TC6_Handler              
TC7_Handler              
ADCHS_IRQ_Handler        
AC_Handler               
SILEX_0_Handler          
SILEX_1_Handler          
QSPI_Handler             
ZB_INT0_Handler          
BT_INT0_Handler          
BT_INT1_Handler          
ARBITER_Handler          
ADCHS_FAULT_Handler      
ADCHS_FCC_Handler        
ADCHS_BGVR_RDY_Handler   
CLKI_WAKEUP_NMI_Handler  
CVD_Handler              
DGI_SPI_Handler          
BT_LC_Handler            
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

