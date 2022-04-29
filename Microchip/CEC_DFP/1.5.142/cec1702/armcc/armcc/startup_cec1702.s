;/*****************************************************************************
; * \file     startup_cec1702.s
; * \brief    ARMCC startup file for CEC1702
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
                DCD     GIRQ08_Handler            ; 0  GPIO Pin Control Registers Handler
                DCD     GIRQ09_Handler            ; 1  GPIO Pin Control Registers Handler
                DCD     GIRQ10_Handler            ; 2  GPIO Pin Control Registers Handler
                DCD     GIRQ11_Handler            ; 3  GPIO Pin Control Registers Handler
                DCD     GIRQ12_Handler            ; 4  GPIO Pin Control Registers Handler
                DCD     0                         ; 5  Reserved
                DCD     0                         ; 6  Reserved
                DCD     0                         ; 7  Reserved
                DCD     0                         ; 8  Reserved
                DCD     0                         ; 9  Reserved
                DCD     0                         ; 10 Reserved
                DCD     0                         ; 11 Reserved
                DCD     0                         ; 12 Reserved
                DCD     0                         ; 13 Reserved
                DCD     0                         ; 14 Reserved
                DCD     0                         ; 15 Reserved
                DCD     0                         ; 16 Reserved
                DCD     GIRQ26_Handler            ; 17 GPIO Pin Control Registers Handler
                DCD     0                         ; 18 Reserved
                DCD     0                         ; 19 Reserved
                DCD     SMB0_Handler              ; 20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. Handler
                DCD     SMB1_Handler              ; 21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. Handler
                DCD     SMB2_Handler              ; 22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. Handler
                DCD     SMB3_Handler              ; 23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. Handler
                DCD     DMA_CH00_Handler          ; 24 DMA Channel 00 Registers Handler
                DCD     DMA_CH01_Handler          ; 25 DMA Channel 01 Registers Handler
                DCD     DMA_CH02_Handler          ; 26 DMA Channel 00 Registers Handler
                DCD     DMA_CH03_Handler          ; 27 DMA Channel 00 Registers Handler
                DCD     DMA_CH04_Handler          ; 28 DMA Channel 00 Registers Handler
                DCD     DMA_CH05_Handler          ; 29 DMA Channel 00 Registers Handler
                DCD     DMA_CH06_Handler          ; 30 DMA Channel 00 Registers Handler
                DCD     DMA_CH07_Handler          ; 31 DMA Channel 00 Registers Handler
                DCD     DMA_CH08_Handler          ; 32 DMA Channel 00 Registers Handler
                DCD     DMA_CH09_Handler          ; 33 DMA Channel 00 Registers Handler
                DCD     DMA_CH10_Handler          ; 34 DMA Channel 00 Registers Handler
                DCD     DMA_CH11_Handler          ; 35 DMA Channel 00 Registers Handler
                DCD     DMA_CH12_Handler          ; 36 DMA Channel 00 Registers Handler
                DCD     DMA_CH13_Handler          ; 37 DMA Channel 00 Registers Handler
                DCD     0                         ; 38 Reserved
                DCD     0                         ; 39 Reserved
                DCD     UART0_Handler             ; 40 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n          full-function Two Pin Serial Port that supports the standard RS-232 Interface. Handler
                DCD     UART1_Handler             ; 41 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n          full-function Two Pin Serial Port that supports the standard RS-232 Interface. Handler
                DCD     0                         ; 42 Reserved
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
                DCD     0                         ; 55 Reserved
                DCD     0                         ; 56 Reserved
                DCD     0                         ; 57 Reserved
                DCD     0                         ; 58 Reserved
                DCD     0                         ; 59 Reserved
                DCD     0                         ; 60 Reserved
                DCD     0                         ; 61 Reserved
                DCD     0                         ; 62 Reserved
                DCD     0                         ; 63 Reserved
                DCD     0                         ; 64 Reserved
                DCD     0                         ; 65 Reserved
                DCD     0                         ; 66 Reserved
                DCD     0                         ; 67 Reserved
                DCD     0                         ; 68 Reserved
                DCD     0                         ; 69 Reserved
                DCD     0                         ; 70 Reserved
                DCD     TACH0_Handler             ; 71 This block monitors TACH output signals (or locked rotor signals) from\n       various types of fans, and determines their speed. Handler
                DCD     TACH1_Handler             ; 72 This block monitors TACH output signals (or locked rotor signals) from\n       various types of fans, and determines their speed. Handler
                DCD     0                         ; 73 Reserved
                DCD     RPM2PWM_0_FAIL_Handler    ; 74 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. Handler
                DCD     RPM2PWM_0_STALL_Handler   ; 75 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. Handler
                DCD     RPM2PWM_1_FAIL_Handler    ; 76 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. Handler
                DCD     RPM2PWM_1_STALL_Handler   ; 77 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. Handler
                DCD     SNGL_Handler              ; 78 This block is designed to convert external analog voltage readings into digital values. Handler
                DCD     RPT_Handler               ; 79 This block is designed to convert external analog voltage readings into digital values. Handler
                DCD     RC_ID0_Handler            ; 80 This interface provides a single pin interface which can discriminate a number of quantized RC constants. Handler
                DCD     RC_ID1_Handler            ; 81 This interface provides a single pin interface which can discriminate a number of quantized RC constants. Handler
                DCD     0                         ; 82 Reserved
                DCD     LED0_Handler              ; 83 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n      clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n      PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. Handler
                DCD     LED1_Handler              ; 84 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n      clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n      PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. Handler
                DCD     0                         ; 85 Reserved
                DCD     0                         ; 86 Reserved
                DCD     0                         ; 87 Reserved
                DCD     0                         ; 88 Reserved
                DCD     0                         ; 89 Reserved
                DCD     0                         ; 90 Reserved
                DCD     QMSPI_Handler             ; 91 The Quad SPI Master Controller may be used to communicate with various \n        peripheral devices that use a Serial Peripheral Interface, such as EEPROMS, DACs and ADCs.\n        The controller can be configured to support advanced SPI Flash devices with multi-phase access protocols. Handler
                DCD     TX0_Handler               ; 92 The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n       to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n         standard Serial Peripheral Interface. Handler
                DCD     RX0_Handler               ; 93 The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n       to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n         standard Serial Peripheral Interface. Handler
                DCD     0                         ; 94 Reserved
                DCD     0                         ; 95 Reserved
                DCD     0                         ; 96 Reserved
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
                DCD     TIMER_Handler             ; 111 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n      chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n      wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n      timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n      halted during debug by hardware or via a software control bit. Handler
                DCD     HTM0_Handler              ; 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n        This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n        in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. Handler
                DCD     HTM1_Handler              ; 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n        This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n        in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. Handler
                DCD     ALARM_INT_Handler         ; 114 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. Handler
                DCD     WKSUB_Handler             ; 115 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. Handler
                DCD     WKSEC_Handler             ; 116 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. Handler
                DCD     WKSUBSEC_Handler          ; 117 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. Handler
                DCD     SYSPWR_Handler            ; 118 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. Handler
                DCD     RTC_Handler               ; 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. Handler
                DCD     RTC_ALARM_Handler         ; 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. Handler
                DCD     OVRD_IN_Handler           ; 121 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. Handler
                DCD     IN0_Handler               ; 122 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. Handler
                DCD     IN1_Handler               ; 123 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. Handler
                DCD     IN2_Handler               ; 124 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. Handler
                DCD     IN3_Handler               ; 125 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. Handler
                DCD     IN4_Handler               ; 126 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. Handler
                DCD     IN5_Handler               ; 127 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. Handler
                DCD     IN6_Handler               ; 128 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. Handler
                DCD     0                         ; 129 Reserved
                DCD     0                         ; 130 Reserved
                DCD     0                         ; 131 Reserved
                DCD     0                         ; 132 Reserved
                DCD     0                         ; 133 Reserved
                DCD     0                         ; 134 Reserved
                DCD     KMS_Handler               ; 135 The Keyboard Scan Interface block provides a register interface to the EC\n      to directly scan an external keyboard matrix of size up to 18x8. Handler
                DCD     TIMER16_0_Handler         ; 136 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. Handler
                DCD     TIMER16_1_Handler         ; 137 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. Handler
                DCD     TIMER16_2_Handler         ; 138 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. Handler
                DCD     TIMER16_3_Handler         ; 139 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. Handler
                DCD     TIMER32_0_Handler         ; 140 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n      32 bits. The name of the timer instance indicates the size of the timer. Handler
                DCD     TIMER32_1_Handler         ; 141 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n      32 bits. The name of the timer instance indicates the size of the timer. Handler
                DCD     CNT_TMR0_Handler          ; 142 This interface is a 16-bit auto-reloading timer/counter. Handler
                DCD     CNT_TMR1_Handler          ; 143 This interface is a 16-bit auto-reloading timer/counter. Handler
                DCD     CNT_TMR2_Handler          ; 144 This interface is a 16-bit auto-reloading timer/counter. Handler
                DCD     CNT_TMR3_Handler          ; 145 This interface is a 16-bit auto-reloading timer/counter. Handler
                DCD     CAPTURE_TIMER_Handler     ; 146 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CAPTURE_0_Handler         ; 147 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CAPTURE_1_Handler         ; 148 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CAPTURE_2_Handler         ; 149 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CAPTURE_3_Handler         ; 150 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CAPTURE_4_Handler         ; 151 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     CAPTURE_5_Handler         ; 152 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     COMPARE_0_Handler         ; 153 This is a 16-bit auto-reloading timer/counter. Handler
                DCD     COMPARE_1_Handler         ; 154 This is a 16-bit auto-reloading timer/counter. Handler
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
                EXPORT  GIRQ08_Handler            [WEAK]
                EXPORT  GIRQ09_Handler            [WEAK]
                EXPORT  GIRQ10_Handler            [WEAK]
                EXPORT  GIRQ11_Handler            [WEAK]
                EXPORT  GIRQ12_Handler            [WEAK]
                EXPORT  GIRQ26_Handler            [WEAK]
                EXPORT  SMB0_Handler              [WEAK]
                EXPORT  SMB1_Handler              [WEAK]
                EXPORT  SMB2_Handler              [WEAK]
                EXPORT  SMB3_Handler              [WEAK]
                EXPORT  DMA_CH00_Handler          [WEAK]
                EXPORT  DMA_CH01_Handler          [WEAK]
                EXPORT  DMA_CH02_Handler          [WEAK]
                EXPORT  DMA_CH03_Handler          [WEAK]
                EXPORT  DMA_CH04_Handler          [WEAK]
                EXPORT  DMA_CH05_Handler          [WEAK]
                EXPORT  DMA_CH06_Handler          [WEAK]
                EXPORT  DMA_CH07_Handler          [WEAK]
                EXPORT  DMA_CH08_Handler          [WEAK]
                EXPORT  DMA_CH09_Handler          [WEAK]
                EXPORT  DMA_CH10_Handler          [WEAK]
                EXPORT  DMA_CH11_Handler          [WEAK]
                EXPORT  DMA_CH12_Handler          [WEAK]
                EXPORT  DMA_CH13_Handler          [WEAK]
                EXPORT  UART0_Handler             [WEAK]
                EXPORT  UART1_Handler             [WEAK]
                EXPORT  TACH0_Handler             [WEAK]
                EXPORT  TACH1_Handler             [WEAK]
                EXPORT  RPM2PWM_0_FAIL_Handler    [WEAK]
                EXPORT  RPM2PWM_0_STALL_Handler   [WEAK]
                EXPORT  RPM2PWM_1_FAIL_Handler    [WEAK]
                EXPORT  RPM2PWM_1_STALL_Handler   [WEAK]
                EXPORT  SNGL_Handler              [WEAK]
                EXPORT  RPT_Handler               [WEAK]
                EXPORT  RC_ID0_Handler            [WEAK]
                EXPORT  RC_ID1_Handler            [WEAK]
                EXPORT  LED0_Handler              [WEAK]
                EXPORT  LED1_Handler              [WEAK]
                EXPORT  QMSPI_Handler             [WEAK]
                EXPORT  TX0_Handler               [WEAK]
                EXPORT  RX0_Handler               [WEAK]
                EXPORT  TIMER_Handler             [WEAK]
                EXPORT  HTM0_Handler              [WEAK]
                EXPORT  HTM1_Handler              [WEAK]
                EXPORT  ALARM_INT_Handler         [WEAK]
                EXPORT  WKSUB_Handler             [WEAK]
                EXPORT  WKSEC_Handler             [WEAK]
                EXPORT  WKSUBSEC_Handler          [WEAK]
                EXPORT  SYSPWR_Handler            [WEAK]
                EXPORT  RTC_Handler               [WEAK]
                EXPORT  RTC_ALARM_Handler         [WEAK]
                EXPORT  OVRD_IN_Handler           [WEAK]
                EXPORT  IN0_Handler               [WEAK]
                EXPORT  IN1_Handler               [WEAK]
                EXPORT  IN2_Handler               [WEAK]
                EXPORT  IN3_Handler               [WEAK]
                EXPORT  IN4_Handler               [WEAK]
                EXPORT  IN5_Handler               [WEAK]
                EXPORT  IN6_Handler               [WEAK]
                EXPORT  KMS_Handler               [WEAK]
                EXPORT  TIMER16_0_Handler         [WEAK]
                EXPORT  TIMER16_1_Handler         [WEAK]
                EXPORT  TIMER16_2_Handler         [WEAK]
                EXPORT  TIMER16_3_Handler         [WEAK]
                EXPORT  TIMER32_0_Handler         [WEAK]
                EXPORT  TIMER32_1_Handler         [WEAK]
                EXPORT  CNT_TMR0_Handler          [WEAK]
                EXPORT  CNT_TMR1_Handler          [WEAK]
                EXPORT  CNT_TMR2_Handler          [WEAK]
                EXPORT  CNT_TMR3_Handler          [WEAK]
                EXPORT  CAPTURE_TIMER_Handler     [WEAK]
                EXPORT  CAPTURE_0_Handler         [WEAK]
                EXPORT  CAPTURE_1_Handler         [WEAK]
                EXPORT  CAPTURE_2_Handler         [WEAK]
                EXPORT  CAPTURE_3_Handler         [WEAK]
                EXPORT  CAPTURE_4_Handler         [WEAK]
                EXPORT  CAPTURE_5_Handler         [WEAK]
                EXPORT  COMPARE_0_Handler         [WEAK]
                EXPORT  COMPARE_1_Handler         [WEAK]


GIRQ08_Handler           
GIRQ09_Handler           
GIRQ10_Handler           
GIRQ11_Handler           
GIRQ12_Handler           
GIRQ26_Handler           
SMB0_Handler             
SMB1_Handler             
SMB2_Handler             
SMB3_Handler             
DMA_CH00_Handler         
DMA_CH01_Handler         
DMA_CH02_Handler         
DMA_CH03_Handler         
DMA_CH04_Handler         
DMA_CH05_Handler         
DMA_CH06_Handler         
DMA_CH07_Handler         
DMA_CH08_Handler         
DMA_CH09_Handler         
DMA_CH10_Handler         
DMA_CH11_Handler         
DMA_CH12_Handler         
DMA_CH13_Handler         
UART0_Handler            
UART1_Handler            
TACH0_Handler            
TACH1_Handler            
RPM2PWM_0_FAIL_Handler   
RPM2PWM_0_STALL_Handler  
RPM2PWM_1_FAIL_Handler   
RPM2PWM_1_STALL_Handler  
SNGL_Handler             
RPT_Handler              
RC_ID0_Handler           
RC_ID1_Handler           
LED0_Handler             
LED1_Handler             
QMSPI_Handler            
TX0_Handler              
RX0_Handler              
TIMER_Handler            
HTM0_Handler             
HTM1_Handler             
ALARM_INT_Handler        
WKSUB_Handler            
WKSEC_Handler            
WKSUBSEC_Handler         
SYSPWR_Handler           
RTC_Handler              
RTC_ALARM_Handler        
OVRD_IN_Handler          
IN0_Handler              
IN1_Handler              
IN2_Handler              
IN3_Handler              
IN4_Handler              
IN5_Handler              
IN6_Handler              
KMS_Handler              
TIMER16_0_Handler        
TIMER16_1_Handler        
TIMER16_2_Handler        
TIMER16_3_Handler        
TIMER32_0_Handler        
TIMER32_1_Handler        
CNT_TMR0_Handler         
CNT_TMR1_Handler         
CNT_TMR2_Handler         
CNT_TMR3_Handler         
CAPTURE_TIMER_Handler    
CAPTURE_0_Handler        
CAPTURE_1_Handler        
CAPTURE_2_Handler        
CAPTURE_3_Handler        
CAPTURE_4_Handler        
CAPTURE_5_Handler        
COMPARE_0_Handler        
COMPARE_1_Handler        
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

