/**
 * \file
 *
 * \brief Startup code for CEC1702
 *
 * Copyright (c) 2017 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* This is a temporarily manually generated file. */

#include <xc.h>
#include <libpic32c.h>
#include <sys/cdefs.h>
#include <stdbool.h>

/*  
 *  Define the __XC32_RESET_HANDLER_NAME macro on the command line when you 
 *  want to use a different name for the Reset Handler function. This name
 *  must match the name given when preprocessing the linker script.
 */
#ifndef __XC32_RESET_HANDLER_NAME
#define __XC32_RESET_HANDLER_NAME Reset_Handler
#endif /* __XC32_RESET_HANDLER_NAME */

/* Initialize segments */
extern uint32_t _sfixed;
extern uint32_t _stack;
extern uint32_t _dinit_size;
extern uint32_t _dinit_addr;

/** \cond DOXYGEN_SHOULD_SKIP_THIS */
int main(void);
/** \endcond */

extern void __attribute__((long_call)) __libc_init_array(void);

/* Default empty handler */
void __attribute__((weak, optimize("-O1"), long_call)) Dummy_Handler(void);

/* Reset handler */
void __attribute__((weak, optimize("-O1"), long_call)) Reset_Handler(void);

/* Cortex-M4 core handlers */
void NonMaskableInt_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MemoryManagement_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BusFault_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UsageFault_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVCall_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DebugMonitor_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void NVIC_Handler_GIRQ08          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ09          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ10          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ11          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ12          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ13          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ14          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ15          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ16          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ17          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ18          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ19          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ20          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ21          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ23          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ24          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ25          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GIRQ26          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_I2C0            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_I2C1            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_I2C2            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_I2C3            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA0            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA1            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA2            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA3            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA4            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA5            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA6            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA7            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA8            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA9            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA10           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA11           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA12           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_DMA13           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_UART0           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_UART1           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_EMI0            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_EMI1            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_EMI2            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ACPI_EC0_IBF    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ACPI_EC0_OBF    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ACPI_EC1_IBF    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ACPI_EC1_OBF    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ACPI_EC2_IBF    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ACPI_EC2_OBF    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ACPI_EC3_IBF    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ACPI_EC3_OBF    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ACPI_EC4_IBF    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ACPI_EC4_OBF    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PM1_CTL         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PM1_EN          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PM1_STS         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_MIF8042_OBF     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_MIF8042_IBF     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_MB_H2EC         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_MB_DATA         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_P80A            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_P80B            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PKE_ERR         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PKE_END         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_TRNG            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_AES             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_HASH            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PECI            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_TACH0           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_TACH1           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_TACH2           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_R2P0_FAIL       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_R2P0_STALL      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_R2P1_FAIL       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_R2P1_STALL      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ADC_SNGL        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ADC_RPT         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_RCID0           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_RCID1           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_RCID2           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_LED0            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_LED1            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_LED2            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_LED3            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PHOT            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PWRGD0          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PWRGD1          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_LPCBERR         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_QMSPI0          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GPSPI0_TX       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GPSPI0_RX       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GPSPI1_TX       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_GPSPI1_RX       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_BC0_BUSY        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_BC0_ERR         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_BC1_BUSY        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_BC1_ERR         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PS2_0           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PS2_1           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PS2_2           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ESPI_PC         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ESPI_BM1        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ESPI_BM2        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ESPI_LTR        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ESPI_OOB_UP     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ESPI_OOB_DN     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ESPI_FLASH      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ESPI_RESET      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_RTMR            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_HTMR0           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_HTMR1           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_WK              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_WKSUB           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_WKSEC           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_WKSUBSEC        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_SYSPWR          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_RTC             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_RTC_ALARM       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_VCI_OVRD_IN     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_VCI_IN0         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_VCI_IN1         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_VCI_IN2         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_VCI_IN3         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_VCI_IN4         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_VCI_IN5         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_VCI_IN6         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PS20A_WAKE      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PS20B_WAKE      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PS21A_WAKE      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PS21B_WAKE      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PS21_WAKE       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ENVMON          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_KEYSCAN         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_BTMR16_0        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_BTMR16_1        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_BTMR16_2        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_BTMR16_3        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_BTMR32_0        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_BTMR32_1        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_EVTMR0          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_EVTMR1          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_EVTMR2          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_EVTMR3          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_CAPTMR          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_CAP0            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_CAP1            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_CAP2            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_CAP3            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_CAP4            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_CAP5            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_CMP0            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_CMP1            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_PROMSPI         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVIC_Handler_ESPI_VWEn       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Exception Table */
__attribute__ ((section(".vectors"),weak))
const DeviceVectors exception_table=
{
        /* Configure Initial Stack Pointer, using linker-generated symbols */
        .pvStack = (void*) (&_stack),

        .pfnReset_Handler              = (void*) __XC32_RESET_HANDLER_NAME,
        .pfnNonMaskableInt_Handler     = (void*) NonMaskableInt_Handler,
        .pfnHardFault_Handler          = (void*) HardFault_Handler,
        .pfnMemoryManagement_Handler   = (void*) MemoryManagement_Handler,
        .pfnBusFault_Handler           = (void*) BusFault_Handler,
        .pfnUsageFault_Handler         = (void*) UsageFault_Handler,
        .pvReservedC9                  = (void*) (0UL), /* Reserved */
        .pvReservedC8                  = (void*) (0UL), /* Reserved */
        .pvReservedC7                  = (void*) (0UL), /* Reserved */
        .pvReservedC6                  = (void*) (0UL), /* Reserved */
        .pfnSVCall_Handler             = (void*) SVCall_Handler,
        .pfnDebugMonitor_Handler       = (void*) DebugMonitor_Handler,
        .pvReservedC3                  = (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

    .pfnGIRQ08_Handler           = (void*) NVIC_Handler_GIRQ08, /**<      40h: 0, GIRQ08  */
    .pfnGIRQ09_Handler           = (void*) NVIC_Handler_GIRQ09, /**<      44h: 1, GIRQ09  */
    .pfnGIRQ10_Handler           = (void*) NVIC_Handler_GIRQ10, /**<      48h: 2, GIRQ10  */
    .pfnGIRQ11_Handler           = (void*) NVIC_Handler_GIRQ11, /**<      4Ch: 3, GIRQ11  */
    .pfnGIRQ12_Handler           = (void*) NVIC_Handler_GIRQ12, /**<      50h: 4, GIRQ12  */
    .pfnGIRQ13_Handler           = (void*) NVIC_Handler_GIRQ13, /**<      54h: 5, GIRQ13  */
    .pfnGIRQ14_Handler           = (void*) NVIC_Handler_GIRQ14, /**<      58h: 6, GIRQ14  */
    .pfnGIRQ15_Handler           = (void*) NVIC_Handler_GIRQ15, /**<      5Ch: 7, GIRQ15  */
    .pfnGIRQ16_Handler           = (void*) NVIC_Handler_GIRQ16, /**<      60h: 8, GIRQ16  */
    .pfnGIRQ17_Handler           = (void*) NVIC_Handler_GIRQ17, /**<      64h: 9, GIRQ17  */
    .pfnGIRQ18_Handler           = (void*) NVIC_Handler_GIRQ18, /**<      68h: 10, GIRQ18  */
    .pfnGIRQ19_Handler           = (void*) NVIC_Handler_GIRQ19, /**<      6Ch: 11, GIRQ19  */
    .pfnGIRQ20_Handler           = (void*) NVIC_Handler_GIRQ20, /**<      70h: 12, GIRQ20  */
    .pfnGIRQ21_Handler           = (void*) NVIC_Handler_GIRQ21, /**<      74h: 13, GIRQ21  */
    .pfnGIRQ23_Handler           = (void*) NVIC_Handler_GIRQ23, /**<      78h: 14, GIRQ23  */ //<-- using this interrupt for timer interrupts 
    .pfnGIRQ24_Handler           = (void*) NVIC_Handler_GIRQ24, /**<      7Ch: 15, GIRQ24  */
    .pfnGIRQ25_Handler           = (void*) NVIC_Handler_GIRQ25, /**<      80h: 16, GIRQ25  */
    .pfnGIRQ26_Handler           = (void*) NVIC_Handler_GIRQ26, /**<      84h: 17, GIRQ26  */
    .pvReserved18                = (void*) (0UL),/**<      88h: 18, RSVD  */
    .pvReserved19                = (void*) (0UL),/**<      8Ch: 19, RSVD  */
    .pfnI2C0_Handler             = (void*) NVIC_Handler_I2C0, /**<      90h: 20, I2C/SMBus 0  */
    .pfnI2C1_Handler             = (void*) NVIC_Handler_I2C1, /**<      94h: 21, I2C/SMBus 1  */
    .pfnI2C2_Handler             = (void*) NVIC_Handler_I2C2, /**<      98h: 22, I2C/SMBus 2  */
    .pfnI2C3_Handler             = (void*) NVIC_Handler_I2C3, /**<      9Ch: 23, I2C/SMBus 3  */
    .pfnDMA0_Handler             = (void*) NVIC_Handler_DMA0, /**<      A0h: 24, DMA Channel 0  */
    .pfnDMA1_Handler             = (void*) NVIC_Handler_DMA1, /**<      A4h: 25, DMA Channel 1  */
    .pfnDMA2_Handler             = (void*) NVIC_Handler_DMA2, /**<      A8h: 26, DMA Channel 2  */
    .pfnDMA3_Handler             = (void*) NVIC_Handler_DMA3, /**<      ACh: 27, DMA Channel 3  */
    .pfnDMA4_Handler             = (void*) NVIC_Handler_DMA4, /**<      B0h: 28, DMA Channel 4  */
    .pfnDMA5_Handler             = (void*) NVIC_Handler_DMA5, /**<      B4h: 29, DMA Channel 5  */
    .pfnDMA6_Handler             = (void*) NVIC_Handler_DMA6, /**<      B8h: 30, DMA Channel 6  */
    .pfnDMA7_Handler             = (void*) NVIC_Handler_DMA7, /**<      BCh: 31, DMA Channel 7  */
    .pfnDMA8_Handler             = (void*) NVIC_Handler_DMA8, /**<      C0h: 32, DMA Channel 8  */
    .pfnDMA9_Handler             = (void*) NVIC_Handler_DMA9, /**<      C4h: 33, DMA Channel 9  */
    .pfnDMA10_Handler            = (void*) NVIC_Handler_DMA10, /**<      C8h: 34, DMA Channel 10  */
    .pfnDMA11_Handler            = (void*) NVIC_Handler_DMA11, /**<      CCh: 35, DMA Channel 11  */
    .pfnDMA12_Handler            = (void*) NVIC_Handler_DMA12, /**<      D0h: 36, DMA Channel 12  */
    .pfnDMA13_Handler            = (void*) NVIC_Handler_DMA13, /**<      D4h: 37, DMA Channel 13  */
    .pvReserved38                = (void*) (0UL), /**<      D8h: 38, reserved  */
    .pvReserved49                = (void*) (0UL), /**<      DCh: 39  reserved  */
    .pfnUART0_Handler            = (void*) NVIC_Handler_UART0, /**<      E0h:  40  UART0  */
    .pfnUART1_Handler            = (void*) NVIC_Handler_UART1, /**<      E4h:  41  UART1  */
    .pfnEMI0_Handler             = (void*) NVIC_Handler_EMI0, /**<      E8h:  42  EMI0  */
    .pfnEMI1_Handler             = (void*) NVIC_Handler_EMI1, /**<      ECh:  43  EMI1  */
    .pfnEMI2_Handler             = (void*) NVIC_Handler_EMI2, /**<      F0h:  44  EMI2  */
    .pfnACPI_EC0_IBF_Handler     = (void*) NVIC_Handler_ACPI_EC0_IBF, /**<      F4h:  45  ACPI_EC0_IBF  */
    .pfnACPI_EC0_OBF_Handler     = (void*) NVIC_Handler_ACPI_EC0_OBF, /**<      F8h:  46  ACPI_EC0_OBF  */
    .pfnACPI_EC1_IBF_Handler     = (void*) NVIC_Handler_ACPI_EC1_IBF, /**<      FCh:  47  ACPI_EC1_IBF  */
    .pfnACPI_EC1_OBF_Handler     = (void*) NVIC_Handler_ACPI_EC1_OBF, /**<      100h: 48  ACPI_EC1_OBF  */
    .pfnACPI_EC2_IBF_Handler     = (void*) NVIC_Handler_ACPI_EC2_IBF, /**<      104h: 49  ACPI_EC0_IBF  */
    .pfnACPI_EC2_OBF_Handler     = (void*) NVIC_Handler_ACPI_EC2_OBF, /**<      108h: 50  ACPI_EC0_OBF  */
    .pfnACPI_EC3_IBF_Handler     = (void*) NVIC_Handler_ACPI_EC3_IBF, /**<      10Ch: 51  ACPI_EC1_IBF  */
    .pfnACPI_EC3_OBF_Handler     = (void*) NVIC_Handler_ACPI_EC3_OBF, /**<      110h: 52  ACPI_EC1_OBF  */
    .pfnACPI_EC4_IBF_Handler     = (void*) NVIC_Handler_ACPI_EC4_IBF, /**<      114h: 53  ACPI_EC0_IBF  */
    .pfnACPI_EC4_OBF_Handler     = (void*) NVIC_Handler_ACPI_EC4_OBF, /**<      118h: 54  ACPI_EC0_OBF  */
    .pfnPM1_CTL_Handler          = (void*) NVIC_Handler_PM1_CTL, /**<      11Ch: 55  ACPI_PM1_CTL  */
    .pfnPM1_EN_Handler           = (void*) NVIC_Handler_PM1_EN, /**<      120h: 56  ACPI_PM1_EN  */
    .pfnPM1_STS_Handler          = (void*) NVIC_Handler_PM1_STS, /**<      124h: 57  ACPI_PM1_STS  */
    .pfnMIF8042_OBF_Handler      = (void*) NVIC_Handler_MIF8042_OBF, /**<      128h: 58  MIF8042_OBF  */
    .pfnMIF8042_IBF_Handler      = (void*) NVIC_Handler_MIF8042_IBF, /**<      12Ch: 59  MIF8042_IBF  */
    .pfnMB_H2EC_Handler          = (void*) NVIC_Handler_MB_H2EC, /**<      130h: 60  Mailbox Host to EC  */
    .pfnMB_DATA_Handler          = (void*) NVIC_Handler_MB_DATA, /**<      134h: 61  Mailbox Host Data  */
    .pfnP80A_Handler             = (void*) NVIC_Handler_P80A, /**<      138h: 62  Port 80h A  */
    .pfnP80B_Handler             = (void*) NVIC_Handler_P80B, /**<      13Ch: 63  Port 80h B  */
    .pvReserved64                = (void*) (0UL), /**<      140h: 64  Reserved  */
    .pfnPKE_ERR_Handler          = (void*) NVIC_Handler_PKE_ERR, /**<      144h: 65  PKE Error  */
    .pfnPKE_END_Handler          = (void*) NVIC_Handler_PKE_END, /**<      148h: 66  PKE End  */
    .pfnTRNG_Handler             = (void*) NVIC_Handler_TRNG, /**<      14Ch: 67  Random Num Gen  */
    .pfnAES_Handler              = (void*) NVIC_Handler_AES, /**<      150h: 68  AES  */
    .pfnHASH_Handler             = (void*) NVIC_Handler_HASH, /**<      154h: 69  HASH  */
    .pfnPECI_Handler             = (void*) NVIC_Handler_PECI, /**<      158h: 70  PECI  */
    .pfnTACH0_Handler            = (void*) NVIC_Handler_TACH0, /**<      15Ch: 71  TACH0  */
    .pfnTACH1_Handler            = (void*) NVIC_Handler_TACH1, /**<      160h: 72  TACH1  */
    .pfnTACH2_Handler            = (void*) NVIC_Handler_TACH2, /**<      164h: 73  TACH2  */
    .pfnR2P0_FAIL_Handler        = (void*) NVIC_Handler_R2P0_FAIL, /**<      168h: 74  RPM2PWM 0 Fan Fail  */
    .pfnR2P0_STALL_Handler       = (void*) NVIC_Handler_R2P0_STALL, /**<      16Ch: 75  RPM2PWM 0 Fan Stall  */
    .pfnR2P1_FAIL_Handler        = (void*) NVIC_Handler_R2P1_FAIL, /**<      170h: 76  RPM2PWM 1 Fan Fail  */
    .pfnR2P1_STALL_Handler       = (void*) NVIC_Handler_R2P1_STALL, /**<      174h: 77  RPM2PWM 1 Fan Stall  */
    .pfnADC_SNGL_Handler         = (void*) NVIC_Handler_ADC_SNGL, /**<      178h: 78  ADC_SNGL  */
    .pfnADC_RPT_Handler          = (void*) NVIC_Handler_ADC_RPT, /**<      17Ch: 79  ADC_RPT  */
    .pfnRCID0_Handler            = (void*) NVIC_Handler_RCID0, /**<      180h: 80  RCID 0  */
    .pfnRCID1_Handler            = (void*) NVIC_Handler_RCID1, /**<      184h: 81  RCID 1  */
    .pfnRCID2_Handler            = (void*) NVIC_Handler_RCID2, /**<      188h: 82  RCID 2  */
    .pfnLED0_Handler             = (void*) NVIC_Handler_LED0, /**<      18Ch: 83  LED0  */
    .pfnLED1_Handler             = (void*) NVIC_Handler_LED1, /**<      190h: 84  LED1  */
    .pfnLED2_Handler             = (void*) NVIC_Handler_LED2, /**<      194h: 85  LED2  */
    .pfnLED3_Handler             = (void*) NVIC_Handler_LED3, /**<      198h: 86  LED2  */
    .pfnPHOT_Handler             = (void*) NVIC_Handler_PHOT, /**<      19Ch: 87  ProcHot Monitor  */
    .pfnPWRGD0_Handler           = (void*) NVIC_Handler_PWRGD0, /**<      1A0h: 88  PowerGuard 0 Status  */
    .pfnPWRGD1_Handler           = (void*) NVIC_Handler_PWRGD1, /**<      1A4h: 89  PowerGuard 1 Status  */
    .pfnLPCBERR_Handler          = (void*) NVIC_Handler_LPCBERR, /**<      1A8h: 90  LPC Bus Error  */
    .pfnQMSPI0_Handler           = (void*) NVIC_Handler_QMSPI0, /**<      1ACh: 91  QMSPI 0  */
    .pfnGPSPI0_TX_Handler        = (void*) NVIC_Handler_GPSPI0_TX, /**<      1B0h: 92  GP-SPI0 TX  */
    .pfnGPSPI0_RX_Handler        = (void*) NVIC_Handler_GPSPI0_RX, /**<      1B4h: 93  GP-SPI0 RX  */
    .pfnGPSPI1_TX_Handler        = (void*) NVIC_Handler_GPSPI1_TX, /**<      1B8h: 94  GP-SPI1 TX  */
    .pfnGPSPI1_RX_Handler        = (void*) NVIC_Handler_GPSPI1_RX, /**<      1BCh: 95  GP-SPI1 RX  */
    .pfnBC0_BUSY_Handler         = (void*) NVIC_Handler_BC0_BUSY, /**<      1C0h: 96  BC-Link0 Busy-Clear  */
    .pfnBC0_ERR_Handler          = (void*) NVIC_Handler_BC0_ERR, /**<      1C4h: 97  BC-Link0 Error  */
    .pfnBC1_BUSY_Handler         = (void*) NVIC_Handler_BC1_BUSY, /**<      1C8h: 98  BC-Link1 Busy-Clear  */
    .pfnBC1_ERR_Handler          = (void*) NVIC_Handler_BC1_ERR, /**<      1CCh: 99  BC-Link1 Error  */
    .pfnPS2_0_Handler            = (void*) NVIC_Handler_PS2_0, /**<      1D0h: 100  PS2_0  */
    .pfnPS2_1_Handler            = (void*) NVIC_Handler_PS2_1, /**<      1D4h: 101  PS2_1  */
    .pfnPS2_2_Handler            = (void*) NVIC_Handler_PS2_2, /**<      1D8h: 102  PS2_2  */
    .pfnESPI_PC_Handler          = (void*) NVIC_Handler_ESPI_PC, /**<      1DCh: 103  eSPI Periph Chan  */
    .pfnESPI_BM1_Handler         = (void*) NVIC_Handler_ESPI_BM1, /**<      1E0h: 104  eSPI Bus Master 1  */
    .pfnESPI_BM2_Handler         = (void*) NVIC_Handler_ESPI_BM2, /**<      1E4h: 105  eSPI Bus Master 2  */
    .pfnESPI_LTR_Handler         = (void*) NVIC_Handler_ESPI_LTR, /**<      1E8h: 106  eSPI LTR  */
    .pfnESPI_OOB_UP_Handler      = (void*) NVIC_Handler_ESPI_OOB_UP, /**<      1ECh: 107  eSPI OOB Up  */
    .pfnESPI_OOB_DN_Handler      = (void*) NVIC_Handler_ESPI_OOB_DN, /**<      1F0h: 108  eSPI OOB Down  */
    .pfnESPI_FLASH_Handler       = (void*) NVIC_Handler_ESPI_FLASH, /**<      1F4h: 109  eSPI Flash Chan  */
    .pfnESPI_RESET_Handler       = (void*) NVIC_Handler_ESPI_RESET, /**<      1F8h: 110  eSPI Reset  */
    .pfnRTMR_Handler             = (void*) NVIC_Handler_RTMR, /**<      1FCh: 111  RTOS Timer  */
    .pfnHTMR0_Handler            = (void*) NVIC_Handler_HTMR0, /**<      200h: 112  Hibernation Timer 0  */
    .pfnHTMR1_Handler            = (void*) NVIC_Handler_HTMR1, /**<      204h: 113  Hibernation Timer 1  */
    .pfnWK_Handler               = (void*) NVIC_Handler_WK, /**<      208h: 114  Week Alarm  */
    .pfnWKSUB_Handler            = (void*) NVIC_Handler_WKSUB, /**<      20Ch: 115  Week Alarm  sub week  */
    .pfnWKSEC_Handler            = (void*) NVIC_Handler_WKSEC, /**<      210h: 116  Week Alarm  one sec  */
    .pfnWKSUBSEC_Handler         = (void*) NVIC_Handler_WKSUBSEC, /**<      214h: 117  Week Alarm  sub sec  */
    .pfnSYSPWR_Handler           = (void*) NVIC_Handler_SYSPWR, /**<      218h: 118  System Power Present pin  */
    .pfnRTC_Handler              = (void*) NVIC_Handler_RTC, /**<      21Ch: 119  RTC  */
    .pfnRTC_ALARM_Handler        = (void*) NVIC_Handler_RTC_ALARM, /**<      220h: 120  RTC_ALARM  */
    .pfnVCI_OVRD_IN_Handler      = (void*) NVIC_Handler_VCI_OVRD_IN, /**<      224h: 121  VCI Override Input  */
    .pfnVCI_IN0_Handler          = (void*) NVIC_Handler_VCI_IN0, /**<      228h: 122  VCI Input 0  */
    .pfnVCI_IN1_Handler          = (void*) NVIC_Handler_VCI_IN1, /**<      22Ch: 123  VCI Input 1  */
    .pfnVCI_IN2_Handler          = (void*) NVIC_Handler_VCI_IN2, /**<      230h: 124  VCI Input 2  */
    .pfnVCI_IN3_Handler          = (void*) NVIC_Handler_VCI_IN3, /**<      234h: 125  VCI Input 3  */
    .pfnVCI_IN4_Handler          = (void*) NVIC_Handler_VCI_IN4, /**<      238h: 126  VCI Input 4  */
    .pfnVCI_IN5_Handler          = (void*) NVIC_Handler_VCI_IN5, /**<      23Ch: 127  VCI Input 5  */
    .pfnVCI_IN6_Handler          = (void*) NVIC_Handler_VCI_IN6, /**<      240h: 128  VCI Input 6  */
    .pfnPS20A_WAKE_Handler       = (void*) NVIC_Handler_PS20A_WAKE, /**<      244h: 129  PS2 Port 0A Wake  */
    .pfnPS20B_WAKE_Handler       = (void*) NVIC_Handler_PS20B_WAKE, /**<      248h: 130  PS2 Port 0B Wake  */
    .pfnPS21A_WAKE_Handler       = (void*) NVIC_Handler_PS21A_WAKE, /**<      24Ch: 131  PS2 Port 1A Wake  */
    .pfnPS21B_WAKE_Handler       = (void*) NVIC_Handler_PS21B_WAKE, /**<      250h: 132  PS2 Port 1B Wake  */
    .pfnPS21_WAKE_Handler        = (void*) NVIC_Handler_PS21_WAKE, /**<      254h: 133  PS2 Port 1 Wake  */
    .pfnENVMON_Handler           = (void*) NVIC_Handler_ENVMON, /**<      258h: 134  Thernal Monitor  */
    .pfnKEYSCAN_Handler          = (void*) NVIC_Handler_KEYSCAN, /**<      25Ch: 135  Key Scan  */
    .pfnBTMR16_0_Handler         = (void*) NVIC_Handler_BTMR16_0, /**<      260h: 136  16-bit Basic Timer 0  */
    .pfnBTMR16_1_Handler         = (void*) NVIC_Handler_BTMR16_1, /**<      264h: 137  16-bit Basic Timer 1  */
    .pfnBTMR16_2_Handler         = (void*) NVIC_Handler_BTMR16_2, /**<      268h: 138  16-bit Basic Timer 2  */
    .pfnBTMR16_3_Handler         = (void*) NVIC_Handler_BTMR16_3, /**<      26Ch: 139  16-bit Basic Timer 3  */
    .pfnBTMR32_0_Handler         = (void*) NVIC_Handler_BTMR32_0, /**<      270h: 140  32-bit Basic Timer 0  */
    .pfnBTMR32_1_Handler         = (void*) NVIC_Handler_BTMR32_1, /**<      274h: 141  32-bit Basic Timer 1  */
    .pfnEVTMR0_Handler           = (void*) NVIC_Handler_EVTMR0, /**<      278h: 142  Event Counter/Timer 0  */
    .pfnEVTMR1_Handler           = (void*) NVIC_Handler_EVTMR1, /**<      27Ch: 143  Event Counter/Timer 1  */
    .pfnEVTMR2_Handler           = (void*) NVIC_Handler_EVTMR2, /**<      280h: 144  Event Counter/Timer 2  */
    .pfnEVTMR3_Handler           = (void*) NVIC_Handler_EVTMR3, /**<      284h: 145  Event Counter/Timer 3  */
    .pfnCAPTMR_Handler           = (void*) NVIC_Handler_CAPTMR, /**<      288h: 146  Capture Timer  */
    .pfnCAP0_Handler             = (void*) NVIC_Handler_CAP0, /**<      28Ch: 147  Capture 0 Event  */
    .pfnCAP1_Handler             = (void*) NVIC_Handler_CAP1, /**<      290h: 148  Capture 1 Event  */
    .pfnCAP2_Handler             = (void*) NVIC_Handler_CAP2, /**<      294h: 149  Capture 2 Event  */
    .pfnCAP3_Handler             = (void*) NVIC_Handler_CAP3, /**<      298h: 150  Capture 3 Event  */
    .pfnCAP4_Handler             = (void*) NVIC_Handler_CAP4, /**<      29Ch: 151  Capture 4 Event  */
    .pfnCAP5_Handler             = (void*) NVIC_Handler_CAP5, /**<      2A0h: 152  Capture 5 Event  */
    .pfnCMP0_Handler             = (void*) NVIC_Handler_CMP0, /**<      2A4h: 153  Compare 0 Event  */
    .pfnCMP1_Handler             = (void*) NVIC_Handler_CMP1, /**<      2A8h: 154  Compare 1 Event  */
    .pfnPROMSPI_Handler          = (void*) NVIC_Handler_PROMSPI, /**<      2ACh: 155  PROMSPI/EEPROM  */
    .pfnESPI_VWEn_Handler        = (void*) NVIC_Handler_ESPI_VWEn /**<      2B0h: 156  eSPI VWire Enable from Master  */

};

#if (__ARM_FP==4)
/* These functions are used only when compiling with -mfloat-abi=softfp or -mfloat-abi=hard */
/* Save and restore IRQs */
typedef uint32_t irqflags_t;
static bool g_interrupt_enabled;
#define cpu_irq_is_enabled()    (__get_PRIMASK() == 0)
#  define cpu_irq_enable()                             \
        do {                                           \
                g_interrupt_enabled = true;            \
                __DMB();                               \
                __enable_irq();                        \
        } while (0)
#  define cpu_irq_disable()                            \
        do {                                           \
                __disable_irq();                       \
                __DMB();                               \
                g_interrupt_enabled = false;           \
        } while (0)
__always_inline __STATIC_INLINE bool __attribute__((optimize("-O1"))) cpu_irq_is_enabled_flags(irqflags_t flags)
{
        return (flags);
}
__always_inline __STATIC_INLINE void __attribute__((optimize("-O1"))) cpu_irq_restore(irqflags_t flags)
{
        if (cpu_irq_is_enabled_flags(flags))
                cpu_irq_enable();
}
__always_inline __STATIC_INLINE __attribute__((optimize("-O1"))) irqflags_t cpu_irq_save(void)
{
        volatile irqflags_t flags = cpu_irq_is_enabled();
        cpu_irq_disable();
        return flags;
}

/** Address for ARM CPACR */
#define ADDR_CPACR 0xE000ED88
/** CPACR Register */
#define REG_CPACR  (*((volatile uint32_t *)ADDR_CPACR))

/**
* \brief Enable FPU
*/
__always_inline __STATIC_INLINE void __attribute__((optimize("-O1"))) fpu_enable(void)
{
    irqflags_t flags;
    flags = cpu_irq_save();
    REG_CPACR |=  (0xFu << 20);
    __DSB();
    __ISB();
    cpu_irq_restore(flags);
}
#endif /* (__ARM_FP==14) */


/* Optional application-provided functions */
extern void __attribute__((weak,long_call)) _on_reset(void);
extern void __attribute__((weak,long_call)) _on_bootstrap(void);

/**
 * \brief This is the code that gets called on processor reset.
 * To initialize the device, and call the main() routine.
 */
void __attribute__((weak, optimize("-O1"), section(".text.Reset_Handler"), long_call)) 
Reset_Handler(void)
{
    uint32_t *pSrc;

    /* Call the optional application-provided _on_reset() function. */
    if (_on_reset)
      _on_reset();

#if (__ARM_FP==4)
    /* Enable the FPU iff the application is built with -mfloat-abi=softfp or -mfloat-abi=hard */
    fpu_enable();
#endif

    /* Initialize data after TCM is enabled */
    __pic32c_data_initialization();

#ifdef SCB_VTOR_TBLOFF_Msk
    /* Set the vector-table base address. */
    pSrc = (uint32_t *) & _sfixed;
    SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);
#endif 

    /* Initialize the C library */
    __libc_init_array();
    
    /* Call the optional application-provided _on_bootstrap() function. */
    if (_on_bootstrap)
      _on_bootstrap();

    /* Branch to main function */
    main();

#if defined(__DEBUG) || defined(__DEBUG_D)
    __builtin_software_breakpoint();
#endif
    /* Infinite loop */
    while (1) {}
}

/**
* \brief Default interrupt handler for unused IRQs.
*/
void __attribute__((weak,optimize("-O1"),section(".text.Dummy_Handler"),long_call)) 
Dummy_Handler(void)
{
#if defined(__DEBUG) || defined(__DEBUG_D)
    __builtin_software_breakpoint();
#endif
    while (1) 
    {
    }
}
