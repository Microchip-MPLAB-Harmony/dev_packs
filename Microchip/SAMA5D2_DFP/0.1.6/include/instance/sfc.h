/**
 * \file
 *
 * \brief Instance description for SFC
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
#ifndef _SAMA5D2_SFC_INSTANCE_H_
#define _SAMA5D2_SFC_INSTANCE_H_

/* ========== Register definition for SFC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SFC_KR              (0xF804C000) /**< (SFC) SFC Key Register */
#define REG_SFC_MR              (0xF804C004) /**< (SFC) SFC Mode Register */
#define REG_SFC_IER             (0xF804C010) /**< (SFC) SFC Interrupt Enable Register */
#define REG_SFC_IDR             (0xF804C014) /**< (SFC) SFC Interrupt Disable Register */
#define REG_SFC_IMR             (0xF804C018) /**< (SFC) SFC Interrupt Mask Register */
#define REG_SFC_SR              (0xF804C01C) /**< (SFC) SFC Status Register */
#define REG_SFC_DR              (0xF804C020) /**< (SFC) SFC Data Register */
#define REG_SFC_DR0             (0xF804C020) /**< (SFC) SFC Data Register 0 */
#define REG_SFC_DR1             (0xF804C024) /**< (SFC) SFC Data Register 1 */
#define REG_SFC_DR2             (0xF804C028) /**< (SFC) SFC Data Register 2 */
#define REG_SFC_DR3             (0xF804C02C) /**< (SFC) SFC Data Register 3 */
#define REG_SFC_DR4             (0xF804C030) /**< (SFC) SFC Data Register 4 */
#define REG_SFC_DR5             (0xF804C034) /**< (SFC) SFC Data Register 5 */
#define REG_SFC_DR6             (0xF804C038) /**< (SFC) SFC Data Register 6 */
#define REG_SFC_DR7             (0xF804C03C) /**< (SFC) SFC Data Register 7 */
#define REG_SFC_DR8             (0xF804C040) /**< (SFC) SFC Data Register 8 */
#define REG_SFC_DR9             (0xF804C044) /**< (SFC) SFC Data Register 9 */
#define REG_SFC_DR10            (0xF804C048) /**< (SFC) SFC Data Register 10 */
#define REG_SFC_DR11            (0xF804C04C) /**< (SFC) SFC Data Register 11 */
#define REG_SFC_DR12            (0xF804C050) /**< (SFC) SFC Data Register 12 */
#define REG_SFC_DR13            (0xF804C054) /**< (SFC) SFC Data Register 13 */
#define REG_SFC_DR14            (0xF804C058) /**< (SFC) SFC Data Register 14 */
#define REG_SFC_DR15            (0xF804C05C) /**< (SFC) SFC Data Register 15 */
#define REG_SFC_DR16            (0xF804C060) /**< (SFC) SFC Data Register 16 */

#else

#define REG_SFC_KR              (*(__O  uint32_t*)0xF804C000U) /**< (SFC) SFC Key Register */
#define REG_SFC_MR              (*(__IO uint32_t*)0xF804C004U) /**< (SFC) SFC Mode Register */
#define REG_SFC_IER             (*(__O  uint32_t*)0xF804C010U) /**< (SFC) SFC Interrupt Enable Register */
#define REG_SFC_IDR             (*(__O  uint32_t*)0xF804C014U) /**< (SFC) SFC Interrupt Disable Register */
#define REG_SFC_IMR             (*(__I  uint32_t*)0xF804C018U) /**< (SFC) SFC Interrupt Mask Register */
#define REG_SFC_SR              (*(__I  uint32_t*)0xF804C01CU) /**< (SFC) SFC Status Register */
#define REG_SFC_DR              (*(__IO uint32_t*)0xF804C020U) /**< (SFC) SFC Data Register */
#define REG_SFC_DR0             (*(__IO uint32_t*)0xF804C020U) /**< (SFC) SFC Data Register 0 */
#define REG_SFC_DR1             (*(__IO uint32_t*)0xF804C024U) /**< (SFC) SFC Data Register 1 */
#define REG_SFC_DR2             (*(__IO uint32_t*)0xF804C028U) /**< (SFC) SFC Data Register 2 */
#define REG_SFC_DR3             (*(__IO uint32_t*)0xF804C02CU) /**< (SFC) SFC Data Register 3 */
#define REG_SFC_DR4             (*(__IO uint32_t*)0xF804C030U) /**< (SFC) SFC Data Register 4 */
#define REG_SFC_DR5             (*(__IO uint32_t*)0xF804C034U) /**< (SFC) SFC Data Register 5 */
#define REG_SFC_DR6             (*(__IO uint32_t*)0xF804C038U) /**< (SFC) SFC Data Register 6 */
#define REG_SFC_DR7             (*(__IO uint32_t*)0xF804C03CU) /**< (SFC) SFC Data Register 7 */
#define REG_SFC_DR8             (*(__IO uint32_t*)0xF804C040U) /**< (SFC) SFC Data Register 8 */
#define REG_SFC_DR9             (*(__IO uint32_t*)0xF804C044U) /**< (SFC) SFC Data Register 9 */
#define REG_SFC_DR10            (*(__IO uint32_t*)0xF804C048U) /**< (SFC) SFC Data Register 10 */
#define REG_SFC_DR11            (*(__IO uint32_t*)0xF804C04CU) /**< (SFC) SFC Data Register 11 */
#define REG_SFC_DR12            (*(__IO uint32_t*)0xF804C050U) /**< (SFC) SFC Data Register 12 */
#define REG_SFC_DR13            (*(__IO uint32_t*)0xF804C054U) /**< (SFC) SFC Data Register 13 */
#define REG_SFC_DR14            (*(__IO uint32_t*)0xF804C058U) /**< (SFC) SFC Data Register 14 */
#define REG_SFC_DR15            (*(__IO uint32_t*)0xF804C05CU) /**< (SFC) SFC Data Register 15 */
#define REG_SFC_DR16            (*(__IO uint32_t*)0xF804C060U) /**< (SFC) SFC Data Register 16 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SFC peripheral ========== */
#define SFC_INSTANCE_ID                          50         
#define SFC_CLOCK_ID                             50         

#endif /* _SAMA5D2_SFC_INSTANCE_ */
