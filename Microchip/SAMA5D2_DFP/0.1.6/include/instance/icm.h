/**
 * \file
 *
 * \brief Instance description for ICM
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
#ifndef _SAMA5D2_ICM_INSTANCE_H_
#define _SAMA5D2_ICM_INSTANCE_H_

/* ========== Register definition for ICM peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_ICM_CFG             (0xF8040000) /**< (ICM) Configuration Register */
#define REG_ICM_CTRL            (0xF8040004) /**< (ICM) Control Register */
#define REG_ICM_SR              (0xF8040008) /**< (ICM) Status Register */
#define REG_ICM_IER             (0xF8040010) /**< (ICM) Interrupt Enable Register */
#define REG_ICM_IDR             (0xF8040014) /**< (ICM) Interrupt Disable Register */
#define REG_ICM_IMR             (0xF8040018) /**< (ICM) Interrupt Mask Register */
#define REG_ICM_ISR             (0xF804001C) /**< (ICM) Interrupt Status Register */
#define REG_ICM_UASR            (0xF8040020) /**< (ICM) Undefined Access Status Register */
#define REG_ICM_DSCR            (0xF8040030) /**< (ICM) Region Descriptor Area Start Address Register */
#define REG_ICM_HASH            (0xF8040034) /**< (ICM) Region Hash Area Start Address Register */
#define REG_ICM_UIHVAL          (0xF8040038) /**< (ICM) User Initial Hash Value 0 Register */
#define REG_ICM_UIHVAL0         (0xF8040038) /**< (ICM) User Initial Hash Value 0 Register 0 */
#define REG_ICM_UIHVAL1         (0xF804003C) /**< (ICM) User Initial Hash Value 0 Register 1 */
#define REG_ICM_UIHVAL2         (0xF8040040) /**< (ICM) User Initial Hash Value 0 Register 2 */
#define REG_ICM_UIHVAL3         (0xF8040044) /**< (ICM) User Initial Hash Value 0 Register 3 */
#define REG_ICM_UIHVAL4         (0xF8040048) /**< (ICM) User Initial Hash Value 0 Register 4 */
#define REG_ICM_UIHVAL5         (0xF804004C) /**< (ICM) User Initial Hash Value 0 Register 5 */
#define REG_ICM_UIHVAL6         (0xF8040050) /**< (ICM) User Initial Hash Value 0 Register 6 */
#define REG_ICM_UIHVAL7         (0xF8040054) /**< (ICM) User Initial Hash Value 0 Register 7 */

#else

#define REG_ICM_CFG             (*(__IO uint32_t*)0xF8040000U) /**< (ICM) Configuration Register */
#define REG_ICM_CTRL            (*(__O  uint32_t*)0xF8040004U) /**< (ICM) Control Register */
#define REG_ICM_SR              (*(__I  uint32_t*)0xF8040008U) /**< (ICM) Status Register */
#define REG_ICM_IER             (*(__O  uint32_t*)0xF8040010U) /**< (ICM) Interrupt Enable Register */
#define REG_ICM_IDR             (*(__O  uint32_t*)0xF8040014U) /**< (ICM) Interrupt Disable Register */
#define REG_ICM_IMR             (*(__I  uint32_t*)0xF8040018U) /**< (ICM) Interrupt Mask Register */
#define REG_ICM_ISR             (*(__I  uint32_t*)0xF804001CU) /**< (ICM) Interrupt Status Register */
#define REG_ICM_UASR            (*(__I  uint32_t*)0xF8040020U) /**< (ICM) Undefined Access Status Register */
#define REG_ICM_DSCR            (*(__IO uint32_t*)0xF8040030U) /**< (ICM) Region Descriptor Area Start Address Register */
#define REG_ICM_HASH            (*(__IO uint32_t*)0xF8040034U) /**< (ICM) Region Hash Area Start Address Register */
#define REG_ICM_UIHVAL          (*(__O  uint32_t*)0xF8040038U) /**< (ICM) User Initial Hash Value 0 Register */
#define REG_ICM_UIHVAL0         (*(__O  uint32_t*)0xF8040038U) /**< (ICM) User Initial Hash Value 0 Register 0 */
#define REG_ICM_UIHVAL1         (*(__O  uint32_t*)0xF804003CU) /**< (ICM) User Initial Hash Value 0 Register 1 */
#define REG_ICM_UIHVAL2         (*(__O  uint32_t*)0xF8040040U) /**< (ICM) User Initial Hash Value 0 Register 2 */
#define REG_ICM_UIHVAL3         (*(__O  uint32_t*)0xF8040044U) /**< (ICM) User Initial Hash Value 0 Register 3 */
#define REG_ICM_UIHVAL4         (*(__O  uint32_t*)0xF8040048U) /**< (ICM) User Initial Hash Value 0 Register 4 */
#define REG_ICM_UIHVAL5         (*(__O  uint32_t*)0xF804004CU) /**< (ICM) User Initial Hash Value 0 Register 5 */
#define REG_ICM_UIHVAL6         (*(__O  uint32_t*)0xF8040050U) /**< (ICM) User Initial Hash Value 0 Register 6 */
#define REG_ICM_UIHVAL7         (*(__O  uint32_t*)0xF8040054U) /**< (ICM) User Initial Hash Value 0 Register 7 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for ICM peripheral ========== */
#define ICM_INSTANCE_ID                          8          
#define ICM_CLOCK_ID                             8          

#endif /* _SAMA5D2_ICM_INSTANCE_ */
