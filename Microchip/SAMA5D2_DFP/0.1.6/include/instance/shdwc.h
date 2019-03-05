/**
 * \file
 *
 * \brief Instance description for SHDWC
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
#ifndef _SAMA5D2_SHDWC_INSTANCE_H_
#define _SAMA5D2_SHDWC_INSTANCE_H_

/* ========== Register definition for SHDWC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SHDWC_SHDW_CR       (0xF8048010) /**< (SHDWC) Shutdown Control Register */
#define REG_SHDWC_SHDW_MR       (0xF8048014) /**< (SHDWC) Shutdown Mode Register */
#define REG_SHDWC_SHDW_SR       (0xF8048018) /**< (SHDWC) Shutdown Status Register */
#define REG_SHDWC_SHDW_WUIR     (0xF804801C) /**< (SHDWC) Shutdown Wake-up Inputs Register */

#else

#define REG_SHDWC_SHDW_CR       (*(__O  uint32_t*)0xF8048010U) /**< (SHDWC) Shutdown Control Register */
#define REG_SHDWC_SHDW_MR       (*(__IO uint32_t*)0xF8048014U) /**< (SHDWC) Shutdown Mode Register */
#define REG_SHDWC_SHDW_SR       (*(__I  uint32_t*)0xF8048018U) /**< (SHDWC) Shutdown Status Register */
#define REG_SHDWC_SHDW_WUIR     (*(__IO uint32_t*)0xF804801CU) /**< (SHDWC) Shutdown Wake-up Inputs Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_SHDWC_INSTANCE_ */
