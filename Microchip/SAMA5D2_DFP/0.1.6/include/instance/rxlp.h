/**
 * \file
 *
 * \brief Instance description for RXLP
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
#ifndef _SAMA5D2_RXLP_INSTANCE_H_
#define _SAMA5D2_RXLP_INSTANCE_H_

/* ========== Register definition for RXLP peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_RXLP_CR             (0xF8049000) /**< (RXLP) Control Register */
#define REG_RXLP_MR             (0xF8049004) /**< (RXLP) Mode Register */
#define REG_RXLP_RHR            (0xF8049018) /**< (RXLP) Receive Holding Register */
#define REG_RXLP_BRGR           (0xF8049020) /**< (RXLP) Baud Rate Generator Register */
#define REG_RXLP_CMPR           (0xF8049024) /**< (RXLP) Comparison Register */
#define REG_RXLP_WPMR           (0xF80490E4) /**< (RXLP) Write Protection Mode Register */

#else

#define REG_RXLP_CR             (*(__O  uint32_t*)0xF8049000U) /**< (RXLP) Control Register */
#define REG_RXLP_MR             (*(__IO uint32_t*)0xF8049004U) /**< (RXLP) Mode Register */
#define REG_RXLP_RHR            (*(__I  uint32_t*)0xF8049018U) /**< (RXLP) Receive Holding Register */
#define REG_RXLP_BRGR           (*(__IO uint32_t*)0xF8049020U) /**< (RXLP) Baud Rate Generator Register */
#define REG_RXLP_CMPR           (*(__IO uint32_t*)0xF8049024U) /**< (RXLP) Comparison Register */
#define REG_RXLP_WPMR           (*(__IO uint32_t*)0xF80490E4U) /**< (RXLP) Write Protection Mode Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for RXLP peripheral ========== */
#define RXLP_INSTANCE_ID                         76         

#endif /* _SAMA5D2_RXLP_INSTANCE_ */
