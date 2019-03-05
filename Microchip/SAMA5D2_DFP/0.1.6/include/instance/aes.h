/**
 * \file
 *
 * \brief Instance description for AES
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
#ifndef _SAMA5D2_AES_INSTANCE_H_
#define _SAMA5D2_AES_INSTANCE_H_

/* ========== Register definition for AES peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_AES_CR              (0xF002C000) /**< (AES) Control Register */
#define REG_AES_MR              (0xF002C004) /**< (AES) Mode Register */
#define REG_AES_IER             (0xF002C010) /**< (AES) Interrupt Enable Register */
#define REG_AES_IDR             (0xF002C014) /**< (AES) Interrupt Disable Register */
#define REG_AES_IMR             (0xF002C018) /**< (AES) Interrupt Mask Register */
#define REG_AES_ISR             (0xF002C01C) /**< (AES) Interrupt Status Register */
#define REG_AES_KEYWR           (0xF002C020) /**< (AES) Key Word Register */
#define REG_AES_KEYWR0          (0xF002C020) /**< (AES) Key Word Register 0 */
#define REG_AES_KEYWR1          (0xF002C024) /**< (AES) Key Word Register 1 */
#define REG_AES_KEYWR2          (0xF002C028) /**< (AES) Key Word Register 2 */
#define REG_AES_KEYWR3          (0xF002C02C) /**< (AES) Key Word Register 3 */
#define REG_AES_KEYWR4          (0xF002C030) /**< (AES) Key Word Register 4 */
#define REG_AES_KEYWR5          (0xF002C034) /**< (AES) Key Word Register 5 */
#define REG_AES_KEYWR6          (0xF002C038) /**< (AES) Key Word Register 6 */
#define REG_AES_KEYWR7          (0xF002C03C) /**< (AES) Key Word Register 7 */
#define REG_AES_IDATAR          (0xF002C040) /**< (AES) Input Data Register */
#define REG_AES_IDATAR0         (0xF002C040) /**< (AES) Input Data Register 0 */
#define REG_AES_IDATAR1         (0xF002C044) /**< (AES) Input Data Register 1 */
#define REG_AES_IDATAR2         (0xF002C048) /**< (AES) Input Data Register 2 */
#define REG_AES_IDATAR3         (0xF002C04C) /**< (AES) Input Data Register 3 */
#define REG_AES_ODATAR          (0xF002C050) /**< (AES) Output Data Register */
#define REG_AES_ODATAR0         (0xF002C050) /**< (AES) Output Data Register 0 */
#define REG_AES_ODATAR1         (0xF002C054) /**< (AES) Output Data Register 1 */
#define REG_AES_ODATAR2         (0xF002C058) /**< (AES) Output Data Register 2 */
#define REG_AES_ODATAR3         (0xF002C05C) /**< (AES) Output Data Register 3 */
#define REG_AES_IVR             (0xF002C060) /**< (AES) Initialization Vector Register */
#define REG_AES_IVR0            (0xF002C060) /**< (AES) Initialization Vector Register 0 */
#define REG_AES_IVR1            (0xF002C064) /**< (AES) Initialization Vector Register 1 */
#define REG_AES_IVR2            (0xF002C068) /**< (AES) Initialization Vector Register 2 */
#define REG_AES_IVR3            (0xF002C06C) /**< (AES) Initialization Vector Register 3 */
#define REG_AES_AADLENR         (0xF002C070) /**< (AES) Additional Authenticated Data Length Register */
#define REG_AES_CLENR           (0xF002C074) /**< (AES) Plaintext/Ciphertext Length Register */
#define REG_AES_GHASHR          (0xF002C078) /**< (AES) GCM Intermediate Hash Word Register */
#define REG_AES_GHASHR0         (0xF002C078) /**< (AES) GCM Intermediate Hash Word Register 0 */
#define REG_AES_GHASHR1         (0xF002C07C) /**< (AES) GCM Intermediate Hash Word Register 1 */
#define REG_AES_GHASHR2         (0xF002C080) /**< (AES) GCM Intermediate Hash Word Register 2 */
#define REG_AES_GHASHR3         (0xF002C084) /**< (AES) GCM Intermediate Hash Word Register 3 */
#define REG_AES_TAGR            (0xF002C088) /**< (AES) GCM Authentication Tag Word Register */
#define REG_AES_TAGR0           (0xF002C088) /**< (AES) GCM Authentication Tag Word Register 0 */
#define REG_AES_TAGR1           (0xF002C08C) /**< (AES) GCM Authentication Tag Word Register 1 */
#define REG_AES_TAGR2           (0xF002C090) /**< (AES) GCM Authentication Tag Word Register 2 */
#define REG_AES_TAGR3           (0xF002C094) /**< (AES) GCM Authentication Tag Word Register 3 */
#define REG_AES_CTRR            (0xF002C098) /**< (AES) GCM Encryption Counter Value Register */
#define REG_AES_GCMHR           (0xF002C09C) /**< (AES) GCM H Word Register */
#define REG_AES_GCMHR0          (0xF002C09C) /**< (AES) GCM H Word Register 0 */
#define REG_AES_GCMHR1          (0xF002C0A0) /**< (AES) GCM H Word Register 1 */
#define REG_AES_GCMHR2          (0xF002C0A4) /**< (AES) GCM H Word Register 2 */
#define REG_AES_GCMHR3          (0xF002C0A8) /**< (AES) GCM H Word Register 3 */
#define REG_AES_EMR             (0xF002C0B0) /**< (AES) Extended Mode Register */
#define REG_AES_BCNT            (0xF002C0B4) /**< (AES) Byte Counter Register */
#define REG_AES_TWR             (0xF002C0C0) /**< (AES) Tweak Word Register */
#define REG_AES_TWR0            (0xF002C0C0) /**< (AES) Tweak Word Register 0 */
#define REG_AES_TWR1            (0xF002C0C4) /**< (AES) Tweak Word Register 1 */
#define REG_AES_TWR2            (0xF002C0C8) /**< (AES) Tweak Word Register 2 */
#define REG_AES_TWR3            (0xF002C0CC) /**< (AES) Tweak Word Register 3 */
#define REG_AES_ALPHAR          (0xF002C0D0) /**< (AES) Alpha Word Register */
#define REG_AES_ALPHAR0         (0xF002C0D0) /**< (AES) Alpha Word Register 0 */
#define REG_AES_ALPHAR1         (0xF002C0D4) /**< (AES) Alpha Word Register 1 */
#define REG_AES_ALPHAR2         (0xF002C0D8) /**< (AES) Alpha Word Register 2 */
#define REG_AES_ALPHAR3         (0xF002C0DC) /**< (AES) Alpha Word Register 3 */

#else

#define REG_AES_CR              (*(__O  uint32_t*)0xF002C000U) /**< (AES) Control Register */
#define REG_AES_MR              (*(__IO uint32_t*)0xF002C004U) /**< (AES) Mode Register */
#define REG_AES_IER             (*(__O  uint32_t*)0xF002C010U) /**< (AES) Interrupt Enable Register */
#define REG_AES_IDR             (*(__O  uint32_t*)0xF002C014U) /**< (AES) Interrupt Disable Register */
#define REG_AES_IMR             (*(__I  uint32_t*)0xF002C018U) /**< (AES) Interrupt Mask Register */
#define REG_AES_ISR             (*(__I  uint32_t*)0xF002C01CU) /**< (AES) Interrupt Status Register */
#define REG_AES_KEYWR           (*(__O  uint32_t*)0xF002C020U) /**< (AES) Key Word Register */
#define REG_AES_KEYWR0          (*(__O  uint32_t*)0xF002C020U) /**< (AES) Key Word Register 0 */
#define REG_AES_KEYWR1          (*(__O  uint32_t*)0xF002C024U) /**< (AES) Key Word Register 1 */
#define REG_AES_KEYWR2          (*(__O  uint32_t*)0xF002C028U) /**< (AES) Key Word Register 2 */
#define REG_AES_KEYWR3          (*(__O  uint32_t*)0xF002C02CU) /**< (AES) Key Word Register 3 */
#define REG_AES_KEYWR4          (*(__O  uint32_t*)0xF002C030U) /**< (AES) Key Word Register 4 */
#define REG_AES_KEYWR5          (*(__O  uint32_t*)0xF002C034U) /**< (AES) Key Word Register 5 */
#define REG_AES_KEYWR6          (*(__O  uint32_t*)0xF002C038U) /**< (AES) Key Word Register 6 */
#define REG_AES_KEYWR7          (*(__O  uint32_t*)0xF002C03CU) /**< (AES) Key Word Register 7 */
#define REG_AES_IDATAR          (*(__O  uint32_t*)0xF002C040U) /**< (AES) Input Data Register */
#define REG_AES_IDATAR0         (*(__O  uint32_t*)0xF002C040U) /**< (AES) Input Data Register 0 */
#define REG_AES_IDATAR1         (*(__O  uint32_t*)0xF002C044U) /**< (AES) Input Data Register 1 */
#define REG_AES_IDATAR2         (*(__O  uint32_t*)0xF002C048U) /**< (AES) Input Data Register 2 */
#define REG_AES_IDATAR3         (*(__O  uint32_t*)0xF002C04CU) /**< (AES) Input Data Register 3 */
#define REG_AES_ODATAR          (*(__I  uint32_t*)0xF002C050U) /**< (AES) Output Data Register */
#define REG_AES_ODATAR0         (*(__I  uint32_t*)0xF002C050U) /**< (AES) Output Data Register 0 */
#define REG_AES_ODATAR1         (*(__I  uint32_t*)0xF002C054U) /**< (AES) Output Data Register 1 */
#define REG_AES_ODATAR2         (*(__I  uint32_t*)0xF002C058U) /**< (AES) Output Data Register 2 */
#define REG_AES_ODATAR3         (*(__I  uint32_t*)0xF002C05CU) /**< (AES) Output Data Register 3 */
#define REG_AES_IVR             (*(__O  uint32_t*)0xF002C060U) /**< (AES) Initialization Vector Register */
#define REG_AES_IVR0            (*(__O  uint32_t*)0xF002C060U) /**< (AES) Initialization Vector Register 0 */
#define REG_AES_IVR1            (*(__O  uint32_t*)0xF002C064U) /**< (AES) Initialization Vector Register 1 */
#define REG_AES_IVR2            (*(__O  uint32_t*)0xF002C068U) /**< (AES) Initialization Vector Register 2 */
#define REG_AES_IVR3            (*(__O  uint32_t*)0xF002C06CU) /**< (AES) Initialization Vector Register 3 */
#define REG_AES_AADLENR         (*(__IO uint32_t*)0xF002C070U) /**< (AES) Additional Authenticated Data Length Register */
#define REG_AES_CLENR           (*(__IO uint32_t*)0xF002C074U) /**< (AES) Plaintext/Ciphertext Length Register */
#define REG_AES_GHASHR          (*(__IO uint32_t*)0xF002C078U) /**< (AES) GCM Intermediate Hash Word Register */
#define REG_AES_GHASHR0         (*(__IO uint32_t*)0xF002C078U) /**< (AES) GCM Intermediate Hash Word Register 0 */
#define REG_AES_GHASHR1         (*(__IO uint32_t*)0xF002C07CU) /**< (AES) GCM Intermediate Hash Word Register 1 */
#define REG_AES_GHASHR2         (*(__IO uint32_t*)0xF002C080U) /**< (AES) GCM Intermediate Hash Word Register 2 */
#define REG_AES_GHASHR3         (*(__IO uint32_t*)0xF002C084U) /**< (AES) GCM Intermediate Hash Word Register 3 */
#define REG_AES_TAGR            (*(__I  uint32_t*)0xF002C088U) /**< (AES) GCM Authentication Tag Word Register */
#define REG_AES_TAGR0           (*(__I  uint32_t*)0xF002C088U) /**< (AES) GCM Authentication Tag Word Register 0 */
#define REG_AES_TAGR1           (*(__I  uint32_t*)0xF002C08CU) /**< (AES) GCM Authentication Tag Word Register 1 */
#define REG_AES_TAGR2           (*(__I  uint32_t*)0xF002C090U) /**< (AES) GCM Authentication Tag Word Register 2 */
#define REG_AES_TAGR3           (*(__I  uint32_t*)0xF002C094U) /**< (AES) GCM Authentication Tag Word Register 3 */
#define REG_AES_CTRR            (*(__I  uint32_t*)0xF002C098U) /**< (AES) GCM Encryption Counter Value Register */
#define REG_AES_GCMHR           (*(__IO uint32_t*)0xF002C09CU) /**< (AES) GCM H Word Register */
#define REG_AES_GCMHR0          (*(__IO uint32_t*)0xF002C09CU) /**< (AES) GCM H Word Register 0 */
#define REG_AES_GCMHR1          (*(__IO uint32_t*)0xF002C0A0U) /**< (AES) GCM H Word Register 1 */
#define REG_AES_GCMHR2          (*(__IO uint32_t*)0xF002C0A4U) /**< (AES) GCM H Word Register 2 */
#define REG_AES_GCMHR3          (*(__IO uint32_t*)0xF002C0A8U) /**< (AES) GCM H Word Register 3 */
#define REG_AES_EMR             (*(__IO uint32_t*)0xF002C0B0U) /**< (AES) Extended Mode Register */
#define REG_AES_BCNT            (*(__IO uint32_t*)0xF002C0B4U) /**< (AES) Byte Counter Register */
#define REG_AES_TWR             (*(__IO uint32_t*)0xF002C0C0U) /**< (AES) Tweak Word Register */
#define REG_AES_TWR0            (*(__IO uint32_t*)0xF002C0C0U) /**< (AES) Tweak Word Register 0 */
#define REG_AES_TWR1            (*(__IO uint32_t*)0xF002C0C4U) /**< (AES) Tweak Word Register 1 */
#define REG_AES_TWR2            (*(__IO uint32_t*)0xF002C0C8U) /**< (AES) Tweak Word Register 2 */
#define REG_AES_TWR3            (*(__IO uint32_t*)0xF002C0CCU) /**< (AES) Tweak Word Register 3 */
#define REG_AES_ALPHAR          (*(__O  uint32_t*)0xF002C0D0U) /**< (AES) Alpha Word Register */
#define REG_AES_ALPHAR0         (*(__O  uint32_t*)0xF002C0D0U) /**< (AES) Alpha Word Register 0 */
#define REG_AES_ALPHAR1         (*(__O  uint32_t*)0xF002C0D4U) /**< (AES) Alpha Word Register 1 */
#define REG_AES_ALPHAR2         (*(__O  uint32_t*)0xF002C0D8U) /**< (AES) Alpha Word Register 2 */
#define REG_AES_ALPHAR3         (*(__O  uint32_t*)0xF002C0DCU) /**< (AES) Alpha Word Register 3 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for AES peripheral ========== */
#define AES_INSTANCE_ID                          9          
#define AES_CLOCK_ID                             9          
#define AES_DMAC_ID_TX                           26         
#define AES_DMAC_ID_RX                           27         

#endif /* _SAMA5D2_AES_INSTANCE_ */
