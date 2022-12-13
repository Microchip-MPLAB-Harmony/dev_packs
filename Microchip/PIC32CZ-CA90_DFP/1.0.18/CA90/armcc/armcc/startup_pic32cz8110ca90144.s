;/*****************************************************************************
; * \file     startup_pic32cz8110ca90144.s
; * \brief    ARMCC startup file for PIC32CZ8110CA90144
; *
; * \note
; * Copyright (C) 2022 Microchip Technology Inc.
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
                DCD     FCW_Handler               ; 0  Flash Write Control (FCW) Handler
                DCD     FCR_ECCERR_Handler        ; 1  Flash Read Controller (FCR) Handler
                DCD     FCR_CRC_FAULT_Handler     ; 2  Flash Read Controller (FCR) Handler
                DCD     PM_Handler                ; 3  Power Manager Handler
                DCD     SUPC_Handler              ; 4  Supply Controller Handler
                DCD     OSCCTRL_FAIL_Handler      ; 5  Oscillators Control Handler
                DCD     OSCCTRL_XOSCRDY_Handler   ; 6  Oscillators Control Handler
                DCD     OSCCTRL_DFLLRDY_Handler   ; 7  Oscillators Control Handler
                DCD     OSCCTRL_OTHER_Handler     ; 8  Oscillators Control Handler
                DCD     OSCCTRL_LOCK_Handler      ; 9  Oscillators Control Handler
                DCD     OSC32KCTRL_FAIL_Handler   ; 10 32kHz Oscillators Control Handler
                DCD     OSC32KCTRL_RDY_Handler    ; 11 32kHz Oscillators Control Handler
                DCD     MCLK_Handler              ; 12 Main Clock Handler
                DCD     FREQM_Handler             ; 13 Frequency Meter Handler
                DCD     WDT_Handler               ; 14 Watchdog Timer Handler
                DCD     RTC_TAMPER_Handler        ; 15 Real-Time Counter Handler
                DCD     RTC_OVF_Handler           ; 16 Real-Time Counter Handler
                DCD     RTC_PERIOD_Handler        ; 17 Real-Time Counter Handler
                DCD     RTC_COMPARE_Handler       ; 18 Real-Time Counter Handler
                DCD     EIC_EXTINT_0_Handler      ; 19 External Interrupt Controller Handler
                DCD     EIC_EXTINT_1_Handler      ; 20 External Interrupt Controller Handler
                DCD     EIC_EXTINT_2_Handler      ; 21 External Interrupt Controller Handler
                DCD     EIC_EXTINT_3_Handler      ; 22 External Interrupt Controller Handler
                DCD     EIC_EXTINT_4_Handler      ; 23 External Interrupt Controller Handler
                DCD     EIC_EXTINT_5_Handler      ; 24 External Interrupt Controller Handler
                DCD     EIC_EXTINT_6_Handler      ; 25 External Interrupt Controller Handler
                DCD     EIC_EXTINT_7_Handler      ; 26 External Interrupt Controller Handler
                DCD     EIC_EXTINT_8_Handler      ; 27 External Interrupt Controller Handler
                DCD     EIC_EXTINT_9_Handler      ; 28 External Interrupt Controller Handler
                DCD     EIC_EXTINT_10_Handler     ; 29 External Interrupt Controller Handler
                DCD     EIC_EXTINT_11_Handler     ; 30 External Interrupt Controller Handler
                DCD     EIC_EXTINT_12_Handler     ; 31 External Interrupt Controller Handler
                DCD     EIC_EXTINT_13_Handler     ; 32 External Interrupt Controller Handler
                DCD     EIC_EXTINT_14_Handler     ; 33 External Interrupt Controller Handler
                DCD     EIC_EXTINT_15_Handler     ; 34 External Interrupt Controller Handler
                DCD     PAC_Handler               ; 35 Peripheral Access Controller Handler
                DCD     DRMTCM_Handler            ; 36 DRM TCM ECC Handler
                DCD     MCRAMC_Handler            ; 37 Multi-Channel RAM Controller Handler
                DCD     TRAM_Handler              ; 38 TrustRAM Handler
                DCD     DMA_PRI3_Handler          ; 39 Direct Memory Access Controller Handler
                DCD     DMA_PRI2_Handler          ; 40 Direct Memory Access Controller Handler
                DCD     DMA_PRI1_Handler          ; 41 Direct Memory Access Controller Handler
                DCD     DMA_PRI0_Handler          ; 42 Direct Memory Access Controller Handler
                DCD     EVSYS_0_Handler           ; 43 Event System Interface Handler
                DCD     EVSYS_1_Handler           ; 44 Event System Interface Handler
                DCD     EVSYS_2_Handler           ; 45 Event System Interface Handler
                DCD     EVSYS_3_Handler           ; 46 Event System Interface Handler
                DCD     EVSYS_4_Handler           ; 47 Event System Interface Handler
                DCD     EVSYS_5_Handler           ; 48 Event System Interface Handler
                DCD     EVSYS_6_Handler           ; 49 Event System Interface Handler
                DCD     EVSYS_7_Handler           ; 50 Event System Interface Handler
                DCD     EVSYS_8_Handler           ; 51 Event System Interface Handler
                DCD     EVSYS_9_Handler           ; 52 Event System Interface Handler
                DCD     EVSYS_10_Handler          ; 53 Event System Interface Handler
                DCD     EVSYS_11_Handler          ; 54 Event System Interface Handler
                DCD     SERCOM0_6_Handler         ; 55 Serial Communication Interface Handler
                DCD     SERCOM0_5_Handler         ; 56 Serial Communication Interface Handler
                DCD     SERCOM0_0_Handler         ; 57 Serial Communication Interface Handler
                DCD     SERCOM0_1_Handler         ; 58 Serial Communication Interface Handler
                DCD     SERCOM0_2_Handler         ; 59 Serial Communication Interface Handler
                DCD     SERCOM0_3_Handler         ; 60 Serial Communication Interface Handler
                DCD     SERCOM0_4_Handler         ; 61 Serial Communication Interface Handler
                DCD     SERCOM1_6_Handler         ; 62 Serial Communication Interface Handler
                DCD     SERCOM1_5_Handler         ; 63 Serial Communication Interface Handler
                DCD     SERCOM1_0_Handler         ; 64 Serial Communication Interface Handler
                DCD     SERCOM1_1_Handler         ; 65 Serial Communication Interface Handler
                DCD     SERCOM1_2_Handler         ; 66 Serial Communication Interface Handler
                DCD     SERCOM1_3_Handler         ; 67 Serial Communication Interface Handler
                DCD     SERCOM1_4_Handler         ; 68 Serial Communication Interface Handler
                DCD     SERCOM2_6_Handler         ; 69 Serial Communication Interface Handler
                DCD     SERCOM2_5_Handler         ; 70 Serial Communication Interface Handler
                DCD     SERCOM2_0_Handler         ; 71 Serial Communication Interface Handler
                DCD     SERCOM2_1_Handler         ; 72 Serial Communication Interface Handler
                DCD     SERCOM2_2_Handler         ; 73 Serial Communication Interface Handler
                DCD     SERCOM2_3_Handler         ; 74 Serial Communication Interface Handler
                DCD     SERCOM2_4_Handler         ; 75 Serial Communication Interface Handler
                DCD     SERCOM3_6_Handler         ; 76 Serial Communication Interface Handler
                DCD     SERCOM3_5_Handler         ; 77 Serial Communication Interface Handler
                DCD     SERCOM3_0_Handler         ; 78 Serial Communication Interface Handler
                DCD     SERCOM3_1_Handler         ; 79 Serial Communication Interface Handler
                DCD     SERCOM3_2_Handler         ; 80 Serial Communication Interface Handler
                DCD     SERCOM3_3_Handler         ; 81 Serial Communication Interface Handler
                DCD     SERCOM3_4_Handler         ; 82 Serial Communication Interface Handler
                DCD     SERCOM4_6_Handler         ; 83 Serial Communication Interface Handler
                DCD     SERCOM4_5_Handler         ; 84 Serial Communication Interface Handler
                DCD     SERCOM4_0_Handler         ; 85 Serial Communication Interface Handler
                DCD     SERCOM4_1_Handler         ; 86 Serial Communication Interface Handler
                DCD     SERCOM4_2_Handler         ; 87 Serial Communication Interface Handler
                DCD     SERCOM4_3_Handler         ; 88 Serial Communication Interface Handler
                DCD     SERCOM4_4_Handler         ; 89 Serial Communication Interface Handler
                DCD     SERCOM5_6_Handler         ; 90 Serial Communication Interface Handler
                DCD     SERCOM5_5_Handler         ; 91 Serial Communication Interface Handler
                DCD     SERCOM5_0_Handler         ; 92 Serial Communication Interface Handler
                DCD     SERCOM5_1_Handler         ; 93 Serial Communication Interface Handler
                DCD     SERCOM5_2_Handler         ; 94 Serial Communication Interface Handler
                DCD     SERCOM5_3_Handler         ; 95 Serial Communication Interface Handler
                DCD     SERCOM5_4_Handler         ; 96 Serial Communication Interface Handler
                DCD     0                         ; 97 Reserved
                DCD     0                         ; 98 Reserved
                DCD     0                         ; 99 Reserved
                DCD     0                         ; 100 Reserved
                DCD     0                         ; 101 Reserved
                DCD     0                         ; 102 Reserved
                DCD     0                         ; 103 Reserved
                DCD     0                         ; 104 Reserved
                DCD     0                         ; 105 Reserved
                DCD     0                         ; 106 Reserved
                DCD     0                         ; 107 Reserved
                DCD     0                         ; 108 Reserved
                DCD     0                         ; 109 Reserved
                DCD     0                         ; 110 Reserved
                DCD     0                         ; 111 Reserved
                DCD     0                         ; 112 Reserved
                DCD     0                         ; 113 Reserved
                DCD     0                         ; 114 Reserved
                DCD     0                         ; 115 Reserved
                DCD     0                         ; 116 Reserved
                DCD     0                         ; 117 Reserved
                DCD     0                         ; 118 Reserved
                DCD     0                         ; 119 Reserved
                DCD     0                         ; 120 Reserved
                DCD     0                         ; 121 Reserved
                DCD     0                         ; 122 Reserved
                DCD     0                         ; 123 Reserved
                DCD     0                         ; 124 Reserved
                DCD     TCC0_OTHER_Handler        ; 125 Timer Counter for Control Applications Handler
                DCD     TCC0_CNT_TRIG_Handler     ; 126 Timer Counter for Control Applications Handler
                DCD     TCC0_MC0_Handler          ; 127 Timer Counter for Control Applications Handler
                DCD     TCC0_MC1_Handler          ; 128 Timer Counter for Control Applications Handler
                DCD     TCC0_MC2_Handler          ; 129 Timer Counter for Control Applications Handler
                DCD     TCC0_MC3_Handler          ; 130 Timer Counter for Control Applications Handler
                DCD     TCC0_MC4_Handler          ; 131 Timer Counter for Control Applications Handler
                DCD     TCC0_MC5_Handler          ; 132 Timer Counter for Control Applications Handler
                DCD     TCC0_MC6_Handler          ; 133 Timer Counter for Control Applications Handler
                DCD     TCC0_MC7_Handler          ; 134 Timer Counter for Control Applications Handler
                DCD     TCC1_OTHER_Handler        ; 135 Timer Counter for Control Applications Handler
                DCD     TCC1_CNT_TRIG_Handler     ; 136 Timer Counter for Control Applications Handler
                DCD     TCC1_MC0_Handler          ; 137 Timer Counter for Control Applications Handler
                DCD     TCC1_MC1_Handler          ; 138 Timer Counter for Control Applications Handler
                DCD     TCC1_MC2_Handler          ; 139 Timer Counter for Control Applications Handler
                DCD     TCC1_MC3_Handler          ; 140 Timer Counter for Control Applications Handler
                DCD     TCC1_MC4_Handler          ; 141 Timer Counter for Control Applications Handler
                DCD     TCC1_MC5_Handler          ; 142 Timer Counter for Control Applications Handler
                DCD     TCC1_MC6_Handler          ; 143 Timer Counter for Control Applications Handler
                DCD     TCC1_MC7_Handler          ; 144 Timer Counter for Control Applications Handler
                DCD     TCC2_OTHER_Handler        ; 145 Timer Counter for Control Applications Handler
                DCD     TCC2_CNT_TRIG_Handler     ; 146 Timer Counter for Control Applications Handler
                DCD     TCC2_MC0_Handler          ; 147 Timer Counter for Control Applications Handler
                DCD     TCC2_MC1_Handler          ; 148 Timer Counter for Control Applications Handler
                DCD     TCC2_MC2_Handler          ; 149 Timer Counter for Control Applications Handler
                DCD     TCC2_MC3_Handler          ; 150 Timer Counter for Control Applications Handler
                DCD     TCC2_MC4_Handler          ; 151 Timer Counter for Control Applications Handler
                DCD     TCC2_MC5_Handler          ; 152 Timer Counter for Control Applications Handler
                DCD     TCC3_OTHER_Handler        ; 153 Timer Counter for Control Applications Handler
                DCD     TCC3_CNT_TRIG_Handler     ; 154 Timer Counter for Control Applications Handler
                DCD     TCC3_MC0_Handler          ; 155 Timer Counter for Control Applications Handler
                DCD     TCC3_MC1_Handler          ; 156 Timer Counter for Control Applications Handler
                DCD     TCC4_OTHER_Handler        ; 157 Timer Counter for Control Applications Handler
                DCD     TCC4_CNT_TRIG_Handler     ; 158 Timer Counter for Control Applications Handler
                DCD     TCC4_MC0_Handler          ; 159 Timer Counter for Control Applications Handler
                DCD     TCC4_MC1_Handler          ; 160 Timer Counter for Control Applications Handler
                DCD     TCC5_OTHER_Handler        ; 161 Timer Counter for Control Applications Handler
                DCD     TCC5_CNT_TRIG_Handler     ; 162 Timer Counter for Control Applications Handler
                DCD     TCC5_MC0_Handler          ; 163 Timer Counter for Control Applications Handler
                DCD     TCC5_MC1_Handler          ; 164 Timer Counter for Control Applications Handler
                DCD     TCC6_OTHER_Handler        ; 165 Timer Counter for Control Applications Handler
                DCD     TCC6_CNT_TRIG_Handler     ; 166 Timer Counter for Control Applications Handler
                DCD     TCC6_MC0_Handler          ; 167 Timer Counter for Control Applications Handler
                DCD     TCC6_MC1_Handler          ; 168 Timer Counter for Control Applications Handler
                DCD     TCC7_OTHER_Handler        ; 169 Timer Counter for Control Applications Handler
                DCD     TCC7_CNT_TRIG_Handler     ; 170 Timer Counter for Control Applications Handler
                DCD     TCC7_MC0_Handler          ; 171 Timer Counter for Control Applications Handler
                DCD     TCC7_MC1_Handler          ; 172 Timer Counter for Control Applications Handler
                DCD     TCC8_OTHER_Handler        ; 173 Timer Counter for Control Applications Handler
                DCD     TCC8_CNT_TRIG_Handler     ; 174 Timer Counter for Control Applications Handler
                DCD     TCC8_MC0_Handler          ; 175 Timer Counter for Control Applications Handler
                DCD     TCC8_MC1_Handler          ; 176 Timer Counter for Control Applications Handler
                DCD     TCC9_OTHER_Handler        ; 177 Timer Counter for Control Applications Handler
                DCD     TCC9_CNT_TRIG_Handler     ; 178 Timer Counter for Control Applications Handler
                DCD     TCC9_MC0_Handler          ; 179 Timer Counter for Control Applications Handler
                DCD     TCC9_MC1_Handler          ; 180 Timer Counter for Control Applications Handler
                DCD     TCC9_MC2_Handler          ; 181 Timer Counter for Control Applications Handler
                DCD     TCC9_MC3_Handler          ; 182 Timer Counter for Control Applications Handler
                DCD     TCC9_MC4_Handler          ; 183 Timer Counter for Control Applications Handler
                DCD     TCC9_MC5_Handler          ; 184 Timer Counter for Control Applications Handler
                DCD     ADC_GLOBAL_Handler        ; 185 ADC Controller Handler
                DCD     ADC_CORE1_Handler         ; 186 ADC Controller Handler
                DCD     ADC_CORE2_Handler         ; 187 ADC Controller Handler
                DCD     ADC_CORE3_Handler         ; 188 ADC Controller Handler
                DCD     ADC_CORE4_Handler         ; 189 ADC Controller Handler
                DCD     AC_Handler                ; 190 Analog Comparator Controller Handler
                DCD     PTC_Handler               ; 191 Peripheral Touch Controller Handler
                DCD     SPI_IXS0_Handler          ; 192 Audio SPI with 8 channels compatibilty Handler
                DCD     0                         ; 193 Reserved
                DCD     CAN0_Handler              ; 194 Control Area Network Handler
                DCD     CAN1_Handler              ; 195 Control Area Network Handler
                DCD     CAN2_Handler              ; 196 Control Area Network Handler
                DCD     CAN3_Handler              ; 197 Control Area Network Handler
                DCD     0                         ; 198 Reserved
                DCD     0                         ; 199 Reserved
                DCD     0                         ; 200 Reserved
                DCD     0                         ; 201 Reserved
                DCD     ETH_PRI_Q_0_Handler       ; 202 Ethernet Controller Handler
                DCD     ETH_PRI_Q_1_Handler       ; 203 Ethernet Controller Handler
                DCD     ETH_PRI_Q_2_Handler       ; 204 Ethernet Controller Handler
                DCD     ETH_PRI_Q_3_Handler       ; 205 Ethernet Controller Handler
                DCD     ETH_PRI_Q_4_Handler       ; 206 Ethernet Controller Handler
                DCD     ETH_PRI_Q_5_Handler       ; 207 Ethernet Controller Handler
                DCD     SQI0_Handler              ; 208 Polaris Serial Quad Interface SIB Handler
                DCD     0                         ; 209 Reserved
                DCD     TRNG_Handler              ; 210 True Random Generator Handler
                DCD     SDMMC0_Handler            ; 211 SD/MMC Host Controller Handler
                DCD     0                         ; 212 Reserved
                DCD     USBHS0_Handler            ; 213 USB High Speed Handler
                DCD     0                         ; 214 Reserved
                DCD     HSM_TAMPER_Handler        ; 215 Hardware Security Module Handler
                DCD     HSM_TXINT_Handler         ; 216 Hardware Security Module Handler
                DCD     HSM_RXINT_Handler         ; 217 Hardware Security Module Handler
                DCD     MLB_GENERAL_Handler       ; 218 Media Local Bus Handler
                DCD     MLB_BUSREQ_Handler        ; 219 Media Local Bus Handler
                DCD     0                         ; 220 Reserved
                DCD     0                         ; 221 Reserved
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
                EXPORT  FCW_Handler               [WEAK]
                EXPORT  FCR_ECCERR_Handler        [WEAK]
                EXPORT  FCR_CRC_FAULT_Handler     [WEAK]
                EXPORT  PM_Handler                [WEAK]
                EXPORT  SUPC_Handler              [WEAK]
                EXPORT  OSCCTRL_FAIL_Handler      [WEAK]
                EXPORT  OSCCTRL_XOSCRDY_Handler   [WEAK]
                EXPORT  OSCCTRL_DFLLRDY_Handler   [WEAK]
                EXPORT  OSCCTRL_OTHER_Handler     [WEAK]
                EXPORT  OSCCTRL_LOCK_Handler      [WEAK]
                EXPORT  OSC32KCTRL_FAIL_Handler   [WEAK]
                EXPORT  OSC32KCTRL_RDY_Handler    [WEAK]
                EXPORT  MCLK_Handler              [WEAK]
                EXPORT  FREQM_Handler             [WEAK]
                EXPORT  WDT_Handler               [WEAK]
                EXPORT  RTC_TAMPER_Handler        [WEAK]
                EXPORT  RTC_OVF_Handler           [WEAK]
                EXPORT  RTC_PERIOD_Handler        [WEAK]
                EXPORT  RTC_COMPARE_Handler       [WEAK]
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
                EXPORT  PAC_Handler               [WEAK]
                EXPORT  DRMTCM_Handler            [WEAK]
                EXPORT  MCRAMC_Handler            [WEAK]
                EXPORT  TRAM_Handler              [WEAK]
                EXPORT  DMA_PRI3_Handler          [WEAK]
                EXPORT  DMA_PRI2_Handler          [WEAK]
                EXPORT  DMA_PRI1_Handler          [WEAK]
                EXPORT  DMA_PRI0_Handler          [WEAK]
                EXPORT  EVSYS_0_Handler           [WEAK]
                EXPORT  EVSYS_1_Handler           [WEAK]
                EXPORT  EVSYS_2_Handler           [WEAK]
                EXPORT  EVSYS_3_Handler           [WEAK]
                EXPORT  EVSYS_4_Handler           [WEAK]
                EXPORT  EVSYS_5_Handler           [WEAK]
                EXPORT  EVSYS_6_Handler           [WEAK]
                EXPORT  EVSYS_7_Handler           [WEAK]
                EXPORT  EVSYS_8_Handler           [WEAK]
                EXPORT  EVSYS_9_Handler           [WEAK]
                EXPORT  EVSYS_10_Handler          [WEAK]
                EXPORT  EVSYS_11_Handler          [WEAK]
                EXPORT  SERCOM0_6_Handler         [WEAK]
                EXPORT  SERCOM0_5_Handler         [WEAK]
                EXPORT  SERCOM0_0_Handler         [WEAK]
                EXPORT  SERCOM0_1_Handler         [WEAK]
                EXPORT  SERCOM0_2_Handler         [WEAK]
                EXPORT  SERCOM0_3_Handler         [WEAK]
                EXPORT  SERCOM0_4_Handler         [WEAK]
                EXPORT  SERCOM1_6_Handler         [WEAK]
                EXPORT  SERCOM1_5_Handler         [WEAK]
                EXPORT  SERCOM1_0_Handler         [WEAK]
                EXPORT  SERCOM1_1_Handler         [WEAK]
                EXPORT  SERCOM1_2_Handler         [WEAK]
                EXPORT  SERCOM1_3_Handler         [WEAK]
                EXPORT  SERCOM1_4_Handler         [WEAK]
                EXPORT  SERCOM2_6_Handler         [WEAK]
                EXPORT  SERCOM2_5_Handler         [WEAK]
                EXPORT  SERCOM2_0_Handler         [WEAK]
                EXPORT  SERCOM2_1_Handler         [WEAK]
                EXPORT  SERCOM2_2_Handler         [WEAK]
                EXPORT  SERCOM2_3_Handler         [WEAK]
                EXPORT  SERCOM2_4_Handler         [WEAK]
                EXPORT  SERCOM3_6_Handler         [WEAK]
                EXPORT  SERCOM3_5_Handler         [WEAK]
                EXPORT  SERCOM3_0_Handler         [WEAK]
                EXPORT  SERCOM3_1_Handler         [WEAK]
                EXPORT  SERCOM3_2_Handler         [WEAK]
                EXPORT  SERCOM3_3_Handler         [WEAK]
                EXPORT  SERCOM3_4_Handler         [WEAK]
                EXPORT  SERCOM4_6_Handler         [WEAK]
                EXPORT  SERCOM4_5_Handler         [WEAK]
                EXPORT  SERCOM4_0_Handler         [WEAK]
                EXPORT  SERCOM4_1_Handler         [WEAK]
                EXPORT  SERCOM4_2_Handler         [WEAK]
                EXPORT  SERCOM4_3_Handler         [WEAK]
                EXPORT  SERCOM4_4_Handler         [WEAK]
                EXPORT  SERCOM5_6_Handler         [WEAK]
                EXPORT  SERCOM5_5_Handler         [WEAK]
                EXPORT  SERCOM5_0_Handler         [WEAK]
                EXPORT  SERCOM5_1_Handler         [WEAK]
                EXPORT  SERCOM5_2_Handler         [WEAK]
                EXPORT  SERCOM5_3_Handler         [WEAK]
                EXPORT  SERCOM5_4_Handler         [WEAK]
                EXPORT  TCC0_OTHER_Handler        [WEAK]
                EXPORT  TCC0_CNT_TRIG_Handler     [WEAK]
                EXPORT  TCC0_MC0_Handler          [WEAK]
                EXPORT  TCC0_MC1_Handler          [WEAK]
                EXPORT  TCC0_MC2_Handler          [WEAK]
                EXPORT  TCC0_MC3_Handler          [WEAK]
                EXPORT  TCC0_MC4_Handler          [WEAK]
                EXPORT  TCC0_MC5_Handler          [WEAK]
                EXPORT  TCC0_MC6_Handler          [WEAK]
                EXPORT  TCC0_MC7_Handler          [WEAK]
                EXPORT  TCC1_OTHER_Handler        [WEAK]
                EXPORT  TCC1_CNT_TRIG_Handler     [WEAK]
                EXPORT  TCC1_MC0_Handler          [WEAK]
                EXPORT  TCC1_MC1_Handler          [WEAK]
                EXPORT  TCC1_MC2_Handler          [WEAK]
                EXPORT  TCC1_MC3_Handler          [WEAK]
                EXPORT  TCC1_MC4_Handler          [WEAK]
                EXPORT  TCC1_MC5_Handler          [WEAK]
                EXPORT  TCC1_MC6_Handler          [WEAK]
                EXPORT  TCC1_MC7_Handler          [WEAK]
                EXPORT  TCC2_OTHER_Handler        [WEAK]
                EXPORT  TCC2_CNT_TRIG_Handler     [WEAK]
                EXPORT  TCC2_MC0_Handler          [WEAK]
                EXPORT  TCC2_MC1_Handler          [WEAK]
                EXPORT  TCC2_MC2_Handler          [WEAK]
                EXPORT  TCC2_MC3_Handler          [WEAK]
                EXPORT  TCC2_MC4_Handler          [WEAK]
                EXPORT  TCC2_MC5_Handler          [WEAK]
                EXPORT  TCC3_OTHER_Handler        [WEAK]
                EXPORT  TCC3_CNT_TRIG_Handler     [WEAK]
                EXPORT  TCC3_MC0_Handler          [WEAK]
                EXPORT  TCC3_MC1_Handler          [WEAK]
                EXPORT  TCC4_OTHER_Handler        [WEAK]
                EXPORT  TCC4_CNT_TRIG_Handler     [WEAK]
                EXPORT  TCC4_MC0_Handler          [WEAK]
                EXPORT  TCC4_MC1_Handler          [WEAK]
                EXPORT  TCC5_OTHER_Handler        [WEAK]
                EXPORT  TCC5_CNT_TRIG_Handler     [WEAK]
                EXPORT  TCC5_MC0_Handler          [WEAK]
                EXPORT  TCC5_MC1_Handler          [WEAK]
                EXPORT  TCC6_OTHER_Handler        [WEAK]
                EXPORT  TCC6_CNT_TRIG_Handler     [WEAK]
                EXPORT  TCC6_MC0_Handler          [WEAK]
                EXPORT  TCC6_MC1_Handler          [WEAK]
                EXPORT  TCC7_OTHER_Handler        [WEAK]
                EXPORT  TCC7_CNT_TRIG_Handler     [WEAK]
                EXPORT  TCC7_MC0_Handler          [WEAK]
                EXPORT  TCC7_MC1_Handler          [WEAK]
                EXPORT  TCC8_OTHER_Handler        [WEAK]
                EXPORT  TCC8_CNT_TRIG_Handler     [WEAK]
                EXPORT  TCC8_MC0_Handler          [WEAK]
                EXPORT  TCC8_MC1_Handler          [WEAK]
                EXPORT  TCC9_OTHER_Handler        [WEAK]
                EXPORT  TCC9_CNT_TRIG_Handler     [WEAK]
                EXPORT  TCC9_MC0_Handler          [WEAK]
                EXPORT  TCC9_MC1_Handler          [WEAK]
                EXPORT  TCC9_MC2_Handler          [WEAK]
                EXPORT  TCC9_MC3_Handler          [WEAK]
                EXPORT  TCC9_MC4_Handler          [WEAK]
                EXPORT  TCC9_MC5_Handler          [WEAK]
                EXPORT  ADC_GLOBAL_Handler        [WEAK]
                EXPORT  ADC_CORE1_Handler         [WEAK]
                EXPORT  ADC_CORE2_Handler         [WEAK]
                EXPORT  ADC_CORE3_Handler         [WEAK]
                EXPORT  ADC_CORE4_Handler         [WEAK]
                EXPORT  AC_Handler                [WEAK]
                EXPORT  PTC_Handler               [WEAK]
                EXPORT  SPI_IXS0_Handler          [WEAK]
                EXPORT  CAN0_Handler              [WEAK]
                EXPORT  CAN1_Handler              [WEAK]
                EXPORT  CAN2_Handler              [WEAK]
                EXPORT  CAN3_Handler              [WEAK]
                EXPORT  ETH_PRI_Q_0_Handler       [WEAK]
                EXPORT  ETH_PRI_Q_1_Handler       [WEAK]
                EXPORT  ETH_PRI_Q_2_Handler       [WEAK]
                EXPORT  ETH_PRI_Q_3_Handler       [WEAK]
                EXPORT  ETH_PRI_Q_4_Handler       [WEAK]
                EXPORT  ETH_PRI_Q_5_Handler       [WEAK]
                EXPORT  SQI0_Handler              [WEAK]
                EXPORT  TRNG_Handler              [WEAK]
                EXPORT  SDMMC0_Handler            [WEAK]
                EXPORT  USBHS0_Handler            [WEAK]
                EXPORT  HSM_TAMPER_Handler        [WEAK]
                EXPORT  HSM_TXINT_Handler         [WEAK]
                EXPORT  HSM_RXINT_Handler         [WEAK]
                EXPORT  MLB_GENERAL_Handler       [WEAK]
                EXPORT  MLB_BUSREQ_Handler        [WEAK]


FCW_Handler              
FCR_ECCERR_Handler       
FCR_CRC_FAULT_Handler    
PM_Handler               
SUPC_Handler             
OSCCTRL_FAIL_Handler     
OSCCTRL_XOSCRDY_Handler  
OSCCTRL_DFLLRDY_Handler  
OSCCTRL_OTHER_Handler    
OSCCTRL_LOCK_Handler     
OSC32KCTRL_FAIL_Handler  
OSC32KCTRL_RDY_Handler   
MCLK_Handler             
FREQM_Handler            
WDT_Handler              
RTC_TAMPER_Handler       
RTC_OVF_Handler          
RTC_PERIOD_Handler       
RTC_COMPARE_Handler      
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
PAC_Handler              
DRMTCM_Handler           
MCRAMC_Handler           
TRAM_Handler             
DMA_PRI3_Handler         
DMA_PRI2_Handler         
DMA_PRI1_Handler         
DMA_PRI0_Handler         
EVSYS_0_Handler          
EVSYS_1_Handler          
EVSYS_2_Handler          
EVSYS_3_Handler          
EVSYS_4_Handler          
EVSYS_5_Handler          
EVSYS_6_Handler          
EVSYS_7_Handler          
EVSYS_8_Handler          
EVSYS_9_Handler          
EVSYS_10_Handler         
EVSYS_11_Handler         
SERCOM0_6_Handler        
SERCOM0_5_Handler        
SERCOM0_0_Handler        
SERCOM0_1_Handler        
SERCOM0_2_Handler        
SERCOM0_3_Handler        
SERCOM0_4_Handler        
SERCOM1_6_Handler        
SERCOM1_5_Handler        
SERCOM1_0_Handler        
SERCOM1_1_Handler        
SERCOM1_2_Handler        
SERCOM1_3_Handler        
SERCOM1_4_Handler        
SERCOM2_6_Handler        
SERCOM2_5_Handler        
SERCOM2_0_Handler        
SERCOM2_1_Handler        
SERCOM2_2_Handler        
SERCOM2_3_Handler        
SERCOM2_4_Handler        
SERCOM3_6_Handler        
SERCOM3_5_Handler        
SERCOM3_0_Handler        
SERCOM3_1_Handler        
SERCOM3_2_Handler        
SERCOM3_3_Handler        
SERCOM3_4_Handler        
SERCOM4_6_Handler        
SERCOM4_5_Handler        
SERCOM4_0_Handler        
SERCOM4_1_Handler        
SERCOM4_2_Handler        
SERCOM4_3_Handler        
SERCOM4_4_Handler        
SERCOM5_6_Handler        
SERCOM5_5_Handler        
SERCOM5_0_Handler        
SERCOM5_1_Handler        
SERCOM5_2_Handler        
SERCOM5_3_Handler        
SERCOM5_4_Handler        
TCC0_OTHER_Handler       
TCC0_CNT_TRIG_Handler    
TCC0_MC0_Handler         
TCC0_MC1_Handler         
TCC0_MC2_Handler         
TCC0_MC3_Handler         
TCC0_MC4_Handler         
TCC0_MC5_Handler         
TCC0_MC6_Handler         
TCC0_MC7_Handler         
TCC1_OTHER_Handler       
TCC1_CNT_TRIG_Handler    
TCC1_MC0_Handler         
TCC1_MC1_Handler         
TCC1_MC2_Handler         
TCC1_MC3_Handler         
TCC1_MC4_Handler         
TCC1_MC5_Handler         
TCC1_MC6_Handler         
TCC1_MC7_Handler         
TCC2_OTHER_Handler       
TCC2_CNT_TRIG_Handler    
TCC2_MC0_Handler         
TCC2_MC1_Handler         
TCC2_MC2_Handler         
TCC2_MC3_Handler         
TCC2_MC4_Handler         
TCC2_MC5_Handler         
TCC3_OTHER_Handler       
TCC3_CNT_TRIG_Handler    
TCC3_MC0_Handler         
TCC3_MC1_Handler         
TCC4_OTHER_Handler       
TCC4_CNT_TRIG_Handler    
TCC4_MC0_Handler         
TCC4_MC1_Handler         
TCC5_OTHER_Handler       
TCC5_CNT_TRIG_Handler    
TCC5_MC0_Handler         
TCC5_MC1_Handler         
TCC6_OTHER_Handler       
TCC6_CNT_TRIG_Handler    
TCC6_MC0_Handler         
TCC6_MC1_Handler         
TCC7_OTHER_Handler       
TCC7_CNT_TRIG_Handler    
TCC7_MC0_Handler         
TCC7_MC1_Handler         
TCC8_OTHER_Handler       
TCC8_CNT_TRIG_Handler    
TCC8_MC0_Handler         
TCC8_MC1_Handler         
TCC9_OTHER_Handler       
TCC9_CNT_TRIG_Handler    
TCC9_MC0_Handler         
TCC9_MC1_Handler         
TCC9_MC2_Handler         
TCC9_MC3_Handler         
TCC9_MC4_Handler         
TCC9_MC5_Handler         
ADC_GLOBAL_Handler       
ADC_CORE1_Handler        
ADC_CORE2_Handler        
ADC_CORE3_Handler        
ADC_CORE4_Handler        
AC_Handler               
PTC_Handler              
SPI_IXS0_Handler         
CAN0_Handler             
CAN1_Handler             
CAN2_Handler             
CAN3_Handler             
ETH_PRI_Q_0_Handler      
ETH_PRI_Q_1_Handler      
ETH_PRI_Q_2_Handler      
ETH_PRI_Q_3_Handler      
ETH_PRI_Q_4_Handler      
ETH_PRI_Q_5_Handler      
SQI0_Handler             
TRNG_Handler             
SDMMC0_Handler           
USBHS0_Handler           
HSM_TAMPER_Handler       
HSM_TXINT_Handler        
HSM_RXINT_Handler        
MLB_GENERAL_Handler      
MLB_BUSREQ_Handler       
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

