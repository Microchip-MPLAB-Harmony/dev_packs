/**
 * \file
 *
 * \brief Instance description for SFRBU
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
#ifndef _SAMA5D2_SFRBU_INSTANCE_H_
#define _SAMA5D2_SFRBU_INSTANCE_H_

/* ========== Register definition for SFRBU peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SFRBU_PSWBUCTRL     (0xFC05C000) /**< (SFRBU) Power Switch BU Control Register */
#define REG_SFRBU_TSRANGECFG    (0xFC05C004) /**< (SFRBU) TS Range Configuration Register */
#define REG_SFRBU_DDRBUMCR      (0xFC05C010) /**< (SFRBU) DDR BU Mode Control Register */
#define REG_SFRBU_RXLPPUCR      (0xFC05C014) /**< (SFRBU) RXLP Pull-Up Control Register */

#else

#define REG_SFRBU_PSWBUCTRL     (*(__IO uint32_t*)0xFC05C000U) /**< (SFRBU) Power Switch BU Control Register */
#define REG_SFRBU_TSRANGECFG    (*(__IO uint32_t*)0xFC05C004U) /**< (SFRBU) TS Range Configuration Register */
#define REG_SFRBU_DDRBUMCR      (*(__IO uint32_t*)0xFC05C010U) /**< (SFRBU) DDR BU Mode Control Register */
#define REG_SFRBU_RXLPPUCR      (*(__IO uint32_t*)0xFC05C014U) /**< (SFRBU) RXLP Pull-Up Control Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SFRBU peripheral ========== */
#define SFRBU_INSTANCE_ID                        77         

#endif /* _SAMA5D2_SFRBU_INSTANCE_ */
