/**
 * \file
 *
 * \brief MPLAB(R) XC32 - Startup code for CEC1702
 *
 * Copyright (c) 2022 Microchip Technology Inc.
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
void GIRQ08_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ09_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ10_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ11_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ12_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved5_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved6_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved7_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved8_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved9_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved10_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved11_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved12_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved13_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved14_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved15_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved16_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ26_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved18_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved19_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SMB0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SMB1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SMB2_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SMB3_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH00_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH01_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH02_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH03_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH04_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH05_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH06_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH07_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH08_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH09_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH10_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH11_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH12_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH13_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved38_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved39_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART0_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART1_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved42_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved43_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved44_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved45_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved46_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved47_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved48_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved49_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved50_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved51_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved52_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved53_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved54_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved55_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved56_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved57_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved58_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved59_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved60_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved61_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved62_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved63_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved64_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved65_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved66_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved67_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved68_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved69_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved70_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TACH0_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TACH1_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved73_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RPM2PWM_0_FAIL_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RPM2PWM_0_STALL_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RPM2PWM_1_FAIL_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RPM2PWM_1_STALL_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SNGL_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RPT_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RC_ID0_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RC_ID1_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved82_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void LED0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void LED1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved85_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved86_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved87_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved88_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved89_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved90_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QMSPI_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TX0_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RX0_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved94_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved95_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved96_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved97_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved98_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved99_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved100_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved101_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved102_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved103_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved104_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved105_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved106_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved107_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved108_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved109_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved110_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HTM0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HTM1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ALARM_INT_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WKSUB_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WKSEC_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WKSUBSEC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SYSPWR_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_ALARM_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OVRD_IN_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IN0_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IN1_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IN2_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IN3_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IN4_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IN5_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IN6_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved129_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved130_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved131_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved132_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved133_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved134_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void KMS_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER16_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER16_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER16_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER16_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER32_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER32_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CNT_TMR0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CNT_TMR1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CNT_TMR2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CNT_TMR3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_TIMER_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_4_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_5_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void COMPARE_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void COMPARE_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

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
        /* .pfnGIRQ08_Handler       = */ (void*) GIRQ08_Handler,      /* 0  GPIO Pin Control Registers */
        /* .pfnGIRQ09_Handler       = */ (void*) GIRQ09_Handler,      /* 1  GPIO Pin Control Registers */
        /* .pfnGIRQ10_Handler       = */ (void*) GIRQ10_Handler,      /* 2  GPIO Pin Control Registers */
        /* .pfnGIRQ11_Handler       = */ (void*) GIRQ11_Handler,      /* 3  GPIO Pin Control Registers */
        /* .pfnGIRQ12_Handler       = */ (void*) GIRQ12_Handler,      /* 4  GPIO Pin Control Registers */
        /* .pvReserved5             = */ (void*) (0UL),               /* 5  Reserved */
        /* .pvReserved6             = */ (void*) (0UL),               /* 6  Reserved */
        /* .pvReserved7             = */ (void*) (0UL),               /* 7  Reserved */
        /* .pvReserved8             = */ (void*) (0UL),               /* 8  Reserved */
        /* .pvReserved9             = */ (void*) (0UL),               /* 9  Reserved */
        /* .pvReserved10            = */ (void*) (0UL),               /* 10 Reserved */
        /* .pvReserved11            = */ (void*) (0UL),               /* 11 Reserved */
        /* .pvReserved12            = */ (void*) (0UL),               /* 12 Reserved */
        /* .pvReserved13            = */ (void*) (0UL),               /* 13 Reserved */
        /* .pvReserved14            = */ (void*) (0UL),               /* 14 Reserved */
        /* .pvReserved15            = */ (void*) (0UL),               /* 15 Reserved */
        /* .pvReserved16            = */ (void*) (0UL),               /* 16 Reserved */
        /* .pfnGIRQ26_Handler       = */ (void*) GIRQ26_Handler,      /* 17 GPIO Pin Control Registers */
        /* .pvReserved18            = */ (void*) (0UL),               /* 18 Reserved */
        /* .pvReserved19            = */ (void*) (0UL),               /* 19 Reserved */
        /* .pfnSMB0_Handler         = */ (void*) SMB0_Handler,        /* 20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnSMB1_Handler         = */ (void*) SMB1_Handler,        /* 21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnSMB2_Handler         = */ (void*) SMB2_Handler,        /* 22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnSMB3_Handler         = */ (void*) SMB3_Handler,        /* 23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnDMA_CH00_Handler     = */ (void*) DMA_CH00_Handler,    /* 24 DMA Channel 00 Registers */
        /* .pfnDMA_CH01_Handler     = */ (void*) DMA_CH01_Handler,    /* 25 DMA Channel 01 Registers */
        /* .pfnDMA_CH02_Handler     = */ (void*) DMA_CH02_Handler,    /* 26 DMA Channel 00 Registers */
        /* .pfnDMA_CH03_Handler     = */ (void*) DMA_CH03_Handler,    /* 27 DMA Channel 00 Registers */
        /* .pfnDMA_CH04_Handler     = */ (void*) DMA_CH04_Handler,    /* 28 DMA Channel 00 Registers */
        /* .pfnDMA_CH05_Handler     = */ (void*) DMA_CH05_Handler,    /* 29 DMA Channel 00 Registers */
        /* .pfnDMA_CH06_Handler     = */ (void*) DMA_CH06_Handler,    /* 30 DMA Channel 00 Registers */
        /* .pfnDMA_CH07_Handler     = */ (void*) DMA_CH07_Handler,    /* 31 DMA Channel 00 Registers */
        /* .pfnDMA_CH08_Handler     = */ (void*) DMA_CH08_Handler,    /* 32 DMA Channel 00 Registers */
        /* .pfnDMA_CH09_Handler     = */ (void*) DMA_CH09_Handler,    /* 33 DMA Channel 00 Registers */
        /* .pfnDMA_CH10_Handler     = */ (void*) DMA_CH10_Handler,    /* 34 DMA Channel 00 Registers */
        /* .pfnDMA_CH11_Handler     = */ (void*) DMA_CH11_Handler,    /* 35 DMA Channel 00 Registers */
        /* .pfnDMA_CH12_Handler     = */ (void*) DMA_CH12_Handler,    /* 36 DMA Channel 00 Registers */
        /* .pfnDMA_CH13_Handler     = */ (void*) DMA_CH13_Handler,    /* 37 DMA Channel 00 Registers */
        /* .pvReserved38            = */ (void*) (0UL),               /* 38 Reserved */
        /* .pvReserved39            = */ (void*) (0UL),               /* 39 Reserved */
        /* .pfnUART0_Handler        = */ (void*) UART0_Handler,       /* 40 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n          full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        /* .pfnUART1_Handler        = */ (void*) UART1_Handler,       /* 41 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n          full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        /* .pvReserved42            = */ (void*) (0UL),               /* 42 Reserved */
        /* .pvReserved43            = */ (void*) (0UL),               /* 43 Reserved */
        /* .pvReserved44            = */ (void*) (0UL),               /* 44 Reserved */
        /* .pvReserved45            = */ (void*) (0UL),               /* 45 Reserved */
        /* .pvReserved46            = */ (void*) (0UL),               /* 46 Reserved */
        /* .pvReserved47            = */ (void*) (0UL),               /* 47 Reserved */
        /* .pvReserved48            = */ (void*) (0UL),               /* 48 Reserved */
        /* .pvReserved49            = */ (void*) (0UL),               /* 49 Reserved */
        /* .pvReserved50            = */ (void*) (0UL),               /* 50 Reserved */
        /* .pvReserved51            = */ (void*) (0UL),               /* 51 Reserved */
        /* .pvReserved52            = */ (void*) (0UL),               /* 52 Reserved */
        /* .pvReserved53            = */ (void*) (0UL),               /* 53 Reserved */
        /* .pvReserved54            = */ (void*) (0UL),               /* 54 Reserved */
        /* .pvReserved55            = */ (void*) (0UL),               /* 55 Reserved */
        /* .pvReserved56            = */ (void*) (0UL),               /* 56 Reserved */
        /* .pvReserved57            = */ (void*) (0UL),               /* 57 Reserved */
        /* .pvReserved58            = */ (void*) (0UL),               /* 58 Reserved */
        /* .pvReserved59            = */ (void*) (0UL),               /* 59 Reserved */
        /* .pvReserved60            = */ (void*) (0UL),               /* 60 Reserved */
        /* .pvReserved61            = */ (void*) (0UL),               /* 61 Reserved */
        /* .pvReserved62            = */ (void*) (0UL),               /* 62 Reserved */
        /* .pvReserved63            = */ (void*) (0UL),               /* 63 Reserved */
        /* .pvReserved64            = */ (void*) (0UL),               /* 64 Reserved */
        /* .pvReserved65            = */ (void*) (0UL),               /* 65 Reserved */
        /* .pvReserved66            = */ (void*) (0UL),               /* 66 Reserved */
        /* .pvReserved67            = */ (void*) (0UL),               /* 67 Reserved */
        /* .pvReserved68            = */ (void*) (0UL),               /* 68 Reserved */
        /* .pvReserved69            = */ (void*) (0UL),               /* 69 Reserved */
        /* .pvReserved70            = */ (void*) (0UL),               /* 70 Reserved */
        /* .pfnTACH0_Handler        = */ (void*) TACH0_Handler,       /* 71 This block monitors TACH output signals (or locked rotor signals) from\n       various types of fans, and determines their speed. */
        /* .pfnTACH1_Handler        = */ (void*) TACH1_Handler,       /* 72 This block monitors TACH output signals (or locked rotor signals) from\n       various types of fans, and determines their speed. */
        /* .pvReserved73            = */ (void*) (0UL),               /* 73 Reserved */
        /* .pfnRPM2PWM_0_FAIL_Handler = */ (void*) RPM2PWM_0_FAIL_Handler, /* 74 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
        /* .pfnRPM2PWM_0_STALL_Handler = */ (void*) RPM2PWM_0_STALL_Handler, /* 75 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
        /* .pfnRPM2PWM_1_FAIL_Handler = */ (void*) RPM2PWM_1_FAIL_Handler, /* 76 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
        /* .pfnRPM2PWM_1_STALL_Handler = */ (void*) RPM2PWM_1_STALL_Handler, /* 77 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
        /* .pfnSNGL_Handler         = */ (void*) SNGL_Handler,        /* 78 This block is designed to convert external analog voltage readings into digital values. */
        /* .pfnRPT_Handler          = */ (void*) RPT_Handler,         /* 79 This block is designed to convert external analog voltage readings into digital values. */
        /* .pfnRC_ID0_Handler       = */ (void*) RC_ID0_Handler,      /* 80 This interface provides a single pin interface which can discriminate a number of quantized RC constants. */
        /* .pfnRC_ID1_Handler       = */ (void*) RC_ID1_Handler,      /* 81 This interface provides a single pin interface which can discriminate a number of quantized RC constants. */
        /* .pvReserved82            = */ (void*) (0UL),               /* 82 Reserved */
        /* .pfnLED0_Handler         = */ (void*) LED0_Handler,        /* 83 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n      clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n      PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
        /* .pfnLED1_Handler         = */ (void*) LED1_Handler,        /* 84 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n      clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n      PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
        /* .pvReserved85            = */ (void*) (0UL),               /* 85 Reserved */
        /* .pvReserved86            = */ (void*) (0UL),               /* 86 Reserved */
        /* .pvReserved87            = */ (void*) (0UL),               /* 87 Reserved */
        /* .pvReserved88            = */ (void*) (0UL),               /* 88 Reserved */
        /* .pvReserved89            = */ (void*) (0UL),               /* 89 Reserved */
        /* .pvReserved90            = */ (void*) (0UL),               /* 90 Reserved */
        /* .pfnQMSPI_Handler        = */ (void*) QMSPI_Handler,       /* 91 The Quad SPI Master Controller may be used to communicate with various \n        peripheral devices that use a Serial Peripheral Interface, such as EEPROMS, DACs and ADCs.\n        The controller can be configured to support advanced SPI Flash devices with multi-phase access protocols. */
        /* .pfnTX0_Handler          = */ (void*) TX0_Handler,         /* 92 The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n       to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n         standard Serial Peripheral Interface. */
        /* .pfnRX0_Handler          = */ (void*) RX0_Handler,         /* 93 The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n       to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n         standard Serial Peripheral Interface. */
        /* .pvReserved94            = */ (void*) (0UL),               /* 94 Reserved */
        /* .pvReserved95            = */ (void*) (0UL),               /* 95 Reserved */
        /* .pvReserved96            = */ (void*) (0UL),               /* 96 Reserved */
        /* .pvReserved97            = */ (void*) (0UL),               /* 97 Reserved */
        /* .pvReserved98            = */ (void*) (0UL),               /* 98 Reserved */
        /* .pvReserved99            = */ (void*) (0UL),               /* 99 Reserved */
        /* .pvReserved100           = */ (void*) (0UL),               /* 100 Reserved */
        /* .pvReserved101           = */ (void*) (0UL),               /* 101 Reserved */
        /* .pvReserved102           = */ (void*) (0UL),               /* 102 Reserved */
        /* .pvReserved103           = */ (void*) (0UL),               /* 103 Reserved */
        /* .pvReserved104           = */ (void*) (0UL),               /* 104 Reserved */
        /* .pvReserved105           = */ (void*) (0UL),               /* 105 Reserved */
        /* .pvReserved106           = */ (void*) (0UL),               /* 106 Reserved */
        /* .pvReserved107           = */ (void*) (0UL),               /* 107 Reserved */
        /* .pvReserved108           = */ (void*) (0UL),               /* 108 Reserved */
        /* .pvReserved109           = */ (void*) (0UL),               /* 109 Reserved */
        /* .pvReserved110           = */ (void*) (0UL),               /* 110 Reserved */
        /* .pfnTIMER_Handler        = */ (void*) TIMER_Handler,       /* 111 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n      chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n      wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n      timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n      halted during debug by hardware or via a software control bit. */
        /* .pfnHTM0_Handler         = */ (void*) HTM0_Handler,        /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n        This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n        in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. */
        /* .pfnHTM1_Handler         = */ (void*) HTM1_Handler,        /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n        This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n        in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. */
        /* .pfnALARM_INT_Handler    = */ (void*) ALARM_INT_Handler,   /* 114 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnWKSUB_Handler        = */ (void*) WKSUB_Handler,       /* 115 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnWKSEC_Handler        = */ (void*) WKSEC_Handler,       /* 116 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnWKSUBSEC_Handler     = */ (void*) WKSUBSEC_Handler,    /* 117 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnSYSPWR_Handler       = */ (void*) SYSPWR_Handler,      /* 118 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */
        /* .pfnRTC_ALARM_Handler    = */ (void*) RTC_ALARM_Handler,   /* 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */
        /* .pfnOVRD_IN_Handler      = */ (void*) OVRD_IN_Handler,     /* 121 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN0_Handler          = */ (void*) IN0_Handler,         /* 122 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN1_Handler          = */ (void*) IN1_Handler,         /* 123 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN2_Handler          = */ (void*) IN2_Handler,         /* 124 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN3_Handler          = */ (void*) IN3_Handler,         /* 125 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN4_Handler          = */ (void*) IN4_Handler,         /* 126 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN5_Handler          = */ (void*) IN5_Handler,         /* 127 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN6_Handler          = */ (void*) IN6_Handler,         /* 128 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pvReserved129           = */ (void*) (0UL),               /* 129 Reserved */
        /* .pvReserved130           = */ (void*) (0UL),               /* 130 Reserved */
        /* .pvReserved131           = */ (void*) (0UL),               /* 131 Reserved */
        /* .pvReserved132           = */ (void*) (0UL),               /* 132 Reserved */
        /* .pvReserved133           = */ (void*) (0UL),               /* 133 Reserved */
        /* .pvReserved134           = */ (void*) (0UL),               /* 134 Reserved */
        /* .pfnKMS_Handler          = */ (void*) KMS_Handler,         /* 135 The Keyboard Scan Interface block provides a register interface to the EC\n      to directly scan an external keyboard matrix of size up to 18x8. */
        /* .pfnTIMER16_0_Handler    = */ (void*) TIMER16_0_Handler,   /* 136 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER16_1_Handler    = */ (void*) TIMER16_1_Handler,   /* 137 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER16_2_Handler    = */ (void*) TIMER16_2_Handler,   /* 138 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER16_3_Handler    = */ (void*) TIMER16_3_Handler,   /* 139 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER32_0_Handler    = */ (void*) TIMER32_0_Handler,   /* 140 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n      32 bits. The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER32_1_Handler    = */ (void*) TIMER32_1_Handler,   /* 141 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n      32 bits. The name of the timer instance indicates the size of the timer. */
        /* .pfnCNT_TMR0_Handler     = */ (void*) CNT_TMR0_Handler,    /* 142 This interface is a 16-bit auto-reloading timer/counter. */
        /* .pfnCNT_TMR1_Handler     = */ (void*) CNT_TMR1_Handler,    /* 143 This interface is a 16-bit auto-reloading timer/counter. */
        /* .pfnCNT_TMR2_Handler     = */ (void*) CNT_TMR2_Handler,    /* 144 This interface is a 16-bit auto-reloading timer/counter. */
        /* .pfnCNT_TMR3_Handler     = */ (void*) CNT_TMR3_Handler,    /* 145 This interface is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_TIMER_Handler = */ (void*) CAPTURE_TIMER_Handler, /* 146 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_0_Handler    = */ (void*) CAPTURE_0_Handler,   /* 147 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_1_Handler    = */ (void*) CAPTURE_1_Handler,   /* 148 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_2_Handler    = */ (void*) CAPTURE_2_Handler,   /* 149 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_3_Handler    = */ (void*) CAPTURE_3_Handler,   /* 150 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_4_Handler    = */ (void*) CAPTURE_4_Handler,   /* 151 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_5_Handler    = */ (void*) CAPTURE_5_Handler,   /* 152 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCOMPARE_0_Handler    = */ (void*) COMPARE_0_Handler,   /* 153 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCOMPARE_1_Handler    = */ (void*) COMPARE_1_Handler    /* 154 This is a 16-bit auto-reloading timer/counter. */

#else /* Legacy defined(_CEC1702_H) */
        /* Configurable interrupts with Legacy names */
        /* .pfnGIRQ08_Handler       = */ (void*) GIRQ08_Handler,      /* 0  GPIO Pin Control Registers */
        /* .pfnGIRQ09_Handler       = */ (void*) GIRQ09_Handler,      /* 1  GPIO Pin Control Registers */
        /* .pfnGIRQ10_Handler       = */ (void*) GIRQ10_Handler,      /* 2  GPIO Pin Control Registers */
        /* .pfnGIRQ11_Handler       = */ (void*) GIRQ11_Handler,      /* 3  GPIO Pin Control Registers */
        /* .pfnGIRQ12_Handler       = */ (void*) GIRQ12_Handler,      /* 4  GPIO Pin Control Registers */
        /* .pvReserved5             = */ (void*) (0UL),               /* 5  Reserved */
        /* .pvReserved6             = */ (void*) (0UL),               /* 6  Reserved */
        /* .pvReserved7             = */ (void*) (0UL),               /* 7  Reserved */
        /* .pvReserved8             = */ (void*) (0UL),               /* 8  Reserved */
        /* .pvReserved9             = */ (void*) (0UL),               /* 9  Reserved */
        /* .pvReserved10            = */ (void*) (0UL),               /* 10 Reserved */
        /* .pvReserved11            = */ (void*) (0UL),               /* 11 Reserved */
        /* .pvReserved12            = */ (void*) (0UL),               /* 12 Reserved */
        /* .pvReserved13            = */ (void*) (0UL),               /* 13 Reserved */
        /* .pvReserved14            = */ (void*) (0UL),               /* 14 Reserved */
        /* .pvReserved15            = */ (void*) (0UL),               /* 15 Reserved */
        /* .pvReserved16            = */ (void*) (0UL),               /* 16 Reserved */
        /* .pfnGIRQ26_Handler       = */ (void*) GIRQ26_Handler,      /* 17 GPIO Pin Control Registers */
        /* .pvReserved18            = */ (void*) (0UL),               /* 18 Reserved */
        /* .pvReserved19            = */ (void*) (0UL),               /* 19 Reserved */
        /* .pfnSMB0_Handler         = */ (void*) SMB0_Handler,        /* 20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnSMB1_Handler         = */ (void*) SMB1_Handler,        /* 21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnSMB2_Handler         = */ (void*) SMB2_Handler,        /* 22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnSMB3_Handler         = */ (void*) SMB3_Handler,        /* 23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnDMA_CH00_Handler     = */ (void*) DMA_CH00_Handler,    /* 24 DMA Channel 00 Registers */
        /* .pfnDMA_CH01_Handler     = */ (void*) DMA_CH01_Handler,    /* 25 DMA Channel 01 Registers */
        /* .pfnDMA_CH02_Handler     = */ (void*) DMA_CH02_Handler,    /* 26 DMA Channel 00 Registers */
        /* .pfnDMA_CH03_Handler     = */ (void*) DMA_CH03_Handler,    /* 27 DMA Channel 00 Registers */
        /* .pfnDMA_CH04_Handler     = */ (void*) DMA_CH04_Handler,    /* 28 DMA Channel 00 Registers */
        /* .pfnDMA_CH05_Handler     = */ (void*) DMA_CH05_Handler,    /* 29 DMA Channel 00 Registers */
        /* .pfnDMA_CH06_Handler     = */ (void*) DMA_CH06_Handler,    /* 30 DMA Channel 00 Registers */
        /* .pfnDMA_CH07_Handler     = */ (void*) DMA_CH07_Handler,    /* 31 DMA Channel 00 Registers */
        /* .pfnDMA_CH08_Handler     = */ (void*) DMA_CH08_Handler,    /* 32 DMA Channel 00 Registers */
        /* .pfnDMA_CH09_Handler     = */ (void*) DMA_CH09_Handler,    /* 33 DMA Channel 00 Registers */
        /* .pfnDMA_CH10_Handler     = */ (void*) DMA_CH10_Handler,    /* 34 DMA Channel 00 Registers */
        /* .pfnDMA_CH11_Handler     = */ (void*) DMA_CH11_Handler,    /* 35 DMA Channel 00 Registers */
        /* .pfnDMA_CH12_Handler     = */ (void*) DMA_CH12_Handler,    /* 36 DMA Channel 00 Registers */
        /* .pfnDMA_CH13_Handler     = */ (void*) DMA_CH13_Handler,    /* 37 DMA Channel 00 Registers */
        /* .pvReserved38            = */ (void*) (0UL),               /* 38 Reserved */
        /* .pvReserved39            = */ (void*) (0UL),               /* 39 Reserved */
        /* .pfnUART0_Handler        = */ (void*) UART0_Handler,       /* 40 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n          full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        /* .pfnUART1_Handler        = */ (void*) UART1_Handler,       /* 41 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n          full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        /* .pvReserved42            = */ (void*) (0UL),               /* 42 Reserved */
        /* .pvReserved43            = */ (void*) (0UL),               /* 43 Reserved */
        /* .pvReserved44            = */ (void*) (0UL),               /* 44 Reserved */
        /* .pvReserved45            = */ (void*) (0UL),               /* 45 Reserved */
        /* .pvReserved46            = */ (void*) (0UL),               /* 46 Reserved */
        /* .pvReserved47            = */ (void*) (0UL),               /* 47 Reserved */
        /* .pvReserved48            = */ (void*) (0UL),               /* 48 Reserved */
        /* .pvReserved49            = */ (void*) (0UL),               /* 49 Reserved */
        /* .pvReserved50            = */ (void*) (0UL),               /* 50 Reserved */
        /* .pvReserved51            = */ (void*) (0UL),               /* 51 Reserved */
        /* .pvReserved52            = */ (void*) (0UL),               /* 52 Reserved */
        /* .pvReserved53            = */ (void*) (0UL),               /* 53 Reserved */
        /* .pvReserved54            = */ (void*) (0UL),               /* 54 Reserved */
        /* .pvReserved55            = */ (void*) (0UL),               /* 55 Reserved */
        /* .pvReserved56            = */ (void*) (0UL),               /* 56 Reserved */
        /* .pvReserved57            = */ (void*) (0UL),               /* 57 Reserved */
        /* .pvReserved58            = */ (void*) (0UL),               /* 58 Reserved */
        /* .pvReserved59            = */ (void*) (0UL),               /* 59 Reserved */
        /* .pvReserved60            = */ (void*) (0UL),               /* 60 Reserved */
        /* .pvReserved61            = */ (void*) (0UL),               /* 61 Reserved */
        /* .pvReserved62            = */ (void*) (0UL),               /* 62 Reserved */
        /* .pvReserved63            = */ (void*) (0UL),               /* 63 Reserved */
        /* .pvReserved64            = */ (void*) (0UL),               /* 64 Reserved */
        /* .pvReserved65            = */ (void*) (0UL),               /* 65 Reserved */
        /* .pvReserved66            = */ (void*) (0UL),               /* 66 Reserved */
        /* .pvReserved67            = */ (void*) (0UL),               /* 67 Reserved */
        /* .pvReserved68            = */ (void*) (0UL),               /* 68 Reserved */
        /* .pvReserved69            = */ (void*) (0UL),               /* 69 Reserved */
        /* .pvReserved70            = */ (void*) (0UL),               /* 70 Reserved */
        /* .pfnTACH0_Handler        = */ (void*) TACH0_Handler,       /* 71 This block monitors TACH output signals (or locked rotor signals) from\n       various types of fans, and determines their speed. */
        /* .pfnTACH1_Handler        = */ (void*) TACH1_Handler,       /* 72 This block monitors TACH output signals (or locked rotor signals) from\n       various types of fans, and determines their speed. */
        /* .pvReserved73            = */ (void*) (0UL),               /* 73 Reserved */
        /* .pfnRPM2PWM_0_FAIL_Handler = */ (void*) RPM2PWM_0_FAIL_Handler, /* 74 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
        /* .pfnRPM2PWM_0_STALL_Handler = */ (void*) RPM2PWM_0_STALL_Handler, /* 75 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
        /* .pfnRPM2PWM_1_FAIL_Handler = */ (void*) RPM2PWM_1_FAIL_Handler, /* 76 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
        /* .pfnRPM2PWM_1_STALL_Handler = */ (void*) RPM2PWM_1_STALL_Handler, /* 77 The RPM-PWM Interface is an RPM based Fan Control Algorithm that monitors the fan's speed and automatically adjusts\n       the drive to maintain the desired fan speed. This RPM based Fan Control Algorithm controls a PWM output based on a tachometer input. */
        /* .pfnSNGL_Handler         = */ (void*) SNGL_Handler,        /* 78 This block is designed to convert external analog voltage readings into digital values. */
        /* .pfnRPT_Handler          = */ (void*) RPT_Handler,         /* 79 This block is designed to convert external analog voltage readings into digital values. */
        /* .pfnRC_ID0_Handler       = */ (void*) RC_ID0_Handler,      /* 80 This interface provides a single pin interface which can discriminate a number of quantized RC constants. */
        /* .pfnRC_ID1_Handler       = */ (void*) RC_ID1_Handler,      /* 81 This interface provides a single pin interface which can discriminate a number of quantized RC constants. */
        /* .pvReserved82            = */ (void*) (0UL),               /* 82 Reserved */
        /* .pfnLED0_Handler         = */ (void*) LED0_Handler,        /* 83 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n      clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n      PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
        /* .pfnLED1_Handler         = */ (void*) LED1_Handler,        /* 84 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n      clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n      PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
        /* .pvReserved85            = */ (void*) (0UL),               /* 85 Reserved */
        /* .pvReserved86            = */ (void*) (0UL),               /* 86 Reserved */
        /* .pvReserved87            = */ (void*) (0UL),               /* 87 Reserved */
        /* .pvReserved88            = */ (void*) (0UL),               /* 88 Reserved */
        /* .pvReserved89            = */ (void*) (0UL),               /* 89 Reserved */
        /* .pvReserved90            = */ (void*) (0UL),               /* 90 Reserved */
        /* .pfnQMSPI_Handler        = */ (void*) QMSPI_Handler,       /* 91 The Quad SPI Master Controller may be used to communicate with various \n        peripheral devices that use a Serial Peripheral Interface, such as EEPROMS, DACs and ADCs.\n        The controller can be configured to support advanced SPI Flash devices with multi-phase access protocols. */
        /* .pfnTX0_Handler          = */ (void*) TX0_Handler,         /* 92 The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n       to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n         standard Serial Peripheral Interface. */
        /* .pfnRX0_Handler          = */ (void*) RX0_Handler,         /* 93 The General Purpose Serial Peripheral Interface (GP-SPI) may be used\n       to communicate with various peripheral devices, e.g., EEPROMS, DACs, ADCs, that use a\n         standard Serial Peripheral Interface. */
        /* .pvReserved94            = */ (void*) (0UL),               /* 94 Reserved */
        /* .pvReserved95            = */ (void*) (0UL),               /* 95 Reserved */
        /* .pvReserved96            = */ (void*) (0UL),               /* 96 Reserved */
        /* .pvReserved97            = */ (void*) (0UL),               /* 97 Reserved */
        /* .pvReserved98            = */ (void*) (0UL),               /* 98 Reserved */
        /* .pvReserved99            = */ (void*) (0UL),               /* 99 Reserved */
        /* .pvReserved100           = */ (void*) (0UL),               /* 100 Reserved */
        /* .pvReserved101           = */ (void*) (0UL),               /* 101 Reserved */
        /* .pvReserved102           = */ (void*) (0UL),               /* 102 Reserved */
        /* .pvReserved103           = */ (void*) (0UL),               /* 103 Reserved */
        /* .pvReserved104           = */ (void*) (0UL),               /* 104 Reserved */
        /* .pvReserved105           = */ (void*) (0UL),               /* 105 Reserved */
        /* .pvReserved106           = */ (void*) (0UL),               /* 106 Reserved */
        /* .pvReserved107           = */ (void*) (0UL),               /* 107 Reserved */
        /* .pvReserved108           = */ (void*) (0UL),               /* 108 Reserved */
        /* .pvReserved109           = */ (void*) (0UL),               /* 109 Reserved */
        /* .pvReserved110           = */ (void*) (0UL),               /* 110 Reserved */
        /* .pfnTIMER_Handler        = */ (void*) TIMER_Handler,       /* 111 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n      chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n      wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n      timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n      halted during debug by hardware or via a software control bit. */
        /* .pfnHTM0_Handler         = */ (void*) HTM0_Handler,        /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n        This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n        in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. */
        /* .pfnHTM1_Handler         = */ (void*) HTM1_Handler,        /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n        This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n        in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. */
        /* .pfnALARM_INT_Handler    = */ (void*) ALARM_INT_Handler,   /* 114 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnWKSUB_Handler        = */ (void*) WKSUB_Handler,       /* 115 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnWKSEC_Handler        = */ (void*) WKSEC_Handler,       /* 116 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnWKSUBSEC_Handler     = */ (void*) WKSUBSEC_Handler,    /* 117 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnSYSPWR_Handler       = */ (void*) SYSPWR_Handler,      /* 118 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */
        /* .pfnRTC_ALARM_Handler    = */ (void*) RTC_ALARM_Handler,   /* 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n      to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */
        /* .pfnOVRD_IN_Handler      = */ (void*) OVRD_IN_Handler,     /* 121 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN0_Handler          = */ (void*) IN0_Handler,         /* 122 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN1_Handler          = */ (void*) IN1_Handler,         /* 123 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN2_Handler          = */ (void*) IN2_Handler,         /* 124 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN3_Handler          = */ (void*) IN3_Handler,         /* 125 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN4_Handler          = */ (void*) IN4_Handler,         /* 126 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN5_Handler          = */ (void*) IN5_Handler,         /* 127 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN6_Handler          = */ (void*) IN6_Handler,         /* 128 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n       The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pvReserved129           = */ (void*) (0UL),               /* 129 Reserved */
        /* .pvReserved130           = */ (void*) (0UL),               /* 130 Reserved */
        /* .pvReserved131           = */ (void*) (0UL),               /* 131 Reserved */
        /* .pvReserved132           = */ (void*) (0UL),               /* 132 Reserved */
        /* .pvReserved133           = */ (void*) (0UL),               /* 133 Reserved */
        /* .pvReserved134           = */ (void*) (0UL),               /* 134 Reserved */
        /* .pfnKMS_Handler          = */ (void*) KMS_Handler,         /* 135 The Keyboard Scan Interface block provides a register interface to the EC\n      to directly scan an external keyboard matrix of size up to 18x8. */
        /* .pfnTIMER16_0_Handler    = */ (void*) TIMER16_0_Handler,   /* 136 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER16_1_Handler    = */ (void*) TIMER16_1_Handler,   /* 137 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER16_2_Handler    = */ (void*) TIMER16_2_Handler,   /* 138 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER16_3_Handler    = */ (void*) TIMER16_3_Handler,   /* 139 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n      The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER32_0_Handler    = */ (void*) TIMER32_0_Handler,   /* 140 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n      32 bits. The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER32_1_Handler    = */ (void*) TIMER32_1_Handler,   /* 141 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n      32 bits. The name of the timer instance indicates the size of the timer. */
        /* .pfnCNT_TMR0_Handler     = */ (void*) CNT_TMR0_Handler,    /* 142 This interface is a 16-bit auto-reloading timer/counter. */
        /* .pfnCNT_TMR1_Handler     = */ (void*) CNT_TMR1_Handler,    /* 143 This interface is a 16-bit auto-reloading timer/counter. */
        /* .pfnCNT_TMR2_Handler     = */ (void*) CNT_TMR2_Handler,    /* 144 This interface is a 16-bit auto-reloading timer/counter. */
        /* .pfnCNT_TMR3_Handler     = */ (void*) CNT_TMR3_Handler,    /* 145 This interface is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_TIMER_Handler = */ (void*) CAPTURE_TIMER_Handler, /* 146 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_0_Handler    = */ (void*) CAPTURE_0_Handler,   /* 147 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_1_Handler    = */ (void*) CAPTURE_1_Handler,   /* 148 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_2_Handler    = */ (void*) CAPTURE_2_Handler,   /* 149 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_3_Handler    = */ (void*) CAPTURE_3_Handler,   /* 150 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_4_Handler    = */ (void*) CAPTURE_4_Handler,   /* 151 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_5_Handler    = */ (void*) CAPTURE_5_Handler,   /* 152 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCOMPARE_0_Handler    = */ (void*) COMPARE_0_Handler,   /* 153 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCOMPARE_1_Handler    = */ (void*) COMPARE_1_Handler    /* 154 This is a 16-bit auto-reloading timer/counter. */
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

/* __REINIT_STACK_POINTER is defined by default for some devices, but can be
 * disabled with -D__REINIT_STACK_POINTER=0. The code for it is still guarded
 * with an "if defined" for other devices' backwards-compatibility with
 * -D__REINIT_STACK_POINTER, hence the "undef".
 */
#ifndef __REINIT_STACK_POINTER
    #define __REINIT_STACK_POINTER
#elif  (__REINIT_STACK_POINTER == 0)
    #undef  __REINIT_STACK_POINTER
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



 




 


    /* Data initialization from the XC32 .dinit template */
    __pic32c_data_initialization();
 
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
