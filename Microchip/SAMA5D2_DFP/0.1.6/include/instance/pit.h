/**
 * \file
 *
 * \brief Instance description for PIT
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
#ifndef _SAMA5D2_PIT_INSTANCE_H_
#define _SAMA5D2_PIT_INSTANCE_H_

/* ========== Register definition for PIT peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PIT_MR              (0xF8048030) /**< (PIT) Mode Register */
#define REG_PIT_SR              (0xF8048034) /**< (PIT) Status Register */
#define REG_PIT_PIVR            (0xF8048038) /**< (PIT) Periodic Interval Value Register */
#define REG_PIT_PIIR            (0xF804803C) /**< (PIT) Periodic Interval Image Register */

#else

#define REG_PIT_MR              (*(__IO uint32_t*)0xF8048030U) /**< (PIT) Mode Register */
#define REG_PIT_SR              (*(__I  uint32_t*)0xF8048034U) /**< (PIT) Status Register */
#define REG_PIT_PIVR            (*(__I  uint32_t*)0xF8048038U) /**< (PIT) Periodic Interval Value Register */
#define REG_PIT_PIIR            (*(__I  uint32_t*)0xF804803CU) /**< (PIT) Periodic Interval Image Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for PIT peripheral ========== */
#define PIT_INSTANCE_ID                          3          

#endif /* _SAMA5D2_PIT_INSTANCE_ */
