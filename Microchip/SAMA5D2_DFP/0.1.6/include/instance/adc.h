/**
 * \file
 *
 * \brief Instance description for ADC
 *
 * Copyright (c) 2019 Microchip Technology Inc.
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

/* file generated from device description version 2019-01-23T22:42:14Z */
#ifndef _SAMA5D2_ADC_INSTANCE_H_
#define _SAMA5D2_ADC_INSTANCE_H_

/* ========== Register definition for ADC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_ADC_CR              (0xFC030000) /**< (ADC) Control Register */
#define REG_ADC_MR              (0xFC030004) /**< (ADC) Mode Register */
#define REG_ADC_SEQR1           (0xFC030008) /**< (ADC) Channel Sequence Register 1 */
#define REG_ADC_SEQR2           (0xFC03000C) /**< (ADC) Channel Sequence Register 2 */
#define REG_ADC_CHER            (0xFC030010) /**< (ADC) Channel Enable Register */
#define REG_ADC_CHDR            (0xFC030014) /**< (ADC) Channel Disable Register */
#define REG_ADC_CHSR            (0xFC030018) /**< (ADC) Channel Status Register */
#define REG_ADC_LCDR            (0xFC030020) /**< (ADC) Last Converted Data Register */
#define REG_ADC_IER             (0xFC030024) /**< (ADC) Interrupt Enable Register */
#define REG_ADC_IDR             (0xFC030028) /**< (ADC) Interrupt Disable Register */
#define REG_ADC_IMR             (0xFC03002C) /**< (ADC) Interrupt Mask Register */
#define REG_ADC_ISR             (0xFC030030) /**< (ADC) Interrupt Status Register */
#define REG_ADC_LCTMR           (0xFC030034) /**< (ADC) Last Channel Trigger Mode Register */
#define REG_ADC_LCCWR           (0xFC030038) /**< (ADC) Last Channel Compare Window Register */
#define REG_ADC_OVER            (0xFC03003C) /**< (ADC) Overrun Status Register */
#define REG_ADC_EMR             (0xFC030040) /**< (ADC) Extended Mode Register */
#define REG_ADC_CWR             (0xFC030044) /**< (ADC) Compare Window Register */
#define REG_ADC_COR             (0xFC03004C) /**< (ADC) Channel Offset Register */
#define REG_ADC_CDR             (0xFC030050) /**< (ADC) Channel Data Register */
#define REG_ADC_CDR0            (0xFC030050) /**< (ADC) Channel Data Register 0 */
#define REG_ADC_CDR1            (0xFC030054) /**< (ADC) Channel Data Register 1 */
#define REG_ADC_CDR2            (0xFC030058) /**< (ADC) Channel Data Register 2 */
#define REG_ADC_CDR3            (0xFC03005C) /**< (ADC) Channel Data Register 3 */
#define REG_ADC_CDR4            (0xFC030060) /**< (ADC) Channel Data Register 4 */
#define REG_ADC_CDR5            (0xFC030064) /**< (ADC) Channel Data Register 5 */
#define REG_ADC_CDR6            (0xFC030068) /**< (ADC) Channel Data Register 6 */
#define REG_ADC_CDR7            (0xFC03006C) /**< (ADC) Channel Data Register 7 */
#define REG_ADC_CDR8            (0xFC030070) /**< (ADC) Channel Data Register 8 */
#define REG_ADC_CDR9            (0xFC030074) /**< (ADC) Channel Data Register 9 */
#define REG_ADC_CDR10           (0xFC030078) /**< (ADC) Channel Data Register 10 */
#define REG_ADC_CDR11           (0xFC03007C) /**< (ADC) Channel Data Register 11 */
#define REG_ADC_ACR             (0xFC030094) /**< (ADC) Analog Control Register */
#define REG_ADC_TSMR            (0xFC0300B0) /**< (ADC) Touchscreen Mode Register */
#define REG_ADC_XPOSR           (0xFC0300B4) /**< (ADC) Touchscreen X Position Register */
#define REG_ADC_YPOSR           (0xFC0300B8) /**< (ADC) Touchscreen Y Position Register */
#define REG_ADC_PRESSR          (0xFC0300BC) /**< (ADC) Touchscreen Pressure Register */
#define REG_ADC_TRGR            (0xFC0300C0) /**< (ADC) Trigger Register */
#define REG_ADC_CVR             (0xFC0300D4) /**< (ADC) Correction Values Register */
#define REG_ADC_CECR            (0xFC0300D8) /**< (ADC) Channel Error Correction Register */
#define REG_ADC_TSCVR           (0xFC0300DC) /**< (ADC) Touchscreen Correction Values Register */
#define REG_ADC_WPMR            (0xFC0300E4) /**< (ADC) Write Protection Mode Register */
#define REG_ADC_WPSR            (0xFC0300E8) /**< (ADC) Write Protection Status Register */

#else

#define REG_ADC_CR              (*(__O  uint32_t*)0xFC030000U) /**< (ADC) Control Register */
#define REG_ADC_MR              (*(__IO uint32_t*)0xFC030004U) /**< (ADC) Mode Register */
#define REG_ADC_SEQR1           (*(__IO uint32_t*)0xFC030008U) /**< (ADC) Channel Sequence Register 1 */
#define REG_ADC_SEQR2           (*(__IO uint32_t*)0xFC03000CU) /**< (ADC) Channel Sequence Register 2 */
#define REG_ADC_CHER            (*(__O  uint32_t*)0xFC030010U) /**< (ADC) Channel Enable Register */
#define REG_ADC_CHDR            (*(__O  uint32_t*)0xFC030014U) /**< (ADC) Channel Disable Register */
#define REG_ADC_CHSR            (*(__I  uint32_t*)0xFC030018U) /**< (ADC) Channel Status Register */
#define REG_ADC_LCDR            (*(__I  uint32_t*)0xFC030020U) /**< (ADC) Last Converted Data Register */
#define REG_ADC_IER             (*(__O  uint32_t*)0xFC030024U) /**< (ADC) Interrupt Enable Register */
#define REG_ADC_IDR             (*(__O  uint32_t*)0xFC030028U) /**< (ADC) Interrupt Disable Register */
#define REG_ADC_IMR             (*(__I  uint32_t*)0xFC03002CU) /**< (ADC) Interrupt Mask Register */
#define REG_ADC_ISR             (*(__I  uint32_t*)0xFC030030U) /**< (ADC) Interrupt Status Register */
#define REG_ADC_LCTMR           (*(__IO uint32_t*)0xFC030034U) /**< (ADC) Last Channel Trigger Mode Register */
#define REG_ADC_LCCWR           (*(__IO uint32_t*)0xFC030038U) /**< (ADC) Last Channel Compare Window Register */
#define REG_ADC_OVER            (*(__I  uint32_t*)0xFC03003CU) /**< (ADC) Overrun Status Register */
#define REG_ADC_EMR             (*(__IO uint32_t*)0xFC030040U) /**< (ADC) Extended Mode Register */
#define REG_ADC_CWR             (*(__IO uint32_t*)0xFC030044U) /**< (ADC) Compare Window Register */
#define REG_ADC_COR             (*(__IO uint32_t*)0xFC03004CU) /**< (ADC) Channel Offset Register */
#define REG_ADC_CDR             (*(__I  uint32_t*)0xFC030050U) /**< (ADC) Channel Data Register */
#define REG_ADC_CDR0            (*(__I  uint32_t*)0xFC030050U) /**< (ADC) Channel Data Register 0 */
#define REG_ADC_CDR1            (*(__I  uint32_t*)0xFC030054U) /**< (ADC) Channel Data Register 1 */
#define REG_ADC_CDR2            (*(__I  uint32_t*)0xFC030058U) /**< (ADC) Channel Data Register 2 */
#define REG_ADC_CDR3            (*(__I  uint32_t*)0xFC03005CU) /**< (ADC) Channel Data Register 3 */
#define REG_ADC_CDR4            (*(__I  uint32_t*)0xFC030060U) /**< (ADC) Channel Data Register 4 */
#define REG_ADC_CDR5            (*(__I  uint32_t*)0xFC030064U) /**< (ADC) Channel Data Register 5 */
#define REG_ADC_CDR6            (*(__I  uint32_t*)0xFC030068U) /**< (ADC) Channel Data Register 6 */
#define REG_ADC_CDR7            (*(__I  uint32_t*)0xFC03006CU) /**< (ADC) Channel Data Register 7 */
#define REG_ADC_CDR8            (*(__I  uint32_t*)0xFC030070U) /**< (ADC) Channel Data Register 8 */
#define REG_ADC_CDR9            (*(__I  uint32_t*)0xFC030074U) /**< (ADC) Channel Data Register 9 */
#define REG_ADC_CDR10           (*(__I  uint32_t*)0xFC030078U) /**< (ADC) Channel Data Register 10 */
#define REG_ADC_CDR11           (*(__I  uint32_t*)0xFC03007CU) /**< (ADC) Channel Data Register 11 */
#define REG_ADC_ACR             (*(__IO uint32_t*)0xFC030094U) /**< (ADC) Analog Control Register */
#define REG_ADC_TSMR            (*(__IO uint32_t*)0xFC0300B0U) /**< (ADC) Touchscreen Mode Register */
#define REG_ADC_XPOSR           (*(__I  uint32_t*)0xFC0300B4U) /**< (ADC) Touchscreen X Position Register */
#define REG_ADC_YPOSR           (*(__I  uint32_t*)0xFC0300B8U) /**< (ADC) Touchscreen Y Position Register */
#define REG_ADC_PRESSR          (*(__I  uint32_t*)0xFC0300BCU) /**< (ADC) Touchscreen Pressure Register */
#define REG_ADC_TRGR            (*(__IO uint32_t*)0xFC0300C0U) /**< (ADC) Trigger Register */
#define REG_ADC_CVR             (*(__IO uint32_t*)0xFC0300D4U) /**< (ADC) Correction Values Register */
#define REG_ADC_CECR            (*(__IO uint32_t*)0xFC0300D8U) /**< (ADC) Channel Error Correction Register */
#define REG_ADC_TSCVR           (*(__IO uint32_t*)0xFC0300DCU) /**< (ADC) Touchscreen Correction Values Register */
#define REG_ADC_WPMR            (*(__IO uint32_t*)0xFC0300E4U) /**< (ADC) Write Protection Mode Register */
#define REG_ADC_WPSR            (*(__I  uint32_t*)0xFC0300E8U) /**< (ADC) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for ADC peripheral ========== */
#define ADC_INSTANCE_ID                          40         
#define ADC_CLOCK_ID                             40         
#define ADC_DMAC_ID_RX                           25         

#endif /* _SAMA5D2_ADC_INSTANCE_ */
