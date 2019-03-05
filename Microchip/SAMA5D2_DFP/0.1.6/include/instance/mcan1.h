/**
 * \file
 *
 * \brief Instance description for MCAN1
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
#ifndef _SAMA5D2_MCAN1_INSTANCE_H_
#define _SAMA5D2_MCAN1_INSTANCE_H_

/* ========== Register definition for MCAN1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_MCAN1_CREL          (0xFC050000) /**< (MCAN1) Core Release Register */
#define REG_MCAN1_ENDN          (0xFC050004) /**< (MCAN1) Endian Register */
#define REG_MCAN1_CUST          (0xFC050008) /**< (MCAN1) Customer Register */
#define REG_MCAN1_DBTP          (0xFC05000C) /**< (MCAN1) Data Bit Timing and Prescaler Register */
#define REG_MCAN1_TEST          (0xFC050010) /**< (MCAN1) Test Register */
#define REG_MCAN1_RWD           (0xFC050014) /**< (MCAN1) RAM Watchdog Register */
#define REG_MCAN1_CCCR          (0xFC050018) /**< (MCAN1) CC Control Register */
#define REG_MCAN1_NBTP          (0xFC05001C) /**< (MCAN1) Nominal Bit Timing and Prescaler Register */
#define REG_MCAN1_TSCC          (0xFC050020) /**< (MCAN1) Timestamp Counter Configuration Register */
#define REG_MCAN1_TSCV          (0xFC050024) /**< (MCAN1) Timestamp Counter Value Register */
#define REG_MCAN1_TOCC          (0xFC050028) /**< (MCAN1) Timeout Counter Configuration Register */
#define REG_MCAN1_TOCV          (0xFC05002C) /**< (MCAN1) Timeout Counter Value Register */
#define REG_MCAN1_ECR           (0xFC050040) /**< (MCAN1) Error Counter Register */
#define REG_MCAN1_PSR           (0xFC050044) /**< (MCAN1) Protocol Status Register */
#define REG_MCAN1_TDCR          (0xFC050048) /**< (MCAN1) Transmit Delay Compensation Register */
#define REG_MCAN1_IR            (0xFC050050) /**< (MCAN1) Interrupt Register */
#define REG_MCAN1_IE            (0xFC050054) /**< (MCAN1) Interrupt Enable Register */
#define REG_MCAN1_ILS           (0xFC050058) /**< (MCAN1) Interrupt Line Select Register */
#define REG_MCAN1_ILE           (0xFC05005C) /**< (MCAN1) Interrupt Line Enable Register */
#define REG_MCAN1_GFC           (0xFC050080) /**< (MCAN1) Global Filter Configuration Register */
#define REG_MCAN1_SIDFC         (0xFC050084) /**< (MCAN1) Standard ID Filter Configuration Register */
#define REG_MCAN1_XIDFC         (0xFC050088) /**< (MCAN1) Extended ID Filter Configuration Register */
#define REG_MCAN1_XIDAM         (0xFC050090) /**< (MCAN1) Extended ID AND Mask Register */
#define REG_MCAN1_HPMS          (0xFC050094) /**< (MCAN1) High Priority Message Status Register */
#define REG_MCAN1_NDAT1         (0xFC050098) /**< (MCAN1) New Data 1 Register */
#define REG_MCAN1_NDAT2         (0xFC05009C) /**< (MCAN1) New Data 2 Register */
#define REG_MCAN1_RXF0C         (0xFC0500A0) /**< (MCAN1) Receive FIFO 0 Configuration Register */
#define REG_MCAN1_RXF0S         (0xFC0500A4) /**< (MCAN1) Receive FIFO 0 Status Register */
#define REG_MCAN1_RXF0A         (0xFC0500A8) /**< (MCAN1) Receive FIFO 0 Acknowledge Register */
#define REG_MCAN1_RXBC          (0xFC0500AC) /**< (MCAN1) Receive Rx Buffer Configuration Register */
#define REG_MCAN1_RXF1C         (0xFC0500B0) /**< (MCAN1) Receive FIFO 1 Configuration Register */
#define REG_MCAN1_RXF1S         (0xFC0500B4) /**< (MCAN1) Receive FIFO 1 Status Register */
#define REG_MCAN1_RXF1A         (0xFC0500B8) /**< (MCAN1) Receive FIFO 1 Acknowledge Register */
#define REG_MCAN1_RXESC         (0xFC0500BC) /**< (MCAN1) Receive Buffer / FIFO Element Size Configuration Register */
#define REG_MCAN1_TXBC          (0xFC0500C0) /**< (MCAN1) Transmit Buffer Configuration Register */
#define REG_MCAN1_TXFQS         (0xFC0500C4) /**< (MCAN1) Transmit FIFO/Queue Status Register */
#define REG_MCAN1_TXESC         (0xFC0500C8) /**< (MCAN1) Transmit Buffer Element Size Configuration Register */
#define REG_MCAN1_TXBRP         (0xFC0500CC) /**< (MCAN1) Transmit Buffer Request Pending Register */
#define REG_MCAN1_TXBAR         (0xFC0500D0) /**< (MCAN1) Transmit Buffer Add Request Register */
#define REG_MCAN1_TXBCR         (0xFC0500D4) /**< (MCAN1) Transmit Buffer Cancellation Request Register */
#define REG_MCAN1_TXBTO         (0xFC0500D8) /**< (MCAN1) Transmit Buffer Transmission Occurred Register */
#define REG_MCAN1_TXBCF         (0xFC0500DC) /**< (MCAN1) Transmit Buffer Cancellation Finished Register */
#define REG_MCAN1_TXBTIE        (0xFC0500E0) /**< (MCAN1) Transmit Buffer Transmission Interrupt Enable Register */
#define REG_MCAN1_TXBCIE        (0xFC0500E4) /**< (MCAN1) Transmit Buffer Cancellation Finished Interrupt Enable Register */
#define REG_MCAN1_TXEFC         (0xFC0500F0) /**< (MCAN1) Transmit Event FIFO Configuration Register */
#define REG_MCAN1_TXEFS         (0xFC0500F4) /**< (MCAN1) Transmit Event FIFO Status Register */
#define REG_MCAN1_TXEFA         (0xFC0500F8) /**< (MCAN1) Transmit Event FIFO Acknowledge Register */

#else

#define REG_MCAN1_CREL          (*(__I  uint32_t*)0xFC050000U) /**< (MCAN1) Core Release Register */
#define REG_MCAN1_ENDN          (*(__I  uint32_t*)0xFC050004U) /**< (MCAN1) Endian Register */
#define REG_MCAN1_CUST          (*(__IO uint32_t*)0xFC050008U) /**< (MCAN1) Customer Register */
#define REG_MCAN1_DBTP          (*(__IO uint32_t*)0xFC05000CU) /**< (MCAN1) Data Bit Timing and Prescaler Register */
#define REG_MCAN1_TEST          (*(__IO uint32_t*)0xFC050010U) /**< (MCAN1) Test Register */
#define REG_MCAN1_RWD           (*(__IO uint32_t*)0xFC050014U) /**< (MCAN1) RAM Watchdog Register */
#define REG_MCAN1_CCCR          (*(__IO uint32_t*)0xFC050018U) /**< (MCAN1) CC Control Register */
#define REG_MCAN1_NBTP          (*(__IO uint32_t*)0xFC05001CU) /**< (MCAN1) Nominal Bit Timing and Prescaler Register */
#define REG_MCAN1_TSCC          (*(__IO uint32_t*)0xFC050020U) /**< (MCAN1) Timestamp Counter Configuration Register */
#define REG_MCAN1_TSCV          (*(__IO uint32_t*)0xFC050024U) /**< (MCAN1) Timestamp Counter Value Register */
#define REG_MCAN1_TOCC          (*(__IO uint32_t*)0xFC050028U) /**< (MCAN1) Timeout Counter Configuration Register */
#define REG_MCAN1_TOCV          (*(__IO uint32_t*)0xFC05002CU) /**< (MCAN1) Timeout Counter Value Register */
#define REG_MCAN1_ECR           (*(__I  uint32_t*)0xFC050040U) /**< (MCAN1) Error Counter Register */
#define REG_MCAN1_PSR           (*(__I  uint32_t*)0xFC050044U) /**< (MCAN1) Protocol Status Register */
#define REG_MCAN1_TDCR          (*(__IO uint32_t*)0xFC050048U) /**< (MCAN1) Transmit Delay Compensation Register */
#define REG_MCAN1_IR            (*(__IO uint32_t*)0xFC050050U) /**< (MCAN1) Interrupt Register */
#define REG_MCAN1_IE            (*(__IO uint32_t*)0xFC050054U) /**< (MCAN1) Interrupt Enable Register */
#define REG_MCAN1_ILS           (*(__IO uint32_t*)0xFC050058U) /**< (MCAN1) Interrupt Line Select Register */
#define REG_MCAN1_ILE           (*(__IO uint32_t*)0xFC05005CU) /**< (MCAN1) Interrupt Line Enable Register */
#define REG_MCAN1_GFC           (*(__IO uint32_t*)0xFC050080U) /**< (MCAN1) Global Filter Configuration Register */
#define REG_MCAN1_SIDFC         (*(__IO uint32_t*)0xFC050084U) /**< (MCAN1) Standard ID Filter Configuration Register */
#define REG_MCAN1_XIDFC         (*(__IO uint32_t*)0xFC050088U) /**< (MCAN1) Extended ID Filter Configuration Register */
#define REG_MCAN1_XIDAM         (*(__IO uint32_t*)0xFC050090U) /**< (MCAN1) Extended ID AND Mask Register */
#define REG_MCAN1_HPMS          (*(__I  uint32_t*)0xFC050094U) /**< (MCAN1) High Priority Message Status Register */
#define REG_MCAN1_NDAT1         (*(__IO uint32_t*)0xFC050098U) /**< (MCAN1) New Data 1 Register */
#define REG_MCAN1_NDAT2         (*(__IO uint32_t*)0xFC05009CU) /**< (MCAN1) New Data 2 Register */
#define REG_MCAN1_RXF0C         (*(__IO uint32_t*)0xFC0500A0U) /**< (MCAN1) Receive FIFO 0 Configuration Register */
#define REG_MCAN1_RXF0S         (*(__I  uint32_t*)0xFC0500A4U) /**< (MCAN1) Receive FIFO 0 Status Register */
#define REG_MCAN1_RXF0A         (*(__IO uint32_t*)0xFC0500A8U) /**< (MCAN1) Receive FIFO 0 Acknowledge Register */
#define REG_MCAN1_RXBC          (*(__IO uint32_t*)0xFC0500ACU) /**< (MCAN1) Receive Rx Buffer Configuration Register */
#define REG_MCAN1_RXF1C         (*(__IO uint32_t*)0xFC0500B0U) /**< (MCAN1) Receive FIFO 1 Configuration Register */
#define REG_MCAN1_RXF1S         (*(__I  uint32_t*)0xFC0500B4U) /**< (MCAN1) Receive FIFO 1 Status Register */
#define REG_MCAN1_RXF1A         (*(__IO uint32_t*)0xFC0500B8U) /**< (MCAN1) Receive FIFO 1 Acknowledge Register */
#define REG_MCAN1_RXESC         (*(__IO uint32_t*)0xFC0500BCU) /**< (MCAN1) Receive Buffer / FIFO Element Size Configuration Register */
#define REG_MCAN1_TXBC          (*(__IO uint32_t*)0xFC0500C0U) /**< (MCAN1) Transmit Buffer Configuration Register */
#define REG_MCAN1_TXFQS         (*(__I  uint32_t*)0xFC0500C4U) /**< (MCAN1) Transmit FIFO/Queue Status Register */
#define REG_MCAN1_TXESC         (*(__IO uint32_t*)0xFC0500C8U) /**< (MCAN1) Transmit Buffer Element Size Configuration Register */
#define REG_MCAN1_TXBRP         (*(__I  uint32_t*)0xFC0500CCU) /**< (MCAN1) Transmit Buffer Request Pending Register */
#define REG_MCAN1_TXBAR         (*(__IO uint32_t*)0xFC0500D0U) /**< (MCAN1) Transmit Buffer Add Request Register */
#define REG_MCAN1_TXBCR         (*(__IO uint32_t*)0xFC0500D4U) /**< (MCAN1) Transmit Buffer Cancellation Request Register */
#define REG_MCAN1_TXBTO         (*(__I  uint32_t*)0xFC0500D8U) /**< (MCAN1) Transmit Buffer Transmission Occurred Register */
#define REG_MCAN1_TXBCF         (*(__I  uint32_t*)0xFC0500DCU) /**< (MCAN1) Transmit Buffer Cancellation Finished Register */
#define REG_MCAN1_TXBTIE        (*(__IO uint32_t*)0xFC0500E0U) /**< (MCAN1) Transmit Buffer Transmission Interrupt Enable Register */
#define REG_MCAN1_TXBCIE        (*(__IO uint32_t*)0xFC0500E4U) /**< (MCAN1) Transmit Buffer Cancellation Finished Interrupt Enable Register */
#define REG_MCAN1_TXEFC         (*(__IO uint32_t*)0xFC0500F0U) /**< (MCAN1) Transmit Event FIFO Configuration Register */
#define REG_MCAN1_TXEFS         (*(__I  uint32_t*)0xFC0500F4U) /**< (MCAN1) Transmit Event FIFO Status Register */
#define REG_MCAN1_TXEFA         (*(__IO uint32_t*)0xFC0500F8U) /**< (MCAN1) Transmit Event FIFO Acknowledge Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for MCAN1 peripheral ========== */
#define MCAN1_INSTANCE_ID                        57         
#define MCAN1_CLOCK_ID                           57         
#define MCAN1_ID_MCAN1_INT0                      57         

#endif /* _SAMA5D2_MCAN1_INSTANCE_ */
