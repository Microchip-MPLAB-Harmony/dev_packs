/**
 * \file
 *
 * \brief MPLAB(R) XC32 - Startup code for SAME70Q19B
 *
 * Copyright (c) 2023 Microchip Technology Inc.
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

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#if __XC32_VERSION__ >= 2300
#pragma nocodecov
#endif

/*
 * Define register accesses conditionally based on device header style
 */
#if (HEADER_FORMAT_VERSION_MAJOR<2) /* Legacy header file */
#ifndef EFC_REGS
#define EFC_REGS     EFC
#endif
#ifndef RSTC_REGS
#define RSTC_REGS    RSTC
#endif
#endif /* HEADER_FORMAT_VERSION_MAJOR */

#ifndef EFC_EEFC_FCR
#define EFC_EEFC_FCR EEFC_FCR
#endif
#ifndef EFC_EEFC_FSR
#define EFC_EEFC_FSR EEFC_FSR
#endif
#ifndef EFC_EEFC_FRR
#define EFC_EEFC_FRR EEFC_FRR
#endif

#ifndef   __INLINE
#if __GNUC_GNU_INLINE__ == 1
  #define __INLINE              __inline__
#else
  #define __INLINE              inline
#endif
#endif

#ifndef   __STATIC_INLINE
  #define __STATIC_INLINE       static __INLINE
#endif

#ifndef   __STATIC_FORCEINLINE
  #define __STATIC_FORCEINLINE  __attribute__((always_inline)) static __INLINE
#endif

#include <xc.h>
#include <libpic32c.h>

#ifndef __always_inline
#define __always_inline	__attribute__((__always_inline__))
#endif

/*
 *  Define the __XC32_RESET_HANDLER_NAME macro on the command line when you
 *  want to use a different name for the Reset Handler function.
 */
#ifndef __XC32_RESET_HANDLER_NAME
#define __XC32_RESET_HANDLER_NAME Reset_Handler
#endif /* __XC32_RESET_HANDLER_NAME */

/*
 *  The MPLAB X Simulator does not yet support simulation of programming the 
 *  GPNVM bits yet. We can remove this once it supports the FRDY bit.
 */
#ifdef __MPLAB_DEBUGGER_SIMULATOR
#define __XC32_SKIP_STARTUP_GPNVM_WAIT
#endif

/*
 *  This startup code relies on features that are specific to the MPLAB XC32
 *  toolchain. Do not use it with other toolchains.
 */
#ifndef __XC32
#warning This startup code is intended for use with the MPLAB XC32 Compiler only.
#endif

/*
 *  Constants used for setting the GPNVM bits for TCM Size.
 */
#define GPNVM_TCM_SIZE_Pos        7u
#define GPNVM_TCM_SIZE_Msk        (0x3u << GPNVM_TCM_SIZE_Pos)
#define GPNVM_TCM_SIZE_0K_Val     (0x0u << GPNVM_TCM_SIZE_Pos)
#define GPNVM_TCM_SIZE_32K_Val    (0x1u << GPNVM_TCM_SIZE_Pos)
#define GPNVM_TCM_SIZE_64K_Val    (0x2u << GPNVM_TCM_SIZE_Pos)
#define GPNVM_TCM_SIZE_128K_Val   (0x3u << GPNVM_TCM_SIZE_Pos)

/** \brief  TCM memory enable

 The function enables TCM memories
 */
__STATIC_INLINE void __attribute__((optimize("-O1"))) TCM_Enable(void)
{
    __DSB();
    __ISB();
    SCB->ITCMCR = (SCB_ITCMCR_EN_Msk  | SCB_ITCMCR_RMW_Msk
                    | SCB_ITCMCR_RETEN_Msk);
    SCB->DTCMCR = (SCB_DTCMCR_EN_Msk | SCB_DTCMCR_RMW_Msk
                    | SCB_DTCMCR_RETEN_Msk);
    __DSB();
    __ISB();
}

/** \brief  TCM memory Disable
 
 The function disables TCM memories
 */
__STATIC_INLINE void __attribute__((optimize("-O1"))) TCM_Disable(void)
{
    /* Define the __XC32_SKIP_STARTUP_GPNVM preprocessor macro when you do not
     * want this code to modify the GPNVM bits at runtime.
     * Define the __XC32_SKIP_STARTUP_GPNVM_WAIT preprocessor macro when you do
     * not want the code to poll the FRDY bit before continuing.
     */
#if !defined(__XC32_SKIP_STARTUP_GPNVM)
    static uint32_t gpnvm_value;
    EFC_REGS->EEFC_FCR = (EEFC_FCR_FKEY_PASSWD | EEFC_FCR_FCMD_GGPB);
#if !defined(__XC32_SKIP_STARTUP_GPNVM_WAIT)
    while (!(EFC_REGS->EEFC_FSR & EEFC_FSR_FRDY_Msk));
#endif
    gpnvm_value=EFC_REGS->EEFC_FRR;

    /* 0K size of ITCM and DTCM */
    /* GPNVM bits[8:7] == b'00 */
    if ((gpnvm_value & GPNVM_TCM_SIZE_Msk) != GPNVM_TCM_SIZE_0K_Val)
    {
            EFC_REGS->EEFC_FCR = (EEFC_FCR_FKEY_PASSWD | EEFC_FCR_FCMD_CGPB
                            | EEFC_FCR_FARG(8));
#if !defined(__XC32_SKIP_STARTUP_GPNVM_WAIT)
            while (!(EFC_REGS->EEFC_FSR & EEFC_FSR_FRDY_Msk));
#endif
            EFC_REGS->EEFC_FCR = (EEFC_FCR_FKEY_PASSWD | EEFC_FCR_FCMD_CGPB
                            | EEFC_FCR_FARG(7));
#if !defined(__XC32_SKIP_STARTUP_GPNVM_WAIT)
            while (!(EFC_REGS->EEFC_FSR & EEFC_FSR_FRDY_Msk));
            RSTC_REGS->RSTC_CR = RSTC_CR_KEY_PASSWD | RSTC_CR_PROCRST_Msk;
#endif
    }
#endif /* !defined(__XC32_SKIP_STARTUP_GPNVM) */
    __DSB();
    __ISB();
    SCB->ITCMCR &= ~(uint32_t)SCB_ITCMCR_EN_Msk;
    SCB->DTCMCR &= ~(uint32_t)SCB_ITCMCR_EN_Msk;
    __DSB();
    __ISB();
}

/** \brief  TCM memory configure size
 
 The function configures size of TCM memory based on __XC32_ITCM_LENGTH macro
 */
__STATIC_INLINE void __attribute__((optimize("-O1"))) TCM_ConfigureSize(void)
{
    /* Define the __XC32_SKIP_STARTUP_GPNVM preprocessor macro when you do not
     * want this code to modify the GPNVM bits at runtime.
     * Define the __XC32_SKIP_STARTUP_GPNVM_WAIT preprocessor macro when you do
     * not want the code to poll the FRDY bit before continuing.
     */
#if !defined(__XC32_SKIP_STARTUP_GPNVM)
#if defined(__XC32_ITCM_LENGTH)
    static uint32_t gpnvm_value;
    EFC_REGS->EEFC_FCR = (EEFC_FCR_FKEY_PASSWD | EEFC_FCR_FCMD_GGPB);
#if !defined(__XC32_SKIP_STARTUP_GPNVM_WAIT)
    while (!(EFC_REGS->EEFC_FSR & EEFC_FSR_FRDY_Msk));
#endif
    gpnvm_value=EFC_REGS->EEFC_FRR;

# if (__XC32_ITCM_LENGTH == 0x8000)
    /* 32K default size of ITCM and DTCM */
    /* GPNVM bits[8:7] == b'01 */
    if ((gpnvm_value & GPNVM_TCM_SIZE_Msk) != GPNVM_TCM_SIZE_32K_Val)
    {
      EFC_REGS->EEFC_FCR = (EEFC_FCR_FKEY_PASSWD | EEFC_FCR_FCMD_CGPB
                              | EEFC_FCR_FARG(8));
#if !defined(__XC32_SKIP_STARTUP_GPNVM_WAIT)
      while (!(EFC_REGS->EEFC_FSR & EEFC_FSR_FRDY_Msk));
#endif
      EFC_REGS->EEFC_FCR = (EEFC_FCR_FKEY_PASSWD | EEFC_FCR_FCMD_SGPB
                              | EEFC_FCR_FARG(7));
#if !defined(__XC32_SKIP_STARTUP_GPNVM_WAIT)
      while (!(EFC_REGS->EEFC_FSR & EEFC_FSR_FRDY_Msk));
      RSTC_REGS->RSTC_CR = RSTC_CR_KEY_PASSWD | RSTC_CR_PROCRST_Msk;
#endif
    }
# elif (__XC32_ITCM_LENGTH == 0x10000)
    /* 64K */
    /* GPNVM bits[8:7] == b'10 */
    if ((gpnvm_value & GPNVM_TCM_SIZE_Msk) != GPNVM_TCM_SIZE_64K_Val)
    {
      EFC_REGS->EEFC_FCR = (EEFC_FCR_FKEY_PASSWD | EEFC_FCR_FCMD_SGPB
                              | EEFC_FCR_FARG(8));
#if !defined(__XC32_SKIP_STARTUP_GPNVM_WAIT)
      while (!(EFC_REGS->EEFC_FSR & EEFC_FSR_FRDY_Msk));
#endif
      EFC_REGS->EEFC_FCR = (EEFC_FCR_FKEY_PASSWD | EEFC_FCR_FCMD_CGPB
                              | EEFC_FCR_FARG(7));
#if !defined(__XC32_SKIP_STARTUP_GPNVM_WAIT)
      while (!(EFC_REGS->EEFC_FSR & EEFC_FSR_FRDY_Msk));
      RSTC_REGS->RSTC_CR = RSTC_CR_KEY_PASSWD | RSTC_CR_PROCRST_Msk;
#endif
    }
# elif (__XC32_ITCM_LENGTH == 0x20000)
    /* 128K */
    /* GPNVM bits[8:7] == b'11 */
    if ((gpnvm_value & GPNVM_TCM_SIZE_Msk) != GPNVM_TCM_SIZE_128K_Val)
    {
      EFC_REGS->EEFC_FCR = (EEFC_FCR_FKEY_PASSWD | EEFC_FCR_FCMD_SGPB
                              | EEFC_FCR_FARG(8));
#if !defined(__XC32_SKIP_STARTUP_GPNVM_WAIT)
      while (!(EFC_REGS->EEFC_FSR & EEFC_FSR_FRDY_Msk));
#endif
      EFC_REGS->EEFC_FCR = (EEFC_FCR_FKEY_PASSWD | EEFC_FCR_FCMD_SGPB
                              | EEFC_FCR_FARG(7));
#if !defined(__XC32_SKIP_STARTUP_GPNVM_WAIT)
      while (!(EFC_REGS->EEFC_FSR & EEFC_FSR_FRDY_Msk));
      RSTC_REGS->RSTC_CR = RSTC_CR_KEY_PASSWD | RSTC_CR_PROCRST_Msk;
#endif
    }
# endif /* __XC32_ITCM_LENGTH == value */
#endif /* defined(__XC32_ITCM_LENGTH) */
#endif /* !defined(__XC32_SKIP_STARTUP_GPNVM) */
}



/* Initialize segments */
extern uint32_t __svectors;
extern uint32_t _stack;
extern uint32_t _dinit_size;
extern uint32_t _dinit_addr;

/** \cond DOXYGEN_SHOULD_SKIP_THIS */
int main(void);
/** \endcond */

extern void __attribute__((long_call)) __libc_init_array(void);

/* Default empty handler */
void __attribute__((weak, used, optimize("-O1"), long_call, externally_visible)) Dummy_Handler(void);

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wredundant-decls"

/* Reset handler and application-provided reset handler */
void __attribute__((weak, optimize("-O1"), long_call, naked, externally_visible)) Reset_Handler(void);
extern void __attribute__((weak, used, long_call)) __XC32_RESET_HANDLER_NAME(void);

#pragma GCC diagnostic pop

/* Cortex-M7 core handlers */
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
void SUPC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RSTC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTT_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WDT_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PMC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EFC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART0_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART1_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved9_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USART0_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USART1_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USART2_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOD_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOE_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HSMCI_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWIHS0_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWIHS1_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPI0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SSC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CH0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC4_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CH1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC5_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CH2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AFEC0_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DACC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PWM0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ICM_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ACC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USBHS_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN0_INT0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN0_INT1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN1_INT0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN1_INT1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AFEC1_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWIHS2_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPI1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QSPI_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART2_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART3_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART4_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC6_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_CH0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC7_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_CH1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC8_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_CH2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC9_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_CH0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC10_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_CH1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC11_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_CH2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved53_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved54_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved55_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AES_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void XDMAC_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ISI_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PWM1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FPU_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved62_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RSWDT_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCW_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCF_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IXC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2SC0_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2SC1_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q3_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q4_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q5_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"

/* Exception Table */
__attribute__ ((section(".vectors.default"), weak, externally_visible))
const DeviceVectors exception_table=
{
        /* Configure Initial Stack Pointer, using linker-generated symbols */
        .pvStack = (void*) (&_stack),

        .pfnReset_Handler              = (void*) __XC32_RESET_HANDLER_NAME,
        /* .pfnNonMaskableInt_Handler = */ (void*) NonMaskableInt_Handler,
        .pfnHardFault_Handler          = (void*) HardFault_Handler,
        /* .pfnMemoryManagement_Handler = */ (void*) MemoryManagement_Handler,
        .pfnBusFault_Handler           = (void*) BusFault_Handler,
        .pfnUsageFault_Handler         = (void*) UsageFault_Handler,
        /* .pvReservedC9            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC8            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC7            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC6            = */ (void*) (0UL), /* Reserved */
        /* .pfnSVCall_Handler       = */ (void*) SVCall_Handler,
        /* .pfnDebugMonitor_Handler = */ (void*) DebugMonitor_Handler,
        /* .pvReservedC3            = */ (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

#if (HEADER_FORMAT_VERSION_MAJOR > 1) /* include_mcc header file */
        /* Configurable interrupts with MCC names */
        /* .pfnSUPC_Handler         = */ (void*) SUPC_Handler,        /* 0  Supply Controller */
        /* .pfnRSTC_Handler         = */ (void*) RSTC_Handler,        /* 1  Reset Controller */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 2  Real-time Clock */
        /* .pfnRTT_Handler          = */ (void*) RTT_Handler,         /* 3  Real-time Timer */
        /* .pfnWDT_Handler          = */ (void*) WDT_Handler,         /* 4  Watchdog Timer */
        /* .pfnPMC_Handler          = */ (void*) PMC_Handler,         /* 5  Power Management Controller */
        /* .pfnEFC_Handler          = */ (void*) EFC_Handler,         /* 6  Embedded Flash Controller */
        /* .pfnUART0_Handler        = */ (void*) UART0_Handler,       /* 7  Universal Asynchronous Receiver Transmitter */
        /* .pfnUART1_Handler        = */ (void*) UART1_Handler,       /* 8  Universal Asynchronous Receiver Transmitter */
        /* .pvReserved9             = */ (void*) (0UL),               /* 9  Reserved */
        /* .pfnPIOA_Handler         = */ (void*) PIOA_Handler,        /* 10 Parallel Input/Output Controller */
        /* .pfnPIOB_Handler         = */ (void*) PIOB_Handler,        /* 11 Parallel Input/Output Controller */
        /* .pfnPIOC_Handler         = */ (void*) PIOC_Handler,        /* 12 Parallel Input/Output Controller */
        /* .pfnUSART0_Handler       = */ (void*) USART0_Handler,      /* 13 Universal Synchronous Asynchronous Receiver Transmitter */
        /* .pfnUSART1_Handler       = */ (void*) USART1_Handler,      /* 14 Universal Synchronous Asynchronous Receiver Transmitter */
        /* .pfnUSART2_Handler       = */ (void*) USART2_Handler,      /* 15 Universal Synchronous Asynchronous Receiver Transmitter */
        /* .pfnPIOD_Handler         = */ (void*) PIOD_Handler,        /* 16 Parallel Input/Output Controller */
        /* .pfnPIOE_Handler         = */ (void*) PIOE_Handler,        /* 17 Parallel Input/Output Controller */
        /* .pfnHSMCI_Handler        = */ (void*) HSMCI_Handler,       /* 18 High Speed MultiMedia Card Interface */
        /* .pfnTWIHS0_Handler       = */ (void*) TWIHS0_Handler,      /* 19 Two-wire Interface High Speed */
        /* .pfnTWIHS1_Handler       = */ (void*) TWIHS1_Handler,      /* 20 Two-wire Interface High Speed */
        /* .pfnSPI0_Handler         = */ (void*) SPI0_Handler,        /* 21 Serial Peripheral Interface */
        /* .pfnSSC_Handler          = */ (void*) SSC_Handler,         /* 22 Synchronous Serial Controller */
        /* .pfnTC0_CH0_Handler      = */ (void*) TC0_CH0_Handler,     /* 23 Timer/Counter 0 Channel 0 */
        /* .pfnTC0_CH1_Handler      = */ (void*) TC0_CH1_Handler,     /* 24 Timer/Counter 0 Channel 1 */
        /* .pfnTC0_CH2_Handler      = */ (void*) TC0_CH2_Handler,     /* 25 Timer/Counter 0 Channel 2 */
        /* .pfnTC1_CH0_Handler      = */ (void*) TC1_CH0_Handler,     /* 26 Timer/Counter 1 Channel 0 */
        /* .pfnTC1_CH1_Handler      = */ (void*) TC1_CH1_Handler,     /* 27 Timer/Counter 1 Channel 1 */
        /* .pfnTC1_CH2_Handler      = */ (void*) TC1_CH2_Handler,     /* 28 Timer/Counter 1 Channel 2 */
        /* .pfnAFEC0_Handler        = */ (void*) AFEC0_Handler,       /* 29 Analog Front-End Controller */
        /* .pfnDACC_Handler         = */ (void*) DACC_Handler,        /* 30 Digital-to-Analog Converter Controller */
        /* .pfnPWM0_Handler         = */ (void*) PWM0_Handler,        /* 31 Pulse Width Modulation Controller */
        /* .pfnICM_Handler          = */ (void*) ICM_Handler,         /* 32 Integrity Check Monitor */
        /* .pfnACC_Handler          = */ (void*) ACC_Handler,         /* 33 Analog Comparator Controller */
        /* .pfnUSBHS_Handler        = */ (void*) USBHS_Handler,       /* 34 USB High-Speed Interface */
        /* .pfnMCAN0_INT0_Handler   = */ (void*) MCAN0_INT0_Handler,  /* 35 Controller Area Network */
        /* .pfnMCAN0_INT1_Handler   = */ (void*) MCAN0_INT1_Handler,  /* 36 Controller Area Network */
        /* .pfnMCAN1_INT0_Handler   = */ (void*) MCAN1_INT0_Handler,  /* 37 Controller Area Network */
        /* .pfnMCAN1_INT1_Handler   = */ (void*) MCAN1_INT1_Handler,  /* 38 Controller Area Network */
        /* .pfnGMAC_Handler         = */ (void*) GMAC_Handler,        /* 39 Gigabit Ethernet MAC */
        /* .pfnAFEC1_Handler        = */ (void*) AFEC1_Handler,       /* 40 Analog Front-End Controller */
        /* .pfnTWIHS2_Handler       = */ (void*) TWIHS2_Handler,      /* 41 Two-wire Interface High Speed */
        /* .pfnSPI1_Handler         = */ (void*) SPI1_Handler,        /* 42 Serial Peripheral Interface */
        /* .pfnQSPI_Handler         = */ (void*) QSPI_Handler,        /* 43 Quad Serial Peripheral Interface */
        /* .pfnUART2_Handler        = */ (void*) UART2_Handler,       /* 44 Universal Asynchronous Receiver Transmitter */
        /* .pfnUART3_Handler        = */ (void*) UART3_Handler,       /* 45 Universal Asynchronous Receiver Transmitter */
        /* .pfnUART4_Handler        = */ (void*) UART4_Handler,       /* 46 Universal Asynchronous Receiver Transmitter */
        /* .pfnTC2_CH0_Handler      = */ (void*) TC2_CH0_Handler,     /* 47 Timer/Counter 2 Channel 0 */
        /* .pfnTC2_CH1_Handler      = */ (void*) TC2_CH1_Handler,     /* 48 Timer/Counter 2 Channel 1 */
        /* .pfnTC2_CH2_Handler      = */ (void*) TC2_CH2_Handler,     /* 49 Timer/Counter 2 Channel 2 */
        /* .pfnTC3_CH0_Handler      = */ (void*) TC3_CH0_Handler,     /* 50 Timer/Counter 3 Channel 0 */
        /* .pfnTC3_CH1_Handler      = */ (void*) TC3_CH1_Handler,     /* 51 Timer/Counter 3 Channel 1 */
        /* .pfnTC3_CH2_Handler      = */ (void*) TC3_CH2_Handler,     /* 52 Timer/Counter 3 Channel 2 */
        /* .pvReserved53            = */ (void*) (0UL),               /* 53 Reserved */
        /* .pvReserved54            = */ (void*) (0UL),               /* 54 Reserved */
        /* .pvReserved55            = */ (void*) (0UL),               /* 55 Reserved */
        /* .pfnAES_Handler          = */ (void*) AES_Handler,         /* 56 Advanced Encryption Standard */
        /* .pfnTRNG_Handler         = */ (void*) TRNG_Handler,        /* 57 True Random Number Generator */
        /* .pfnXDMAC_Handler        = */ (void*) XDMAC_Handler,       /* 58 Extensible DMA Controller */
        /* .pfnISI_Handler          = */ (void*) ISI_Handler,         /* 59 Image Sensor Interface */
        /* .pfnPWM1_Handler         = */ (void*) PWM1_Handler,        /* 60 Pulse Width Modulation Controller */
        /* .pfnFPU_Handler          = */ (void*) FPU_Handler,         /* 61 Floating Point Unit */
        /* .pvReserved62            = */ (void*) (0UL),               /* 62 Reserved */
        /* .pfnRSWDT_Handler        = */ (void*) RSWDT_Handler,       /* 63 Reinforced Safety Watchdog Timer */
        /* .pfnCCW_Handler          = */ (void*) CCW_Handler,         /* 64 System Control Block */
        /* .pfnCCF_Handler          = */ (void*) CCF_Handler,         /* 65 System Control Block */
        /* .pfnGMAC_Q1_Handler      = */ (void*) GMAC_Q1_Handler,     /* 66 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q2_Handler      = */ (void*) GMAC_Q2_Handler,     /* 67 Gigabit Ethernet MAC */
        /* .pfnIXC_Handler          = */ (void*) IXC_Handler,         /* 68 Floating Point Unit */
        /* .pfnI2SC0_Handler        = */ (void*) I2SC0_Handler,       /* 69 Inter-IC Sound Controller */
        /* .pfnI2SC1_Handler        = */ (void*) I2SC1_Handler,       /* 70 Inter-IC Sound Controller */
        /* .pfnGMAC_Q3_Handler      = */ (void*) GMAC_Q3_Handler,     /* 71 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q4_Handler      = */ (void*) GMAC_Q4_Handler,     /* 72 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q5_Handler      = */ (void*) GMAC_Q5_Handler      /* 73 Gigabit Ethernet MAC */

#else /* Legacy defined(_SAME70Q19B_H) */
        /* Configurable interrupts with Legacy names */
        /* .pfnSUPC_Handler         = */ (void*) SUPC_Handler,        /* 0  Supply Controller */
        /* .pfnRSTC_Handler         = */ (void*) RSTC_Handler,        /* 1  Reset Controller */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 2  Real-time Clock */
        /* .pfnRTT_Handler          = */ (void*) RTT_Handler,         /* 3  Real-time Timer */
        /* .pfnWDT_Handler          = */ (void*) WDT_Handler,         /* 4  Watchdog Timer */
        /* .pfnPMC_Handler          = */ (void*) PMC_Handler,         /* 5  Power Management Controller */
        /* .pfnEFC_Handler          = */ (void*) EFC_Handler,         /* 6  Embedded Flash Controller */
        /* .pfnUART0_Handler        = */ (void*) UART0_Handler,       /* 7  Universal Asynchronous Receiver Transmitter */
        /* .pfnUART1_Handler        = */ (void*) UART1_Handler,       /* 8  Universal Asynchronous Receiver Transmitter */
        /* .pvReserved9             = */ (void*) (0UL),               /* 9  Reserved */
        /* .pfnPIOA_Handler         = */ (void*) PIOA_Handler,        /* 10 Parallel Input/Output Controller */
        /* .pfnPIOB_Handler         = */ (void*) PIOB_Handler,        /* 11 Parallel Input/Output Controller */
        /* .pfnPIOC_Handler         = */ (void*) PIOC_Handler,        /* 12 Parallel Input/Output Controller */
        /* .pfnUSART0_Handler       = */ (void*) USART0_Handler,      /* 13 Universal Synchronous Asynchronous Receiver Transmitter */
        /* .pfnUSART1_Handler       = */ (void*) USART1_Handler,      /* 14 Universal Synchronous Asynchronous Receiver Transmitter */
        /* .pfnUSART2_Handler       = */ (void*) USART2_Handler,      /* 15 Universal Synchronous Asynchronous Receiver Transmitter */
        /* .pfnPIOD_Handler         = */ (void*) PIOD_Handler,        /* 16 Parallel Input/Output Controller */
        /* .pfnPIOE_Handler         = */ (void*) PIOE_Handler,        /* 17 Parallel Input/Output Controller */
        /* .pfnHSMCI_Handler        = */ (void*) HSMCI_Handler,       /* 18 High Speed MultiMedia Card Interface */
        /* .pfnTWIHS0_Handler       = */ (void*) TWIHS0_Handler,      /* 19 Two-wire Interface High Speed */
        /* .pfnTWIHS1_Handler       = */ (void*) TWIHS1_Handler,      /* 20 Two-wire Interface High Speed */
        /* .pfnSPI0_Handler         = */ (void*) SPI0_Handler,        /* 21 Serial Peripheral Interface */
        /* .pfnSSC_Handler          = */ (void*) SSC_Handler,         /* 22 Synchronous Serial Controller */
        /* .pfnTC0_Handler          = */ (void*) TC0_Handler,         /* 23 Timer Counter */
        /* .pfnTC1_Handler          = */ (void*) TC1_Handler,         /* 24 Timer Counter */
        /* .pfnTC2_Handler          = */ (void*) TC2_Handler,         /* 25 Timer Counter */
        /* .pfnTC3_Handler          = */ (void*) TC3_Handler,         /* 26 Timer Counter */
        /* .pfnTC4_Handler          = */ (void*) TC4_Handler,         /* 27 Timer Counter */
        /* .pfnTC5_Handler          = */ (void*) TC5_Handler,         /* 28 Timer Counter */
        /* .pfnAFEC0_Handler        = */ (void*) AFEC0_Handler,       /* 29 Analog Front-End Controller */
        /* .pfnDACC_Handler         = */ (void*) DACC_Handler,        /* 30 Digital-to-Analog Converter Controller */
        /* .pfnPWM0_Handler         = */ (void*) PWM0_Handler,        /* 31 Pulse Width Modulation Controller */
        /* .pfnICM_Handler          = */ (void*) ICM_Handler,         /* 32 Integrity Check Monitor */
        /* .pfnACC_Handler          = */ (void*) ACC_Handler,         /* 33 Analog Comparator Controller */
        /* .pfnUSBHS_Handler        = */ (void*) USBHS_Handler,       /* 34 USB High-Speed Interface */
        /* .pfnMCAN0_INT0_Handler   = */ (void*) MCAN0_INT0_Handler,  /* 35 Controller Area Network */
        /* .pfnMCAN0_INT1_Handler   = */ (void*) MCAN0_INT1_Handler,  /* 36 Controller Area Network */
        /* .pfnMCAN1_INT0_Handler   = */ (void*) MCAN1_INT0_Handler,  /* 37 Controller Area Network */
        /* .pfnMCAN1_INT1_Handler   = */ (void*) MCAN1_INT1_Handler,  /* 38 Controller Area Network */
        /* .pfnGMAC_Handler         = */ (void*) GMAC_Handler,        /* 39 Gigabit Ethernet MAC */
        /* .pfnAFEC1_Handler        = */ (void*) AFEC1_Handler,       /* 40 Analog Front-End Controller */
        /* .pfnTWIHS2_Handler       = */ (void*) TWIHS2_Handler,      /* 41 Two-wire Interface High Speed */
        /* .pfnSPI1_Handler         = */ (void*) SPI1_Handler,        /* 42 Serial Peripheral Interface */
        /* .pfnQSPI_Handler         = */ (void*) QSPI_Handler,        /* 43 Quad Serial Peripheral Interface */
        /* .pfnUART2_Handler        = */ (void*) UART2_Handler,       /* 44 Universal Asynchronous Receiver Transmitter */
        /* .pfnUART3_Handler        = */ (void*) UART3_Handler,       /* 45 Universal Asynchronous Receiver Transmitter */
        /* .pfnUART4_Handler        = */ (void*) UART4_Handler,       /* 46 Universal Asynchronous Receiver Transmitter */
        /* .pfnTC6_Handler          = */ (void*) TC6_Handler,         /* 47 Timer Counter */
        /* .pfnTC7_Handler          = */ (void*) TC7_Handler,         /* 48 Timer Counter */
        /* .pfnTC8_Handler          = */ (void*) TC8_Handler,         /* 49 Timer Counter */
        /* .pfnTC9_Handler          = */ (void*) TC9_Handler,         /* 50 Timer Counter */
        /* .pfnTC10_Handler         = */ (void*) TC10_Handler,        /* 51 Timer Counter */
        /* .pfnTC11_Handler         = */ (void*) TC11_Handler,        /* 52 Timer Counter */
        /* .pvReserved53            = */ (void*) (0UL),               /* 53 Reserved */
        /* .pvReserved54            = */ (void*) (0UL),               /* 54 Reserved */
        /* .pvReserved55            = */ (void*) (0UL),               /* 55 Reserved */
        /* .pfnAES_Handler          = */ (void*) AES_Handler,         /* 56 Advanced Encryption Standard */
        /* .pfnTRNG_Handler         = */ (void*) TRNG_Handler,        /* 57 True Random Number Generator */
        /* .pfnXDMAC_Handler        = */ (void*) XDMAC_Handler,       /* 58 Extensible DMA Controller */
        /* .pfnISI_Handler          = */ (void*) ISI_Handler,         /* 59 Image Sensor Interface */
        /* .pfnPWM1_Handler         = */ (void*) PWM1_Handler,        /* 60 Pulse Width Modulation Controller */
        /* .pfnFPU_Handler          = */ (void*) FPU_Handler,         /* 61 Floating Point Unit */
        /* .pvReserved62            = */ (void*) (0UL),               /* 62 Reserved */
        /* .pfnRSWDT_Handler        = */ (void*) RSWDT_Handler,       /* 63 Reinforced Safety Watchdog Timer */
        /* .pfnCCW_Handler          = */ (void*) CCW_Handler,         /* 64 System Control Block */
        /* .pfnCCF_Handler          = */ (void*) CCF_Handler,         /* 65 System Control Block */
        /* .pfnGMAC_Q1_Handler      = */ (void*) GMAC_Q1_Handler,     /* 66 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q2_Handler      = */ (void*) GMAC_Q2_Handler,     /* 67 Gigabit Ethernet MAC */
        /* .pfnIXC_Handler          = */ (void*) IXC_Handler,         /* 68 Floating Point Unit */
        /* .pfnI2SC0_Handler        = */ (void*) I2SC0_Handler,       /* 69 Inter-IC Sound Controller */
        /* .pfnI2SC1_Handler        = */ (void*) I2SC1_Handler,       /* 70 Inter-IC Sound Controller */
        /* .pfnGMAC_Q3_Handler      = */ (void*) GMAC_Q3_Handler,     /* 71 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q4_Handler      = */ (void*) GMAC_Q4_Handler,     /* 72 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q5_Handler      = */ (void*) GMAC_Q5_Handler      /* 73 Gigabit Ethernet MAC */
#endif
};

#pragma GCC diagnostic pop

#if (__ARM_FP==14) || (__ARM_FP==4)
/* These functions are used only when compiling with -mfloat-abi=softfp or -mfloat-abi=hard */
/* Save and restore IRQs */
typedef uint32_t irqflags_t;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
static bool g_interrupt_enabled;
#pragma GCC diagnostic pop
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
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
__always_inline __STATIC_INLINE bool __attribute__((optimize("-O1"))) cpu_irq_is_enabled_flags(irqflags_t flags)
{
        return (flags);
}
#pragma GCC diagnostic pop
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
#endif /* (__ARM_FP==14) || (__ARM_FP==4) */
 
/* Optional application-provided functions */
extern void __attribute__((weak,long_call)) _on_reset(void);
extern void __attribute__((weak,long_call)) _on_bootstrap(void);

/* Reserved for use by the MPLAB XC32 Compiler */
extern void __attribute__((weak,long_call)) __xc32_on_reset(void);
extern void __attribute__((weak,long_call)) __xc32_on_bootstrap(void);


/**
 * \brief This is the code that gets called on processor reset.
 * To initialize the device, and call the main() routine.
 */
void __attribute__((weak, optimize("-O1"), section(".text.Reset_Handler"), long_call,
                    naked, externally_visible))
Reset_Handler(void)
{





#ifdef SCB_VTOR_TBLOFF_Msk
    uint32_t *pSrc;
#endif

#if defined (__REINIT_STACK_POINTER)
    /* Initialize SP from linker-defined _stack symbol. */
    __asm__ volatile ("ldr sp, =_stack" : : : "sp");

#ifdef SCB_VTOR_TBLOFF_Msk
    /* Buy stack for locals */
    __asm__ volatile ("sub sp, sp, #8" : : : "sp");
#endif
    __asm__ volatile ("add r7, sp, #0" : : : "r7");
#endif

    /* Call the optional application-provided _on_reset() function. */
    if (_on_reset)
      _on_reset();

    /* Reserved for use by MPLAB XC32. */
    if (__xc32_on_reset)
      __xc32_on_reset();


#if (__ARM_FP==14) || (__ARM_FP==4)
    /* Enable the FPU iff the application is built with -mfloat-abi=softfp or -mfloat-abi=hard */
    fpu_enable();
#endif



 



#if !defined(__XC32_SKIP_CACHE_INIT)
    /* Enable Caches */

# if (__ICACHE_PRESENT==1U)
    SCB_EnableICache(); /* Provided by CMSIS-Core */
#endif
# if (__DCACHE_PRESENT==1U)
    SCB_EnableDCache(); /* Provided by CMSIS-Core */
#endif


#endif

    /* TCM config and init */
#if (__ITCM_PRESENT==1)
#ifdef __XC32_ENABLE_TCM
    TCM_ConfigureSize();
     TCM_Enable();
#else
    TCM_Disable();
#endif /* __XC32_ENABLE_TCM */
#endif /* (__ITCM_PRESENT==1) */
    /* Initialize data after TCM is enabled */
 


    /* Data initialization from the XC32 .dinit template */
    __pic32c_data_initialization();
    /* Move the stack to Data Tightly Coupled Memory (DTCM) */
#if defined(__XC32_STACK_IN_TCM)
    __pic32c_TCM_StackInit();
#endif
 
#ifdef SCB_VTOR_TBLOFF_Msk
    /*  Set the vector-table base address. This may be in flash or TCM.
     *  The __svectors symbol is created by the XC32 linker.
     */
    pSrc = (uint32_t *) & __svectors;
    SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);
#endif
 
    /* Initialize the C library */
    __libc_init_array();

    /* Call the optional application-provided _on_bootstrap() function. */
    if (_on_bootstrap)
      _on_bootstrap();

    /* Reserved for use by MPLAB XC32. */
    if (__xc32_on_bootstrap)
      __xc32_on_bootstrap();

    /* Branch to application's main function */
    main();

#if (defined(__DEBUG) || defined(__DEBUG_D))
    __builtin_software_breakpoint();
#endif
    /* Infinite loop */
    while (1) {}
}

/**
* \brief Default interrupt handler for unused IRQs.
*/
void __attribute__((weak, optimize("-O1"), section(".text.Dummy_Handler"),
                    long_call, externally_visible))
Dummy_Handler(void)
{
#if (defined(__DEBUG) || defined(__DEBUG_D))
    __builtin_software_breakpoint();
#endif
    while (1) {}
}
