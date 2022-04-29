/* File: startup_ARMCM4.S
 * Purpose: startup file for Cortex-M4 devices. Should use with
 *   GCC for ARM Embedded Processors
 * Version: V2.0
 * Date: 16 August 2013
 *
 * Copyright (c) 2011 - 2013 ARM LIMITED

   All rights reserved.
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:
   - Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   - Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in the
     documentation and/or other materials provided with the distribution.
   - Neither the name of ARM nor the names of its contributors may be used
     to endorse or promote products derived from this software without
     specific prior written permission.
   
   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS AND CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
   ---------------------------------------------------------------------------*/
 /*****************************************************************************
* © 2017 Microchip Technology Inc. and its subsidiaries.
* You may use this software and any derivatives exclusively with
* Microchip products.
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".
* NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
* INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
* AND FITNESS FOR A PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP
* PRODUCTS, COMBINATION WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.
* TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL
* CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF
* FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
* MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE
* OF THESE TERMS.
*****************************************************************************/
  
    .syntax	unified
    .arch	armv7e-m

    .section .stack
    .align  3
#ifdef __STACK_SIZE
    .equ    Stack_Size, __STACK_SIZE
#else
    .equ    Stack_Size, 0x0800
#endif
    .globl  __START
    .globl	__StackTop
    .globl	__StackLimit
__StackLimit:
    .space	Stack_Size
    .size	__StackLimit, . - __StackLimit
__StackTop:
    .size	__StackTop, . - __StackTop

    .section .heap
    .align	3
#ifdef __HEAP_SIZE
    .equ	Heap_Size, __HEAP_SIZE
#else
    .equ	Heap_Size, 0x0800
#endif
    .globl	__HeapBase
    .globl	__HeapLimit
__HeapBase:
    .if	Heap_Size
    .space	Heap_Size
    .endif
    
    .size	__HeapBase, . - __HeapBase
__HeapLimit:
    .size	__HeapLimit, . - __HeapLimit

    .section .isr_vector
    .align	2
    .globl	__isr_vector
__isr_vector:
    .long	__StackTop            /* Top of Stack */
    .long	Reset_Handler         /* Reset Handler */
    .long	NMI_Handler           /* NMI Handler */
    .long	HardFault_Handler     /* Hard Fault Handler */
    .long	MemManage_Handler     /* MPU Fault Handler */
    .long	BusFault_Handler      /* Bus Fault Handler */
    .long	UsageFault_Handler    /* Usage Fault Handler */
    .long	0                     /* Reserved */
    .long	0                     /* Reserved */
    .long	0                     /* Reserved */
    .long	0                     /* Reserved */
    .long	SVC_Handler           /* SVCall Handler */
    .long	DebugMon_Handler      /* Debug Monitor Handler */
    .long	0                     /* Reserved */
    .long	PendSV_Handler        /* PendSV Handler */
    .long	SysTick_Handler       /* SysTick Handler */

    /* External interrupts */
    .long   NVIC_Handler_GIRQ08          /*     40h: 0, GIRQ08 */
    .long   NVIC_Handler_GIRQ09          /*     44h: 1, GIRQ09 */
    .long   NVIC_Handler_GIRQ10          /*     48h: 2, GIRQ10 */
    .long   NVIC_Handler_GIRQ11          /*     4Ch: 3, GIRQ11 */
    .long   NVIC_Handler_GIRQ12          /*     50h: 4, GIRQ12 */
    .long   NVIC_Handler_GIRQ13          /*     54h: 5, GIRQ13 */
    .long   NVIC_Handler_GIRQ14          /*     58h: 6, GIRQ14 */
    .long   NVIC_Handler_GIRQ15          /*     5Ch: 7, GIRQ15 */
    .long   NVIC_Handler_GIRQ16          /*     60h: 8, GIRQ16 */
    .long   NVIC_Handler_GIRQ17          /*     64h: 9, GIRQ17 */
    .long   NVIC_Handler_GIRQ18          /*     68h: 10, GIRQ18 */
    .long   NVIC_Handler_GIRQ19          /*     6Ch: 11, GIRQ19 */
    .long   NVIC_Handler_GIRQ20          /*     70h: 12, GIRQ20 */
    .long   NVIC_Handler_GIRQ21          /*     74h: 13, GIRQ21 */
    .long   NVIC_Handler_GIRQ23          /*     78h: 14, GIRQ23 */ //<-- using this interrupt for timer interrupts 
    .long   NVIC_Handler_GIRQ24          /*     7Ch: 15, GIRQ24 */
    .long   NVIC_Handler_GIRQ25          /*     80h: 16, GIRQ25 */
    .long   NVIC_Handler_GIRQ26          /*     84h: 17, GIRQ26 */
    .long   0                            /*     88h: 18, RSVD */
    .long   0                            /*     8Ch: 19, RSVD */
    .long   NVIC_Handler_I2C0            /*     90h: 20, I2C/SMBus 0 */
    .long   NVIC_Handler_I2C1            /*     94h: 21, I2C/SMBus 1 */
    .long   NVIC_Handler_I2C2            /*     98h: 22, I2C/SMBus 2 */
    .long   NVIC_Handler_I2C3            /*     9Ch: 23, I2C/SMBus 3 */
    .long   NVIC_Handler_DMA0            /*     A0h: 24, DMA Channel 0 */
    .long   NVIC_Handler_DMA1            /*     A4h: 25, DMA Channel 1 */
    .long   NVIC_Handler_DMA2            /*     A8h: 26, DMA Channel 2 */
    .long   NVIC_Handler_DMA3            /*     ACh: 27, DMA Channel 3 */
    .long   NVIC_Handler_DMA4            /*     B0h: 28, DMA Channel 4 */
    .long   NVIC_Handler_DMA5            /*     B4h: 29, DMA Channel 5 */
    .long   NVIC_Handler_DMA6            /*     B8h: 30, DMA Channel 6 */
    .long   NVIC_Handler_DMA7            /*     BCh: 31, DMA Channel 7 */
    .long   NVIC_Handler_DMA8            /*     C0h: 32, DMA Channel 8 */
    .long   NVIC_Handler_DMA9            /*     C4h: 33, DMA Channel 9 */
    .long   NVIC_Handler_DMA10           /*     C8h: 34, DMA Channel 10 */
    .long   NVIC_Handler_DMA11           /*     CCh: 35, DMA Channel 11 */
    .long   NVIC_Handler_DMA12           /*     D0h: 36, DMA Channel 12 */
    .long   NVIC_Handler_DMA13           /*     D4h: 37, DMA Channel 13 */
    .long   0                            /*     D8h: 38, reserved */
    .long   0                            /*     DCh: 39  reserved */
    .long   NVIC_Handler_UART0           /*     E0h:  40  UART0 */
    .long   NVIC_Handler_UART1           /*     E4h:  41  UART1 */
    .long   NVIC_Handler_EMI0            /*     E8h:  42  EMI0 */
    .long   NVIC_Handler_EMI1            /*     ECh:  43  EMI1 */
    .long   NVIC_Handler_EMI2            /*     F0h:  44  EMI2 */
    .long   NVIC_Handler_ACPI_EC0_IBF    /*     F4h:  45  ACPI_EC0_IBF */
    .long   NVIC_Handler_ACPI_EC0_OBF    /*     F8h:  46  ACPI_EC0_OBF */
    .long   NVIC_Handler_ACPI_EC1_IBF    /*     FCh:  47  ACPI_EC1_IBF */
    .long   NVIC_Handler_ACPI_EC1_OBF    /*     100h: 48  ACPI_EC1_OBF */
    .long   NVIC_Handler_ACPI_EC2_IBF    /*     104h: 49  ACPI_EC0_IBF */
    .long   NVIC_Handler_ACPI_EC2_OBF    /*     108h: 50  ACPI_EC0_OBF */
    .long   NVIC_Handler_ACPI_EC3_IBF    /*     10Ch: 51  ACPI_EC1_IBF */
    .long   NVIC_Handler_ACPI_EC3_OBF    /*     110h: 52  ACPI_EC1_OBF */
    .long   NVIC_Handler_ACPI_EC4_IBF    /*     114h: 53  ACPI_EC0_IBF */
    .long   NVIC_Handler_ACPI_EC4_OBF    /*     118h: 54  ACPI_EC0_OBF */
    .long   NVIC_Handler_PM1_CTL         /*     11Ch: 55  ACPI_PM1_CTL */
    .long   NVIC_Handler_PM1_EN          /*     120h: 56  ACPI_PM1_EN */
    .long   NVIC_Handler_PM1_STS         /*     124h: 57  ACPI_PM1_STS */
    .long   NVIC_Handler_MIF8042_OBF     /*     128h: 58  MIF8042_OBF */
    .long   NVIC_Handler_MIF8042_IBF     /*     12Ch: 59  MIF8042_IBF */
    .long   NVIC_Handler_MB_H2EC         /*     130h: 60  Mailbox Host to EC */
    .long   NVIC_Handler_MB_DATA         /*     134h: 61  Mailbox Host Data */
    .long   NVIC_Handler_P80A            /*     138h: 62  Port 80h A */
    .long   NVIC_Handler_P80B            /*     13Ch: 63  Port 80h B */
    .long   0                            /*     140h: 64  Reserved */
    .long   NVIC_Handler_PKE_ERR         /*     144h: 65  PKE Error */
    .long   NVIC_Handler_PKE_END         /*     148h: 66  PKE End */
    .long   NVIC_Handler_TRNG            /*     14Ch: 67  Random Num Gen */
    .long   NVIC_Handler_AES             /*     150h: 68  AES */
    .long   NVIC_Handler_HASH            /*     154h: 69  HASH */
    .long   NVIC_Handler_PECI            /*     158h: 70  PECI */
    .long   NVIC_Handler_TACH0           /*     15Ch: 71  TACH0 */
    .long   NVIC_Handler_TACH1           /*     160h: 72  TACH1 */
    .long   NVIC_Handler_TACH2           /*     164h: 73  TACH2 */
    .long   NVIC_Handler_R2P0_FAIL       /*     168h: 74  RPM2PWM 0 Fan Fail */
    .long   NVIC_Handler_R2P0_STALL      /*     16Ch: 75  RPM2PWM 0 Fan Stall */
    .long   NVIC_Handler_R2P1_FAIL       /*     170h: 76  RPM2PWM 1 Fan Fail */
    .long   NVIC_Handler_R2P1_STALL      /*     174h: 77  RPM2PWM 1 Fan Stall */
    .long   NVIC_Handler_ADC_SNGL        /*     178h: 78  ADC_SNGL */
    .long   NVIC_Handler_ADC_RPT         /*     17Ch: 79  ADC_RPT */
    .long   NVIC_Handler_RCID0           /*     180h: 80  RCID 0 */
    .long   NVIC_Handler_RCID1           /*     184h: 81  RCID 1 */
    .long   NVIC_Handler_RCID2           /*     188h: 82  RCID 2 */
    .long   NVIC_Handler_LED0            /*     18Ch: 83  LED0 */
    .long   NVIC_Handler_LED1            /*     190h: 84  LED1 */
    .long   NVIC_Handler_LED2            /*     194h: 85  LED2 */
    .long   NVIC_Handler_LED3            /*     198h: 86  LED2 */
    .long   NVIC_Handler_PHOT            /*     19Ch: 87  ProcHot Monitor */
    .long   NVIC_Handler_PWRGD0          /*     1A0h: 88  PowerGuard 0 Status */
    .long   NVIC_Handler_PWRGD1          /*     1A4h: 89  PowerGuard 1 Status */
    .long   NVIC_Handler_LPCBERR         /*     1A8h: 90  LPC Bus Error */
    .long   NVIC_Handler_QMSPI0          /*     1ACh: 91  QMSPI 0 */
    .long   NVIC_Handler_GPSPI0_TX       /*     1B0h: 92  GP-SPI0 TX */
    .long   NVIC_Handler_GPSPI0_RX       /*     1B4h: 93  GP-SPI0 RX */
    .long   NVIC_Handler_GPSPI1_TX       /*     1B8h: 94  GP-SPI1 TX */
    .long   NVIC_Handler_GPSPI1_RX       /*     1BCh: 95  GP-SPI1 RX */
    .long   NVIC_Handler_BC0_BUSY        /*     1C0h: 96  BC-Link0 Busy-Clear */
    .long   NVIC_Handler_BC0_ERR         /*     1C4h: 97  BC-Link0 Error */
    .long   NVIC_Handler_BC1_BUSY        /*     1C8h: 98  BC-Link1 Busy-Clear */
    .long   NVIC_Handler_BC1_ERR         /*     1CCh: 99  BC-Link1 Error */
    .long   NVIC_Handler_PS2_0           /*     1D0h: 100  PS2_0 */
    .long   NVIC_Handler_PS2_1           /*     1D4h: 101  PS2_1 */
    .long   NVIC_Handler_PS2_2           /*     1D8h: 102  PS2_2 */
    .long   NVIC_Handler_ESPI_PC         /*     1DCh: 103  eSPI Periph Chan */
    .long   NVIC_Handler_ESPI_BM1        /*     1E0h: 104  eSPI Bus Master 1 */
    .long   NVIC_Handler_ESPI_BM2        /*     1E4h: 105  eSPI Bus Master 2 */
    .long   NVIC_Handler_ESPI_LTR        /*     1E8h: 106  eSPI LTR */
    .long   NVIC_Handler_ESPI_OOB_UP     /*     1ECh: 107  eSPI OOB Up */
    .long   NVIC_Handler_ESPI_OOB_DN     /*     1F0h: 108  eSPI OOB Down */
    .long   NVIC_Handler_ESPI_FLASH      /*     1F4h: 109  eSPI Flash Chan */
    .long   NVIC_Handler_ESPI_RESET      /*     1F8h: 110  eSPI Reset */
    .long   NVIC_Handler_RTMR            /*     1FCh: 111  RTOS Timer */
    .long   NVIC_Handler_HTMR0           /*     200h: 112  Hibernation Timer 0 */
    .long   NVIC_Handler_HTMR1           /*     204h: 113  Hibernation Timer 1 */
    .long   NVIC_Handler_WK              /*     208h: 114  Week Alarm */
    .long   NVIC_Handler_WKSUB           /*     20Ch: 115  Week Alarm  sub week */
    .long   NVIC_Handler_WKSEC           /*     210h: 116  Week Alarm  one sec */
    .long   NVIC_Handler_WKSUBSEC        /*     214h: 117  Week Alarm  sub sec */
    .long   NVIC_Handler_SYSPWR          /*     218h: 118  System Power Present pin */
    .long   NVIC_Handler_RTC             /*     21Ch: 119  RTC */
    .long   NVIC_Handler_RTC_ALARM       /*     220h: 120  RTC_ALARM */
    .long   NVIC_Handler_VCI_OVRD_IN     /*     224h: 121  VCI Override Input */
    .long   NVIC_Handler_VCI_IN0         /*     228h: 122  VCI Input 0 */
    .long   NVIC_Handler_VCI_IN1         /*     22Ch: 123  VCI Input 1 */
    .long   NVIC_Handler_VCI_IN2         /*     230h: 124  VCI Input 2 */
    .long   NVIC_Handler_VCI_IN3         /*     234h: 125  VCI Input 3 */
    .long   NVIC_Handler_VCI_IN4         /*     238h: 126  VCI Input 4 */
    .long   NVIC_Handler_VCI_IN5         /*     23Ch: 127  VCI Input 5 */
    .long   NVIC_Handler_VCI_IN6         /*     240h: 128  VCI Input 6 */
    .long   NVIC_Handler_PS20A_WAKE      /*     244h: 129  PS2 Port 0A Wake */
    .long   NVIC_Handler_PS20B_WAKE      /*     248h: 130  PS2 Port 0B Wake */
    .long   NVIC_Handler_PS21A_WAKE      /*     24Ch: 131  PS2 Port 1A Wake */
    .long   NVIC_Handler_PS21B_WAKE      /*     250h: 132  PS2 Port 1B Wake */
    .long   NVIC_Handler_PS21_WAKE       /*     254h: 133  PS2 Port 1 Wake */
    .long   NVIC_Handler_ENVMON          /*     258h: 134  Thernal Monitor */
    .long   NVIC_Handler_KEYSCAN         /*     25Ch: 135  Key Scan */
    .long   NVIC_Handler_BTMR16_0        /*     260h: 136  16-bit Basic Timer 0 */
    .long   NVIC_Handler_BTMR16_1        /*     264h: 137  16-bit Basic Timer 1 */
    .long   NVIC_Handler_BTMR16_2        /*     268h: 138  16-bit Basic Timer 2 */
    .long   NVIC_Handler_BTMR16_3        /*     26Ch: 139  16-bit Basic Timer 3 */
    .long   NVIC_Handler_BTMR32_0        /*     270h: 140  32-bit Basic Timer 0 */
    .long   NVIC_Handler_BTMR32_1        /*     274h: 141  32-bit Basic Timer 1 */
    .long   NVIC_Handler_EVTMR0          /*     278h: 142  Event Counter/Timer 0 */
    .long   NVIC_Handler_EVTMR1          /*     27Ch: 143  Event Counter/Timer 1 */
    .long   NVIC_Handler_EVTMR2          /*     280h: 144  Event Counter/Timer 2 */
    .long   NVIC_Handler_EVTMR3          /*     284h: 145  Event Counter/Timer 3 */
    .long   NVIC_Handler_CAPTMR          /*     288h: 146  Capture Timer */
    .long   NVIC_Handler_CAP0            /*     28Ch: 147  Capture 0 Event */
    .long   NVIC_Handler_CAP1            /*     290h: 148  Capture 1 Event */
    .long   NVIC_Handler_CAP2            /*     294h: 149  Capture 2 Event */
    .long   NVIC_Handler_CAP3            /*     298h: 150  Capture 3 Event */
    .long   NVIC_Handler_CAP4            /*     29Ch: 151  Capture 4 Event */
    .long   NVIC_Handler_CAP5            /*     2A0h: 152  Capture 5 Event */
    .long   NVIC_Handler_CMP0            /*     2A4h: 153  Compare 0 Event */
    .long   NVIC_Handler_CMP1            /*     2A8h: 154  Compare 1 Event */
    .long   NVIC_Handler_PROMSPI         /*     2ACh: 155  PROMSPI/EEPROM */
    .long   NVIC_Handler_ESPI_VWEn       /*     2B0h: 156  eSPI VWire Enable from Master */

    .globl __isr_vector_end
__isr_vector_end:

    .size   __isr_vector, . - __isr_vector

    /*	.text */
    .section .reset, "ax"
    .thumb
    .thumb_func
    .align	2
    .globl	Reset_Handler
    .type	Reset_Handler, %function
Reset_Handler:

    cpsid   i

    /* Re-map vector table */
    ldr     r0, =__isr_vector
    ldr     r1, =0xE000ED08
    str     r0, [r1]
    ldr     r0, [r1]
    
    /*If using floating point co-processor hardware, firmware must enable it*/
#ifdef __FPU_ENABLE
    ldr	    r0, =0xE000ED88	;enable CP10, CP11
    ldr	    r1,[r0]
    orr	    r1,r1,#(0xF << 20)
    str	    r1,[r0]
#endif    
    
    /* Reload SP, necessary using debugger to load this Boot-ROM into 
     * an empty FPGA */
    ldr     r0, =__isr_vector
    ldr     r0, [r0]
    mov     sp, r0
    
    /* Clear Cortex-M4 Fault status */
    ldr     r1, =0xE000ED00
    ldr     r0, =0xffffffff
    str     r0, [r1, #0x28]
    str     r0, [r1, #0x2C]
      
#ifndef __START
#define __START _start
#endif
    bl  __START

    /* should not return, if we do reset the chip */
    ldr     r1, =0x40080118
    mov     r0, #0x100
    str     r0, [r1]	    /*set bit 8 (SOFT_SYS_RESET) of SYSTEM RESET register*/
w4rst:
    nop
    b       w4rst
    nop

    .pool
    .size   Reset_Handler, . - Reset_Handler

    .align  1
    .thumb_func
    .weak   Default_Handler
    .type   Default_Handler, %function
Default_Handler:
    b   .
    .size   Default_Handler, . - Default_Handler

/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro	def_irq_handler	handler_name
    .weak	\handler_name
    .set	\handler_name, Default_Handler
    .endm

    def_irq_handler NMI_Handler
    def_irq_handler HardFault_Handler
    def_irq_handler MemManage_Handler
    def_irq_handler BusFault_Handler
    def_irq_handler UsageFault_Handler
    def_irq_handler SVC_Handler
    def_irq_handler DebugMon_Handler
    def_irq_handler PendSV_Handler
    def_irq_handler SysTick_Handler
    def_irq_handler NVIC_Handler_GIRQ08
    def_irq_handler NVIC_Handler_GIRQ09
    def_irq_handler NVIC_Handler_GIRQ10
    def_irq_handler NVIC_Handler_GIRQ11
    def_irq_handler NVIC_Handler_GIRQ12
    def_irq_handler NVIC_Handler_GIRQ13
    def_irq_handler NVIC_Handler_GIRQ14
    def_irq_handler NVIC_Handler_GIRQ15
    def_irq_handler NVIC_Handler_GIRQ16
    def_irq_handler NVIC_Handler_GIRQ17
    def_irq_handler NVIC_Handler_GIRQ18
    def_irq_handler NVIC_Handler_GIRQ19
    def_irq_handler NVIC_Handler_GIRQ20
    def_irq_handler NVIC_Handler_GIRQ21
    def_irq_handler NVIC_Handler_GIRQ22
    def_irq_handler NVIC_Handler_GIRQ23
    def_irq_handler NVIC_Handler_GIRQ24
    def_irq_handler NVIC_Handler_GIRQ25
    def_irq_handler NVIC_Handler_GIRQ26
    def_irq_handler NVIC_Handler_I2C0
    def_irq_handler NVIC_Handler_I2C1
    def_irq_handler NVIC_Handler_I2C2
    def_irq_handler NVIC_Handler_I2C3
    def_irq_handler NVIC_Handler_DMA0
    def_irq_handler NVIC_Handler_DMA1
    def_irq_handler NVIC_Handler_DMA2
    def_irq_handler NVIC_Handler_DMA3
    def_irq_handler NVIC_Handler_DMA4
    def_irq_handler NVIC_Handler_DMA5
    def_irq_handler NVIC_Handler_DMA6
    def_irq_handler NVIC_Handler_DMA7
    def_irq_handler NVIC_Handler_DMA8
    def_irq_handler NVIC_Handler_DMA9
    def_irq_handler NVIC_Handler_DMA10
    def_irq_handler NVIC_Handler_DMA11
    def_irq_handler NVIC_Handler_DMA12
    def_irq_handler NVIC_Handler_DMA13
    def_irq_handler NVIC_Handler_UART0
    def_irq_handler NVIC_Handler_UART1
    def_irq_handler NVIC_Handler_EMI0
    def_irq_handler NVIC_Handler_EMI1
    def_irq_handler NVIC_Handler_EMI2
    def_irq_handler NVIC_Handler_ACPI_EC0_IBF
    def_irq_handler NVIC_Handler_ACPI_EC0_OBF
    def_irq_handler NVIC_Handler_ACPI_EC1_IBF
    def_irq_handler NVIC_Handler_ACPI_EC1_OBF
    def_irq_handler NVIC_Handler_ACPI_EC2_IBF
    def_irq_handler NVIC_Handler_ACPI_EC2_OBF
    def_irq_handler NVIC_Handler_ACPI_EC3_IBF
    def_irq_handler NVIC_Handler_ACPI_EC3_OBF
    def_irq_handler NVIC_Handler_ACPI_EC4_IBF
    def_irq_handler NVIC_Handler_ACPI_EC4_OBF
    def_irq_handler NVIC_Handler_PM1_CTL
    def_irq_handler NVIC_Handler_PM1_EN
    def_irq_handler NVIC_Handler_PM1_STS
    def_irq_handler NVIC_Handler_MIF8042_OBF
    def_irq_handler NVIC_Handler_MIF8042_IBF
    def_irq_handler NVIC_Handler_MB_H2EC
    def_irq_handler NVIC_Handler_MB_DATA
    def_irq_handler NVIC_Handler_P80A
    def_irq_handler NVIC_Handler_P80B
    def_irq_handler NVIC_Handler_PKE_ERR
    def_irq_handler NVIC_Handler_PKE_END
    def_irq_handler NVIC_Handler_TRNG
    def_irq_handler NVIC_Handler_AES
    def_irq_handler NVIC_Handler_HASH
    def_irq_handler NVIC_Handler_PECI
    def_irq_handler NVIC_Handler_TACH0
    def_irq_handler NVIC_Handler_TACH1
    def_irq_handler NVIC_Handler_TACH2
    def_irq_handler NVIC_Handler_R2P0_FAIL
    def_irq_handler NVIC_Handler_R2P0_STALL
    def_irq_handler NVIC_Handler_R2P1_FAIL
    def_irq_handler NVIC_Handler_R2P1_STALL
    def_irq_handler NVIC_Handler_ADC_SNGL
    def_irq_handler NVIC_Handler_ADC_RPT
    def_irq_handler NVIC_Handler_RCID0
    def_irq_handler NVIC_Handler_RCID1
    def_irq_handler NVIC_Handler_RCID2
    def_irq_handler NVIC_Handler_LED0
    def_irq_handler NVIC_Handler_LED1
    def_irq_handler NVIC_Handler_LED2
    def_irq_handler NVIC_Handler_LED3
    def_irq_handler NVIC_Handler_PHOT
    def_irq_handler NVIC_Handler_PWRGD0
    def_irq_handler NVIC_Handler_PWRGD1
    def_irq_handler NVIC_Handler_LPCBERR
    def_irq_handler NVIC_Handler_QMSPI0
    def_irq_handler NVIC_Handler_GPSPI0_TX
    def_irq_handler NVIC_Handler_GPSPI0_RX
    def_irq_handler NVIC_Handler_GPSPI1_TX
    def_irq_handler NVIC_Handler_GPSPI1_RX
    def_irq_handler NVIC_Handler_BC0_BUSY
    def_irq_handler NVIC_Handler_BC0_ERR
    def_irq_handler NVIC_Handler_BC1_BUSY
    def_irq_handler NVIC_Handler_BC1_ERR
    def_irq_handler NVIC_Handler_PS2_0
    def_irq_handler NVIC_Handler_PS2_1
    def_irq_handler NVIC_Handler_PS2_2
    def_irq_handler NVIC_Handler_ESPI_PC
    def_irq_handler NVIC_Handler_ESPI_BM1
    def_irq_handler NVIC_Handler_ESPI_BM2
    def_irq_handler NVIC_Handler_ESPI_LTR
    def_irq_handler NVIC_Handler_ESPI_OOB_UP
    def_irq_handler NVIC_Handler_ESPI_OOB_DN
    def_irq_handler NVIC_Handler_ESPI_FLASH
    def_irq_handler NVIC_Handler_ESPI_RESET
    def_irq_handler NVIC_Handler_RTMR
    def_irq_handler NVIC_Handler_HTMR0
    def_irq_handler NVIC_Handler_HTMR1
    def_irq_handler NVIC_Handler_WK
    def_irq_handler NVIC_Handler_WKSUB
    def_irq_handler NVIC_Handler_WKSEC
    def_irq_handler NVIC_Handler_WKSUBSEC
    def_irq_handler NVIC_Handler_SYSPWR
    def_irq_handler NVIC_Handler_RTC
    def_irq_handler NVIC_Handler_RTC_ALARM
    def_irq_handler NVIC_Handler_VCI_OVRD_IN
    def_irq_handler NVIC_Handler_VCI_IN0
    def_irq_handler NVIC_Handler_VCI_IN1
    def_irq_handler NVIC_Handler_VCI_IN2
    def_irq_handler NVIC_Handler_VCI_IN3
    def_irq_handler NVIC_Handler_VCI_IN4
    def_irq_handler NVIC_Handler_VCI_IN5
    def_irq_handler NVIC_Handler_VCI_IN6
    def_irq_handler NVIC_Handler_PS20A_WAKE
    def_irq_handler NVIC_Handler_PS20B_WAKE
    def_irq_handler NVIC_Handler_PS21A_WAKE
    def_irq_handler NVIC_Handler_PS21B_WAKE
    def_irq_handler NVIC_Handler_PS21_WAKE
    def_irq_handler NVIC_Handler_ENVMON
    def_irq_handler NVIC_Handler_KEYSCAN
    def_irq_handler NVIC_Handler_BTMR16_0
    def_irq_handler NVIC_Handler_BTMR16_1
    def_irq_handler NVIC_Handler_BTMR16_2
    def_irq_handler NVIC_Handler_BTMR16_3
    def_irq_handler NVIC_Handler_BTMR32_0
    def_irq_handler NVIC_Handler_BTMR32_1
    def_irq_handler NVIC_Handler_EVTMR0
    def_irq_handler NVIC_Handler_EVTMR1
    def_irq_handler NVIC_Handler_EVTMR2
    def_irq_handler NVIC_Handler_EVTMR3
    def_irq_handler NVIC_Handler_CAPTMR
    def_irq_handler NVIC_Handler_CAP0
    def_irq_handler NVIC_Handler_CAP1
    def_irq_handler NVIC_Handler_CAP2
    def_irq_handler NVIC_Handler_CAP3
    def_irq_handler NVIC_Handler_CAP4
    def_irq_handler NVIC_Handler_CAP5
    def_irq_handler NVIC_Handler_CMP0
    def_irq_handler NVIC_Handler_CMP1
    def_irq_handler NVIC_Handler_PROMSPI
    def_irq_handler NVIC_Handler_ESPI_VWEn

    .end
