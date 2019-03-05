/**
 * \file
 *
 * \brief Instance description for RTC
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
#ifndef _SAMA5D2_RTC_INSTANCE_H_
#define _SAMA5D2_RTC_INSTANCE_H_

/* ========== Register definition for RTC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_RTC_TSTR0           (0xF8048160) /**< (RTC) TimeStamp Time Register 0 */
#define REG_RTC_TSDR0           (0xF8048164) /**< (RTC) TimeStamp Date Register 0 */
#define REG_RTC_TSSR0           (0xF8048168) /**< (RTC) TimeStamp Source Register 0 */
#define REG_RTC_TSTR1           (0xF804816C) /**< (RTC) TimeStamp Time Register 1 */
#define REG_RTC_TSDR1           (0xF8048170) /**< (RTC) TimeStamp Date Register 1 */
#define REG_RTC_TSSR1           (0xF8048174) /**< (RTC) TimeStamp Source Register 1 */
#define REG_RTC_CR              (0xF80480B0) /**< (RTC) Control Register */
#define REG_RTC_MR              (0xF80480B4) /**< (RTC) Mode Register */
#define REG_RTC_TIMR            (0xF80480B8) /**< (RTC) Time Register */
#define REG_RTC_CALR            (0xF80480BC) /**< (RTC) Calendar Register */
#define REG_RTC_TIMALR          (0xF80480C0) /**< (RTC) Time Alarm Register */
#define REG_RTC_CALALR          (0xF80480C4) /**< (RTC) Calendar Alarm Register */
#define REG_RTC_SR              (0xF80480C8) /**< (RTC) Status Register */
#define REG_RTC_SCCR            (0xF80480CC) /**< (RTC) Status Clear Command Register */
#define REG_RTC_IER             (0xF80480D0) /**< (RTC) Interrupt Enable Register */
#define REG_RTC_IDR             (0xF80480D4) /**< (RTC) Interrupt Disable Register */
#define REG_RTC_IMR             (0xF80480D8) /**< (RTC) Interrupt Mask Register */
#define REG_RTC_VER             (0xF80480DC) /**< (RTC) Valid Entry Register */

#else

#define REG_RTC_TSTR0           (*(__I  uint32_t*)0xF8048160U) /**< (RTC) TimeStamp Time Register 0 */
#define REG_RTC_TSDR0           (*(__I  uint32_t*)0xF8048164U) /**< (RTC) TimeStamp Date Register 0 */
#define REG_RTC_TSSR0           (*(__I  uint32_t*)0xF8048168U) /**< (RTC) TimeStamp Source Register 0 */
#define REG_RTC_TSTR1           (*(__I  uint32_t*)0xF804816CU) /**< (RTC) TimeStamp Time Register 1 */
#define REG_RTC_TSDR1           (*(__I  uint32_t*)0xF8048170U) /**< (RTC) TimeStamp Date Register 1 */
#define REG_RTC_TSSR1           (*(__I  uint32_t*)0xF8048174U) /**< (RTC) TimeStamp Source Register 1 */
#define REG_RTC_CR              (*(__IO uint32_t*)0xF80480B0U) /**< (RTC) Control Register */
#define REG_RTC_MR              (*(__IO uint32_t*)0xF80480B4U) /**< (RTC) Mode Register */
#define REG_RTC_TIMR            (*(__IO uint32_t*)0xF80480B8U) /**< (RTC) Time Register */
#define REG_RTC_CALR            (*(__IO uint32_t*)0xF80480BCU) /**< (RTC) Calendar Register */
#define REG_RTC_TIMALR          (*(__IO uint32_t*)0xF80480C0U) /**< (RTC) Time Alarm Register */
#define REG_RTC_CALALR          (*(__IO uint32_t*)0xF80480C4U) /**< (RTC) Calendar Alarm Register */
#define REG_RTC_SR              (*(__I  uint32_t*)0xF80480C8U) /**< (RTC) Status Register */
#define REG_RTC_SCCR            (*(__O  uint32_t*)0xF80480CCU) /**< (RTC) Status Clear Command Register */
#define REG_RTC_IER             (*(__O  uint32_t*)0xF80480D0U) /**< (RTC) Interrupt Enable Register */
#define REG_RTC_IDR             (*(__O  uint32_t*)0xF80480D4U) /**< (RTC) Interrupt Disable Register */
#define REG_RTC_IMR             (*(__I  uint32_t*)0xF80480D8U) /**< (RTC) Interrupt Mask Register */
#define REG_RTC_VER             (*(__I  uint32_t*)0xF80480DCU) /**< (RTC) Valid Entry Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_RTC_INSTANCE_ */
