/**
 * \file
 *
 * \brief MPLAB(R) XC32 - Startup code for SAMRH71F20C
 *
 * Copyright (c) 2020 Microchip Technology Inc.
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


#include <xc.h>
#include <libpic32c.h>

#ifndef __always_inline
#define __always_inline	__attribute__((__always_inline__))
#endif

#ifndef __STATIC_INLINE
#define __STATIC_INLINE static inline
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
 * RH71 devices have a "hardened" embedded flash controller that use
 * HEFC as the prefix on the module name instead of EEFC.  Use some
 * macros to account for that.
 */
#undef EFC_REGS
#define EFC_REGS HEFC_REGS

#define EEFC_FCR HEFC_FCR
#define EEFC_FRR HEFC_FRR
#define EEFC_FSR HEFC_FSR

#define EEFC_FCR_FARG HEFC_FCR_FARG
#define EEFC_FCR_FCMD_CGPB HEFC_FCR_FCMD_CGPB
#define EEFC_FCR_FCMD_GGPB HEFC_FCR_FCMD_GGPB
#define EEFC_FCR_FCMD_SGPB HEFC_FCR_FCMD_SGPB
#define EEFC_FCR_FKEY_PASSWD HEFC_FCR_FKEY_PASSWD
#define EEFC_FSR_FRDY_Msk HEFC_FSR_FRDY_Msk


/*
 Theisfunction enables TCM memories
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

 This function disables TCM memories
 */
__STATIC_INLINE void __attribute__((optimize("-O1"))) TCM_Disable(void)
{

    __DSB();
    __ISB();
    SCB->ITCMCR &= ~(uint32_t)SCB_ITCMCR_EN_Msk;
    SCB->DTCMCR &= ~(uint32_t)SCB_ITCMCR_EN_Msk;
    __DSB();
    __ISB();
}


// helper routines to read and write regions of memory in 128 byte chunks

#define TRANSFER_CHUNK_SIZE 0x80

__STATIC_INLINE void Read_Chunk(uint32_t address)
{
    asm volatile (
         "MOV      r8, %[addr]\n"
         "PLD      [r8, #0xC0]\n"
         "VLDM     r8,{d0-d15}\n"
           : : [addr] "l" (address) : "r8"
    );
}

__STATIC_INLINE void Write_Chunk(uint32_t address)
{
    asm volatile (
         "MOV      r8, %[addr]\n"
         "VSTM     r8,{d0-d15}\n"
           : : [addr] "l" (address) : "r8"
    );
}

// initialize the ECC for a single TCM region (defined by addr and size) in 128 byte chunks
void   TCM_EccInitOne(uint32_t addr, uint32_t size) {

    uint32_t pTcm;

    for (pTcm = addr; pTcm < (addr + size); pTcm += TRANSFER_CHUNK_SIZE)
    {
        //read ECC OFF
        TCMECC_REGS->TCMECC_CR = 0x0;
        __DSB();
        __ISB();
        Read_Chunk(pTcm);

        //Write ECC ON
        TCMECC_REGS->TCMECC_CR = 0x1;
        __DSB();
        __ISB();
        Write_Chunk(pTcm);
        __DSB();
        __ISB();
    }
}

/* Initialize ECC for TCM memories */
__STATIC_INLINE void TCM_EccInitialize()
{

    __DSB();
    __ISB();

    TCMECC_REGS->TCMECC_CR = 0x0;
    __DSB();
    __ISB();
    SCB->ITCMCR = (SCB_ITCMCR_EN_Msk);
    SCB->DTCMCR = (SCB_DTCMCR_EN_Msk);
    __DSB();
    __ISB();

    //enable Icache and Dcache
    SCB_EnableICache();
    SCB_EnableDCache();



    //  initalize both TCM's (to handle ECC properly prior activating RMW/RETEN features)
    TCM_EccInitOne(ITCM_ADDR, ITCM_SIZE);
    TCM_EccInitOne(DTCM_ADDR, DTCM_SIZE);

    //disable cache I et data D
    SCB_DisableICache();
    SCB_DisableDCache();

    __DSB();
    __ISB();

    TCMECC_REGS->TCMECC_CR = 0x0;

    //----------------------------------------------------------------------
    // ITCM/DTCM enable with RMW and RETEN + TCMECC ON
    SCB->ITCMCR = (SCB_ITCMCR_EN_Msk | SCB_ITCMCR_RMW_Msk | SCB_ITCMCR_RETEN_Msk);
    SCB->DTCMCR = (SCB_DTCMCR_EN_Msk | SCB_DTCMCR_RMW_Msk | SCB_DTCMCR_RETEN_Msk);
    __DSB();
    __ISB();

    TCMECC_REGS->TCMECC_CR = 0x1;
    __DSB();
    __ISB();
}

__STATIC_INLINE void FlexRAM_EccInitialize(void)
{
    uint32_t pFlexRam;

    //enable cache I et data D
    SCB_EnableICache();
    SCB_EnableDCache();
    __DSB();
    __ISB();

    // FlexRAM initialization loop (to handle ECC properly)
    for (pFlexRam = FLEXRAM_ADDR ; pFlexRam < (FLEXRAM_ADDR + FlexRAM_SIZE) ; pFlexRam += TRANSFER_CHUNK_SIZE)
    {
        Read_Chunk(pFlexRam);
        __DSB();
        __ISB();
        Write_Chunk(pFlexRam);
        __DSB();
        __ISB();
    }


    //disable Icache and Dcache
    SCB_DisableICache();
    SCB_DisableDCache();
    __DSB();
    __ISB();
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

/* Reset handler and application-provided reset handler */
void __attribute__((weak, optimize("-O1"), long_call, naked, externally_visible)) Reset_Handler(void);
extern void __attribute__((weak, used, long_call)) __XC32_RESET_HANDLER_NAME(void);

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
void MATRIX0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NMIC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM4_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOD_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOE_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCW_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCF_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FPU_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IXC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM5_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM6_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM7_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
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
void PWM0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PWM1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ICM_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOF_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOG_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN0_INT0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN0_INT1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN1_INT0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN1_INT1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCMECC_INTFIX_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCMECC_INTNOFIX_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXRAMECC_INTFIX_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXRAMECC_INTNOFIX_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SHA_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM8_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM9_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WDT1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved48_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QSPI_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HEFC_INT0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HEFC_INTFIX_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HEFC_INTNOFIX_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
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
void HEMC_INTSDRAMC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HEMC_INTFIX_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HEMC_INTNOFIX_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SFR_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void XDMAC_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPW_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved66_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved67_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IP1553_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q3_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q4_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Q5_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

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
        /* .pfnMATRIX0_Handler      = */ (void*) MATRIX0_Handler,     /* 6  AHB Bus Matrix */
        /* .pfnFLEXCOM0_Handler     = */ (void*) FLEXCOM0_Handler,    /* 7  Flexible Serial Communication */
        /* .pfnFLEXCOM1_Handler     = */ (void*) FLEXCOM1_Handler,    /* 8  Flexible Serial Communication */
        /* .pfnNMIC_Handler         = */ (void*) NMIC_Handler,        /* 9  Non-maskable Interrupt Controller */
        /* .pfnPIOA_Handler         = */ (void*) PIOA_Handler,        /* 10 Parallel Input/Output Controller */
        /* .pfnPIOB_Handler         = */ (void*) PIOB_Handler,        /* 11 Parallel Input/Output Controller */
        /* .pfnPIOC_Handler         = */ (void*) PIOC_Handler,        /* 12 Parallel Input/Output Controller */
        /* .pfnFLEXCOM2_Handler     = */ (void*) FLEXCOM2_Handler,    /* 13 Flexible Serial Communication */
        /* .pfnFLEXCOM3_Handler     = */ (void*) FLEXCOM3_Handler,    /* 14 Flexible Serial Communication */
        /* .pfnFLEXCOM4_Handler     = */ (void*) FLEXCOM4_Handler,    /* 15 Flexible Serial Communication */
        /* .pfnPIOD_Handler         = */ (void*) PIOD_Handler,        /* 16 Parallel Input/Output Controller */
        /* .pfnPIOE_Handler         = */ (void*) PIOE_Handler,        /* 17 Parallel Input/Output Controller */
        /* .pfnCCW_Handler          = */ (void*) CCW_Handler,         /* 18 System Control Block */
        /* .pfnCCF_Handler          = */ (void*) CCF_Handler,         /* 19 System Control Block */
        /* .pfnFPU_Handler          = */ (void*) FPU_Handler,         /* 20 Floating Point Unit */
        /* .pfnIXC_Handler          = */ (void*) IXC_Handler,         /* 21 Floating Point Unit */
        /* .pfnFLEXCOM5_Handler     = */ (void*) FLEXCOM5_Handler,    /* 22 Flexible Serial Communication */
        /* .pfnFLEXCOM6_Handler     = */ (void*) FLEXCOM6_Handler,    /* 23 Flexible Serial Communication */
        /* .pfnFLEXCOM7_Handler     = */ (void*) FLEXCOM7_Handler,    /* 24 Flexible Serial Communication */
        /* .pfnTC0_CH0_Handler      = */ (void*) TC0_CH0_Handler,     /* 25 Timer/Counter 0 Channel 0 */
        /* .pfnTC0_CH1_Handler      = */ (void*) TC0_CH1_Handler,     /* 26 Timer/Counter 0 Channel 1 */
        /* .pfnTC0_CH2_Handler      = */ (void*) TC0_CH2_Handler,     /* 27 Timer/Counter 0 Channel 2 */
        /* .pfnTC1_CH0_Handler      = */ (void*) TC1_CH0_Handler,     /* 28 Timer/Counter 1 Channel 0 */
        /* .pfnTC1_CH1_Handler      = */ (void*) TC1_CH1_Handler,     /* 29 Timer/Counter 1 Channel 1 */
        /* .pfnTC1_CH2_Handler      = */ (void*) TC1_CH2_Handler,     /* 30 Timer/Counter 1 Channel 2 */
        /* .pfnPWM0_Handler         = */ (void*) PWM0_Handler,        /* 31 Pulse Width Modulation Controller */
        /* .pfnPWM1_Handler         = */ (void*) PWM1_Handler,        /* 32 Pulse Width Modulation Controller */
        /* .pfnICM_Handler          = */ (void*) ICM_Handler,         /* 33 Integrity Check Monitor */
        /* .pfnPIOF_Handler         = */ (void*) PIOF_Handler,        /* 34 Parallel Input/Output Controller */
        /* .pfnPIOG_Handler         = */ (void*) PIOG_Handler,        /* 35 Parallel Input/Output Controller */
        /* .pfnMCAN0_INT0_Handler   = */ (void*) MCAN0_INT0_Handler,  /* 36 Controller Area Network */
        /* .pfnMCAN0_INT1_Handler   = */ (void*) MCAN0_INT1_Handler,  /* 37 Controller Area Network */
        /* .pfnMCAN1_INT0_Handler   = */ (void*) MCAN1_INT0_Handler,  /* 38 Controller Area Network */
        /* .pfnMCAN1_INT1_Handler   = */ (void*) MCAN1_INT1_Handler,  /* 39 Controller Area Network */
        /* .pfnTCMECC_INTFIX_Handler = */ (void*) TCMECC_INTFIX_Handler, /* 40 HECC */
        /* .pfnTCMECC_INTNOFIX_Handler = */ (void*) TCMECC_INTNOFIX_Handler, /* 41 HECC */
        /* .pfnFLEXRAMECC_INTFIX_Handler = */ (void*) FLEXRAMECC_INTFIX_Handler, /* 42 FLEXRAMECC */
        /* .pfnFLEXRAMECC_INTNOFIX_Handler = */ (void*) FLEXRAMECC_INTNOFIX_Handler, /* 43 FLEXRAMECC */
        /* .pfnSHA_Handler          = */ (void*) SHA_Handler,         /* 44 Secure Hash Algorithm */
        /* .pfnFLEXCOM8_Handler     = */ (void*) FLEXCOM8_Handler,    /* 45 Flexible Serial Communication */
        /* .pfnFLEXCOM9_Handler     = */ (void*) FLEXCOM9_Handler,    /* 46 Flexible Serial Communication */
        /* .pfnWDT1_Handler         = */ (void*) WDT1_Handler,        /* 47 Watchdog Timer */
        /* .pvReserved48            = */ (void*) (0UL),               /* 48 Reserved */
        /* .pfnQSPI_Handler         = */ (void*) QSPI_Handler,        /* 49 Quad Serial Peripheral Interface */
        /* .pfnHEFC_INT0_Handler    = */ (void*) HEFC_INT0_Handler,   /* 50 Harden Embedded Flash Controller */
        /* .pfnHEFC_INTFIX_Handler  = */ (void*) HEFC_INTFIX_Handler, /* 51 Harden Embedded Flash Controller */
        /* .pfnHEFC_INTNOFIX_Handler = */ (void*) HEFC_INTNOFIX_Handler, /* 52 Harden Embedded Flash Controller */
        /* .pfnTC2_CH0_Handler      = */ (void*) TC2_CH0_Handler,     /* 53 Timer/Counter 2 Channel 0 */
        /* .pfnTC2_CH1_Handler      = */ (void*) TC2_CH1_Handler,     /* 54 Timer/Counter 2 Channel 1 */
        /* .pfnTC2_CH2_Handler      = */ (void*) TC2_CH2_Handler,     /* 55 Timer/Counter 2 Channel 2 */
        /* .pfnTC3_CH0_Handler      = */ (void*) TC3_CH0_Handler,     /* 56 Timer/Counter 3 Channel 0 */
        /* .pfnTC3_CH1_Handler      = */ (void*) TC3_CH1_Handler,     /* 57 Timer/Counter 3 Channel 1 */
        /* .pfnTC3_CH2_Handler      = */ (void*) TC3_CH2_Handler,     /* 58 Timer/Counter 3 Channel 2 */
        /* .pfnHEMC_INTSDRAMC_Handler = */ (void*) HEMC_INTSDRAMC_Handler, /* 59 HEMC */
        /* .pfnHEMC_INTFIX_Handler  = */ (void*) HEMC_INTFIX_Handler, /* 60 HEMC */
        /* .pfnHEMC_INTNOFIX_Handler = */ (void*) HEMC_INTNOFIX_Handler, /* 61 HEMC */
        /* .pfnSFR_Handler          = */ (void*) SFR_Handler,         /* 62 Special Function Registers */
        /* .pfnTRNG_Handler         = */ (void*) TRNG_Handler,        /* 63 True Random Number Generator */
        /* .pfnXDMAC_Handler        = */ (void*) XDMAC_Handler,       /* 64 Extensible DMA Controller */
        /* .pfnSPW_Handler          = */ (void*) SPW_Handler,         /* 65 SpW */
        /* .pvReserved66            = */ (void*) (0UL),               /* 66 Reserved */
        /* .pvReserved67            = */ (void*) (0UL),               /* 67 Reserved */
        /* .pfnIP1553_Handler       = */ (void*) IP1553_Handler,      /* 68 IP 1553 */
        /* .pfnGMAC_Handler         = */ (void*) GMAC_Handler,        /* 69 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q1_Handler      = */ (void*) GMAC_Q1_Handler,     /* 70 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q2_Handler      = */ (void*) GMAC_Q2_Handler,     /* 71 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q3_Handler      = */ (void*) GMAC_Q3_Handler,     /* 72 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q4_Handler      = */ (void*) GMAC_Q4_Handler,     /* 73 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q5_Handler      = */ (void*) GMAC_Q5_Handler      /* 74 Gigabit Ethernet MAC */

#else /* Legacy defined(_SAMRH71F20C_H) */
        /* Configurable interrupts with Legacy names */
        /* .pfnSUPC_Handler         = */ (void*) SUPC_Handler,        /* 0  Supply Controller */
        /* .pfnRSTC_Handler         = */ (void*) RSTC_Handler,        /* 1  Reset Controller */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 2  Real-time Clock */
        /* .pfnRTT_Handler          = */ (void*) RTT_Handler,         /* 3  Real-time Timer */
        /* .pfnWDT_Handler          = */ (void*) WDT_Handler,         /* 4  Watchdog Timer */
        /* .pfnPMC_Handler          = */ (void*) PMC_Handler,         /* 5  Power Management Controller */
        /* .pfnMATRIX0_Handler      = */ (void*) MATRIX0_Handler,     /* 6  AHB Bus Matrix */
        /* .pfnFLEXCOM0_Handler     = */ (void*) FLEXCOM0_Handler,    /* 7  Flexible Serial Communication */
        /* .pfnFLEXCOM1_Handler     = */ (void*) FLEXCOM1_Handler,    /* 8  Flexible Serial Communication */
        /* .pfnNMIC_Handler         = */ (void*) NMIC_Handler,        /* 9  Non-maskable Interrupt Controller */
        /* .pfnPIOA_Handler         = */ (void*) PIOA_Handler,        /* 10 Parallel Input/Output Controller */
        /* .pfnPIOB_Handler         = */ (void*) PIOB_Handler,        /* 11 Parallel Input/Output Controller */
        /* .pfnPIOC_Handler         = */ (void*) PIOC_Handler,        /* 12 Parallel Input/Output Controller */
        /* .pfnFLEXCOM2_Handler     = */ (void*) FLEXCOM2_Handler,    /* 13 Flexible Serial Communication */
        /* .pfnFLEXCOM3_Handler     = */ (void*) FLEXCOM3_Handler,    /* 14 Flexible Serial Communication */
        /* .pfnFLEXCOM4_Handler     = */ (void*) FLEXCOM4_Handler,    /* 15 Flexible Serial Communication */
        /* .pfnPIOD_Handler         = */ (void*) PIOD_Handler,        /* 16 Parallel Input/Output Controller */
        /* .pfnPIOE_Handler         = */ (void*) PIOE_Handler,        /* 17 Parallel Input/Output Controller */
        /* .pfnCCW_Handler          = */ (void*) CCW_Handler,         /* 18 System Control Block */
        /* .pfnCCF_Handler          = */ (void*) CCF_Handler,         /* 19 System Control Block */
        /* .pfnFPU_Handler          = */ (void*) FPU_Handler,         /* 20 Floating Point Unit */
        /* .pfnIXC_Handler          = */ (void*) IXC_Handler,         /* 21 Floating Point Unit */
        /* .pfnFLEXCOM5_Handler     = */ (void*) FLEXCOM5_Handler,    /* 22 Flexible Serial Communication */
        /* .pfnFLEXCOM6_Handler     = */ (void*) FLEXCOM6_Handler,    /* 23 Flexible Serial Communication */
        /* .pfnFLEXCOM7_Handler     = */ (void*) FLEXCOM7_Handler,    /* 24 Flexible Serial Communication */
        /* .pfnTC0_Handler          = */ (void*) TC0_Handler,         /* 25 Timer Counter */
        /* .pfnTC1_Handler          = */ (void*) TC1_Handler,         /* 26 Timer Counter */
        /* .pfnTC2_Handler          = */ (void*) TC2_Handler,         /* 27 Timer Counter */
        /* .pfnTC3_Handler          = */ (void*) TC3_Handler,         /* 28 Timer Counter */
        /* .pfnTC4_Handler          = */ (void*) TC4_Handler,         /* 29 Timer Counter */
        /* .pfnTC5_Handler          = */ (void*) TC5_Handler,         /* 30 Timer Counter */
        /* .pfnPWM0_Handler         = */ (void*) PWM0_Handler,        /* 31 Pulse Width Modulation Controller */
        /* .pfnPWM1_Handler         = */ (void*) PWM1_Handler,        /* 32 Pulse Width Modulation Controller */
        /* .pfnICM_Handler          = */ (void*) ICM_Handler,         /* 33 Integrity Check Monitor */
        /* .pfnPIOF_Handler         = */ (void*) PIOF_Handler,        /* 34 Parallel Input/Output Controller */
        /* .pfnPIOG_Handler         = */ (void*) PIOG_Handler,        /* 35 Parallel Input/Output Controller */
        /* .pfnMCAN0_INT0_Handler   = */ (void*) MCAN0_INT0_Handler,  /* 36 Controller Area Network */
        /* .pfnMCAN0_INT1_Handler   = */ (void*) MCAN0_INT1_Handler,  /* 37 Controller Area Network */
        /* .pfnMCAN1_INT0_Handler   = */ (void*) MCAN1_INT0_Handler,  /* 38 Controller Area Network */
        /* .pfnMCAN1_INT1_Handler   = */ (void*) MCAN1_INT1_Handler,  /* 39 Controller Area Network */
        /* .pfnTCMECC_INTFIX_Handler = */ (void*) TCMECC_INTFIX_Handler, /* 40 HECC */
        /* .pfnTCMECC_INTNOFIX_Handler = */ (void*) TCMECC_INTNOFIX_Handler, /* 41 HECC */
        /* .pfnFLEXRAMECC_INTFIX_Handler = */ (void*) FLEXRAMECC_INTFIX_Handler, /* 42 FLEXRAMECC */
        /* .pfnFLEXRAMECC_INTNOFIX_Handler = */ (void*) FLEXRAMECC_INTNOFIX_Handler, /* 43 FLEXRAMECC */
        /* .pfnSHA_Handler          = */ (void*) SHA_Handler,         /* 44 Secure Hash Algorithm */
        /* .pfnFLEXCOM8_Handler     = */ (void*) FLEXCOM8_Handler,    /* 45 Flexible Serial Communication */
        /* .pfnFLEXCOM9_Handler     = */ (void*) FLEXCOM9_Handler,    /* 46 Flexible Serial Communication */
        /* .pfnWDT1_Handler         = */ (void*) WDT1_Handler,        /* 47 Watchdog Timer */
        /* .pvReserved48            = */ (void*) (0UL),               /* 48 Reserved */
        /* .pfnQSPI_Handler         = */ (void*) QSPI_Handler,        /* 49 Quad Serial Peripheral Interface */
        /* .pfnHEFC_INT0_Handler    = */ (void*) HEFC_INT0_Handler,   /* 50 Harden Embedded Flash Controller */
        /* .pfnHEFC_INTFIX_Handler  = */ (void*) HEFC_INTFIX_Handler, /* 51 Harden Embedded Flash Controller */
        /* .pfnHEFC_INTNOFIX_Handler = */ (void*) HEFC_INTNOFIX_Handler, /* 52 Harden Embedded Flash Controller */
        /* .pfnTC6_Handler          = */ (void*) TC6_Handler,         /* 53 Timer Counter */
        /* .pfnTC7_Handler          = */ (void*) TC7_Handler,         /* 54 Timer Counter */
        /* .pfnTC8_Handler          = */ (void*) TC8_Handler,         /* 55 Timer Counter */
        /* .pfnTC9_Handler          = */ (void*) TC9_Handler,         /* 56 Timer Counter */
        /* .pfnTC10_Handler         = */ (void*) TC10_Handler,        /* 57 Timer Counter */
        /* .pfnTC11_Handler         = */ (void*) TC11_Handler,        /* 58 Timer Counter */
        /* .pfnHEMC_INTSDRAMC_Handler = */ (void*) HEMC_INTSDRAMC_Handler, /* 59 HEMC */
        /* .pfnHEMC_INTFIX_Handler  = */ (void*) HEMC_INTFIX_Handler, /* 60 HEMC */
        /* .pfnHEMC_INTNOFIX_Handler = */ (void*) HEMC_INTNOFIX_Handler, /* 61 HEMC */
        /* .pfnSFR_Handler          = */ (void*) SFR_Handler,         /* 62 Special Function Registers */
        /* .pfnTRNG_Handler         = */ (void*) TRNG_Handler,        /* 63 True Random Number Generator */
        /* .pfnXDMAC_Handler        = */ (void*) XDMAC_Handler,       /* 64 Extensible DMA Controller */
        /* .pfnSPW_Handler          = */ (void*) SPW_Handler,         /* 65 SpW */
        /* .pvReserved66            = */ (void*) (0UL),               /* 66 Reserved */
        /* .pvReserved67            = */ (void*) (0UL),               /* 67 Reserved */
        /* .pfnIP1553_Handler       = */ (void*) IP1553_Handler,      /* 68 IP 1553 */
        /* .pfnGMAC_Handler         = */ (void*) GMAC_Handler,        /* 69 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q1_Handler      = */ (void*) GMAC_Q1_Handler,     /* 70 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q2_Handler      = */ (void*) GMAC_Q2_Handler,     /* 71 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q3_Handler      = */ (void*) GMAC_Q3_Handler,     /* 72 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q4_Handler      = */ (void*) GMAC_Q4_Handler,     /* 73 Gigabit Ethernet MAC */
        /* .pfnGMAC_Q5_Handler      = */ (void*) GMAC_Q5_Handler      /* 74 Gigabit Ethernet MAC */
#endif
};

#if (__ARM_FP==14) || (__ARM_FP==4)
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
 
     TCM_EccInitialize();
     FlexRAM_EccInitialize();
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
