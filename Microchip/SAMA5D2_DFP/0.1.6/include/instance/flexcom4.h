/**
 * \file
 *
 * \brief Instance description for FLEXCOM4
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
#ifndef _SAMA5D2_FLEXCOM4_INSTANCE_H_
#define _SAMA5D2_FLEXCOM4_INSTANCE_H_

/* ========== Register definition for FLEXCOM4 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_FLEXCOM4_FLEX_MR    (0xFC018000) /**< (FLEXCOM4) FLEXCOM Mode Register */
#define REG_FLEXCOM4_FLEX_RHR   (0xFC018010) /**< (FLEXCOM4) FLEXCOM Receive Holding Register */
#define REG_FLEXCOM4_FLEX_THR   (0xFC018020) /**< (FLEXCOM4) FLEXCOM Transmit Holding Register */
#define REG_FLEXCOM4_FLEX_US_CR (0xFC018200) /**< (FLEXCOM4) USART Control Register */
#define REG_FLEXCOM4_FLEX_US_MR (0xFC018204) /**< (FLEXCOM4) USART Mode Register */
#define REG_FLEXCOM4_FLEX_US_IER (0xFC018208) /**< (FLEXCOM4) USART Interrupt Enable Register */
#define REG_FLEXCOM4_FLEX_US_IDR (0xFC01820C) /**< (FLEXCOM4) USART Interrupt Disable Register */
#define REG_FLEXCOM4_FLEX_US_IMR (0xFC018210) /**< (FLEXCOM4) USART Interrupt Mask Register */
#define REG_FLEXCOM4_FLEX_US_CSR (0xFC018214) /**< (FLEXCOM4) USART Channel Status Register */
#define REG_FLEXCOM4_FLEX_US_RHR (0xFC018218) /**< (FLEXCOM4) USART Receive Holding Register */
#define REG_FLEXCOM4_FLEX_US_THR (0xFC01821C) /**< (FLEXCOM4) USART Transmit Holding Register */
#define REG_FLEXCOM4_FLEX_US_BRGR (0xFC018220) /**< (FLEXCOM4) USART Baud Rate Generator Register */
#define REG_FLEXCOM4_FLEX_US_RTOR (0xFC018224) /**< (FLEXCOM4) USART Receiver Timeout Register */
#define REG_FLEXCOM4_FLEX_US_TTGR (0xFC018228) /**< (FLEXCOM4) USART Transmitter Timeguard Register */
#define REG_FLEXCOM4_FLEX_US_FIDI (0xFC018240) /**< (FLEXCOM4) USART FI DI Ratio Register */
#define REG_FLEXCOM4_FLEX_US_NER (0xFC018244) /**< (FLEXCOM4) USART Number of Errors Register */
#define REG_FLEXCOM4_FLEX_US_IF (0xFC01824C) /**< (FLEXCOM4) USART IrDA Filter Register */
#define REG_FLEXCOM4_FLEX_US_MAN (0xFC018250) /**< (FLEXCOM4) USART Manchester Configuration Register */
#define REG_FLEXCOM4_FLEX_US_LINMR (0xFC018254) /**< (FLEXCOM4) USART LIN Mode Register */
#define REG_FLEXCOM4_FLEX_US_LINIR (0xFC018258) /**< (FLEXCOM4) USART LIN Identifier Register */
#define REG_FLEXCOM4_FLEX_US_LINBRR (0xFC01825C) /**< (FLEXCOM4) USART LIN Baud Rate Register */
#define REG_FLEXCOM4_FLEX_US_CMPR (0xFC018290) /**< (FLEXCOM4) USART Comparison Register */
#define REG_FLEXCOM4_FLEX_US_FMR (0xFC0182A0) /**< (FLEXCOM4) USART FIFO Mode Register */
#define REG_FLEXCOM4_FLEX_US_FLR (0xFC0182A4) /**< (FLEXCOM4) USART FIFO Level Register */
#define REG_FLEXCOM4_FLEX_US_FIER (0xFC0182A8) /**< (FLEXCOM4) USART FIFO Interrupt Enable Register */
#define REG_FLEXCOM4_FLEX_US_FIDR (0xFC0182AC) /**< (FLEXCOM4) USART FIFO Interrupt Disable Register */
#define REG_FLEXCOM4_FLEX_US_FIMR (0xFC0182B0) /**< (FLEXCOM4) USART FIFO Interrupt Mask Register */
#define REG_FLEXCOM4_FLEX_US_FESR (0xFC0182B4) /**< (FLEXCOM4) USART FIFO Event Status Register */
#define REG_FLEXCOM4_FLEX_US_WPMR (0xFC0182E4) /**< (FLEXCOM4) USART Write Protection Mode Register */
#define REG_FLEXCOM4_FLEX_US_WPSR (0xFC0182E8) /**< (FLEXCOM4) USART Write Protection Status Register */
#define REG_FLEXCOM4_FLEX_SPI_CR (0xFC018400) /**< (FLEXCOM4) SPI Control Register */
#define REG_FLEXCOM4_FLEX_SPI_MR (0xFC018404) /**< (FLEXCOM4) SPI Mode Register */
#define REG_FLEXCOM4_FLEX_SPI_RDR (0xFC018408) /**< (FLEXCOM4) SPI Receive Data Register */
#define REG_FLEXCOM4_FLEX_SPI_TDR (0xFC01840C) /**< (FLEXCOM4) SPI Transmit Data Register */
#define REG_FLEXCOM4_FLEX_SPI_SR (0xFC018410) /**< (FLEXCOM4) SPI Status Register */
#define REG_FLEXCOM4_FLEX_SPI_IER (0xFC018414) /**< (FLEXCOM4) SPI Interrupt Enable Register */
#define REG_FLEXCOM4_FLEX_SPI_IDR (0xFC018418) /**< (FLEXCOM4) SPI Interrupt Disable Register */
#define REG_FLEXCOM4_FLEX_SPI_IMR (0xFC01841C) /**< (FLEXCOM4) SPI Interrupt Mask Register */
#define REG_FLEXCOM4_FLEX_SPI_CSR (0xFC018430) /**< (FLEXCOM4) SPI Chip Select Register */
#define REG_FLEXCOM4_FLEX_SPI_CSR0 (0xFC018430) /**< (FLEXCOM4) SPI Chip Select Register 0 */
#define REG_FLEXCOM4_FLEX_SPI_CSR1 (0xFC018434) /**< (FLEXCOM4) SPI Chip Select Register 1 */
#define REG_FLEXCOM4_FLEX_SPI_FMR (0xFC018440) /**< (FLEXCOM4) SPI FIFO Mode Register */
#define REG_FLEXCOM4_FLEX_SPI_FLR (0xFC018444) /**< (FLEXCOM4) SPI FIFO Level Register */
#define REG_FLEXCOM4_FLEX_SPI_CMPR (0xFC018448) /**< (FLEXCOM4) SPI Comparison Register */
#define REG_FLEXCOM4_FLEX_SPI_WPMR (0xFC0184E4) /**< (FLEXCOM4) SPI Write Protection Mode Register */
#define REG_FLEXCOM4_FLEX_SPI_WPSR (0xFC0184E8) /**< (FLEXCOM4) SPI Write Protection Status Register */
#define REG_FLEXCOM4_FLEX_TWI_CR (0xFC018600) /**< (FLEXCOM4) TWI Control Register */
#define REG_FLEXCOM4_FLEX_TWI_MMR (0xFC018604) /**< (FLEXCOM4) TWI Master Mode Register */
#define REG_FLEXCOM4_FLEX_TWI_SMR (0xFC018608) /**< (FLEXCOM4) TWI Slave Mode Register */
#define REG_FLEXCOM4_FLEX_TWI_IADR (0xFC01860C) /**< (FLEXCOM4) TWI Internal Address Register */
#define REG_FLEXCOM4_FLEX_TWI_CWGR (0xFC018610) /**< (FLEXCOM4) TWI Clock Waveform Generator Register */
#define REG_FLEXCOM4_FLEX_TWI_SR (0xFC018620) /**< (FLEXCOM4) TWI Status Register */
#define REG_FLEXCOM4_FLEX_TWI_IER (0xFC018624) /**< (FLEXCOM4) TWI Interrupt Enable Register */
#define REG_FLEXCOM4_FLEX_TWI_IDR (0xFC018628) /**< (FLEXCOM4) TWI Interrupt Disable Register */
#define REG_FLEXCOM4_FLEX_TWI_IMR (0xFC01862C) /**< (FLEXCOM4) TWI Interrupt Mask Register */
#define REG_FLEXCOM4_FLEX_TWI_RHR (0xFC018630) /**< (FLEXCOM4) TWI Receive Holding Register */
#define REG_FLEXCOM4_FLEX_TWI_THR (0xFC018634) /**< (FLEXCOM4) TWI Transmit Holding Register */
#define REG_FLEXCOM4_FLEX_TWI_SMBTR (0xFC018638) /**< (FLEXCOM4) TWI SMBus Timing Register */
#define REG_FLEXCOM4_FLEX_TWI_ACR (0xFC018640) /**< (FLEXCOM4) TWI Alternative Command Register */
#define REG_FLEXCOM4_FLEX_TWI_FILTR (0xFC018644) /**< (FLEXCOM4) TWI Filter Register */
#define REG_FLEXCOM4_FLEX_TWI_SWMR (0xFC01864C) /**< (FLEXCOM4) TWI SleepWalking Matching Register */
#define REG_FLEXCOM4_FLEX_TWI_FMR (0xFC018650) /**< (FLEXCOM4) TWI FIFO Mode Register */
#define REG_FLEXCOM4_FLEX_TWI_FLR (0xFC018654) /**< (FLEXCOM4) TWI FIFO Level Register */
#define REG_FLEXCOM4_FLEX_TWI_FSR (0xFC018660) /**< (FLEXCOM4) TWI FIFO Status Register */
#define REG_FLEXCOM4_FLEX_TWI_FIER (0xFC018664) /**< (FLEXCOM4) TWI FIFO Interrupt Enable Register */
#define REG_FLEXCOM4_FLEX_TWI_FIDR (0xFC018668) /**< (FLEXCOM4) TWI FIFO Interrupt Disable Register */
#define REG_FLEXCOM4_FLEX_TWI_FIMR (0xFC01866C) /**< (FLEXCOM4) TWI FIFO Interrupt Mask Register */
#define REG_FLEXCOM4_FLEX_TWI_DR (0xFC0186D0) /**< (FLEXCOM4) TWI Debug Register */
#define REG_FLEXCOM4_FLEX_TWI_WPMR (0xFC0186E4) /**< (FLEXCOM4) TWI Write Protection Mode Register */
#define REG_FLEXCOM4_FLEX_TWI_WPSR (0xFC0186E8) /**< (FLEXCOM4) TWI Write Protection Status Register */

#else

#define REG_FLEXCOM4_FLEX_MR    (*(__IO uint32_t*)0xFC018000U) /**< (FLEXCOM4) FLEXCOM Mode Register */
#define REG_FLEXCOM4_FLEX_RHR   (*(__I  uint32_t*)0xFC018010U) /**< (FLEXCOM4) FLEXCOM Receive Holding Register */
#define REG_FLEXCOM4_FLEX_THR   (*(__IO uint32_t*)0xFC018020U) /**< (FLEXCOM4) FLEXCOM Transmit Holding Register */
#define REG_FLEXCOM4_FLEX_US_CR (*(__O  uint32_t*)0xFC018200U) /**< (FLEXCOM4) USART Control Register */
#define REG_FLEXCOM4_FLEX_US_MR (*(__IO uint32_t*)0xFC018204U) /**< (FLEXCOM4) USART Mode Register */
#define REG_FLEXCOM4_FLEX_US_IER (*(__O  uint32_t*)0xFC018208U) /**< (FLEXCOM4) USART Interrupt Enable Register */
#define REG_FLEXCOM4_FLEX_US_IDR (*(__O  uint32_t*)0xFC01820CU) /**< (FLEXCOM4) USART Interrupt Disable Register */
#define REG_FLEXCOM4_FLEX_US_IMR (*(__I  uint32_t*)0xFC018210U) /**< (FLEXCOM4) USART Interrupt Mask Register */
#define REG_FLEXCOM4_FLEX_US_CSR (*(__I  uint32_t*)0xFC018214U) /**< (FLEXCOM4) USART Channel Status Register */
#define REG_FLEXCOM4_FLEX_US_RHR (*(__I  uint32_t*)0xFC018218U) /**< (FLEXCOM4) USART Receive Holding Register */
#define REG_FLEXCOM4_FLEX_US_THR (*(__O  uint32_t*)0xFC01821CU) /**< (FLEXCOM4) USART Transmit Holding Register */
#define REG_FLEXCOM4_FLEX_US_BRGR (*(__IO uint32_t*)0xFC018220U) /**< (FLEXCOM4) USART Baud Rate Generator Register */
#define REG_FLEXCOM4_FLEX_US_RTOR (*(__IO uint32_t*)0xFC018224U) /**< (FLEXCOM4) USART Receiver Timeout Register */
#define REG_FLEXCOM4_FLEX_US_TTGR (*(__IO uint32_t*)0xFC018228U) /**< (FLEXCOM4) USART Transmitter Timeguard Register */
#define REG_FLEXCOM4_FLEX_US_FIDI (*(__IO uint32_t*)0xFC018240U) /**< (FLEXCOM4) USART FI DI Ratio Register */
#define REG_FLEXCOM4_FLEX_US_NER (*(__I  uint32_t*)0xFC018244U) /**< (FLEXCOM4) USART Number of Errors Register */
#define REG_FLEXCOM4_FLEX_US_IF (*(__IO uint32_t*)0xFC01824CU) /**< (FLEXCOM4) USART IrDA Filter Register */
#define REG_FLEXCOM4_FLEX_US_MAN (*(__IO uint32_t*)0xFC018250U) /**< (FLEXCOM4) USART Manchester Configuration Register */
#define REG_FLEXCOM4_FLEX_US_LINMR (*(__IO uint32_t*)0xFC018254U) /**< (FLEXCOM4) USART LIN Mode Register */
#define REG_FLEXCOM4_FLEX_US_LINIR (*(__IO uint32_t*)0xFC018258U) /**< (FLEXCOM4) USART LIN Identifier Register */
#define REG_FLEXCOM4_FLEX_US_LINBRR (*(__I  uint32_t*)0xFC01825CU) /**< (FLEXCOM4) USART LIN Baud Rate Register */
#define REG_FLEXCOM4_FLEX_US_CMPR (*(__IO uint32_t*)0xFC018290U) /**< (FLEXCOM4) USART Comparison Register */
#define REG_FLEXCOM4_FLEX_US_FMR (*(__IO uint32_t*)0xFC0182A0U) /**< (FLEXCOM4) USART FIFO Mode Register */
#define REG_FLEXCOM4_FLEX_US_FLR (*(__I  uint32_t*)0xFC0182A4U) /**< (FLEXCOM4) USART FIFO Level Register */
#define REG_FLEXCOM4_FLEX_US_FIER (*(__O  uint32_t*)0xFC0182A8U) /**< (FLEXCOM4) USART FIFO Interrupt Enable Register */
#define REG_FLEXCOM4_FLEX_US_FIDR (*(__O  uint32_t*)0xFC0182ACU) /**< (FLEXCOM4) USART FIFO Interrupt Disable Register */
#define REG_FLEXCOM4_FLEX_US_FIMR (*(__I  uint32_t*)0xFC0182B0U) /**< (FLEXCOM4) USART FIFO Interrupt Mask Register */
#define REG_FLEXCOM4_FLEX_US_FESR (*(__I  uint32_t*)0xFC0182B4U) /**< (FLEXCOM4) USART FIFO Event Status Register */
#define REG_FLEXCOM4_FLEX_US_WPMR (*(__IO uint32_t*)0xFC0182E4U) /**< (FLEXCOM4) USART Write Protection Mode Register */
#define REG_FLEXCOM4_FLEX_US_WPSR (*(__I  uint32_t*)0xFC0182E8U) /**< (FLEXCOM4) USART Write Protection Status Register */
#define REG_FLEXCOM4_FLEX_SPI_CR (*(__O  uint32_t*)0xFC018400U) /**< (FLEXCOM4) SPI Control Register */
#define REG_FLEXCOM4_FLEX_SPI_MR (*(__IO uint32_t*)0xFC018404U) /**< (FLEXCOM4) SPI Mode Register */
#define REG_FLEXCOM4_FLEX_SPI_RDR (*(__I  uint32_t*)0xFC018408U) /**< (FLEXCOM4) SPI Receive Data Register */
#define REG_FLEXCOM4_FLEX_SPI_TDR (*(__O  uint32_t*)0xFC01840CU) /**< (FLEXCOM4) SPI Transmit Data Register */
#define REG_FLEXCOM4_FLEX_SPI_SR (*(__I  uint32_t*)0xFC018410U) /**< (FLEXCOM4) SPI Status Register */
#define REG_FLEXCOM4_FLEX_SPI_IER (*(__O  uint32_t*)0xFC018414U) /**< (FLEXCOM4) SPI Interrupt Enable Register */
#define REG_FLEXCOM4_FLEX_SPI_IDR (*(__O  uint32_t*)0xFC018418U) /**< (FLEXCOM4) SPI Interrupt Disable Register */
#define REG_FLEXCOM4_FLEX_SPI_IMR (*(__I  uint32_t*)0xFC01841CU) /**< (FLEXCOM4) SPI Interrupt Mask Register */
#define REG_FLEXCOM4_FLEX_SPI_CSR (*(__IO uint32_t*)0xFC018430U) /**< (FLEXCOM4) SPI Chip Select Register */
#define REG_FLEXCOM4_FLEX_SPI_CSR0 (*(__IO uint32_t*)0xFC018430U) /**< (FLEXCOM4) SPI Chip Select Register 0 */
#define REG_FLEXCOM4_FLEX_SPI_CSR1 (*(__IO uint32_t*)0xFC018434U) /**< (FLEXCOM4) SPI Chip Select Register 1 */
#define REG_FLEXCOM4_FLEX_SPI_FMR (*(__IO uint32_t*)0xFC018440U) /**< (FLEXCOM4) SPI FIFO Mode Register */
#define REG_FLEXCOM4_FLEX_SPI_FLR (*(__I  uint32_t*)0xFC018444U) /**< (FLEXCOM4) SPI FIFO Level Register */
#define REG_FLEXCOM4_FLEX_SPI_CMPR (*(__IO uint32_t*)0xFC018448U) /**< (FLEXCOM4) SPI Comparison Register */
#define REG_FLEXCOM4_FLEX_SPI_WPMR (*(__IO uint32_t*)0xFC0184E4U) /**< (FLEXCOM4) SPI Write Protection Mode Register */
#define REG_FLEXCOM4_FLEX_SPI_WPSR (*(__I  uint32_t*)0xFC0184E8U) /**< (FLEXCOM4) SPI Write Protection Status Register */
#define REG_FLEXCOM4_FLEX_TWI_CR (*(__O  uint32_t*)0xFC018600U) /**< (FLEXCOM4) TWI Control Register */
#define REG_FLEXCOM4_FLEX_TWI_MMR (*(__IO uint32_t*)0xFC018604U) /**< (FLEXCOM4) TWI Master Mode Register */
#define REG_FLEXCOM4_FLEX_TWI_SMR (*(__IO uint32_t*)0xFC018608U) /**< (FLEXCOM4) TWI Slave Mode Register */
#define REG_FLEXCOM4_FLEX_TWI_IADR (*(__IO uint32_t*)0xFC01860CU) /**< (FLEXCOM4) TWI Internal Address Register */
#define REG_FLEXCOM4_FLEX_TWI_CWGR (*(__IO uint32_t*)0xFC018610U) /**< (FLEXCOM4) TWI Clock Waveform Generator Register */
#define REG_FLEXCOM4_FLEX_TWI_SR (*(__I  uint32_t*)0xFC018620U) /**< (FLEXCOM4) TWI Status Register */
#define REG_FLEXCOM4_FLEX_TWI_IER (*(__O  uint32_t*)0xFC018624U) /**< (FLEXCOM4) TWI Interrupt Enable Register */
#define REG_FLEXCOM4_FLEX_TWI_IDR (*(__O  uint32_t*)0xFC018628U) /**< (FLEXCOM4) TWI Interrupt Disable Register */
#define REG_FLEXCOM4_FLEX_TWI_IMR (*(__I  uint32_t*)0xFC01862CU) /**< (FLEXCOM4) TWI Interrupt Mask Register */
#define REG_FLEXCOM4_FLEX_TWI_RHR (*(__I  uint32_t*)0xFC018630U) /**< (FLEXCOM4) TWI Receive Holding Register */
#define REG_FLEXCOM4_FLEX_TWI_THR (*(__O  uint32_t*)0xFC018634U) /**< (FLEXCOM4) TWI Transmit Holding Register */
#define REG_FLEXCOM4_FLEX_TWI_SMBTR (*(__IO uint32_t*)0xFC018638U) /**< (FLEXCOM4) TWI SMBus Timing Register */
#define REG_FLEXCOM4_FLEX_TWI_ACR (*(__IO uint32_t*)0xFC018640U) /**< (FLEXCOM4) TWI Alternative Command Register */
#define REG_FLEXCOM4_FLEX_TWI_FILTR (*(__IO uint32_t*)0xFC018644U) /**< (FLEXCOM4) TWI Filter Register */
#define REG_FLEXCOM4_FLEX_TWI_SWMR (*(__IO uint32_t*)0xFC01864CU) /**< (FLEXCOM4) TWI SleepWalking Matching Register */
#define REG_FLEXCOM4_FLEX_TWI_FMR (*(__IO uint32_t*)0xFC018650U) /**< (FLEXCOM4) TWI FIFO Mode Register */
#define REG_FLEXCOM4_FLEX_TWI_FLR (*(__I  uint32_t*)0xFC018654U) /**< (FLEXCOM4) TWI FIFO Level Register */
#define REG_FLEXCOM4_FLEX_TWI_FSR (*(__I  uint32_t*)0xFC018660U) /**< (FLEXCOM4) TWI FIFO Status Register */
#define REG_FLEXCOM4_FLEX_TWI_FIER (*(__O  uint32_t*)0xFC018664U) /**< (FLEXCOM4) TWI FIFO Interrupt Enable Register */
#define REG_FLEXCOM4_FLEX_TWI_FIDR (*(__O  uint32_t*)0xFC018668U) /**< (FLEXCOM4) TWI FIFO Interrupt Disable Register */
#define REG_FLEXCOM4_FLEX_TWI_FIMR (*(__I  uint32_t*)0xFC01866CU) /**< (FLEXCOM4) TWI FIFO Interrupt Mask Register */
#define REG_FLEXCOM4_FLEX_TWI_DR (*(__I  uint32_t*)0xFC0186D0U) /**< (FLEXCOM4) TWI Debug Register */
#define REG_FLEXCOM4_FLEX_TWI_WPMR (*(__IO uint32_t*)0xFC0186E4U) /**< (FLEXCOM4) TWI Write Protection Mode Register */
#define REG_FLEXCOM4_FLEX_TWI_WPSR (*(__I  uint32_t*)0xFC0186E8U) /**< (FLEXCOM4) TWI Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for FLEXCOM4 peripheral ========== */
#define FLEXCOM4_INSTANCE_ID                     23         
#define FLEXCOM4_CLOCK_ID                        23         
#define FLEXCOM4_DMAC_ID_TX                      19         
#define FLEXCOM4_DMAC_ID_RX                      20         

#endif /* _SAMA5D2_FLEXCOM4_INSTANCE_ */
