;/*****************************************************************************
; * \file     startup_pic32ck2051gc01064.s
; * \brief    ARMCC startup file for PIC32CK2051GC01064
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
                DCD     SecureFaultMonitor_Handler ; SecureFaultMonitor Handler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SVC_Handler               ; SVC Handler
                DCD     DebugMonitor_Handler      ; DebugMonitor Handler
                DCD     0                         ; Reserved
                DCD     PendSV_Handler            ; PendSV Handler
                DCD     SysTick_Handler           ; SysTick Handler

                ; External Interrupts
                DCD     FCR_ERR_Handler           ; 0  Flash Read Controller (FCR) Handler
                DCD     FCR_FLT_Handler           ; 1  Flash Read Controller (FCR) Handler
                DCD     FCW_Handler               ; 2  Flash Write Control (FCW) Handler
                DCD     PM_Handler                ; 3  Power Manager Handler
                DCD     SUPC_Handler              ; 4  Supply Controller Handler
                DCD     OSCCTRL_XOSC_Handler      ; 5  Oscillators Control Handler
                DCD     OSCCTRL_DFLL_Handler      ; 6  Oscillators Control Handler
                DCD     OSCCTRL_PLL0_Handler      ; 7  Oscillators Control Handler
                DCD     OSC32KCTRL_Handler        ; 8  32kHz Oscillators Control Handler
                DCD     MCLK_Handler              ; 9  Main Clock Handler
                DCD     FREQM_Handler             ; 10 Frequency Meter Handler
                DCD     WDT_Handler               ; 11 Watchdog Timer Handler
                DCD     RTC_Handler               ; 12 Real-Time Counter Handler
                DCD     EIC_EXTINT_0_Handler      ; 13 External Interrupt Controller Handler
                DCD     EIC_EXTINT_1_Handler      ; 14 External Interrupt Controller Handler
                DCD     EIC_EXTINT_2_Handler      ; 15 External Interrupt Controller Handler
                DCD     EIC_EXTINT_3_Handler      ; 16 External Interrupt Controller Handler
                DCD     EIC_EXTINT_4_Handler      ; 17 External Interrupt Controller Handler
                DCD     EIC_EXTINT_5_Handler      ; 18 External Interrupt Controller Handler
                DCD     EIC_EXTINT_6_Handler      ; 19 External Interrupt Controller Handler
                DCD     EIC_EXTINT_7_Handler      ; 20 External Interrupt Controller Handler
                DCD     EIC_EXTINT_8_Handler      ; 21 External Interrupt Controller Handler
                DCD     EIC_EXTINT_9_Handler      ; 22 External Interrupt Controller Handler
                DCD     EIC_EXTINT_10_Handler     ; 23 External Interrupt Controller Handler
                DCD     EIC_EXTINT_11_Handler     ; 24 External Interrupt Controller Handler
                DCD     EIC_EXTINT_12_Handler     ; 25 External Interrupt Controller Handler
                DCD     EIC_EXTINT_13_Handler     ; 26 External Interrupt Controller Handler
                DCD     EIC_EXTINT_14_Handler     ; 27 External Interrupt Controller Handler
                DCD     EIC_EXTINT_15_Handler     ; 28 External Interrupt Controller Handler
                DCD     EIC_NSCHK_Handler         ; 29 External Interrupt Controller Handler
                DCD     PAC_Handler               ; 30 Peripheral Access Controller Handler
                DCD     TRAM_Handler              ; 31 TrustRAM Handler
                DCD     PORT_Handler              ; 32 Port Module Handler
                DCD     DMA0_PRI0_Handler         ; 33 Direct Memory Access Controller Handler
                DCD     DMA0_PRI1_Handler         ; 34 Direct Memory Access Controller Handler
                DCD     DMA0_PRI2_Handler         ; 35 Direct Memory Access Controller Handler
                DCD     DMA1_PRI0_Handler         ; 36 Direct Memory Access Controller Handler
                DCD     DMA1_PRI1_Handler         ; 37 Direct Memory Access Controller Handler
                DCD     HMATRIX_Handler           ; 38 HSB Matrix Handler
                DCD     EVSYS_0_Handler           ; 39 Event System Interface Handler
                DCD     EVSYS_1_Handler           ; 40 Event System Interface Handler
                DCD     EVSYS_2_Handler           ; 41 Event System Interface Handler
                DCD     EVSYS_3_Handler           ; 42 Event System Interface Handler
                DCD     EVSYS_OTHER_Handler       ; 43 Event System Interface Handler
                DCD     SERCOM0_56_Handler        ; 44 Serial Communication Interface Handler
                DCD     SERCOM0_0_Handler         ; 45 Serial Communication Interface Handler
                DCD     SERCOM0_1_Handler         ; 46 Serial Communication Interface Handler
                DCD     SERCOM0_2_Handler         ; 47 Serial Communication Interface Handler
                DCD     SERCOM0_3_Handler         ; 48 Serial Communication Interface Handler
                DCD     SERCOM0_4_Handler         ; 49 Serial Communication Interface Handler
                DCD     SERCOM1_56_Handler        ; 50 Serial Communication Interface Handler
                DCD     SERCOM1_0_Handler         ; 51 Serial Communication Interface Handler
                DCD     SERCOM1_1_Handler         ; 52 Serial Communication Interface Handler
                DCD     SERCOM1_2_Handler         ; 53 Serial Communication Interface Handler
                DCD     SERCOM1_3_Handler         ; 54 Serial Communication Interface Handler
                DCD     SERCOM1_4_Handler         ; 55 Serial Communication Interface Handler
                DCD     SERCOM2_56_Handler        ; 56 Serial Communication Interface Handler
                DCD     SERCOM2_0_Handler         ; 57 Serial Communication Interface Handler
                DCD     SERCOM2_1_Handler         ; 58 Serial Communication Interface Handler
                DCD     SERCOM2_2_Handler         ; 59 Serial Communication Interface Handler
                DCD     SERCOM2_3_Handler         ; 60 Serial Communication Interface Handler
                DCD     SERCOM2_4_Handler         ; 61 Serial Communication Interface Handler
                DCD     SERCOM3_56_Handler        ; 62 Serial Communication Interface Handler
                DCD     SERCOM3_0_Handler         ; 63 Serial Communication Interface Handler
                DCD     SERCOM3_1_Handler         ; 64 Serial Communication Interface Handler
                DCD     SERCOM3_2_Handler         ; 65 Serial Communication Interface Handler
                DCD     SERCOM3_3_Handler         ; 66 Serial Communication Interface Handler
                DCD     SERCOM3_4_Handler         ; 67 Serial Communication Interface Handler
                DCD     TCC0_OTHER_Handler        ; 68 Timer Counter for Control Applications Handler
                DCD     TCC0_MC0_Handler          ; 69 Timer Counter for Control Applications Handler
                DCD     TCC0_MC1_Handler          ; 70 Timer Counter for Control Applications Handler
                DCD     TCC0_MC2_Handler          ; 71 Timer Counter for Control Applications Handler
                DCD     TCC0_MC3_Handler          ; 72 Timer Counter for Control Applications Handler
                DCD     TCC0_MC4_Handler          ; 73 Timer Counter for Control Applications Handler
                DCD     TCC0_MC5_Handler          ; 74 Timer Counter for Control Applications Handler
                DCD     TCC1_OTHER_Handler        ; 75 Timer Counter for Control Applications Handler
                DCD     TCC1_MC0_Handler          ; 76 Timer Counter for Control Applications Handler
                DCD     TCC1_MC1_Handler          ; 77 Timer Counter for Control Applications Handler
                DCD     TCC1_MC2_Handler          ; 78 Timer Counter for Control Applications Handler
                DCD     TCC1_MC3_Handler          ; 79 Timer Counter for Control Applications Handler
                DCD     TCC1_MC4_Handler          ; 80 Timer Counter for Control Applications Handler
                DCD     TCC1_MC5_Handler          ; 81 Timer Counter for Control Applications Handler
                DCD     TCC2_OTHER_Handler        ; 82 Timer Counter for Control Applications Handler
                DCD     TCC2_MC0_Handler          ; 83 Timer Counter for Control Applications Handler
                DCD     TCC2_MC1_Handler          ; 84 Timer Counter for Control Applications Handler
                DCD     TCC2_MC2_Handler          ; 85 Timer Counter for Control Applications Handler
                DCD     TCC2_MC3_Handler          ; 86 Timer Counter for Control Applications Handler
                DCD     TCC2_MC4_Handler          ; 87 Timer Counter for Control Applications Handler
                DCD     TCC2_MC5_Handler          ; 88 Timer Counter for Control Applications Handler
                DCD     TCC3_OTHER_Handler        ; 89 Timer Counter for Control Applications Handler
                DCD     TCC3_MC0_Handler          ; 90 Timer Counter for Control Applications Handler
                DCD     TCC3_MC1_Handler          ; 91 Timer Counter for Control Applications Handler
                DCD     TCC3_MC2_Handler          ; 92 Timer Counter for Control Applications Handler
                DCD     TCC3_MC3_Handler          ; 93 Timer Counter for Control Applications Handler
                DCD     TCC3_MC4_Handler          ; 94 Timer Counter for Control Applications Handler
                DCD     TCC3_MC5_Handler          ; 95 Timer Counter for Control Applications Handler
                DCD     SERCOM4_56_Handler        ; 96 Serial Communication Interface Handler
                DCD     SERCOM4_0_Handler         ; 97 Serial Communication Interface Handler
                DCD     SERCOM4_1_Handler         ; 98 Serial Communication Interface Handler
                DCD     SERCOM4_2_Handler         ; 99 Serial Communication Interface Handler
                DCD     SERCOM4_3_Handler         ; 100 Serial Communication Interface Handler
                DCD     SERCOM4_4_Handler         ; 101 Serial Communication Interface Handler
                DCD     SERCOM5_56_Handler        ; 102 Serial Communication Interface Handler
                DCD     SERCOM5_0_Handler         ; 103 Serial Communication Interface Handler
                DCD     SERCOM5_1_Handler         ; 104 Serial Communication Interface Handler
                DCD     SERCOM5_2_Handler         ; 105 Serial Communication Interface Handler
                DCD     SERCOM5_3_Handler         ; 106 Serial Communication Interface Handler
                DCD     SERCOM5_4_Handler         ; 107 Serial Communication Interface Handler
                DCD     SERCOM6_56_Handler        ; 108 Serial Communication Interface Handler
                DCD     SERCOM6_0_Handler         ; 109 Serial Communication Interface Handler
                DCD     SERCOM6_1_Handler         ; 110 Serial Communication Interface Handler
                DCD     SERCOM6_2_Handler         ; 111 Serial Communication Interface Handler
                DCD     SERCOM6_3_Handler         ; 112 Serial Communication Interface Handler
                DCD     SERCOM6_4_Handler         ; 113 Serial Communication Interface Handler
                DCD     SERCOM7_56_Handler        ; 114 Serial Communication Interface Handler
                DCD     SERCOM7_0_Handler         ; 115 Serial Communication Interface Handler
                DCD     SERCOM7_1_Handler         ; 116 Serial Communication Interface Handler
                DCD     SERCOM7_2_Handler         ; 117 Serial Communication Interface Handler
                DCD     SERCOM7_3_Handler         ; 118 Serial Communication Interface Handler
                DCD     SERCOM7_4_Handler         ; 119 Serial Communication Interface Handler
                DCD     TCC4_OTHER_Handler        ; 120 Timer Counter for Control Applications Handler
                DCD     TCC4_MC0_Handler          ; 121 Timer Counter for Control Applications Handler
                DCD     TCC4_MC1_Handler          ; 122 Timer Counter for Control Applications Handler
                DCD     TCC5_OTHER_Handler        ; 123 Timer Counter for Control Applications Handler
                DCD     TCC5_MC0_Handler          ; 124 Timer Counter for Control Applications Handler
                DCD     TCC5_MC1_Handler          ; 125 Timer Counter for Control Applications Handler
                DCD     TCC6_OTHER_Handler        ; 126 Timer Counter for Control Applications Handler
                DCD     TCC6_MC0_Handler          ; 127 Timer Counter for Control Applications Handler
                DCD     TCC6_MC1_Handler          ; 128 Timer Counter for Control Applications Handler
                DCD     TCC7_OTHER_Handler        ; 129 Timer Counter for Control Applications Handler
                DCD     TCC7_MC0_Handler          ; 130 Timer Counter for Control Applications Handler
                DCD     TCC7_MC1_Handler          ; 131 Timer Counter for Control Applications Handler
                DCD     ADC_GLOBAL_Handler        ; 132 ADC Controller Handler
                DCD     ADC_CORE1_Handler         ; 133 ADC Controller Handler
                DCD     0                         ; 134 ADC Controller
                DCD     0                         ; 135 ADC Controller
                DCD     0                         ; 136 ADC Controller
                DCD     0                         ; 137 ADC Controller
                DCD     AC_Handler                ; 138 Analog Comparator Controller Handler
                DCD     PTC_Handler               ; 139 Peripheral Touch Controller Handler
                DCD     SPI_IXS_Handler           ; 140 Audio SPI with 8 channels compatibilty Handler
                DCD     PCC_Handler               ; 141 Parallel Capture Controller Handler
                DCD     PDEC_Handler              ; 142 Position Decoder Handler
                DCD     CAN0_Handler              ; 143 Control Area Network Handler
                DCD     CAN1_Handler              ; 144 Control Area Network Handler
                DCD     ETH_Handler               ; 145 Ethernet Controller Handler
                DCD     SQI_Handler               ; 146 Polaris Serial Quad Interface SIB Handler
                DCD     TRNG_Handler              ; 147 True Random Generator Handler
                DCD     SDMMC0_Handler            ; 148 SD/MMC Host Controller Handler
                DCD     SDMMC1_Handler            ; 149 SD/MMC Host Controller Handler
                DCD     USB_OTHER_Handler         ; 150 Full-Speed Universal Serial Bus Handler
                DCD     USB_SOF_Handler           ; 151 Full-Speed Universal Serial Bus Handler
                DCD     USB_TRCPT0_Handler        ; 152 Full-Speed Universal Serial Bus Handler
                DCD     USB_TRCPT1_Handler        ; 153 Full-Speed Universal Serial Bus Handler
                DCD     USBHS_Handler             ; 154 USB High Speed Handler
                DCD     0                         ; 155 Reserved
                DCD     0                         ; 156 Reserved
                DCD     0                         ; 157 Reserved
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
SecureFaultMonitor_Handler PROC
                          EXPORT SecureFaultMonitor_Handler [WEAK] 
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
                EXPORT  FCR_ERR_Handler           [WEAK]
                EXPORT  FCR_FLT_Handler           [WEAK]
                EXPORT  FCW_Handler               [WEAK]
                EXPORT  PM_Handler                [WEAK]
                EXPORT  SUPC_Handler              [WEAK]
                EXPORT  OSCCTRL_XOSC_Handler      [WEAK]
                EXPORT  OSCCTRL_DFLL_Handler      [WEAK]
                EXPORT  OSCCTRL_PLL0_Handler      [WEAK]
                EXPORT  OSC32KCTRL_Handler        [WEAK]
                EXPORT  MCLK_Handler              [WEAK]
                EXPORT  FREQM_Handler             [WEAK]
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
                EXPORT  EIC_EXTINT_8_Handler      [WEAK]
                EXPORT  EIC_EXTINT_9_Handler      [WEAK]
                EXPORT  EIC_EXTINT_10_Handler     [WEAK]
                EXPORT  EIC_EXTINT_11_Handler     [WEAK]
                EXPORT  EIC_EXTINT_12_Handler     [WEAK]
                EXPORT  EIC_EXTINT_13_Handler     [WEAK]
                EXPORT  EIC_EXTINT_14_Handler     [WEAK]
                EXPORT  EIC_EXTINT_15_Handler     [WEAK]
                EXPORT  EIC_NSCHK_Handler         [WEAK]
                EXPORT  PAC_Handler               [WEAK]
                EXPORT  TRAM_Handler              [WEAK]
                EXPORT  PORT_Handler              [WEAK]
                EXPORT  DMA0_PRI0_Handler         [WEAK]
                EXPORT  DMA0_PRI1_Handler         [WEAK]
                EXPORT  DMA0_PRI2_Handler         [WEAK]
                EXPORT  DMA1_PRI0_Handler         [WEAK]
                EXPORT  DMA1_PRI1_Handler         [WEAK]
                EXPORT  HMATRIX_Handler           [WEAK]
                EXPORT  EVSYS_0_Handler           [WEAK]
                EXPORT  EVSYS_1_Handler           [WEAK]
                EXPORT  EVSYS_2_Handler           [WEAK]
                EXPORT  EVSYS_3_Handler           [WEAK]
                EXPORT  EVSYS_OTHER_Handler       [WEAK]
                EXPORT  SERCOM0_56_Handler        [WEAK]
                EXPORT  SERCOM0_0_Handler         [WEAK]
                EXPORT  SERCOM0_1_Handler         [WEAK]
                EXPORT  SERCOM0_2_Handler         [WEAK]
                EXPORT  SERCOM0_3_Handler         [WEAK]
                EXPORT  SERCOM0_4_Handler         [WEAK]
                EXPORT  SERCOM1_56_Handler        [WEAK]
                EXPORT  SERCOM1_0_Handler         [WEAK]
                EXPORT  SERCOM1_1_Handler         [WEAK]
                EXPORT  SERCOM1_2_Handler         [WEAK]
                EXPORT  SERCOM1_3_Handler         [WEAK]
                EXPORT  SERCOM1_4_Handler         [WEAK]
                EXPORT  SERCOM2_56_Handler        [WEAK]
                EXPORT  SERCOM2_0_Handler         [WEAK]
                EXPORT  SERCOM2_1_Handler         [WEAK]
                EXPORT  SERCOM2_2_Handler         [WEAK]
                EXPORT  SERCOM2_3_Handler         [WEAK]
                EXPORT  SERCOM2_4_Handler         [WEAK]
                EXPORT  SERCOM3_56_Handler        [WEAK]
                EXPORT  SERCOM3_0_Handler         [WEAK]
                EXPORT  SERCOM3_1_Handler         [WEAK]
                EXPORT  SERCOM3_2_Handler         [WEAK]
                EXPORT  SERCOM3_3_Handler         [WEAK]
                EXPORT  SERCOM3_4_Handler         [WEAK]
                EXPORT  TCC0_OTHER_Handler        [WEAK]
                EXPORT  TCC0_MC0_Handler          [WEAK]
                EXPORT  TCC0_MC1_Handler          [WEAK]
                EXPORT  TCC0_MC2_Handler          [WEAK]
                EXPORT  TCC0_MC3_Handler          [WEAK]
                EXPORT  TCC0_MC4_Handler          [WEAK]
                EXPORT  TCC0_MC5_Handler          [WEAK]
                EXPORT  TCC1_OTHER_Handler        [WEAK]
                EXPORT  TCC1_MC0_Handler          [WEAK]
                EXPORT  TCC1_MC1_Handler          [WEAK]
                EXPORT  TCC1_MC2_Handler          [WEAK]
                EXPORT  TCC1_MC3_Handler          [WEAK]
                EXPORT  TCC1_MC4_Handler          [WEAK]
                EXPORT  TCC1_MC5_Handler          [WEAK]
                EXPORT  TCC2_OTHER_Handler        [WEAK]
                EXPORT  TCC2_MC0_Handler          [WEAK]
                EXPORT  TCC2_MC1_Handler          [WEAK]
                EXPORT  TCC2_MC2_Handler          [WEAK]
                EXPORT  TCC2_MC3_Handler          [WEAK]
                EXPORT  TCC2_MC4_Handler          [WEAK]
                EXPORT  TCC2_MC5_Handler          [WEAK]
                EXPORT  TCC3_OTHER_Handler        [WEAK]
                EXPORT  TCC3_MC0_Handler          [WEAK]
                EXPORT  TCC3_MC1_Handler          [WEAK]
                EXPORT  TCC3_MC2_Handler          [WEAK]
                EXPORT  TCC3_MC3_Handler          [WEAK]
                EXPORT  TCC3_MC4_Handler          [WEAK]
                EXPORT  TCC3_MC5_Handler          [WEAK]
                EXPORT  SERCOM4_56_Handler        [WEAK]
                EXPORT  SERCOM4_0_Handler         [WEAK]
                EXPORT  SERCOM4_1_Handler         [WEAK]
                EXPORT  SERCOM4_2_Handler         [WEAK]
                EXPORT  SERCOM4_3_Handler         [WEAK]
                EXPORT  SERCOM4_4_Handler         [WEAK]
                EXPORT  SERCOM5_56_Handler        [WEAK]
                EXPORT  SERCOM5_0_Handler         [WEAK]
                EXPORT  SERCOM5_1_Handler         [WEAK]
                EXPORT  SERCOM5_2_Handler         [WEAK]
                EXPORT  SERCOM5_3_Handler         [WEAK]
                EXPORT  SERCOM5_4_Handler         [WEAK]
                EXPORT  SERCOM6_56_Handler        [WEAK]
                EXPORT  SERCOM6_0_Handler         [WEAK]
                EXPORT  SERCOM6_1_Handler         [WEAK]
                EXPORT  SERCOM6_2_Handler         [WEAK]
                EXPORT  SERCOM6_3_Handler         [WEAK]
                EXPORT  SERCOM6_4_Handler         [WEAK]
                EXPORT  SERCOM7_56_Handler        [WEAK]
                EXPORT  SERCOM7_0_Handler         [WEAK]
                EXPORT  SERCOM7_1_Handler         [WEAK]
                EXPORT  SERCOM7_2_Handler         [WEAK]
                EXPORT  SERCOM7_3_Handler         [WEAK]
                EXPORT  SERCOM7_4_Handler         [WEAK]
                EXPORT  TCC4_OTHER_Handler        [WEAK]
                EXPORT  TCC4_MC0_Handler          [WEAK]
                EXPORT  TCC4_MC1_Handler          [WEAK]
                EXPORT  TCC5_OTHER_Handler        [WEAK]
                EXPORT  TCC5_MC0_Handler          [WEAK]
                EXPORT  TCC5_MC1_Handler          [WEAK]
                EXPORT  TCC6_OTHER_Handler        [WEAK]
                EXPORT  TCC6_MC0_Handler          [WEAK]
                EXPORT  TCC6_MC1_Handler          [WEAK]
                EXPORT  TCC7_OTHER_Handler        [WEAK]
                EXPORT  TCC7_MC0_Handler          [WEAK]
                EXPORT  TCC7_MC1_Handler          [WEAK]
                EXPORT  ADC_GLOBAL_Handler        [WEAK]
                EXPORT  ADC_CORE1_Handler         [WEAK]
                EXPORT  AC_Handler                [WEAK]
                EXPORT  PTC_Handler               [WEAK]
                EXPORT  SPI_IXS_Handler           [WEAK]
                EXPORT  PCC_Handler               [WEAK]
                EXPORT  PDEC_Handler              [WEAK]
                EXPORT  CAN0_Handler              [WEAK]
                EXPORT  CAN1_Handler              [WEAK]
                EXPORT  ETH_Handler               [WEAK]
                EXPORT  SQI_Handler               [WEAK]
                EXPORT  TRNG_Handler              [WEAK]
                EXPORT  SDMMC0_Handler            [WEAK]
                EXPORT  SDMMC1_Handler            [WEAK]
                EXPORT  USB_OTHER_Handler         [WEAK]
                EXPORT  USB_SOF_Handler           [WEAK]
                EXPORT  USB_TRCPT0_Handler        [WEAK]
                EXPORT  USB_TRCPT1_Handler        [WEAK]
                EXPORT  USBHS_Handler             [WEAK]


FCR_ERR_Handler          
FCR_FLT_Handler          
FCW_Handler              
PM_Handler               
SUPC_Handler             
OSCCTRL_XOSC_Handler     
OSCCTRL_DFLL_Handler     
OSCCTRL_PLL0_Handler     
OSC32KCTRL_Handler       
MCLK_Handler             
FREQM_Handler            
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
EIC_EXTINT_8_Handler     
EIC_EXTINT_9_Handler     
EIC_EXTINT_10_Handler    
EIC_EXTINT_11_Handler    
EIC_EXTINT_12_Handler    
EIC_EXTINT_13_Handler    
EIC_EXTINT_14_Handler    
EIC_EXTINT_15_Handler    
EIC_NSCHK_Handler        
PAC_Handler              
TRAM_Handler             
PORT_Handler             
DMA0_PRI0_Handler        
DMA0_PRI1_Handler        
DMA0_PRI2_Handler        
DMA1_PRI0_Handler        
DMA1_PRI1_Handler        
HMATRIX_Handler          
EVSYS_0_Handler          
EVSYS_1_Handler          
EVSYS_2_Handler          
EVSYS_3_Handler          
EVSYS_OTHER_Handler      
SERCOM0_56_Handler       
SERCOM0_0_Handler        
SERCOM0_1_Handler        
SERCOM0_2_Handler        
SERCOM0_3_Handler        
SERCOM0_4_Handler        
SERCOM1_56_Handler       
SERCOM1_0_Handler        
SERCOM1_1_Handler        
SERCOM1_2_Handler        
SERCOM1_3_Handler        
SERCOM1_4_Handler        
SERCOM2_56_Handler       
SERCOM2_0_Handler        
SERCOM2_1_Handler        
SERCOM2_2_Handler        
SERCOM2_3_Handler        
SERCOM2_4_Handler        
SERCOM3_56_Handler       
SERCOM3_0_Handler        
SERCOM3_1_Handler        
SERCOM3_2_Handler        
SERCOM3_3_Handler        
SERCOM3_4_Handler        
TCC0_OTHER_Handler       
TCC0_MC0_Handler         
TCC0_MC1_Handler         
TCC0_MC2_Handler         
TCC0_MC3_Handler         
TCC0_MC4_Handler         
TCC0_MC5_Handler         
TCC1_OTHER_Handler       
TCC1_MC0_Handler         
TCC1_MC1_Handler         
TCC1_MC2_Handler         
TCC1_MC3_Handler         
TCC1_MC4_Handler         
TCC1_MC5_Handler         
TCC2_OTHER_Handler       
TCC2_MC0_Handler         
TCC2_MC1_Handler         
TCC2_MC2_Handler         
TCC2_MC3_Handler         
TCC2_MC4_Handler         
TCC2_MC5_Handler         
TCC3_OTHER_Handler       
TCC3_MC0_Handler         
TCC3_MC1_Handler         
TCC3_MC2_Handler         
TCC3_MC3_Handler         
TCC3_MC4_Handler         
TCC3_MC5_Handler         
SERCOM4_56_Handler       
SERCOM4_0_Handler        
SERCOM4_1_Handler        
SERCOM4_2_Handler        
SERCOM4_3_Handler        
SERCOM4_4_Handler        
SERCOM5_56_Handler       
SERCOM5_0_Handler        
SERCOM5_1_Handler        
SERCOM5_2_Handler        
SERCOM5_3_Handler        
SERCOM5_4_Handler        
SERCOM6_56_Handler       
SERCOM6_0_Handler        
SERCOM6_1_Handler        
SERCOM6_2_Handler        
SERCOM6_3_Handler        
SERCOM6_4_Handler        
SERCOM7_56_Handler       
SERCOM7_0_Handler        
SERCOM7_1_Handler        
SERCOM7_2_Handler        
SERCOM7_3_Handler        
SERCOM7_4_Handler        
TCC4_OTHER_Handler       
TCC4_MC0_Handler         
TCC4_MC1_Handler         
TCC5_OTHER_Handler       
TCC5_MC0_Handler         
TCC5_MC1_Handler         
TCC6_OTHER_Handler       
TCC6_MC0_Handler         
TCC6_MC1_Handler         
TCC7_OTHER_Handler       
TCC7_MC0_Handler         
TCC7_MC1_Handler         
ADC_GLOBAL_Handler       
ADC_CORE1_Handler        
AC_Handler               
PTC_Handler              
SPI_IXS_Handler          
PCC_Handler              
PDEC_Handler             
CAN0_Handler             
CAN1_Handler             
ETH_Handler              
SQI_Handler              
TRNG_Handler             
SDMMC0_Handler           
SDMMC1_Handler           
USB_OTHER_Handler        
USB_SOF_Handler          
USB_TRCPT0_Handler       
USB_TRCPT1_Handler       
USBHS_Handler            
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

