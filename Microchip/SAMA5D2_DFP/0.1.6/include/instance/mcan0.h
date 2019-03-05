/**
 * \file
 *
 * \brief Instance description for MCAN0
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
#ifndef _SAMA5D2_MCAN0_INSTANCE_H_
#define _SAMA5D2_MCAN0_INSTANCE_H_

/* ========== Register definition for MCAN0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_MCAN0_CREL          (0xF8054000) /**< (MCAN0) Core Release Register */
#define REG_MCAN0_ENDN          (0xF8054004) /**< (MCAN0) Endian Register */
#define REG_MCAN0_CUST          (0xF8054008) /**< (MCAN0) Customer Register */
#define REG_MCAN0_DBTP          (0xF805400C) /**< (MCAN0) Data Bit Timing and Prescaler Register */
#define REG_MCAN0_TEST          (0xF8054010) /**< (MCAN0) Test Register */
#define REG_MCAN0_RWD           (0xF8054014) /**< (MCAN0) RAM Watchdog Register */
#define REG_MCAN0_CCCR          (0xF8054018) /**< (MCAN0) CC Control Register */
#define REG_MCAN0_NBTP          (0xF805401C) /**< (MCAN0) Nominal Bit Timing and Prescaler Register */
#define REG_MCAN0_TSCC          (0xF8054020) /**< (MCAN0) Timestamp Counter Configuration Register */
#define REG_MCAN0_TSCV          (0xF8054024) /**< (MCAN0) Timestamp Counter Value Register */
#define REG_MCAN0_TOCC          (0xF8054028) /**< (MCAN0) Timeout Counter Configuration Register */
#define REG_MCAN0_TOCV          (0xF805402C) /**< (MCAN0) Timeout Counter Value Register */
#define REG_MCAN0_ECR           (0xF8054040) /**< (MCAN0) Error Counter Register */
#define REG_MCAN0_PSR           (0xF8054044) /**< (MCAN0) Protocol Status Register */
#define REG_MCAN0_TDCR          (0xF8054048) /**< (MCAN0) Transmit Delay Compensation Register */
#define REG_MCAN0_IR            (0xF8054050) /**< (MCAN0) Interrupt Register */
#define REG_MCAN0_IE            (0xF8054054) /**< (MCAN0) Interrupt Enable Register */
#define REG_MCAN0_ILS           (0xF8054058) /**< (MCAN0) Interrupt Line Select Register */
#define REG_MCAN0_ILE           (0xF805405C) /**< (MCAN0) Interrupt Line Enable Register */
#define REG_MCAN0_GFC           (0xF8054080) /**< (MCAN0) Global Filter Configuration Register */
#define REG_MCAN0_SIDFC         (0xF8054084) /**< (MCAN0) Standard ID Filter Configuration Register */
#define REG_MCAN0_XIDFC         (0xF8054088) /**< (MCAN0) Extended ID Filter Configuration Register */
#define REG_MCAN0_XIDAM         (0xF8054090) /**< (MCAN0) Extended ID AND Mask Register */
#define REG_MCAN0_HPMS          (0xF8054094) /**< (MCAN0) High Priority Message Status Register */
#define REG_MCAN0_NDAT1         (0xF8054098) /**< (MCAN0) New Data 1 Register */
#define REG_MCAN0_NDAT2         (0xF805409C) /**< (MCAN0) New Data 2 Register */
#define REG_MCAN0_RXF0C         (0xF80540A0) /**< (MCAN0) Receive FIFO 0 Configuration Register */
#define REG_MCAN0_RXF0S         (0xF80540A4) /**< (MCAN0) Receive FIFO 0 Status Register */
#define REG_MCAN0_RXF0A         (0xF80540A8) /**< (MCAN0) Receive FIFO 0 Acknowledge Register */
#define REG_MCAN0_RXBC          (0xF80540AC) /**< (MCAN0) Receive Rx Buffer Configuration Register */
#define REG_MCAN0_RXF1C         (0xF80540B0) /**< (MCAN0) Receive FIFO 1 Configuration Register */
#define REG_MCAN0_RXF1S         (0xF80540B4) /**< (MCAN0) Receive FIFO 1 Status Register */
#define REG_MCAN0_RXF1A         (0xF80540B8) /**< (MCAN0) Receive FIFO 1 Acknowledge Register */
#define REG_MCAN0_RXESC         (0xF80540BC) /**< (MCAN0) Receive Buffer / FIFO Element Size Configuration Register */
#define REG_MCAN0_TXBC          (0xF80540C0) /**< (MCAN0) Transmit Buffer Configuration Register */
#define REG_MCAN0_TXFQS         (0xF80540C4) /**< (MCAN0) Transmit FIFO/Queue Status Register */
#define REG_MCAN0_TXESC         (0xF80540C8) /**< (MCAN0) Transmit Buffer Element Size Configuration Register */
#define REG_MCAN0_TXBRP         (0xF80540CC) /**< (MCAN0) Transmit Buffer Request Pending Register */
#define REG_MCAN0_TXBAR         (0xF80540D0) /**< (MCAN0) Transmit Buffer Add Request Register */
#define REG_MCAN0_TXBCR         (0xF80540D4) /**< (MCAN0) Transmit Buffer Cancellation Request Register */
#define REG_MCAN0_TXBTO         (0xF80540D8) /**< (MCAN0) Transmit Buffer Transmission Occurred Register */
#define REG_MCAN0_TXBCF         (0xF80540DC) /**< (MCAN0) Transmit Buffer Cancellation Finished Register */
#define REG_MCAN0_TXBTIE        (0xF80540E0) /**< (MCAN0) Transmit Buffer Transmission Interrupt Enable Register */
#define REG_MCAN0_TXBCIE        (0xF80540E4) /**< (MCAN0) Transmit Buffer Cancellation Finished Interrupt Enable Register */
#define REG_MCAN0_TXEFC         (0xF80540F0) /**< (MCAN0) Transmit Event FIFO Configuration Register */
#define REG_MCAN0_TXEFS         (0xF80540F4) /**< (MCAN0) Transmit Event FIFO Status Register */
#define REG_MCAN0_TXEFA         (0xF80540F8) /**< (MCAN0) Transmit Event FIFO Acknowledge Register */

#else

#define REG_MCAN0_CREL          (*(__I  uint32_t*)0xF8054000U) /**< (MCAN0) Core Release Register */
#define REG_MCAN0_ENDN          (*(__I  uint32_t*)0xF8054004U) /**< (MCAN0) Endian Register */
#define REG_MCAN0_CUST          (*(__IO uint32_t*)0xF8054008U) /**< (MCAN0) Customer Register */
#define REG_MCAN0_DBTP          (*(__IO uint32_t*)0xF805400CU) /**< (MCAN0) Data Bit Timing and Prescaler Register */
#define REG_MCAN0_TEST          (*(__IO uint32_t*)0xF8054010U) /**< (MCAN0) Test Register */
#define REG_MCAN0_RWD           (*(__IO uint32_t*)0xF8054014U) /**< (MCAN0) RAM Watchdog Register */
#define REG_MCAN0_CCCR          (*(__IO uint32_t*)0xF8054018U) /**< (MCAN0) CC Control Register */
#define REG_MCAN0_NBTP          (*(__IO uint32_t*)0xF805401CU) /**< (MCAN0) Nominal Bit Timing and Prescaler Register */
#define REG_MCAN0_TSCC          (*(__IO uint32_t*)0xF8054020U) /**< (MCAN0) Timestamp Counter Configuration Register */
#define REG_MCAN0_TSCV          (*(__IO uint32_t*)0xF8054024U) /**< (MCAN0) Timestamp Counter Value Register */
#define REG_MCAN0_TOCC          (*(__IO uint32_t*)0xF8054028U) /**< (MCAN0) Timeout Counter Configuration Register */
#define REG_MCAN0_TOCV          (*(__IO uint32_t*)0xF805402CU) /**< (MCAN0) Timeout Counter Value Register */
#define REG_MCAN0_ECR           (*(__I  uint32_t*)0xF8054040U) /**< (MCAN0) Error Counter Register */
#define REG_MCAN0_PSR           (*(__I  uint32_t*)0xF8054044U) /**< (MCAN0) Protocol Status Register */
#define REG_MCAN0_TDCR          (*(__IO uint32_t*)0xF8054048U) /**< (MCAN0) Transmit Delay Compensation Register */
#define REG_MCAN0_IR            (*(__IO uint32_t*)0xF8054050U) /**< (MCAN0) Interrupt Register */
#define REG_MCAN0_IE            (*(__IO uint32_t*)0xF8054054U) /**< (MCAN0) Interrupt Enable Register */
#define REG_MCAN0_ILS           (*(__IO uint32_t*)0xF8054058U) /**< (MCAN0) Interrupt Line Select Register */
#define REG_MCAN0_ILE           (*(__IO uint32_t*)0xF805405CU) /**< (MCAN0) Interrupt Line Enable Register */
#define REG_MCAN0_GFC           (*(__IO uint32_t*)0xF8054080U) /**< (MCAN0) Global Filter Configuration Register */
#define REG_MCAN0_SIDFC         (*(__IO uint32_t*)0xF8054084U) /**< (MCAN0) Standard ID Filter Configuration Register */
#define REG_MCAN0_XIDFC         (*(__IO uint32_t*)0xF8054088U) /**< (MCAN0) Extended ID Filter Configuration Register */
#define REG_MCAN0_XIDAM         (*(__IO uint32_t*)0xF8054090U) /**< (MCAN0) Extended ID AND Mask Register */
#define REG_MCAN0_HPMS          (*(__I  uint32_t*)0xF8054094U) /**< (MCAN0) High Priority Message Status Register */
#define REG_MCAN0_NDAT1         (*(__IO uint32_t*)0xF8054098U) /**< (MCAN0) New Data 1 Register */
#define REG_MCAN0_NDAT2         (*(__IO uint32_t*)0xF805409CU) /**< (MCAN0) New Data 2 Register */
#define REG_MCAN0_RXF0C         (*(__IO uint32_t*)0xF80540A0U) /**< (MCAN0) Receive FIFO 0 Configuration Register */
#define REG_MCAN0_RXF0S         (*(__I  uint32_t*)0xF80540A4U) /**< (MCAN0) Receive FIFO 0 Status Register */
#define REG_MCAN0_RXF0A         (*(__IO uint32_t*)0xF80540A8U) /**< (MCAN0) Receive FIFO 0 Acknowledge Register */
#define REG_MCAN0_RXBC          (*(__IO uint32_t*)0xF80540ACU) /**< (MCAN0) Receive Rx Buffer Configuration Register */
#define REG_MCAN0_RXF1C         (*(__IO uint32_t*)0xF80540B0U) /**< (MCAN0) Receive FIFO 1 Configuration Register */
#define REG_MCAN0_RXF1S         (*(__I  uint32_t*)0xF80540B4U) /**< (MCAN0) Receive FIFO 1 Status Register */
#define REG_MCAN0_RXF1A         (*(__IO uint32_t*)0xF80540B8U) /**< (MCAN0) Receive FIFO 1 Acknowledge Register */
#define REG_MCAN0_RXESC         (*(__IO uint32_t*)0xF80540BCU) /**< (MCAN0) Receive Buffer / FIFO Element Size Configuration Register */
#define REG_MCAN0_TXBC          (*(__IO uint32_t*)0xF80540C0U) /**< (MCAN0) Transmit Buffer Configuration Register */
#define REG_MCAN0_TXFQS         (*(__I  uint32_t*)0xF80540C4U) /**< (MCAN0) Transmit FIFO/Queue Status Register */
#define REG_MCAN0_TXESC         (*(__IO uint32_t*)0xF80540C8U) /**< (MCAN0) Transmit Buffer Element Size Configuration Register */
#define REG_MCAN0_TXBRP         (*(__I  uint32_t*)0xF80540CCU) /**< (MCAN0) Transmit Buffer Request Pending Register */
#define REG_MCAN0_TXBAR         (*(__IO uint32_t*)0xF80540D0U) /**< (MCAN0) Transmit Buffer Add Request Register */
#define REG_MCAN0_TXBCR         (*(__IO uint32_t*)0xF80540D4U) /**< (MCAN0) Transmit Buffer Cancellation Request Register */
#define REG_MCAN0_TXBTO         (*(__I  uint32_t*)0xF80540D8U) /**< (MCAN0) Transmit Buffer Transmission Occurred Register */
#define REG_MCAN0_TXBCF         (*(__I  uint32_t*)0xF80540DCU) /**< (MCAN0) Transmit Buffer Cancellation Finished Register */
#define REG_MCAN0_TXBTIE        (*(__IO uint32_t*)0xF80540E0U) /**< (MCAN0) Transmit Buffer Transmission Interrupt Enable Register */
#define REG_MCAN0_TXBCIE        (*(__IO uint32_t*)0xF80540E4U) /**< (MCAN0) Transmit Buffer Cancellation Finished Interrupt Enable Register */
#define REG_MCAN0_TXEFC         (*(__IO uint32_t*)0xF80540F0U) /**< (MCAN0) Transmit Event FIFO Configuration Register */
#define REG_MCAN0_TXEFS         (*(__I  uint32_t*)0xF80540F4U) /**< (MCAN0) Transmit Event FIFO Status Register */
#define REG_MCAN0_TXEFA         (*(__IO uint32_t*)0xF80540F8U) /**< (MCAN0) Transmit Event FIFO Acknowledge Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for MCAN0 peripheral ========== */
#define MCAN0_INSTANCE_ID                        56         
#define MCAN0_CLOCK_ID                           56         
#define MCAN0_ID_MCAN0_INT0                      56         
#define MCAN0_ID_MCAN0_INT1                      64         

#endif /* _SAMA5D2_MCAN0_INSTANCE_ */
