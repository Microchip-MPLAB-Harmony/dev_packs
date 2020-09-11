/**
 * \file
 *
 * \brief IAR startup file for PIC32CX1012BZ25048
 *
 * Copyright (c) 2020 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
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

#include "pic32cx1012bz25048.h"

typedef void (*intfunc) (void);
typedef union { intfunc __fun; void * __ptr; } intvec_elem;

void __iar_program_start(void);
int __low_level_init(void);

/* Reset handler */
void Reset_Handler(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M4 core handlers */
#pragma weak NonMaskableInt_Handler=Dummy_Handler
#pragma weak HardFault_Handler=Dummy_Handler
#pragma weak MemoryManagement_Handler=Dummy_Handler
#pragma weak BusFault_Handler=Dummy_Handler
#pragma weak UsageFault_Handler=Dummy_Handler
#pragma weak SVCall_Handler=Dummy_Handler
#pragma weak DebugMonitor_Handler=Dummy_Handler
#pragma weak PendSV_Handler=Dummy_Handler
#pragma weak SysTick_Handler=Dummy_Handler

/* Peripherals handlers */
#pragma weak RTC_Handler=Dummy_Handler
#pragma weak EIC_Handler=Dummy_Handler
#pragma weak FREQM_Handler=Dummy_Handler
#pragma weak FLASH_CONTROL_Handler=Dummy_Handler
#pragma weak CHANGE_NOTICE_A_Handler=Dummy_Handler
#pragma weak CHANGE_NOTICE_B_Handler=Dummy_Handler
#pragma weak DMAC_0_3_Handler=Dummy_Handler
#pragma weak DMAC_4_15_Handler=Dummy_Handler
#pragma weak EVSYS_0_3_Handler=Dummy_Handler
#pragma weak EVSYS_4_11_Handler=Dummy_Handler
#pragma weak PAC_Handler=Dummy_Handler
#pragma weak RAMECC_Handler=Dummy_Handler
#pragma weak SERCOM0_Handler=Dummy_Handler
#pragma weak SERCOM1_Handler=Dummy_Handler
#pragma weak SERCOM2_Handler=Dummy_Handler
#pragma weak SERCOM3_Handler=Dummy_Handler
#pragma weak TCC0_Handler=Dummy_Handler
#pragma weak TCC1_Handler=Dummy_Handler
#pragma weak TCC2_Handler=Dummy_Handler
#pragma weak TC0_Handler=Dummy_Handler
#pragma weak TC1_Handler=Dummy_Handler
#pragma weak TC2_Handler=Dummy_Handler
#pragma weak TC3_Handler=Dummy_Handler
#pragma weak ADCHS_Handler=Dummy_Handler
#pragma weak AC_Handler=Dummy_Handler
#pragma weak AES_Handler=Dummy_Handler
#pragma weak TRNG_Handler=Dummy_Handler
#pragma weak ICM_Handler=Dummy_Handler
#pragma weak PUKCC_Handler=Dummy_Handler
#pragma weak QSPI_Handler=Dummy_Handler
#pragma weak ZB_INT0_Handler=Dummy_Handler
#pragma weak BT_INT0_Handler=Dummy_Handler
#pragma weak BT_INT1_Handler=Dummy_Handler
#pragma weak ARBITER_Handler=Dummy_Handler
#pragma weak ADC_FAULT_Handler=Dummy_Handler
#pragma weak ADC_FCC_Handler=Dummy_Handler
#pragma weak ADC_BGVR_RDY_Handler=Dummy_Handler
#pragma weak CLKI_WAKEUP_NMI_Handler=Dummy_Handler
#pragma weak BT_LC_Handler=Dummy_Handler
#pragma weak BT_RC_Handler=Dummy_Handler

/* Exception Table */
#pragma language = extended
#pragma segment = "CSTACK"

/* The name "__vector_table" has special meaning for C-SPY: */
/* it is where the SP start value is found, and the NVIC vector */
/* table register (VTOR) is initialized to this address if != 0 */

#pragma section = ".intvec"
#pragma location = ".intvec"
const DeviceVectors __vector_table = {
        (void*) __sfe("CSTACK"),

        .pfnReset_Handler              = (void*) Reset_Handler,
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

        /* Configurable interrupts */
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 0  Real-Time Counter */
        .pfnEIC_Handler                = (void*) EIC_Handler,    /* 1  External Interrupt Controller */
        .pfnFREQM_Handler              = (void*) FREQM_Handler,  /* 2  Frequency Meter */
        .pfnFLASH_CONTROL_Handler      = (void*) FLASH_CONTROL_Handler, /* 3  flash controller */
        .pfnCHANGE_NOTICE_A_Handler    = (void*) CHANGE_NOTICE_A_Handler, /* 4  GPIO */
        .pfnCHANGE_NOTICE_B_Handler    = (void*) CHANGE_NOTICE_B_Handler, /* 5  GPIO */
        .pfnDMAC_0_3_Handler           = (void*) DMAC_0_3_Handler, /* 6  Direct Memory Access Controller */
        .pfnDMAC_4_15_Handler          = (void*) DMAC_4_15_Handler, /* 7  Direct Memory Access Controller */
        .pfnEVSYS_0_3_Handler          = (void*) EVSYS_0_3_Handler, /* 8  Event System Interface */
        .pfnEVSYS_4_11_Handler         = (void*) EVSYS_4_11_Handler, /* 9  Event System Interface */
        .pfnPAC_Handler                = (void*) PAC_Handler,    /* 10 Peripheral Access Controller */
        .pfnRAMECC_Handler             = (void*) RAMECC_Handler, /* 11 RAM ECC */
        .pfnSERCOM0_Handler            = (void*) SERCOM0_Handler, /* 12 Serial Communication Interface */
        .pfnSERCOM1_Handler            = (void*) SERCOM1_Handler, /* 13 Serial Communication Interface */
        .pfnSERCOM2_Handler            = (void*) SERCOM2_Handler, /* 14 Serial Communication Interface */
        .pfnSERCOM3_Handler            = (void*) SERCOM3_Handler, /* 15 Serial Communication Interface */
        .pfnTCC0_Handler               = (void*) TCC0_Handler,   /* 16 Timer Counter Control */
        .pfnTCC1_Handler               = (void*) TCC1_Handler,   /* 17 Timer Counter Control */
        .pfnTCC2_Handler               = (void*) TCC2_Handler,   /* 18 Timer Counter Control */
        .pfnTC0_Handler                = (void*) TC0_Handler,    /* 19 Basic Timer Counter */
        .pfnTC1_Handler                = (void*) TC1_Handler,    /* 20 Basic Timer Counter */
        .pfnTC2_Handler                = (void*) TC2_Handler,    /* 21 Basic Timer Counter */
        .pfnTC3_Handler                = (void*) TC3_Handler,    /* 22 Basic Timer Counter */
        .pfnADCHS_Handler              = (void*) ADCHS_Handler,  /* 23 12-bit Analog to Digital Converter */
        .pfnAC_Handler                 = (void*) AC_Handler,     /* 24 Analog Comparators */
        .pfnAES_Handler                = (void*) AES_Handler,    /* 25 Advanced Encryption Standard */
        .pfnTRNG_Handler               = (void*) TRNG_Handler,   /* 26 True Random Generator */
        .pfnICM_Handler                = (void*) ICM_Handler,    /* 27 Integrity Check Monitor */
        .pfnPUKCC_Handler              = (void*) PUKCC_Handler,  /* 28 PUblic-Key Cryptography Controller */
        .pfnQSPI_Handler               = (void*) QSPI_Handler,   /* 29 Quad SPI interface */
        .pfnZB_INT0_Handler            = (void*) ZB_INT0_Handler, /* 30 ZIGBEE Radio Registers */
        .pfnBT_INT0_Handler            = (void*) BT_INT0_Handler, /* 31 BLE */
        .pfnBT_INT1_Handler            = (void*) BT_INT1_Handler, /* 32 BLE */
        .pfnARBITER_Handler            = (void*) ARBITER_Handler, /* 33 Radio Arbiter */
        .pfnADC_FAULT_Handler          = (void*) ADC_FAULT_Handler, /* 34 12-bit Analog to Digital Converter */
        .pfnADC_FCC_Handler            = (void*) ADC_FCC_Handler, /* 35 12-bit Analog to Digital Converter */
        .pfnADC_BGVR_RDY_Handler       = (void*) ADC_BGVR_RDY_Handler, /* 36 12-bit Analog to Digital Converter */
        .pfnCLKI_WAKEUP_NMI_Handler    = (void*) CLKI_WAKEUP_NMI_Handler, /* 37 BLE */
        .pfnBT_LC_Handler              = (void*) BT_LC_Handler,  /* 38 BLE */
        .pfnBT_RC_Handler              = (void*) BT_RC_Handler   /* 39 BLE */
};

/**------------------------------------------------------------------------------
 * This is the code that gets called on processor reset. To initialize the
 * device.
 *------------------------------------------------------------------------------*/
int __low_level_init(void)
{
        uint32_t *pSrc = __section_begin(".intvec");

        SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);

        return 1; /* if return 0, the data sections will not be initialized */
}

/**------------------------------------------------------------------------------
 * This is the code that gets called on processor reset. To initialize the
 * device.
 *------------------------------------------------------------------------------*/
void Reset_Handler(void)
{
        __iar_program_start();
}

/**
 * \brief Default interrupt handler for unused IRQs.
 */
void Dummy_Handler(void)
{
        while (1) {
        }
}
