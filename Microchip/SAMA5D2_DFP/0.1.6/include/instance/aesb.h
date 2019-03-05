/**
 * \file
 *
 * \brief Instance description for AESB
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
#ifndef _SAMA5D2_AESB_INSTANCE_H_
#define _SAMA5D2_AESB_INSTANCE_H_

/* ========== Register definition for AESB peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_AESB_CR             (0xF001C000) /**< (AESB) Control Register */
#define REG_AESB_MR             (0xF001C004) /**< (AESB) Mode Register */
#define REG_AESB_IER            (0xF001C010) /**< (AESB) Interrupt Enable Register */
#define REG_AESB_IDR            (0xF001C014) /**< (AESB) Interrupt Disable Register */
#define REG_AESB_IMR            (0xF001C018) /**< (AESB) Interrupt Mask Register */
#define REG_AESB_ISR            (0xF001C01C) /**< (AESB) Interrupt Status Register */
#define REG_AESB_KEYWR          (0xF001C020) /**< (AESB) Key Word Register */
#define REG_AESB_KEYWR0         (0xF001C020) /**< (AESB) Key Word Register 0 */
#define REG_AESB_KEYWR1         (0xF001C024) /**< (AESB) Key Word Register 1 */
#define REG_AESB_KEYWR2         (0xF001C028) /**< (AESB) Key Word Register 2 */
#define REG_AESB_KEYWR3         (0xF001C02C) /**< (AESB) Key Word Register 3 */
#define REG_AESB_IDATAR         (0xF001C040) /**< (AESB) Input Data Register */
#define REG_AESB_IDATAR0        (0xF001C040) /**< (AESB) Input Data Register 0 */
#define REG_AESB_IDATAR1        (0xF001C044) /**< (AESB) Input Data Register 1 */
#define REG_AESB_IDATAR2        (0xF001C048) /**< (AESB) Input Data Register 2 */
#define REG_AESB_IDATAR3        (0xF001C04C) /**< (AESB) Input Data Register 3 */
#define REG_AESB_ODATAR         (0xF001C050) /**< (AESB) Output Data Register */
#define REG_AESB_ODATAR0        (0xF001C050) /**< (AESB) Output Data Register 0 */
#define REG_AESB_ODATAR1        (0xF001C054) /**< (AESB) Output Data Register 1 */
#define REG_AESB_ODATAR2        (0xF001C058) /**< (AESB) Output Data Register 2 */
#define REG_AESB_ODATAR3        (0xF001C05C) /**< (AESB) Output Data Register 3 */
#define REG_AESB_IVR            (0xF001C060) /**< (AESB) Initialization Vector Register */
#define REG_AESB_IVR0           (0xF001C060) /**< (AESB) Initialization Vector Register 0 */
#define REG_AESB_IVR1           (0xF001C064) /**< (AESB) Initialization Vector Register 1 */
#define REG_AESB_IVR2           (0xF001C068) /**< (AESB) Initialization Vector Register 2 */
#define REG_AESB_IVR3           (0xF001C06C) /**< (AESB) Initialization Vector Register 3 */

#else

#define REG_AESB_CR             (*(__O  uint32_t*)0xF001C000U) /**< (AESB) Control Register */
#define REG_AESB_MR             (*(__IO uint32_t*)0xF001C004U) /**< (AESB) Mode Register */
#define REG_AESB_IER            (*(__O  uint32_t*)0xF001C010U) /**< (AESB) Interrupt Enable Register */
#define REG_AESB_IDR            (*(__O  uint32_t*)0xF001C014U) /**< (AESB) Interrupt Disable Register */
#define REG_AESB_IMR            (*(__I  uint32_t*)0xF001C018U) /**< (AESB) Interrupt Mask Register */
#define REG_AESB_ISR            (*(__I  uint32_t*)0xF001C01CU) /**< (AESB) Interrupt Status Register */
#define REG_AESB_KEYWR          (*(__O  uint32_t*)0xF001C020U) /**< (AESB) Key Word Register */
#define REG_AESB_KEYWR0         (*(__O  uint32_t*)0xF001C020U) /**< (AESB) Key Word Register 0 */
#define REG_AESB_KEYWR1         (*(__O  uint32_t*)0xF001C024U) /**< (AESB) Key Word Register 1 */
#define REG_AESB_KEYWR2         (*(__O  uint32_t*)0xF001C028U) /**< (AESB) Key Word Register 2 */
#define REG_AESB_KEYWR3         (*(__O  uint32_t*)0xF001C02CU) /**< (AESB) Key Word Register 3 */
#define REG_AESB_IDATAR         (*(__O  uint32_t*)0xF001C040U) /**< (AESB) Input Data Register */
#define REG_AESB_IDATAR0        (*(__O  uint32_t*)0xF001C040U) /**< (AESB) Input Data Register 0 */
#define REG_AESB_IDATAR1        (*(__O  uint32_t*)0xF001C044U) /**< (AESB) Input Data Register 1 */
#define REG_AESB_IDATAR2        (*(__O  uint32_t*)0xF001C048U) /**< (AESB) Input Data Register 2 */
#define REG_AESB_IDATAR3        (*(__O  uint32_t*)0xF001C04CU) /**< (AESB) Input Data Register 3 */
#define REG_AESB_ODATAR         (*(__I  uint32_t*)0xF001C050U) /**< (AESB) Output Data Register */
#define REG_AESB_ODATAR0        (*(__I  uint32_t*)0xF001C050U) /**< (AESB) Output Data Register 0 */
#define REG_AESB_ODATAR1        (*(__I  uint32_t*)0xF001C054U) /**< (AESB) Output Data Register 1 */
#define REG_AESB_ODATAR2        (*(__I  uint32_t*)0xF001C058U) /**< (AESB) Output Data Register 2 */
#define REG_AESB_ODATAR3        (*(__I  uint32_t*)0xF001C05CU) /**< (AESB) Output Data Register 3 */
#define REG_AESB_IVR            (*(__O  uint32_t*)0xF001C060U) /**< (AESB) Initialization Vector Register */
#define REG_AESB_IVR0           (*(__O  uint32_t*)0xF001C060U) /**< (AESB) Initialization Vector Register 0 */
#define REG_AESB_IVR1           (*(__O  uint32_t*)0xF001C064U) /**< (AESB) Initialization Vector Register 1 */
#define REG_AESB_IVR2           (*(__O  uint32_t*)0xF001C068U) /**< (AESB) Initialization Vector Register 2 */
#define REG_AESB_IVR3           (*(__O  uint32_t*)0xF001C06CU) /**< (AESB) Initialization Vector Register 3 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for AESB peripheral ========== */
#define AESB_INSTANCE_ID                         10         
#define AESB_CLOCK_ID                            10         

#endif /* _SAMA5D2_AESB_INSTANCE_ */
