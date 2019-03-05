/**
 * \file
 *
 * \brief Instance description for FLEXCOM2
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
#ifndef _SAMA5D2_FLEXCOM2_INSTANCE_H_
#define _SAMA5D2_FLEXCOM2_INSTANCE_H_

/* ========== Register definition for FLEXCOM2 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_FLEXCOM2_FLEX_MR    (0xFC010000) /**< (FLEXCOM2) FLEXCOM Mode Register */
#define REG_FLEXCOM2_FLEX_RHR   (0xFC010010) /**< (FLEXCOM2) FLEXCOM Receive Holding Register */
#define REG_FLEXCOM2_FLEX_THR   (0xFC010020) /**< (FLEXCOM2) FLEXCOM Transmit Holding Register */
#define REG_FLEXCOM2_FLEX_US_CR (0xFC010200) /**< (FLEXCOM2) USART Control Register */
#define REG_FLEXCOM2_FLEX_US_MR (0xFC010204) /**< (FLEXCOM2) USART Mode Register */
#define REG_FLEXCOM2_FLEX_US_IER (0xFC010208) /**< (FLEXCOM2) USART Interrupt Enable Register */
#define REG_FLEXCOM2_FLEX_US_IDR (0xFC01020C) /**< (FLEXCOM2) USART Interrupt Disable Register */
#define REG_FLEXCOM2_FLEX_US_IMR (0xFC010210) /**< (FLEXCOM2) USART Interrupt Mask Register */
#define REG_FLEXCOM2_FLEX_US_CSR (0xFC010214) /**< (FLEXCOM2) USART Channel Status Register */
#define REG_FLEXCOM2_FLEX_US_RHR (0xFC010218) /**< (FLEXCOM2) USART Receive Holding Register */
#define REG_FLEXCOM2_FLEX_US_THR (0xFC01021C) /**< (FLEXCOM2) USART Transmit Holding Register */
#define REG_FLEXCOM2_FLEX_US_BRGR (0xFC010220) /**< (FLEXCOM2) USART Baud Rate Generator Register */
#define REG_FLEXCOM2_FLEX_US_RTOR (0xFC010224) /**< (FLEXCOM2) USART Receiver Timeout Register */
#define REG_FLEXCOM2_FLEX_US_TTGR (0xFC010228) /**< (FLEXCOM2) USART Transmitter Timeguard Register */
#define REG_FLEXCOM2_FLEX_US_FIDI (0xFC010240) /**< (FLEXCOM2) USART FI DI Ratio Register */
#define REG_FLEXCOM2_FLEX_US_NER (0xFC010244) /**< (FLEXCOM2) USART Number of Errors Register */
#define REG_FLEXCOM2_FLEX_US_IF (0xFC01024C) /**< (FLEXCOM2) USART IrDA Filter Register */
#define REG_FLEXCOM2_FLEX_US_MAN (0xFC010250) /**< (FLEXCOM2) USART Manchester Configuration Register */
#define REG_FLEXCOM2_FLEX_US_LINMR (0xFC010254) /**< (FLEXCOM2) USART LIN Mode Register */
#define REG_FLEXCOM2_FLEX_US_LINIR (0xFC010258) /**< (FLEXCOM2) USART LIN Identifier Register */
#define REG_FLEXCOM2_FLEX_US_LINBRR (0xFC01025C) /**< (FLEXCOM2) USART LIN Baud Rate Register */
#define REG_FLEXCOM2_FLEX_US_CMPR (0xFC010290) /**< (FLEXCOM2) USART Comparison Register */
#define REG_FLEXCOM2_FLEX_US_FMR (0xFC0102A0) /**< (FLEXCOM2) USART FIFO Mode Register */
#define REG_FLEXCOM2_FLEX_US_FLR (0xFC0102A4) /**< (FLEXCOM2) USART FIFO Level Register */
#define REG_FLEXCOM2_FLEX_US_FIER (0xFC0102A8) /**< (FLEXCOM2) USART FIFO Interrupt Enable Register */
#define REG_FLEXCOM2_FLEX_US_FIDR (0xFC0102AC) /**< (FLEXCOM2) USART FIFO Interrupt Disable Register */
#define REG_FLEXCOM2_FLEX_US_FIMR (0xFC0102B0) /**< (FLEXCOM2) USART FIFO Interrupt Mask Register */
#define REG_FLEXCOM2_FLEX_US_FESR (0xFC0102B4) /**< (FLEXCOM2) USART FIFO Event Status Register */
#define REG_FLEXCOM2_FLEX_US_WPMR (0xFC0102E4) /**< (FLEXCOM2) USART Write Protection Mode Register */
#define REG_FLEXCOM2_FLEX_US_WPSR (0xFC0102E8) /**< (FLEXCOM2) USART Write Protection Status Register */
#define REG_FLEXCOM2_FLEX_SPI_CR (0xFC010400) /**< (FLEXCOM2) SPI Control Register */
#define REG_FLEXCOM2_FLEX_SPI_MR (0xFC010404) /**< (FLEXCOM2) SPI Mode Register */
#define REG_FLEXCOM2_FLEX_SPI_RDR (0xFC010408) /**< (FLEXCOM2) SPI Receive Data Register */
#define REG_FLEXCOM2_FLEX_SPI_TDR (0xFC01040C) /**< (FLEXCOM2) SPI Transmit Data Register */
#define REG_FLEXCOM2_FLEX_SPI_SR (0xFC010410) /**< (FLEXCOM2) SPI Status Register */
#define REG_FLEXCOM2_FLEX_SPI_IER (0xFC010414) /**< (FLEXCOM2) SPI Interrupt Enable Register */
#define REG_FLEXCOM2_FLEX_SPI_IDR (0xFC010418) /**< (FLEXCOM2) SPI Interrupt Disable Register */
#define REG_FLEXCOM2_FLEX_SPI_IMR (0xFC01041C) /**< (FLEXCOM2) SPI Interrupt Mask Register */
#define REG_FLEXCOM2_FLEX_SPI_CSR (0xFC010430) /**< (FLEXCOM2) SPI Chip Select Register */
#define REG_FLEXCOM2_FLEX_SPI_CSR0 (0xFC010430) /**< (FLEXCOM2) SPI Chip Select Register 0 */
#define REG_FLEXCOM2_FLEX_SPI_CSR1 (0xFC010434) /**< (FLEXCOM2) SPI Chip Select Register 1 */
#define REG_FLEXCOM2_FLEX_SPI_FMR (0xFC010440) /**< (FLEXCOM2) SPI FIFO Mode Register */
#define REG_FLEXCOM2_FLEX_SPI_FLR (0xFC010444) /**< (FLEXCOM2) SPI FIFO Level Register */
#define REG_FLEXCOM2_FLEX_SPI_CMPR (0xFC010448) /**< (FLEXCOM2) SPI Comparison Register */
#define REG_FLEXCOM2_FLEX_SPI_WPMR (0xFC0104E4) /**< (FLEXCOM2) SPI Write Protection Mode Register */
#define REG_FLEXCOM2_FLEX_SPI_WPSR (0xFC0104E8) /**< (FLEXCOM2) SPI Write Protection Status Register */
#define REG_FLEXCOM2_FLEX_TWI_CR (0xFC010600) /**< (FLEXCOM2) TWI Control Register */
#define REG_FLEXCOM2_FLEX_TWI_MMR (0xFC010604) /**< (FLEXCOM2) TWI Master Mode Register */
#define REG_FLEXCOM2_FLEX_TWI_SMR (0xFC010608) /**< (FLEXCOM2) TWI Slave Mode Register */
#define REG_FLEXCOM2_FLEX_TWI_IADR (0xFC01060C) /**< (FLEXCOM2) TWI Internal Address Register */
#define REG_FLEXCOM2_FLEX_TWI_CWGR (0xFC010610) /**< (FLEXCOM2) TWI Clock Waveform Generator Register */
#define REG_FLEXCOM2_FLEX_TWI_SR (0xFC010620) /**< (FLEXCOM2) TWI Status Register */
#define REG_FLEXCOM2_FLEX_TWI_IER (0xFC010624) /**< (FLEXCOM2) TWI Interrupt Enable Register */
#define REG_FLEXCOM2_FLEX_TWI_IDR (0xFC010628) /**< (FLEXCOM2) TWI Interrupt Disable Register */
#define REG_FLEXCOM2_FLEX_TWI_IMR (0xFC01062C) /**< (FLEXCOM2) TWI Interrupt Mask Register */
#define REG_FLEXCOM2_FLEX_TWI_RHR (0xFC010630) /**< (FLEXCOM2) TWI Receive Holding Register */
#define REG_FLEXCOM2_FLEX_TWI_THR (0xFC010634) /**< (FLEXCOM2) TWI Transmit Holding Register */
#define REG_FLEXCOM2_FLEX_TWI_SMBTR (0xFC010638) /**< (FLEXCOM2) TWI SMBus Timing Register */
#define REG_FLEXCOM2_FLEX_TWI_ACR (0xFC010640) /**< (FLEXCOM2) TWI Alternative Command Register */
#define REG_FLEXCOM2_FLEX_TWI_FILTR (0xFC010644) /**< (FLEXCOM2) TWI Filter Register */
#define REG_FLEXCOM2_FLEX_TWI_SWMR (0xFC01064C) /**< (FLEXCOM2) TWI SleepWalking Matching Register */
#define REG_FLEXCOM2_FLEX_TWI_FMR (0xFC010650) /**< (FLEXCOM2) TWI FIFO Mode Register */
#define REG_FLEXCOM2_FLEX_TWI_FLR (0xFC010654) /**< (FLEXCOM2) TWI FIFO Level Register */
#define REG_FLEXCOM2_FLEX_TWI_FSR (0xFC010660) /**< (FLEXCOM2) TWI FIFO Status Register */
#define REG_FLEXCOM2_FLEX_TWI_FIER (0xFC010664) /**< (FLEXCOM2) TWI FIFO Interrupt Enable Register */
#define REG_FLEXCOM2_FLEX_TWI_FIDR (0xFC010668) /**< (FLEXCOM2) TWI FIFO Interrupt Disable Register */
#define REG_FLEXCOM2_FLEX_TWI_FIMR (0xFC01066C) /**< (FLEXCOM2) TWI FIFO Interrupt Mask Register */
#define REG_FLEXCOM2_FLEX_TWI_DR (0xFC0106D0) /**< (FLEXCOM2) TWI Debug Register */
#define REG_FLEXCOM2_FLEX_TWI_WPMR (0xFC0106E4) /**< (FLEXCOM2) TWI Write Protection Mode Register */
#define REG_FLEXCOM2_FLEX_TWI_WPSR (0xFC0106E8) /**< (FLEXCOM2) TWI Write Protection Status Register */

#else

#define REG_FLEXCOM2_FLEX_MR    (*(__IO uint32_t*)0xFC010000U) /**< (FLEXCOM2) FLEXCOM Mode Register */
#define REG_FLEXCOM2_FLEX_RHR   (*(__I  uint32_t*)0xFC010010U) /**< (FLEXCOM2) FLEXCOM Receive Holding Register */
#define REG_FLEXCOM2_FLEX_THR   (*(__IO uint32_t*)0xFC010020U) /**< (FLEXCOM2) FLEXCOM Transmit Holding Register */
#define REG_FLEXCOM2_FLEX_US_CR (*(__O  uint32_t*)0xFC010200U) /**< (FLEXCOM2) USART Control Register */
#define REG_FLEXCOM2_FLEX_US_MR (*(__IO uint32_t*)0xFC010204U) /**< (FLEXCOM2) USART Mode Register */
#define REG_FLEXCOM2_FLEX_US_IER (*(__O  uint32_t*)0xFC010208U) /**< (FLEXCOM2) USART Interrupt Enable Register */
#define REG_FLEXCOM2_FLEX_US_IDR (*(__O  uint32_t*)0xFC01020CU) /**< (FLEXCOM2) USART Interrupt Disable Register */
#define REG_FLEXCOM2_FLEX_US_IMR (*(__I  uint32_t*)0xFC010210U) /**< (FLEXCOM2) USART Interrupt Mask Register */
#define REG_FLEXCOM2_FLEX_US_CSR (*(__I  uint32_t*)0xFC010214U) /**< (FLEXCOM2) USART Channel Status Register */
#define REG_FLEXCOM2_FLEX_US_RHR (*(__I  uint32_t*)0xFC010218U) /**< (FLEXCOM2) USART Receive Holding Register */
#define REG_FLEXCOM2_FLEX_US_THR (*(__O  uint32_t*)0xFC01021CU) /**< (FLEXCOM2) USART Transmit Holding Register */
#define REG_FLEXCOM2_FLEX_US_BRGR (*(__IO uint32_t*)0xFC010220U) /**< (FLEXCOM2) USART Baud Rate Generator Register */
#define REG_FLEXCOM2_FLEX_US_RTOR (*(__IO uint32_t*)0xFC010224U) /**< (FLEXCOM2) USART Receiver Timeout Register */
#define REG_FLEXCOM2_FLEX_US_TTGR (*(__IO uint32_t*)0xFC010228U) /**< (FLEXCOM2) USART Transmitter Timeguard Register */
#define REG_FLEXCOM2_FLEX_US_FIDI (*(__IO uint32_t*)0xFC010240U) /**< (FLEXCOM2) USART FI DI Ratio Register */
#define REG_FLEXCOM2_FLEX_US_NER (*(__I  uint32_t*)0xFC010244U) /**< (FLEXCOM2) USART Number of Errors Register */
#define REG_FLEXCOM2_FLEX_US_IF (*(__IO uint32_t*)0xFC01024CU) /**< (FLEXCOM2) USART IrDA Filter Register */
#define REG_FLEXCOM2_FLEX_US_MAN (*(__IO uint32_t*)0xFC010250U) /**< (FLEXCOM2) USART Manchester Configuration Register */
#define REG_FLEXCOM2_FLEX_US_LINMR (*(__IO uint32_t*)0xFC010254U) /**< (FLEXCOM2) USART LIN Mode Register */
#define REG_FLEXCOM2_FLEX_US_LINIR (*(__IO uint32_t*)0xFC010258U) /**< (FLEXCOM2) USART LIN Identifier Register */
#define REG_FLEXCOM2_FLEX_US_LINBRR (*(__I  uint32_t*)0xFC01025CU) /**< (FLEXCOM2) USART LIN Baud Rate Register */
#define REG_FLEXCOM2_FLEX_US_CMPR (*(__IO uint32_t*)0xFC010290U) /**< (FLEXCOM2) USART Comparison Register */
#define REG_FLEXCOM2_FLEX_US_FMR (*(__IO uint32_t*)0xFC0102A0U) /**< (FLEXCOM2) USART FIFO Mode Register */
#define REG_FLEXCOM2_FLEX_US_FLR (*(__I  uint32_t*)0xFC0102A4U) /**< (FLEXCOM2) USART FIFO Level Register */
#define REG_FLEXCOM2_FLEX_US_FIER (*(__O  uint32_t*)0xFC0102A8U) /**< (FLEXCOM2) USART FIFO Interrupt Enable Register */
#define REG_FLEXCOM2_FLEX_US_FIDR (*(__O  uint32_t*)0xFC0102ACU) /**< (FLEXCOM2) USART FIFO Interrupt Disable Register */
#define REG_FLEXCOM2_FLEX_US_FIMR (*(__I  uint32_t*)0xFC0102B0U) /**< (FLEXCOM2) USART FIFO Interrupt Mask Register */
#define REG_FLEXCOM2_FLEX_US_FESR (*(__I  uint32_t*)0xFC0102B4U) /**< (FLEXCOM2) USART FIFO Event Status Register */
#define REG_FLEXCOM2_FLEX_US_WPMR (*(__IO uint32_t*)0xFC0102E4U) /**< (FLEXCOM2) USART Write Protection Mode Register */
#define REG_FLEXCOM2_FLEX_US_WPSR (*(__I  uint32_t*)0xFC0102E8U) /**< (FLEXCOM2) USART Write Protection Status Register */
#define REG_FLEXCOM2_FLEX_SPI_CR (*(__O  uint32_t*)0xFC010400U) /**< (FLEXCOM2) SPI Control Register */
#define REG_FLEXCOM2_FLEX_SPI_MR (*(__IO uint32_t*)0xFC010404U) /**< (FLEXCOM2) SPI Mode Register */
#define REG_FLEXCOM2_FLEX_SPI_RDR (*(__I  uint32_t*)0xFC010408U) /**< (FLEXCOM2) SPI Receive Data Register */
#define REG_FLEXCOM2_FLEX_SPI_TDR (*(__O  uint32_t*)0xFC01040CU) /**< (FLEXCOM2) SPI Transmit Data Register */
#define REG_FLEXCOM2_FLEX_SPI_SR (*(__I  uint32_t*)0xFC010410U) /**< (FLEXCOM2) SPI Status Register */
#define REG_FLEXCOM2_FLEX_SPI_IER (*(__O  uint32_t*)0xFC010414U) /**< (FLEXCOM2) SPI Interrupt Enable Register */
#define REG_FLEXCOM2_FLEX_SPI_IDR (*(__O  uint32_t*)0xFC010418U) /**< (FLEXCOM2) SPI Interrupt Disable Register */
#define REG_FLEXCOM2_FLEX_SPI_IMR (*(__I  uint32_t*)0xFC01041CU) /**< (FLEXCOM2) SPI Interrupt Mask Register */
#define REG_FLEXCOM2_FLEX_SPI_CSR (*(__IO uint32_t*)0xFC010430U) /**< (FLEXCOM2) SPI Chip Select Register */
#define REG_FLEXCOM2_FLEX_SPI_CSR0 (*(__IO uint32_t*)0xFC010430U) /**< (FLEXCOM2) SPI Chip Select Register 0 */
#define REG_FLEXCOM2_FLEX_SPI_CSR1 (*(__IO uint32_t*)0xFC010434U) /**< (FLEXCOM2) SPI Chip Select Register 1 */
#define REG_FLEXCOM2_FLEX_SPI_FMR (*(__IO uint32_t*)0xFC010440U) /**< (FLEXCOM2) SPI FIFO Mode Register */
#define REG_FLEXCOM2_FLEX_SPI_FLR (*(__I  uint32_t*)0xFC010444U) /**< (FLEXCOM2) SPI FIFO Level Register */
#define REG_FLEXCOM2_FLEX_SPI_CMPR (*(__IO uint32_t*)0xFC010448U) /**< (FLEXCOM2) SPI Comparison Register */
#define REG_FLEXCOM2_FLEX_SPI_WPMR (*(__IO uint32_t*)0xFC0104E4U) /**< (FLEXCOM2) SPI Write Protection Mode Register */
#define REG_FLEXCOM2_FLEX_SPI_WPSR (*(__I  uint32_t*)0xFC0104E8U) /**< (FLEXCOM2) SPI Write Protection Status Register */
#define REG_FLEXCOM2_FLEX_TWI_CR (*(__O  uint32_t*)0xFC010600U) /**< (FLEXCOM2) TWI Control Register */
#define REG_FLEXCOM2_FLEX_TWI_MMR (*(__IO uint32_t*)0xFC010604U) /**< (FLEXCOM2) TWI Master Mode Register */
#define REG_FLEXCOM2_FLEX_TWI_SMR (*(__IO uint32_t*)0xFC010608U) /**< (FLEXCOM2) TWI Slave Mode Register */
#define REG_FLEXCOM2_FLEX_TWI_IADR (*(__IO uint32_t*)0xFC01060CU) /**< (FLEXCOM2) TWI Internal Address Register */
#define REG_FLEXCOM2_FLEX_TWI_CWGR (*(__IO uint32_t*)0xFC010610U) /**< (FLEXCOM2) TWI Clock Waveform Generator Register */
#define REG_FLEXCOM2_FLEX_TWI_SR (*(__I  uint32_t*)0xFC010620U) /**< (FLEXCOM2) TWI Status Register */
#define REG_FLEXCOM2_FLEX_TWI_IER (*(__O  uint32_t*)0xFC010624U) /**< (FLEXCOM2) TWI Interrupt Enable Register */
#define REG_FLEXCOM2_FLEX_TWI_IDR (*(__O  uint32_t*)0xFC010628U) /**< (FLEXCOM2) TWI Interrupt Disable Register */
#define REG_FLEXCOM2_FLEX_TWI_IMR (*(__I  uint32_t*)0xFC01062CU) /**< (FLEXCOM2) TWI Interrupt Mask Register */
#define REG_FLEXCOM2_FLEX_TWI_RHR (*(__I  uint32_t*)0xFC010630U) /**< (FLEXCOM2) TWI Receive Holding Register */
#define REG_FLEXCOM2_FLEX_TWI_THR (*(__O  uint32_t*)0xFC010634U) /**< (FLEXCOM2) TWI Transmit Holding Register */
#define REG_FLEXCOM2_FLEX_TWI_SMBTR (*(__IO uint32_t*)0xFC010638U) /**< (FLEXCOM2) TWI SMBus Timing Register */
#define REG_FLEXCOM2_FLEX_TWI_ACR (*(__IO uint32_t*)0xFC010640U) /**< (FLEXCOM2) TWI Alternative Command Register */
#define REG_FLEXCOM2_FLEX_TWI_FILTR (*(__IO uint32_t*)0xFC010644U) /**< (FLEXCOM2) TWI Filter Register */
#define REG_FLEXCOM2_FLEX_TWI_SWMR (*(__IO uint32_t*)0xFC01064CU) /**< (FLEXCOM2) TWI SleepWalking Matching Register */
#define REG_FLEXCOM2_FLEX_TWI_FMR (*(__IO uint32_t*)0xFC010650U) /**< (FLEXCOM2) TWI FIFO Mode Register */
#define REG_FLEXCOM2_FLEX_TWI_FLR (*(__I  uint32_t*)0xFC010654U) /**< (FLEXCOM2) TWI FIFO Level Register */
#define REG_FLEXCOM2_FLEX_TWI_FSR (*(__I  uint32_t*)0xFC010660U) /**< (FLEXCOM2) TWI FIFO Status Register */
#define REG_FLEXCOM2_FLEX_TWI_FIER (*(__O  uint32_t*)0xFC010664U) /**< (FLEXCOM2) TWI FIFO Interrupt Enable Register */
#define REG_FLEXCOM2_FLEX_TWI_FIDR (*(__O  uint32_t*)0xFC010668U) /**< (FLEXCOM2) TWI FIFO Interrupt Disable Register */
#define REG_FLEXCOM2_FLEX_TWI_FIMR (*(__I  uint32_t*)0xFC01066CU) /**< (FLEXCOM2) TWI FIFO Interrupt Mask Register */
#define REG_FLEXCOM2_FLEX_TWI_DR (*(__I  uint32_t*)0xFC0106D0U) /**< (FLEXCOM2) TWI Debug Register */
#define REG_FLEXCOM2_FLEX_TWI_WPMR (*(__IO uint32_t*)0xFC0106E4U) /**< (FLEXCOM2) TWI Write Protection Mode Register */
#define REG_FLEXCOM2_FLEX_TWI_WPSR (*(__I  uint32_t*)0xFC0106E8U) /**< (FLEXCOM2) TWI Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for FLEXCOM2 peripheral ========== */
#define FLEXCOM2_INSTANCE_ID                     21         
#define FLEXCOM2_CLOCK_ID                        21         
#define FLEXCOM2_DMAC_ID_TX                      15         
#define FLEXCOM2_DMAC_ID_RX                      16         

#endif /* _SAMA5D2_FLEXCOM2_INSTANCE_ */
