/**
 * \file
 *
 * \brief Instance description for SFR
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
#ifndef _SAMA5D2_SFR_INSTANCE_H_
#define _SAMA5D2_SFR_INSTANCE_H_

/* ========== Register definition for SFR peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SFR_DDRCFG          (0xF8030004) /**< (SFR) DDR Configuration Register */
#define REG_SFR_OHCIICR         (0xF8030010) /**< (SFR) OHCI Interrupt Configuration Register */
#define REG_SFR_OHCIISR         (0xF8030014) /**< (SFR) OHCI Interrupt Status Register */
#define REG_SFR_SECURE          (0xF8030028) /**< (SFR) Security Configuration Register */
#define REG_SFR_UTMICKTRIM      (0xF8030030) /**< (SFR) UTMI Clock Trimming Register */
#define REG_SFR_UTMIHSTRIM      (0xF8030034) /**< (SFR) UTMI High-Speed Trimming Register */
#define REG_SFR_UTMIFSTRIM      (0xF8030038) /**< (SFR) UTMI Full-Speed Trimming Register */
#define REG_SFR_UTMISWAP        (0xF803003C) /**< (SFR) UTMI DP/DM Pin Swapping Register */
#define REG_SFR_CAN             (0xF8030048) /**< (SFR) CAN Memories Address-based Register */
#define REG_SFR_SN0             (0xF803004C) /**< (SFR) Serial Number 0 Register */
#define REG_SFR_SN1             (0xF8030050) /**< (SFR) Serial Number 1 Register */
#define REG_SFR_AICREDIR        (0xF8030054) /**< (SFR) AIC Interrupt Redirection Register */
#define REG_SFR_L2CC_HRAMC      (0xF8030058) /**< (SFR) L2CC_HRAMC1 */
#define REG_SFR_I2SCLKSEL       (0xF8030090) /**< (SFR) I2SC Register */
#define REG_SFR_QSPICLK_REG     (0xF8030094) /**< (SFR) QSPI Clock Pad Supply Select Register */

#else

#define REG_SFR_DDRCFG          (*(__IO uint32_t*)0xF8030004U) /**< (SFR) DDR Configuration Register */
#define REG_SFR_OHCIICR         (*(__IO uint32_t*)0xF8030010U) /**< (SFR) OHCI Interrupt Configuration Register */
#define REG_SFR_OHCIISR         (*(__I  uint32_t*)0xF8030014U) /**< (SFR) OHCI Interrupt Status Register */
#define REG_SFR_SECURE          (*(__IO uint32_t*)0xF8030028U) /**< (SFR) Security Configuration Register */
#define REG_SFR_UTMICKTRIM      (*(__IO uint32_t*)0xF8030030U) /**< (SFR) UTMI Clock Trimming Register */
#define REG_SFR_UTMIHSTRIM      (*(__IO uint32_t*)0xF8030034U) /**< (SFR) UTMI High-Speed Trimming Register */
#define REG_SFR_UTMIFSTRIM      (*(__IO uint32_t*)0xF8030038U) /**< (SFR) UTMI Full-Speed Trimming Register */
#define REG_SFR_UTMISWAP        (*(__IO uint32_t*)0xF803003CU) /**< (SFR) UTMI DP/DM Pin Swapping Register */
#define REG_SFR_CAN             (*(__IO uint32_t*)0xF8030048U) /**< (SFR) CAN Memories Address-based Register */
#define REG_SFR_SN0             (*(__I  uint32_t*)0xF803004CU) /**< (SFR) Serial Number 0 Register */
#define REG_SFR_SN1             (*(__I  uint32_t*)0xF8030050U) /**< (SFR) Serial Number 1 Register */
#define REG_SFR_AICREDIR        (*(__IO uint32_t*)0xF8030054U) /**< (SFR) AIC Interrupt Redirection Register */
#define REG_SFR_L2CC_HRAMC      (*(__IO uint32_t*)0xF8030058U) /**< (SFR) L2CC_HRAMC1 */
#define REG_SFR_I2SCLKSEL       (*(__IO uint32_t*)0xF8030090U) /**< (SFR) I2SC Register */
#define REG_SFR_QSPICLK_REG     (*(__IO uint32_t*)0xF8030094U) /**< (SFR) QSPI Clock Pad Supply Select Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SFR peripheral ========== */
#define SFR_INSTANCE_ID                          60         

#endif /* _SAMA5D2_SFR_INSTANCE_ */
