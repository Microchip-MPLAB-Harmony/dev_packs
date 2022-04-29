/*
 * Component description for DMA_MAIN
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2021-05-26T17:25:30Z */
#ifndef _CEC_DMA_MAIN_COMPONENT_H_
#define _CEC_DMA_MAIN_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DMA_MAIN                                     */
/* ************************************************************************** */

/* -------- DMA_MAIN_ACTRST : (DMA_MAIN Offset: 0x00) (R/W 8) Soft reset the entire module. Enable the blocks operation. -------- */
#define DMA_MAIN_ACTRST_RESETVALUE            _UINT8_(0x00)                                        /*  (DMA_MAIN_ACTRST) Soft reset the entire module. Enable the blocks operation.  Reset Value */

#define DMA_MAIN_ACTRST_ACT_Pos               _UINT8_(0)                                           /* (DMA_MAIN_ACTRST) Enable the blocks operation. (R/WS)                1=Enable block. Each individual channel must be enabled separately.                0=Disable all channels. Position */
#define DMA_MAIN_ACTRST_ACT_Msk               (_UINT8_(0x1) << DMA_MAIN_ACTRST_ACT_Pos)            /* (DMA_MAIN_ACTRST) Enable the blocks operation. (R/WS)                1=Enable block. Each individual channel must be enabled separately.                0=Disable all channels. Mask */
#define DMA_MAIN_ACTRST_ACT(value)            (DMA_MAIN_ACTRST_ACT_Msk & (_UINT8_(value) << DMA_MAIN_ACTRST_ACT_Pos)) /* Assigment of value for ACT in the DMA_MAIN_ACTRST register */
#define DMA_MAIN_ACTRST_SOFT_RST_Pos          _UINT8_(1)                                           /* (DMA_MAIN_ACTRST) Soft reset the entire module. This bit is self-clearing. Position */
#define DMA_MAIN_ACTRST_SOFT_RST_Msk          (_UINT8_(0x1) << DMA_MAIN_ACTRST_SOFT_RST_Pos)       /* (DMA_MAIN_ACTRST) Soft reset the entire module. This bit is self-clearing. Mask */
#define DMA_MAIN_ACTRST_SOFT_RST(value)       (DMA_MAIN_ACTRST_SOFT_RST_Msk & (_UINT8_(value) << DMA_MAIN_ACTRST_SOFT_RST_Pos)) /* Assigment of value for SOFT_RST in the DMA_MAIN_ACTRST register */
#define DMA_MAIN_ACTRST_Msk                   _UINT8_(0x03)                                        /* (DMA_MAIN_ACTRST) Register Mask  */


/* -------- DMA_MAIN_DATA_PKT : (DMA_MAIN Offset: 0x04) ( R/ 32) Debug register that has the data that is stored in the Data Packet. This data is read data from the currently active transfer source. -------- */
#define DMA_MAIN_DATA_PKT_RESETVALUE          _UINT32_(0x00)                                       /*  (DMA_MAIN_DATA_PKT) Debug register that has the data that is stored in the Data Packet. This data is read data from the currently active transfer source.  Reset Value */

#define DMA_MAIN_DATA_PKT_Msk                 _UINT32_(0x00000000)                                 /* (DMA_MAIN_DATA_PKT) Register Mask  */


/** \brief DMA_MAIN register offsets definitions */
#define DMA_MAIN_ACTRST_REG_OFST       _UINT32_(0x00)      /* (DMA_MAIN_ACTRST) Soft reset the entire module. Enable the blocks operation. Offset */
#define DMA_MAIN_DATA_PKT_REG_OFST     _UINT32_(0x04)      /* (DMA_MAIN_DATA_PKT) Debug register that has the data that is stored in the Data Packet. This data is read data from the currently active transfer source. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DMA_MAIN register API structure */
typedef struct
{  /* DMA Main Registers */
  __IO  uint8_t                        DMA_MAIN_ACTRST;    /**< Offset: 0x00 (R/W  8) Soft reset the entire module. Enable the blocks operation. */
  __I   uint8_t                        Reserved1[0x03];
  __I   uint32_t                       DMA_MAIN_DATA_PKT;  /**< Offset: 0x04 (R/   32) Debug register that has the data that is stored in the Data Packet. This data is read data from the currently active transfer source. */
} dma_main_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_DMA_MAIN_COMPONENT_H_ */
