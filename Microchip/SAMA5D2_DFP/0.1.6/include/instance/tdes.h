/**
 * \file
 *
 * \brief Instance description for TDES
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
#ifndef _SAMA5D2_TDES_INSTANCE_H_
#define _SAMA5D2_TDES_INSTANCE_H_

/* ========== Register definition for TDES peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TDES_CR             (0xFC044000) /**< (TDES) Control Register */
#define REG_TDES_MR             (0xFC044004) /**< (TDES) Mode Register */
#define REG_TDES_IER            (0xFC044010) /**< (TDES) Interrupt Enable Register */
#define REG_TDES_IDR            (0xFC044014) /**< (TDES) Interrupt Disable Register */
#define REG_TDES_IMR            (0xFC044018) /**< (TDES) Interrupt Mask Register */
#define REG_TDES_ISR            (0xFC04401C) /**< (TDES) Interrupt Status Register */
#define REG_TDES_KEY1WR         (0xFC044020) /**< (TDES) Key 1 Word Register */
#define REG_TDES_KEY1WR0        (0xFC044020) /**< (TDES) Key 1 Word Register 0 */
#define REG_TDES_KEY1WR1        (0xFC044024) /**< (TDES) Key 1 Word Register 1 */
#define REG_TDES_KEY2WR         (0xFC044028) /**< (TDES) Key 2 Word Register */
#define REG_TDES_KEY2WR0        (0xFC044028) /**< (TDES) Key 2 Word Register 0 */
#define REG_TDES_KEY2WR1        (0xFC04402C) /**< (TDES) Key 2 Word Register 1 */
#define REG_TDES_KEY3WR         (0xFC044030) /**< (TDES) Key 3 Word Register */
#define REG_TDES_KEY3WR0        (0xFC044030) /**< (TDES) Key 3 Word Register 0 */
#define REG_TDES_KEY3WR1        (0xFC044034) /**< (TDES) Key 3 Word Register 1 */
#define REG_TDES_IDATAR         (0xFC044040) /**< (TDES) Input Data Register */
#define REG_TDES_IDATAR0        (0xFC044040) /**< (TDES) Input Data Register 0 */
#define REG_TDES_IDATAR1        (0xFC044044) /**< (TDES) Input Data Register 1 */
#define REG_TDES_ODATAR         (0xFC044050) /**< (TDES) Output Data Register */
#define REG_TDES_ODATAR0        (0xFC044050) /**< (TDES) Output Data Register 0 */
#define REG_TDES_ODATAR1        (0xFC044054) /**< (TDES) Output Data Register 1 */
#define REG_TDES_IVR            (0xFC044060) /**< (TDES) Initialization Vector Register */
#define REG_TDES_IVR0           (0xFC044060) /**< (TDES) Initialization Vector Register 0 */
#define REG_TDES_IVR1           (0xFC044064) /**< (TDES) Initialization Vector Register 1 */
#define REG_TDES_XTEA_RNDR      (0xFC044070) /**< (TDES) XTEA Rounds Register */

#else

#define REG_TDES_CR             (*(__O  uint32_t*)0xFC044000U) /**< (TDES) Control Register */
#define REG_TDES_MR             (*(__IO uint32_t*)0xFC044004U) /**< (TDES) Mode Register */
#define REG_TDES_IER            (*(__O  uint32_t*)0xFC044010U) /**< (TDES) Interrupt Enable Register */
#define REG_TDES_IDR            (*(__O  uint32_t*)0xFC044014U) /**< (TDES) Interrupt Disable Register */
#define REG_TDES_IMR            (*(__I  uint32_t*)0xFC044018U) /**< (TDES) Interrupt Mask Register */
#define REG_TDES_ISR            (*(__I  uint32_t*)0xFC04401CU) /**< (TDES) Interrupt Status Register */
#define REG_TDES_KEY1WR         (*(__O  uint32_t*)0xFC044020U) /**< (TDES) Key 1 Word Register */
#define REG_TDES_KEY1WR0        (*(__O  uint32_t*)0xFC044020U) /**< (TDES) Key 1 Word Register 0 */
#define REG_TDES_KEY1WR1        (*(__O  uint32_t*)0xFC044024U) /**< (TDES) Key 1 Word Register 1 */
#define REG_TDES_KEY2WR         (*(__O  uint32_t*)0xFC044028U) /**< (TDES) Key 2 Word Register */
#define REG_TDES_KEY2WR0        (*(__O  uint32_t*)0xFC044028U) /**< (TDES) Key 2 Word Register 0 */
#define REG_TDES_KEY2WR1        (*(__O  uint32_t*)0xFC04402CU) /**< (TDES) Key 2 Word Register 1 */
#define REG_TDES_KEY3WR         (*(__O  uint32_t*)0xFC044030U) /**< (TDES) Key 3 Word Register */
#define REG_TDES_KEY3WR0        (*(__O  uint32_t*)0xFC044030U) /**< (TDES) Key 3 Word Register 0 */
#define REG_TDES_KEY3WR1        (*(__O  uint32_t*)0xFC044034U) /**< (TDES) Key 3 Word Register 1 */
#define REG_TDES_IDATAR         (*(__O  uint32_t*)0xFC044040U) /**< (TDES) Input Data Register */
#define REG_TDES_IDATAR0        (*(__O  uint32_t*)0xFC044040U) /**< (TDES) Input Data Register 0 */
#define REG_TDES_IDATAR1        (*(__O  uint32_t*)0xFC044044U) /**< (TDES) Input Data Register 1 */
#define REG_TDES_ODATAR         (*(__I  uint32_t*)0xFC044050U) /**< (TDES) Output Data Register */
#define REG_TDES_ODATAR0        (*(__I  uint32_t*)0xFC044050U) /**< (TDES) Output Data Register 0 */
#define REG_TDES_ODATAR1        (*(__I  uint32_t*)0xFC044054U) /**< (TDES) Output Data Register 1 */
#define REG_TDES_IVR            (*(__O  uint32_t*)0xFC044060U) /**< (TDES) Initialization Vector Register */
#define REG_TDES_IVR0           (*(__O  uint32_t*)0xFC044060U) /**< (TDES) Initialization Vector Register 0 */
#define REG_TDES_IVR1           (*(__O  uint32_t*)0xFC044064U) /**< (TDES) Initialization Vector Register 1 */
#define REG_TDES_XTEA_RNDR      (*(__IO uint32_t*)0xFC044070U) /**< (TDES) XTEA Rounds Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TDES peripheral ========== */
#define TDES_INSTANCE_ID                         11         
#define TDES_CLOCK_ID                            11         
#define TDES_DMAC_ID_TX                          28         
#define TDES_DMAC_ID_RX                          29         

#endif /* _SAMA5D2_TDES_INSTANCE_ */
