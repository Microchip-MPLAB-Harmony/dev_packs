/**
 * \file
 *
 * \brief Instance description for PDMIC
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
#ifndef _SAMA5D2_PDMIC_INSTANCE_H_
#define _SAMA5D2_PDMIC_INSTANCE_H_

/* ========== Register definition for PDMIC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PDMIC_CR            (0xF8018000) /**< (PDMIC) Control Register */
#define REG_PDMIC_MR            (0xF8018004) /**< (PDMIC) Mode Register */
#define REG_PDMIC_CDR           (0xF8018014) /**< (PDMIC) Converted Data Register */
#define REG_PDMIC_IER           (0xF8018018) /**< (PDMIC) Interrupt Enable Register */
#define REG_PDMIC_IDR           (0xF801801C) /**< (PDMIC) Interrupt Disable Register */
#define REG_PDMIC_IMR           (0xF8018020) /**< (PDMIC) Interrupt Mask Register */
#define REG_PDMIC_ISR           (0xF8018024) /**< (PDMIC) Interrupt Status Register */
#define REG_PDMIC_DSPR0         (0xF8018058) /**< (PDMIC) DSP Configuration Register 0 */
#define REG_PDMIC_DSPR1         (0xF801805C) /**< (PDMIC) DSP Configuration Register 1 */
#define REG_PDMIC_WPMR          (0xF80180E4) /**< (PDMIC) Write Protection Mode Register */
#define REG_PDMIC_WPSR          (0xF80180E8) /**< (PDMIC) Write Protection Status Register */

#else

#define REG_PDMIC_CR            (*(__IO uint32_t*)0xF8018000U) /**< (PDMIC) Control Register */
#define REG_PDMIC_MR            (*(__IO uint32_t*)0xF8018004U) /**< (PDMIC) Mode Register */
#define REG_PDMIC_CDR           (*(__I  uint32_t*)0xF8018014U) /**< (PDMIC) Converted Data Register */
#define REG_PDMIC_IER           (*(__O  uint32_t*)0xF8018018U) /**< (PDMIC) Interrupt Enable Register */
#define REG_PDMIC_IDR           (*(__O  uint32_t*)0xF801801CU) /**< (PDMIC) Interrupt Disable Register */
#define REG_PDMIC_IMR           (*(__I  uint32_t*)0xF8018020U) /**< (PDMIC) Interrupt Mask Register */
#define REG_PDMIC_ISR           (*(__I  uint32_t*)0xF8018024U) /**< (PDMIC) Interrupt Status Register */
#define REG_PDMIC_DSPR0         (*(__IO uint32_t*)0xF8018058U) /**< (PDMIC) DSP Configuration Register 0 */
#define REG_PDMIC_DSPR1         (*(__IO uint32_t*)0xF801805CU) /**< (PDMIC) DSP Configuration Register 1 */
#define REG_PDMIC_WPMR          (*(__IO uint32_t*)0xF80180E4U) /**< (PDMIC) Write Protection Mode Register */
#define REG_PDMIC_WPSR          (*(__I  uint32_t*)0xF80180E8U) /**< (PDMIC) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for PDMIC peripheral ========== */
#define PDMIC_INSTANCE_ID                        48         
#define PDMIC_CLOCK_ID                           48         
#define PDMIC_DMAC_ID_RX                         50         

#endif /* _SAMA5D2_PDMIC_INSTANCE_ */
