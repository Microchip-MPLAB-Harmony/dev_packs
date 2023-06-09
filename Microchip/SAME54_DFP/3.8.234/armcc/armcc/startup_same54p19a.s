;/*****************************************************************************
; * \file     startup_same54p19a.s
; * \brief    ARMCC startup file for ATSAME54P19A
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
                DCD     PM_Handler                ; 0  Power Manager Handler
                DCD     MCLK_Handler              ; 1  Main Clock Handler
                DCD     OSCCTRL_XOSC0_Handler     ; 2  Oscillators Control Handler
                DCD     OSCCTRL_XOSC1_Handler     ; 3  Oscillators Control Handler
                DCD     OSCCTRL_DFLL_Handler      ; 4  Oscillators Control Handler
                DCD     OSCCTRL_DPLL0_Handler     ; 5  Oscillators Control Handler
                DCD     OSCCTRL_DPLL1_Handler     ; 6  Oscillators Control Handler
                DCD     OSC32KCTRL_Handler        ; 7  32kHz Oscillators Control Handler
                DCD     SUPC_OTHER_Handler        ; 8  Supply Controller Handler
                DCD     SUPC_BODDET_Handler       ; 9  Supply Controller Handler
                DCD     WDT_Handler               ; 10 Watchdog Timer Handler
                DCD     RTC_Handler               ; 11 Real-Time Counter Handler
                DCD     EIC_EXTINT_0_Handler      ; 12 External Interrupt Controller Handler
                DCD     EIC_EXTINT_1_Handler      ; 13 External Interrupt Controller Handler
                DCD     EIC_EXTINT_2_Handler      ; 14 External Interrupt Controller Handler
                DCD     EIC_EXTINT_3_Handler      ; 15 External Interrupt Controller Handler
                DCD     EIC_EXTINT_4_Handler      ; 16 External Interrupt Controller Handler
                DCD     EIC_EXTINT_5_Handler      ; 17 External Interrupt Controller Handler
                DCD     EIC_EXTINT_6_Handler      ; 18 External Interrupt Controller Handler
                DCD     EIC_EXTINT_7_Handler      ; 19 External Interrupt Controller Handler
                DCD     EIC_EXTINT_8_Handler      ; 20 External Interrupt Controller Handler
                DCD     EIC_EXTINT_9_Handler      ; 21 External Interrupt Controller Handler
                DCD     EIC_EXTINT_10_Handler     ; 22 External Interrupt Controller Handler
                DCD     EIC_EXTINT_11_Handler     ; 23 External Interrupt Controller Handler
                DCD     EIC_EXTINT_12_Handler     ; 24 External Interrupt Controller Handler
                DCD     EIC_EXTINT_13_Handler     ; 25 External Interrupt Controller Handler
                DCD     EIC_EXTINT_14_Handler     ; 26 External Interrupt Controller Handler
                DCD     EIC_EXTINT_15_Handler     ; 27 External Interrupt Controller Handler
                DCD     FREQM_Handler             ; 28 Frequency Meter Handler
                DCD     NVMCTRL_0_Handler         ; 29 Non-Volatile Memory Controller Handler
                DCD     NVMCTRL_1_Handler         ; 30 Non-Volatile Memory Controller Handler
                DCD     DMAC_0_Handler            ; 31 Direct Memory Access Controller Handler
                DCD     DMAC_1_Handler            ; 32 Direct Memory Access Controller Handler
                DCD     DMAC_2_Handler            ; 33 Direct Memory Access Controller Handler
                DCD     DMAC_3_Handler            ; 34 Direct Memory Access Controller Handler
                DCD     DMAC_OTHER_Handler        ; 35 Direct Memory Access Controller Handler
                DCD     EVSYS_0_Handler           ; 36 Event System Interface Handler
                DCD     EVSYS_1_Handler           ; 37 Event System Interface Handler
                DCD     EVSYS_2_Handler           ; 38 Event System Interface Handler
                DCD     EVSYS_3_Handler           ; 39 Event System Interface Handler
                DCD     EVSYS_OTHER_Handler       ; 40 Event System Interface Handler
                DCD     PAC_Handler               ; 41 Peripheral Access Controller Handler
                DCD     0                         ; 42 Reserved
                DCD     0                         ; 43 Reserved
                DCD     0                         ; 44 Reserved
                DCD     RAMECC_Handler            ; 45 RAM ECC Handler
                DCD     SERCOM0_0_Handler         ; 46 Serial Communication Interface Handler
                DCD     SERCOM0_1_Handler         ; 47 Serial Communication Interface Handler
                DCD     SERCOM0_2_Handler         ; 48 Serial Communication Interface Handler
                DCD     SERCOM0_OTHER_Handler     ; 49 Serial Communication Interface Handler
                DCD     SERCOM1_0_Handler         ; 50 Serial Communication Interface Handler
                DCD     SERCOM1_1_Handler         ; 51 Serial Communication Interface Handler
                DCD     SERCOM1_2_Handler         ; 52 Serial Communication Interface Handler
                DCD     SERCOM1_OTHER_Handler     ; 53 Serial Communication Interface Handler
                DCD     SERCOM2_0_Handler         ; 54 Serial Communication Interface Handler
                DCD     SERCOM2_1_Handler         ; 55 Serial Communication Interface Handler
                DCD     SERCOM2_2_Handler         ; 56 Serial Communication Interface Handler
                DCD     SERCOM2_OTHER_Handler     ; 57 Serial Communication Interface Handler
                DCD     SERCOM3_0_Handler         ; 58 Serial Communication Interface Handler
                DCD     SERCOM3_1_Handler         ; 59 Serial Communication Interface Handler
                DCD     SERCOM3_2_Handler         ; 60 Serial Communication Interface Handler
                DCD     SERCOM3_OTHER_Handler     ; 61 Serial Communication Interface Handler
                DCD     SERCOM4_0_Handler         ; 62 Serial Communication Interface Handler
                DCD     SERCOM4_1_Handler         ; 63 Serial Communication Interface Handler
                DCD     SERCOM4_2_Handler         ; 64 Serial Communication Interface Handler
                DCD     SERCOM4_OTHER_Handler     ; 65 Serial Communication Interface Handler
                DCD     SERCOM5_0_Handler         ; 66 Serial Communication Interface Handler
                DCD     SERCOM5_1_Handler         ; 67 Serial Communication Interface Handler
                DCD     SERCOM5_2_Handler         ; 68 Serial Communication Interface Handler
                DCD     SERCOM5_OTHER_Handler     ; 69 Serial Communication Interface Handler
                DCD     SERCOM6_0_Handler         ; 70 Serial Communication Interface Handler
                DCD     SERCOM6_1_Handler         ; 71 Serial Communication Interface Handler
                DCD     SERCOM6_2_Handler         ; 72 Serial Communication Interface Handler
                DCD     SERCOM6_OTHER_Handler     ; 73 Serial Communication Interface Handler
                DCD     SERCOM7_0_Handler         ; 74 Serial Communication Interface Handler
                DCD     SERCOM7_1_Handler         ; 75 Serial Communication Interface Handler
                DCD     SERCOM7_2_Handler         ; 76 Serial Communication Interface Handler
                DCD     SERCOM7_OTHER_Handler     ; 77 Serial Communication Interface Handler
                DCD     CAN0_Handler              ; 78 Control Area Network Handler
                DCD     CAN1_Handler              ; 79 Control Area Network Handler
                DCD     USB_OTHER_Handler         ; 80 Universal Serial Bus Handler
                DCD     USB_SOF_HSOF_Handler      ; 81 Universal Serial Bus Handler
                DCD     USB_TRCPT0_Handler        ; 82 Universal Serial Bus Handler
                DCD     USB_TRCPT1_Handler        ; 83 Universal Serial Bus Handler
                DCD     GMAC_Handler              ; 84 Ethernet MAC Handler
                DCD     TCC0_OTHER_Handler        ; 85 Timer Counter Control Handler
                DCD     TCC0_MC0_Handler          ; 86 Timer Counter Control Handler
                DCD     TCC0_MC1_Handler          ; 87 Timer Counter Control Handler
                DCD     TCC0_MC2_Handler          ; 88 Timer Counter Control Handler
                DCD     TCC0_MC3_Handler          ; 89 Timer Counter Control Handler
                DCD     TCC0_MC4_Handler          ; 90 Timer Counter Control Handler
                DCD     TCC0_MC5_Handler          ; 91 Timer Counter Control Handler
                DCD     TCC1_OTHER_Handler        ; 92 Timer Counter Control Handler
                DCD     TCC1_MC0_Handler          ; 93 Timer Counter Control Handler
                DCD     TCC1_MC1_Handler          ; 94 Timer Counter Control Handler
                DCD     TCC1_MC2_Handler          ; 95 Timer Counter Control Handler
                DCD     TCC1_MC3_Handler          ; 96 Timer Counter Control Handler
                DCD     TCC2_OTHER_Handler        ; 97 Timer Counter Control Handler
                DCD     TCC2_MC0_Handler          ; 98 Timer Counter Control Handler
                DCD     TCC2_MC1_Handler          ; 99 Timer Counter Control Handler
                DCD     TCC2_MC2_Handler          ; 100 Timer Counter Control Handler
                DCD     TCC3_OTHER_Handler        ; 101 Timer Counter Control Handler
                DCD     TCC3_MC0_Handler          ; 102 Timer Counter Control Handler
                DCD     TCC3_MC1_Handler          ; 103 Timer Counter Control Handler
                DCD     TCC4_OTHER_Handler        ; 104 Timer Counter Control Handler
                DCD     TCC4_MC0_Handler          ; 105 Timer Counter Control Handler
                DCD     TCC4_MC1_Handler          ; 106 Timer Counter Control Handler
                DCD     TC0_Handler               ; 107 Basic Timer Counter Handler
                DCD     TC1_Handler               ; 108 Basic Timer Counter Handler
                DCD     TC2_Handler               ; 109 Basic Timer Counter Handler
                DCD     TC3_Handler               ; 110 Basic Timer Counter Handler
                DCD     TC4_Handler               ; 111 Basic Timer Counter Handler
                DCD     TC5_Handler               ; 112 Basic Timer Counter Handler
                DCD     TC6_Handler               ; 113 Basic Timer Counter Handler
                DCD     TC7_Handler               ; 114 Basic Timer Counter Handler
                DCD     PDEC_OTHER_Handler        ; 115 Quadrature Decodeur Handler
                DCD     PDEC_MC0_Handler          ; 116 Quadrature Decodeur Handler
                DCD     PDEC_MC1_Handler          ; 117 Quadrature Decodeur Handler
                DCD     ADC0_OTHER_Handler        ; 118 Analog Digital Converter Handler
                DCD     ADC0_RESRDY_Handler       ; 119 Analog Digital Converter Handler
                DCD     ADC1_OTHER_Handler        ; 120 Analog Digital Converter Handler
                DCD     ADC1_RESRDY_Handler       ; 121 Analog Digital Converter Handler
                DCD     AC_Handler                ; 122 Analog Comparators Handler
                DCD     DAC_OTHER_Handler         ; 123 Digital-to-Analog Converter Handler
                DCD     DAC_EMPTY_0_Handler       ; 124 Digital-to-Analog Converter Handler
                DCD     DAC_EMPTY_1_Handler       ; 125 Digital-to-Analog Converter Handler
                DCD     DAC_RESRDY_0_Handler      ; 126 Digital-to-Analog Converter Handler
                DCD     DAC_RESRDY_1_Handler      ; 127 Digital-to-Analog Converter Handler
                DCD     I2S_Handler               ; 128 Inter-IC Sound Interface Handler
                DCD     PCC_Handler               ; 129 Parallel Capture Controller Handler
                DCD     AES_Handler               ; 130 Advanced Encryption Standard Handler
                DCD     TRNG_Handler              ; 131 True Random Generator Handler
                DCD     ICM_Handler               ; 132 Integrity Check Monitor Handler
                DCD     PUKCC_Handler             ; 133 PUblic-Key Cryptography Controller Handler
                DCD     QSPI_Handler              ; 134 Quad SPI interface Handler
                DCD     SDHC0_Handler             ; 135 SD/MMC Host Controller Handler
                DCD     SDHC1_Handler             ; 136 SD/MMC Host Controller Handler
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
                EXPORT  PM_Handler                [WEAK]
                EXPORT  MCLK_Handler              [WEAK]
                EXPORT  OSCCTRL_XOSC0_Handler     [WEAK]
                EXPORT  OSCCTRL_XOSC1_Handler     [WEAK]
                EXPORT  OSCCTRL_DFLL_Handler      [WEAK]
                EXPORT  OSCCTRL_DPLL0_Handler     [WEAK]
                EXPORT  OSCCTRL_DPLL1_Handler     [WEAK]
                EXPORT  OSC32KCTRL_Handler        [WEAK]
                EXPORT  SUPC_OTHER_Handler        [WEAK]
                EXPORT  SUPC_BODDET_Handler       [WEAK]
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
                EXPORT  FREQM_Handler             [WEAK]
                EXPORT  NVMCTRL_0_Handler         [WEAK]
                EXPORT  NVMCTRL_1_Handler         [WEAK]
                EXPORT  DMAC_0_Handler            [WEAK]
                EXPORT  DMAC_1_Handler            [WEAK]
                EXPORT  DMAC_2_Handler            [WEAK]
                EXPORT  DMAC_3_Handler            [WEAK]
                EXPORT  DMAC_OTHER_Handler        [WEAK]
                EXPORT  EVSYS_0_Handler           [WEAK]
                EXPORT  EVSYS_1_Handler           [WEAK]
                EXPORT  EVSYS_2_Handler           [WEAK]
                EXPORT  EVSYS_3_Handler           [WEAK]
                EXPORT  EVSYS_OTHER_Handler       [WEAK]
                EXPORT  PAC_Handler               [WEAK]
                EXPORT  RAMECC_Handler            [WEAK]
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
                EXPORT  SERCOM3_0_Handler         [WEAK]
                EXPORT  SERCOM3_1_Handler         [WEAK]
                EXPORT  SERCOM3_2_Handler         [WEAK]
                EXPORT  SERCOM3_OTHER_Handler     [WEAK]
                EXPORT  SERCOM4_0_Handler         [WEAK]
                EXPORT  SERCOM4_1_Handler         [WEAK]
                EXPORT  SERCOM4_2_Handler         [WEAK]
                EXPORT  SERCOM4_OTHER_Handler     [WEAK]
                EXPORT  SERCOM5_0_Handler         [WEAK]
                EXPORT  SERCOM5_1_Handler         [WEAK]
                EXPORT  SERCOM5_2_Handler         [WEAK]
                EXPORT  SERCOM5_OTHER_Handler     [WEAK]
                EXPORT  SERCOM6_0_Handler         [WEAK]
                EXPORT  SERCOM6_1_Handler         [WEAK]
                EXPORT  SERCOM6_2_Handler         [WEAK]
                EXPORT  SERCOM6_OTHER_Handler     [WEAK]
                EXPORT  SERCOM7_0_Handler         [WEAK]
                EXPORT  SERCOM7_1_Handler         [WEAK]
                EXPORT  SERCOM7_2_Handler         [WEAK]
                EXPORT  SERCOM7_OTHER_Handler     [WEAK]
                EXPORT  CAN0_Handler              [WEAK]
                EXPORT  CAN1_Handler              [WEAK]
                EXPORT  USB_OTHER_Handler         [WEAK]
                EXPORT  USB_SOF_HSOF_Handler      [WEAK]
                EXPORT  USB_TRCPT0_Handler        [WEAK]
                EXPORT  USB_TRCPT1_Handler        [WEAK]
                EXPORT  GMAC_Handler              [WEAK]
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
                EXPORT  TCC2_OTHER_Handler        [WEAK]
                EXPORT  TCC2_MC0_Handler          [WEAK]
                EXPORT  TCC2_MC1_Handler          [WEAK]
                EXPORT  TCC2_MC2_Handler          [WEAK]
                EXPORT  TCC3_OTHER_Handler        [WEAK]
                EXPORT  TCC3_MC0_Handler          [WEAK]
                EXPORT  TCC3_MC1_Handler          [WEAK]
                EXPORT  TCC4_OTHER_Handler        [WEAK]
                EXPORT  TCC4_MC0_Handler          [WEAK]
                EXPORT  TCC4_MC1_Handler          [WEAK]
                EXPORT  TC0_Handler               [WEAK]
                EXPORT  TC1_Handler               [WEAK]
                EXPORT  TC2_Handler               [WEAK]
                EXPORT  TC3_Handler               [WEAK]
                EXPORT  TC4_Handler               [WEAK]
                EXPORT  TC5_Handler               [WEAK]
                EXPORT  TC6_Handler               [WEAK]
                EXPORT  TC7_Handler               [WEAK]
                EXPORT  PDEC_OTHER_Handler        [WEAK]
                EXPORT  PDEC_MC0_Handler          [WEAK]
                EXPORT  PDEC_MC1_Handler          [WEAK]
                EXPORT  ADC0_OTHER_Handler        [WEAK]
                EXPORT  ADC0_RESRDY_Handler       [WEAK]
                EXPORT  ADC1_OTHER_Handler        [WEAK]
                EXPORT  ADC1_RESRDY_Handler       [WEAK]
                EXPORT  AC_Handler                [WEAK]
                EXPORT  DAC_OTHER_Handler         [WEAK]
                EXPORT  DAC_EMPTY_0_Handler       [WEAK]
                EXPORT  DAC_EMPTY_1_Handler       [WEAK]
                EXPORT  DAC_RESRDY_0_Handler      [WEAK]
                EXPORT  DAC_RESRDY_1_Handler      [WEAK]
                EXPORT  I2S_Handler               [WEAK]
                EXPORT  PCC_Handler               [WEAK]
                EXPORT  AES_Handler               [WEAK]
                EXPORT  TRNG_Handler              [WEAK]
                EXPORT  ICM_Handler               [WEAK]
                EXPORT  PUKCC_Handler             [WEAK]
                EXPORT  QSPI_Handler              [WEAK]
                EXPORT  SDHC0_Handler             [WEAK]
                EXPORT  SDHC1_Handler             [WEAK]


PM_Handler               
MCLK_Handler             
OSCCTRL_XOSC0_Handler    
OSCCTRL_XOSC1_Handler    
OSCCTRL_DFLL_Handler     
OSCCTRL_DPLL0_Handler    
OSCCTRL_DPLL1_Handler    
OSC32KCTRL_Handler       
SUPC_OTHER_Handler       
SUPC_BODDET_Handler      
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
FREQM_Handler            
NVMCTRL_0_Handler        
NVMCTRL_1_Handler        
DMAC_0_Handler           
DMAC_1_Handler           
DMAC_2_Handler           
DMAC_3_Handler           
DMAC_OTHER_Handler       
EVSYS_0_Handler          
EVSYS_1_Handler          
EVSYS_2_Handler          
EVSYS_3_Handler          
EVSYS_OTHER_Handler      
PAC_Handler              
RAMECC_Handler           
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
SERCOM3_0_Handler        
SERCOM3_1_Handler        
SERCOM3_2_Handler        
SERCOM3_OTHER_Handler    
SERCOM4_0_Handler        
SERCOM4_1_Handler        
SERCOM4_2_Handler        
SERCOM4_OTHER_Handler    
SERCOM5_0_Handler        
SERCOM5_1_Handler        
SERCOM5_2_Handler        
SERCOM5_OTHER_Handler    
SERCOM6_0_Handler        
SERCOM6_1_Handler        
SERCOM6_2_Handler        
SERCOM6_OTHER_Handler    
SERCOM7_0_Handler        
SERCOM7_1_Handler        
SERCOM7_2_Handler        
SERCOM7_OTHER_Handler    
CAN0_Handler             
CAN1_Handler             
USB_OTHER_Handler        
USB_SOF_HSOF_Handler     
USB_TRCPT0_Handler       
USB_TRCPT1_Handler       
GMAC_Handler             
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
TCC2_OTHER_Handler       
TCC2_MC0_Handler         
TCC2_MC1_Handler         
TCC2_MC2_Handler         
TCC3_OTHER_Handler       
TCC3_MC0_Handler         
TCC3_MC1_Handler         
TCC4_OTHER_Handler       
TCC4_MC0_Handler         
TCC4_MC1_Handler         
TC0_Handler              
TC1_Handler              
TC2_Handler              
TC3_Handler              
TC4_Handler              
TC5_Handler              
TC6_Handler              
TC7_Handler              
PDEC_OTHER_Handler       
PDEC_MC0_Handler         
PDEC_MC1_Handler         
ADC0_OTHER_Handler       
ADC0_RESRDY_Handler      
ADC1_OTHER_Handler       
ADC1_RESRDY_Handler      
AC_Handler               
DAC_OTHER_Handler        
DAC_EMPTY_0_Handler      
DAC_EMPTY_1_Handler      
DAC_RESRDY_0_Handler     
DAC_RESRDY_1_Handler     
I2S_Handler              
PCC_Handler              
AES_Handler              
TRNG_Handler             
ICM_Handler              
PUKCC_Handler            
QSPI_Handler             
SDHC0_Handler            
SDHC1_Handler            
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

