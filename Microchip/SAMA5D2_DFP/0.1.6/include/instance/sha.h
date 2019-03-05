/**
 * \file
 *
 * \brief Instance description for SHA
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
#ifndef _SAMA5D2_SHA_INSTANCE_H_
#define _SAMA5D2_SHA_INSTANCE_H_

/* ========== Register definition for SHA peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SHA_CR              (0xF0028000) /**< (SHA) Control Register */
#define REG_SHA_MR              (0xF0028004) /**< (SHA) Mode Register */
#define REG_SHA_IER             (0xF0028010) /**< (SHA) Interrupt Enable Register */
#define REG_SHA_IDR             (0xF0028014) /**< (SHA) Interrupt Disable Register */
#define REG_SHA_IMR             (0xF0028018) /**< (SHA) Interrupt Mask Register */
#define REG_SHA_ISR             (0xF002801C) /**< (SHA) Interrupt Status Register */
#define REG_SHA_MSR             (0xF0028020) /**< (SHA) Message Size Register */
#define REG_SHA_BCR             (0xF0028030) /**< (SHA) Bytes Count Register */
#define REG_SHA_IDATAR          (0xF0028040) /**< (SHA) Input Data 0 Register */
#define REG_SHA_IDATAR0         (0xF0028040) /**< (SHA) Input Data 0 Register 0 */
#define REG_SHA_IDATAR1         (0xF0028044) /**< (SHA) Input Data 0 Register 1 */
#define REG_SHA_IDATAR2         (0xF0028048) /**< (SHA) Input Data 0 Register 2 */
#define REG_SHA_IDATAR3         (0xF002804C) /**< (SHA) Input Data 0 Register 3 */
#define REG_SHA_IDATAR4         (0xF0028050) /**< (SHA) Input Data 0 Register 4 */
#define REG_SHA_IDATAR5         (0xF0028054) /**< (SHA) Input Data 0 Register 5 */
#define REG_SHA_IDATAR6         (0xF0028058) /**< (SHA) Input Data 0 Register 6 */
#define REG_SHA_IDATAR7         (0xF002805C) /**< (SHA) Input Data 0 Register 7 */
#define REG_SHA_IDATAR8         (0xF0028060) /**< (SHA) Input Data 0 Register 8 */
#define REG_SHA_IDATAR9         (0xF0028064) /**< (SHA) Input Data 0 Register 9 */
#define REG_SHA_IDATAR10        (0xF0028068) /**< (SHA) Input Data 0 Register 10 */
#define REG_SHA_IDATAR11        (0xF002806C) /**< (SHA) Input Data 0 Register 11 */
#define REG_SHA_IDATAR12        (0xF0028070) /**< (SHA) Input Data 0 Register 12 */
#define REG_SHA_IDATAR13        (0xF0028074) /**< (SHA) Input Data 0 Register 13 */
#define REG_SHA_IDATAR14        (0xF0028078) /**< (SHA) Input Data 0 Register 14 */
#define REG_SHA_IDATAR15        (0xF002807C) /**< (SHA) Input Data 0 Register 15 */
#define REG_SHA_IODATAR         (0xF0028080) /**< (SHA) Input/Output Data 0 Register */
#define REG_SHA_IODATAR0        (0xF0028080) /**< (SHA) Input/Output Data 0 Register 0 */
#define REG_SHA_IODATAR1        (0xF0028084) /**< (SHA) Input/Output Data 0 Register 1 */
#define REG_SHA_IODATAR2        (0xF0028088) /**< (SHA) Input/Output Data 0 Register 2 */
#define REG_SHA_IODATAR3        (0xF002808C) /**< (SHA) Input/Output Data 0 Register 3 */
#define REG_SHA_IODATAR4        (0xF0028090) /**< (SHA) Input/Output Data 0 Register 4 */
#define REG_SHA_IODATAR5        (0xF0028094) /**< (SHA) Input/Output Data 0 Register 5 */
#define REG_SHA_IODATAR6        (0xF0028098) /**< (SHA) Input/Output Data 0 Register 6 */
#define REG_SHA_IODATAR7        (0xF002809C) /**< (SHA) Input/Output Data 0 Register 7 */
#define REG_SHA_IODATAR8        (0xF00280A0) /**< (SHA) Input/Output Data 0 Register 8 */
#define REG_SHA_IODATAR9        (0xF00280A4) /**< (SHA) Input/Output Data 0 Register 9 */
#define REG_SHA_IODATAR10       (0xF00280A8) /**< (SHA) Input/Output Data 0 Register 10 */
#define REG_SHA_IODATAR11       (0xF00280AC) /**< (SHA) Input/Output Data 0 Register 11 */
#define REG_SHA_IODATAR12       (0xF00280B0) /**< (SHA) Input/Output Data 0 Register 12 */
#define REG_SHA_IODATAR13       (0xF00280B4) /**< (SHA) Input/Output Data 0 Register 13 */
#define REG_SHA_IODATAR14       (0xF00280B8) /**< (SHA) Input/Output Data 0 Register 14 */
#define REG_SHA_IODATAR15       (0xF00280BC) /**< (SHA) Input/Output Data 0 Register 15 */

#else

#define REG_SHA_CR              (*(__O  uint32_t*)0xF0028000U) /**< (SHA) Control Register */
#define REG_SHA_MR              (*(__IO uint32_t*)0xF0028004U) /**< (SHA) Mode Register */
#define REG_SHA_IER             (*(__O  uint32_t*)0xF0028010U) /**< (SHA) Interrupt Enable Register */
#define REG_SHA_IDR             (*(__O  uint32_t*)0xF0028014U) /**< (SHA) Interrupt Disable Register */
#define REG_SHA_IMR             (*(__I  uint32_t*)0xF0028018U) /**< (SHA) Interrupt Mask Register */
#define REG_SHA_ISR             (*(__I  uint32_t*)0xF002801CU) /**< (SHA) Interrupt Status Register */
#define REG_SHA_MSR             (*(__IO uint32_t*)0xF0028020U) /**< (SHA) Message Size Register */
#define REG_SHA_BCR             (*(__IO uint32_t*)0xF0028030U) /**< (SHA) Bytes Count Register */
#define REG_SHA_IDATAR          (*(__O  uint32_t*)0xF0028040U) /**< (SHA) Input Data 0 Register */
#define REG_SHA_IDATAR0         (*(__O  uint32_t*)0xF0028040U) /**< (SHA) Input Data 0 Register 0 */
#define REG_SHA_IDATAR1         (*(__O  uint32_t*)0xF0028044U) /**< (SHA) Input Data 0 Register 1 */
#define REG_SHA_IDATAR2         (*(__O  uint32_t*)0xF0028048U) /**< (SHA) Input Data 0 Register 2 */
#define REG_SHA_IDATAR3         (*(__O  uint32_t*)0xF002804CU) /**< (SHA) Input Data 0 Register 3 */
#define REG_SHA_IDATAR4         (*(__O  uint32_t*)0xF0028050U) /**< (SHA) Input Data 0 Register 4 */
#define REG_SHA_IDATAR5         (*(__O  uint32_t*)0xF0028054U) /**< (SHA) Input Data 0 Register 5 */
#define REG_SHA_IDATAR6         (*(__O  uint32_t*)0xF0028058U) /**< (SHA) Input Data 0 Register 6 */
#define REG_SHA_IDATAR7         (*(__O  uint32_t*)0xF002805CU) /**< (SHA) Input Data 0 Register 7 */
#define REG_SHA_IDATAR8         (*(__O  uint32_t*)0xF0028060U) /**< (SHA) Input Data 0 Register 8 */
#define REG_SHA_IDATAR9         (*(__O  uint32_t*)0xF0028064U) /**< (SHA) Input Data 0 Register 9 */
#define REG_SHA_IDATAR10        (*(__O  uint32_t*)0xF0028068U) /**< (SHA) Input Data 0 Register 10 */
#define REG_SHA_IDATAR11        (*(__O  uint32_t*)0xF002806CU) /**< (SHA) Input Data 0 Register 11 */
#define REG_SHA_IDATAR12        (*(__O  uint32_t*)0xF0028070U) /**< (SHA) Input Data 0 Register 12 */
#define REG_SHA_IDATAR13        (*(__O  uint32_t*)0xF0028074U) /**< (SHA) Input Data 0 Register 13 */
#define REG_SHA_IDATAR14        (*(__O  uint32_t*)0xF0028078U) /**< (SHA) Input Data 0 Register 14 */
#define REG_SHA_IDATAR15        (*(__O  uint32_t*)0xF002807CU) /**< (SHA) Input Data 0 Register 15 */
#define REG_SHA_IODATAR         (*(__IO uint32_t*)0xF0028080U) /**< (SHA) Input/Output Data 0 Register */
#define REG_SHA_IODATAR0        (*(__IO uint32_t*)0xF0028080U) /**< (SHA) Input/Output Data 0 Register 0 */
#define REG_SHA_IODATAR1        (*(__IO uint32_t*)0xF0028084U) /**< (SHA) Input/Output Data 0 Register 1 */
#define REG_SHA_IODATAR2        (*(__IO uint32_t*)0xF0028088U) /**< (SHA) Input/Output Data 0 Register 2 */
#define REG_SHA_IODATAR3        (*(__IO uint32_t*)0xF002808CU) /**< (SHA) Input/Output Data 0 Register 3 */
#define REG_SHA_IODATAR4        (*(__IO uint32_t*)0xF0028090U) /**< (SHA) Input/Output Data 0 Register 4 */
#define REG_SHA_IODATAR5        (*(__IO uint32_t*)0xF0028094U) /**< (SHA) Input/Output Data 0 Register 5 */
#define REG_SHA_IODATAR6        (*(__IO uint32_t*)0xF0028098U) /**< (SHA) Input/Output Data 0 Register 6 */
#define REG_SHA_IODATAR7        (*(__IO uint32_t*)0xF002809CU) /**< (SHA) Input/Output Data 0 Register 7 */
#define REG_SHA_IODATAR8        (*(__IO uint32_t*)0xF00280A0U) /**< (SHA) Input/Output Data 0 Register 8 */
#define REG_SHA_IODATAR9        (*(__IO uint32_t*)0xF00280A4U) /**< (SHA) Input/Output Data 0 Register 9 */
#define REG_SHA_IODATAR10       (*(__IO uint32_t*)0xF00280A8U) /**< (SHA) Input/Output Data 0 Register 10 */
#define REG_SHA_IODATAR11       (*(__IO uint32_t*)0xF00280ACU) /**< (SHA) Input/Output Data 0 Register 11 */
#define REG_SHA_IODATAR12       (*(__IO uint32_t*)0xF00280B0U) /**< (SHA) Input/Output Data 0 Register 12 */
#define REG_SHA_IODATAR13       (*(__IO uint32_t*)0xF00280B4U) /**< (SHA) Input/Output Data 0 Register 13 */
#define REG_SHA_IODATAR14       (*(__IO uint32_t*)0xF00280B8U) /**< (SHA) Input/Output Data 0 Register 14 */
#define REG_SHA_IODATAR15       (*(__IO uint32_t*)0xF00280BCU) /**< (SHA) Input/Output Data 0 Register 15 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SHA peripheral ========== */
#define SHA_INSTANCE_ID                          12         
#define SHA_CLOCK_ID                             12         
#define SHA_DMAC_ID_TX                           30         

#endif /* _SAMA5D2_SHA_INSTANCE_ */
