/*
 * Component description for QMSPI
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
#ifndef _CEC_QMSPI_COMPONENT_H_
#define _CEC_QMSPI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR QMSPI                                        */
/* ************************************************************************** */

/* -------- QMSPI_LDMA_RXCTRL : (QMSPI Offset: 0x00) (R/W 32) QMSPI RX Control Register -------- */
#define QMSPI_LDMA_RXCTRL_RESETVALUE          _UINT32_(0x00)                                       /*  (QMSPI_LDMA_RXCTRL) QMSPI RX Control Register  Reset Value */

#define QMSPI_LDMA_RXCTRL_CH_EN_Pos           _UINT32_(0)                                          /* (QMSPI_LDMA_RXCTRL) This enables the Local RX DMA Channel. Position */
#define QMSPI_LDMA_RXCTRL_CH_EN_Msk           (_UINT32_(0x1) << QMSPI_LDMA_RXCTRL_CH_EN_Pos)       /* (QMSPI_LDMA_RXCTRL) This enables the Local RX DMA Channel. Mask */
#define QMSPI_LDMA_RXCTRL_CH_EN(value)        (QMSPI_LDMA_RXCTRL_CH_EN_Msk & (_UINT32_(value) << QMSPI_LDMA_RXCTRL_CH_EN_Pos)) /* Assigment of value for CH_EN in the QMSPI_LDMA_RXCTRL register */
#define QMSPI_LDMA_RXCTRL_RSTRT_EN_Pos        _UINT32_(1)                                          /* (QMSPI_LDMA_RXCTRL) This bit automatically re-enables the Local DMA Channel after completion of previous transfer. Position */
#define QMSPI_LDMA_RXCTRL_RSTRT_EN_Msk        (_UINT32_(0x1) << QMSPI_LDMA_RXCTRL_RSTRT_EN_Pos)    /* (QMSPI_LDMA_RXCTRL) This bit automatically re-enables the Local DMA Channel after completion of previous transfer. Mask */
#define QMSPI_LDMA_RXCTRL_RSTRT_EN(value)     (QMSPI_LDMA_RXCTRL_RSTRT_EN_Msk & (_UINT32_(value) << QMSPI_LDMA_RXCTRL_RSTRT_EN_Pos)) /* Assigment of value for RSTRT_EN in the QMSPI_LDMA_RXCTRL register */
#define QMSPI_LDMA_RXCTRL_BUF_ADDR_EN_Pos     _UINT32_(2)                                          /* (QMSPI_LDMA_RXCTRL) Address re-enable will automatically re-enables the same address upon completion previous transfer. Position */
#define QMSPI_LDMA_RXCTRL_BUF_ADDR_EN_Msk     (_UINT32_(0x1) << QMSPI_LDMA_RXCTRL_BUF_ADDR_EN_Pos) /* (QMSPI_LDMA_RXCTRL) Address re-enable will automatically re-enables the same address upon completion previous transfer. Mask */
#define QMSPI_LDMA_RXCTRL_BUF_ADDR_EN(value)  (QMSPI_LDMA_RXCTRL_BUF_ADDR_EN_Msk & (_UINT32_(value) << QMSPI_LDMA_RXCTRL_BUF_ADDR_EN_Pos)) /* Assigment of value for BUF_ADDR_EN in the QMSPI_LDMA_RXCTRL register */
#define QMSPI_LDMA_RXCTRL_OVRD_LEN_Pos        _UINT32_(3)                                          /* (QMSPI_LDMA_RXCTRL) Override Lenght will override the length field to the QMSPI protocol FSM with the length programmed into the Local DMA. Position */
#define QMSPI_LDMA_RXCTRL_OVRD_LEN_Msk        (_UINT32_(0x1) << QMSPI_LDMA_RXCTRL_OVRD_LEN_Pos)    /* (QMSPI_LDMA_RXCTRL) Override Lenght will override the length field to the QMSPI protocol FSM with the length programmed into the Local DMA. Mask */
#define QMSPI_LDMA_RXCTRL_OVRD_LEN(value)     (QMSPI_LDMA_RXCTRL_OVRD_LEN_Msk & (_UINT32_(value) << QMSPI_LDMA_RXCTRL_OVRD_LEN_Pos)) /* Assigment of value for OVRD_LEN in the QMSPI_LDMA_RXCTRL register */
#define QMSPI_LDMA_RXCTRL_ACS_SZ_Pos          _UINT32_(4)                                          /* (QMSPI_LDMA_RXCTRL) Access Size selects the AHB Access Size. Position */
#define QMSPI_LDMA_RXCTRL_ACS_SZ_Msk          (_UINT32_(0x3) << QMSPI_LDMA_RXCTRL_ACS_SZ_Pos)      /* (QMSPI_LDMA_RXCTRL) Access Size selects the AHB Access Size. Mask */
#define QMSPI_LDMA_RXCTRL_ACS_SZ(value)       (QMSPI_LDMA_RXCTRL_ACS_SZ_Msk & (_UINT32_(value) << QMSPI_LDMA_RXCTRL_ACS_SZ_Pos)) /* Assigment of value for ACS_SZ in the QMSPI_LDMA_RXCTRL register */
#define QMSPI_LDMA_RXCTRL_INC_ADDR_EN_Pos     _UINT32_(6)                                          /* (QMSPI_LDMA_RXCTRL) When set, the DMA Channels Start Address will increment on every access. If not set the address will not increment. Position */
#define QMSPI_LDMA_RXCTRL_INC_ADDR_EN_Msk     (_UINT32_(0x1) << QMSPI_LDMA_RXCTRL_INC_ADDR_EN_Pos) /* (QMSPI_LDMA_RXCTRL) When set, the DMA Channels Start Address will increment on every access. If not set the address will not increment. Mask */
#define QMSPI_LDMA_RXCTRL_INC_ADDR_EN(value)  (QMSPI_LDMA_RXCTRL_INC_ADDR_EN_Msk & (_UINT32_(value) << QMSPI_LDMA_RXCTRL_INC_ADDR_EN_Pos)) /* Assigment of value for INC_ADDR_EN in the QMSPI_LDMA_RXCTRL register */
#define QMSPI_LDMA_RXCTRL_Msk                 _UINT32_(0x0000007F)                                 /* (QMSPI_LDMA_RXCTRL) Register Mask  */


/* -------- QMSPI_LDMA_RXSTRT_ADDR : (QMSPI Offset: 0x04) (R/W 32) QMSPI Local DMA Rx Start Address Register -------- */
#define QMSPI_LDMA_RXSTRT_ADDR_RESETVALUE     _UINT32_(0x00)                                       /*  (QMSPI_LDMA_RXSTRT_ADDR) QMSPI Local DMA Rx Start Address Register  Reset Value */

#define QMSPI_LDMA_RXSTRT_ADDR_STRT_ADDR_Pos  _UINT32_(0)                                          /* (QMSPI_LDMA_RXSTRT_ADDR) This is the Starting Address for the DMA access into the memory space (write to this address on Rx). This address is updated by the transfer size based on the Local DMA Access Size after every access. Position */
#define QMSPI_LDMA_RXSTRT_ADDR_STRT_ADDR_Msk  (_UINT32_(0xFFFFFFFF) << QMSPI_LDMA_RXSTRT_ADDR_STRT_ADDR_Pos) /* (QMSPI_LDMA_RXSTRT_ADDR) This is the Starting Address for the DMA access into the memory space (write to this address on Rx). This address is updated by the transfer size based on the Local DMA Access Size after every access. Mask */
#define QMSPI_LDMA_RXSTRT_ADDR_STRT_ADDR(value) (QMSPI_LDMA_RXSTRT_ADDR_STRT_ADDR_Msk & (_UINT32_(value) << QMSPI_LDMA_RXSTRT_ADDR_STRT_ADDR_Pos)) /* Assigment of value for STRT_ADDR in the QMSPI_LDMA_RXSTRT_ADDR register */
#define QMSPI_LDMA_RXSTRT_ADDR_Msk            _UINT32_(0xFFFFFFFF)                                 /* (QMSPI_LDMA_RXSTRT_ADDR) Register Mask  */


/* -------- QMSPI_LDMA_RX_LEN : (QMSPI Offset: 0x08) (R/W 32) QMSPI Local DMA Rx Length Register -------- */
#define QMSPI_LDMA_RX_LEN_RESETVALUE          _UINT32_(0x00)                                       /*  (QMSPI_LDMA_RX_LEN) QMSPI Local DMA Rx Length Register  Reset Value */

#define QMSPI_LDMA_RX_LEN_RX_LEN_Pos          _UINT32_(0)                                          /* (QMSPI_LDMA_RX_LEN) This is the maximum Length of the transfer in Bytes that the DMA Channel will allow access to. Position */
#define QMSPI_LDMA_RX_LEN_RX_LEN_Msk          (_UINT32_(0xFFFFFFFF) << QMSPI_LDMA_RX_LEN_RX_LEN_Pos) /* (QMSPI_LDMA_RX_LEN) This is the maximum Length of the transfer in Bytes that the DMA Channel will allow access to. Mask */
#define QMSPI_LDMA_RX_LEN_RX_LEN(value)       (QMSPI_LDMA_RX_LEN_RX_LEN_Msk & (_UINT32_(value) << QMSPI_LDMA_RX_LEN_RX_LEN_Pos)) /* Assigment of value for RX_LEN in the QMSPI_LDMA_RX_LEN register */
#define QMSPI_LDMA_RX_LEN_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (QMSPI_LDMA_RX_LEN) Register Mask  */


/* -------- QMSPI_RSVD : (QMSPI Offset: 0x0C) ( R/ 32) Reserved Register -------- */
#define QMSPI_RSVD_RESETVALUE                 _UINT32_(0x00)                                       /*  (QMSPI_RSVD) Reserved Register  Reset Value */

#define QMSPI_RSVD_Msk                        _UINT32_(0x00000000)                                 /* (QMSPI_RSVD) Register Mask  */


/* -------- QMSPI_LDMA_TXCTRL : (QMSPI Offset: 0x00) (R/W 32) QMSPI TX Control Register -------- */
#define QMSPI_LDMA_TXCTRL_RESETVALUE          _UINT32_(0x00)                                       /*  (QMSPI_LDMA_TXCTRL) QMSPI TX Control Register  Reset Value */

#define QMSPI_LDMA_TXCTRL_CH_EN_Pos           _UINT32_(0)                                          /* (QMSPI_LDMA_TXCTRL) This enables the Local TX DMA Channel. Position */
#define QMSPI_LDMA_TXCTRL_CH_EN_Msk           (_UINT32_(0x1) << QMSPI_LDMA_TXCTRL_CH_EN_Pos)       /* (QMSPI_LDMA_TXCTRL) This enables the Local TX DMA Channel. Mask */
#define QMSPI_LDMA_TXCTRL_CH_EN(value)        (QMSPI_LDMA_TXCTRL_CH_EN_Msk & (_UINT32_(value) << QMSPI_LDMA_TXCTRL_CH_EN_Pos)) /* Assigment of value for CH_EN in the QMSPI_LDMA_TXCTRL register */
#define QMSPI_LDMA_TXCTRL_RSTRT_EN_Pos        _UINT32_(1)                                          /* (QMSPI_LDMA_TXCTRL) This bit automatically re-enables the Local DMA Channel after completion of previous transfer. Position */
#define QMSPI_LDMA_TXCTRL_RSTRT_EN_Msk        (_UINT32_(0x1) << QMSPI_LDMA_TXCTRL_RSTRT_EN_Pos)    /* (QMSPI_LDMA_TXCTRL) This bit automatically re-enables the Local DMA Channel after completion of previous transfer. Mask */
#define QMSPI_LDMA_TXCTRL_RSTRT_EN(value)     (QMSPI_LDMA_TXCTRL_RSTRT_EN_Msk & (_UINT32_(value) << QMSPI_LDMA_TXCTRL_RSTRT_EN_Pos)) /* Assigment of value for RSTRT_EN in the QMSPI_LDMA_TXCTRL register */
#define QMSPI_LDMA_TXCTRL_BUF_ADDR_EN_Pos     _UINT32_(2)                                          /* (QMSPI_LDMA_TXCTRL) Address re-enable will automatically re-enables the same address upon completion previous transfer. Position */
#define QMSPI_LDMA_TXCTRL_BUF_ADDR_EN_Msk     (_UINT32_(0x1) << QMSPI_LDMA_TXCTRL_BUF_ADDR_EN_Pos) /* (QMSPI_LDMA_TXCTRL) Address re-enable will automatically re-enables the same address upon completion previous transfer. Mask */
#define QMSPI_LDMA_TXCTRL_BUF_ADDR_EN(value)  (QMSPI_LDMA_TXCTRL_BUF_ADDR_EN_Msk & (_UINT32_(value) << QMSPI_LDMA_TXCTRL_BUF_ADDR_EN_Pos)) /* Assigment of value for BUF_ADDR_EN in the QMSPI_LDMA_TXCTRL register */
#define QMSPI_LDMA_TXCTRL_OVRD_LEN_Pos        _UINT32_(3)                                          /* (QMSPI_LDMA_TXCTRL) Override Lenght will override the length field to the QMSPI protocol FSM with the length programmed into the Local DMA. Position */
#define QMSPI_LDMA_TXCTRL_OVRD_LEN_Msk        (_UINT32_(0x1) << QMSPI_LDMA_TXCTRL_OVRD_LEN_Pos)    /* (QMSPI_LDMA_TXCTRL) Override Lenght will override the length field to the QMSPI protocol FSM with the length programmed into the Local DMA. Mask */
#define QMSPI_LDMA_TXCTRL_OVRD_LEN(value)     (QMSPI_LDMA_TXCTRL_OVRD_LEN_Msk & (_UINT32_(value) << QMSPI_LDMA_TXCTRL_OVRD_LEN_Pos)) /* Assigment of value for OVRD_LEN in the QMSPI_LDMA_TXCTRL register */
#define QMSPI_LDMA_TXCTRL_ACS_SZ_Pos          _UINT32_(4)                                          /* (QMSPI_LDMA_TXCTRL) Access Size selects the AHB Access Size. Position */
#define QMSPI_LDMA_TXCTRL_ACS_SZ_Msk          (_UINT32_(0x3) << QMSPI_LDMA_TXCTRL_ACS_SZ_Pos)      /* (QMSPI_LDMA_TXCTRL) Access Size selects the AHB Access Size. Mask */
#define QMSPI_LDMA_TXCTRL_ACS_SZ(value)       (QMSPI_LDMA_TXCTRL_ACS_SZ_Msk & (_UINT32_(value) << QMSPI_LDMA_TXCTRL_ACS_SZ_Pos)) /* Assigment of value for ACS_SZ in the QMSPI_LDMA_TXCTRL register */
#define QMSPI_LDMA_TXCTRL_INC_ADDR_EN_Pos     _UINT32_(6)                                          /* (QMSPI_LDMA_TXCTRL) When set, the DMA Channels Start Address will increment on every access. If not set the address will not increment. Position */
#define QMSPI_LDMA_TXCTRL_INC_ADDR_EN_Msk     (_UINT32_(0x1) << QMSPI_LDMA_TXCTRL_INC_ADDR_EN_Pos) /* (QMSPI_LDMA_TXCTRL) When set, the DMA Channels Start Address will increment on every access. If not set the address will not increment. Mask */
#define QMSPI_LDMA_TXCTRL_INC_ADDR_EN(value)  (QMSPI_LDMA_TXCTRL_INC_ADDR_EN_Msk & (_UINT32_(value) << QMSPI_LDMA_TXCTRL_INC_ADDR_EN_Pos)) /* Assigment of value for INC_ADDR_EN in the QMSPI_LDMA_TXCTRL register */
#define QMSPI_LDMA_TXCTRL_Msk                 _UINT32_(0x0000007F)                                 /* (QMSPI_LDMA_TXCTRL) Register Mask  */


/* -------- QMSPI_LDMA_TXSTRT_ADDR : (QMSPI Offset: 0x04) (R/W 32) QMSPI Local DMA Tx Start Address Register -------- */
#define QMSPI_LDMA_TXSTRT_ADDR_RESETVALUE     _UINT32_(0x00)                                       /*  (QMSPI_LDMA_TXSTRT_ADDR) QMSPI Local DMA Tx Start Address Register  Reset Value */

#define QMSPI_LDMA_TXSTRT_ADDR_STRT_ADDR_Pos  _UINT32_(0)                                          /* (QMSPI_LDMA_TXSTRT_ADDR) This is the Starting Address for the DMA access into the memory space (Read from this address on Tx). This address is updated by the transfer size based on the Local DMA Access Size after every access. Position */
#define QMSPI_LDMA_TXSTRT_ADDR_STRT_ADDR_Msk  (_UINT32_(0xFFFFFFFF) << QMSPI_LDMA_TXSTRT_ADDR_STRT_ADDR_Pos) /* (QMSPI_LDMA_TXSTRT_ADDR) This is the Starting Address for the DMA access into the memory space (Read from this address on Tx). This address is updated by the transfer size based on the Local DMA Access Size after every access. Mask */
#define QMSPI_LDMA_TXSTRT_ADDR_STRT_ADDR(value) (QMSPI_LDMA_TXSTRT_ADDR_STRT_ADDR_Msk & (_UINT32_(value) << QMSPI_LDMA_TXSTRT_ADDR_STRT_ADDR_Pos)) /* Assigment of value for STRT_ADDR in the QMSPI_LDMA_TXSTRT_ADDR register */
#define QMSPI_LDMA_TXSTRT_ADDR_Msk            _UINT32_(0xFFFFFFFF)                                 /* (QMSPI_LDMA_TXSTRT_ADDR) Register Mask  */


/* -------- QMSPI_LDMA_TX_LEN : (QMSPI Offset: 0x08) (R/W 32) QMSPI Local DMA Tx Length Register -------- */
#define QMSPI_LDMA_TX_LEN_RESETVALUE          _UINT32_(0x00)                                       /*  (QMSPI_LDMA_TX_LEN) QMSPI Local DMA Tx Length Register  Reset Value */

#define QMSPI_LDMA_TX_LEN_TX_LEN_Pos          _UINT32_(0)                                          /* (QMSPI_LDMA_TX_LEN) This is the maximum Length of the transfer in Bytes that the DMA Channel will allow access to. Position */
#define QMSPI_LDMA_TX_LEN_TX_LEN_Msk          (_UINT32_(0xFFFFFFFF) << QMSPI_LDMA_TX_LEN_TX_LEN_Pos) /* (QMSPI_LDMA_TX_LEN) This is the maximum Length of the transfer in Bytes that the DMA Channel will allow access to. Mask */
#define QMSPI_LDMA_TX_LEN_TX_LEN(value)       (QMSPI_LDMA_TX_LEN_TX_LEN_Msk & (_UINT32_(value) << QMSPI_LDMA_TX_LEN_TX_LEN_Pos)) /* Assigment of value for TX_LEN in the QMSPI_LDMA_TX_LEN register */
#define QMSPI_LDMA_TX_LEN_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (QMSPI_LDMA_TX_LEN) Register Mask  */


/* -------- QMSPI_RSVD : (QMSPI Offset: 0x0C) ( R/ 32) Reserved Register -------- */
#define QMSPI_RSVD_RESETVALUE                 _UINT32_(0x00)                                       /*  (QMSPI_RSVD) Reserved Register  Reset Value */

#define QMSPI_RSVD_Msk                        _UINT32_(0x00000000)                                 /* (QMSPI_RSVD) Register Mask  */


/* -------- QMSPI_MODE : (QMSPI Offset: 0x00) (R/W 32) QMSPI Mode Register -------- */
#define QMSPI_MODE_RESETVALUE                 _UINT32_(0x00)                                       /*  (QMSPI_MODE) QMSPI Mode Register  Reset Value */

#define QMSPI_MODE_ACT_Pos                    _UINT32_(0)                                          /* (QMSPI_MODE) This bit is used to activate the QMSPI block.     1=Enabled. The block is fully operational                 0=Disabled. Clocks are gated to conserve power and the output signals are set to their inactive state. Position */
#define QMSPI_MODE_ACT_Msk                    (_UINT32_(0x1) << QMSPI_MODE_ACT_Pos)                /* (QMSPI_MODE) This bit is used to activate the QMSPI block.     1=Enabled. The block is fully operational                 0=Disabled. Clocks are gated to conserve power and the output signals are set to their inactive state. Mask */
#define QMSPI_MODE_ACT(value)                 (QMSPI_MODE_ACT_Msk & (_UINT32_(value) << QMSPI_MODE_ACT_Pos)) /* Assigment of value for ACT in the QMSPI_MODE register */
#define QMSPI_MODE_SOFT_RESET_Pos             _UINT32_(1)                                          /* (QMSPI_MODE) Writing this bit with a 1 will reset the Quad SPI block. It is self-clearing. Position */
#define QMSPI_MODE_SOFT_RESET_Msk             (_UINT32_(0x1) << QMSPI_MODE_SOFT_RESET_Pos)         /* (QMSPI_MODE) Writing this bit with a 1 will reset the Quad SPI block. It is self-clearing. Mask */
#define QMSPI_MODE_SOFT_RESET(value)          (QMSPI_MODE_SOFT_RESET_Msk & (_UINT32_(value) << QMSPI_MODE_SOFT_RESET_Pos)) /* Assigment of value for SOFT_RESET in the QMSPI_MODE register */
#define QMSPI_MODE_DMA_UNLGND_MOD_Pos         _UINT32_(2)                                          /* (QMSPI_MODE) When enabled the DMA is allowed to operate w/ unaligned transfer lengths. Position */
#define QMSPI_MODE_DMA_UNLGND_MOD_Msk         (_UINT32_(0x1) << QMSPI_MODE_DMA_UNLGND_MOD_Pos)     /* (QMSPI_MODE) When enabled the DMA is allowed to operate w/ unaligned transfer lengths. Mask */
#define QMSPI_MODE_DMA_UNLGND_MOD(value)      (QMSPI_MODE_DMA_UNLGND_MOD_Msk & (_UINT32_(value) << QMSPI_MODE_DMA_UNLGND_MOD_Pos)) /* Assigment of value for DMA_UNLGND_MOD in the QMSPI_MODE register */
#define QMSPI_MODE_LDMA_RXEN_Pos              _UINT32_(3)                                          /* (QMSPI_MODE) This enables the Local DMA RX usage (instead of the Central DMA) when the Control register enables the DMA. Position */
#define QMSPI_MODE_LDMA_RXEN_Msk              (_UINT32_(0x1) << QMSPI_MODE_LDMA_RXEN_Pos)          /* (QMSPI_MODE) This enables the Local DMA RX usage (instead of the Central DMA) when the Control register enables the DMA. Mask */
#define QMSPI_MODE_LDMA_RXEN(value)           (QMSPI_MODE_LDMA_RXEN_Msk & (_UINT32_(value) << QMSPI_MODE_LDMA_RXEN_Pos)) /* Assigment of value for LDMA_RXEN in the QMSPI_MODE register */
#define QMSPI_MODE_LDMA_TXEN_Pos              _UINT32_(4)                                          /* (QMSPI_MODE) This enables the Local DMA TX usage (instead of the Central DMA) when the Control register enables the DMA. Position */
#define QMSPI_MODE_LDMA_TXEN_Msk              (_UINT32_(0x1) << QMSPI_MODE_LDMA_TXEN_Pos)          /* (QMSPI_MODE) This enables the Local DMA TX usage (instead of the Central DMA) when the Control register enables the DMA. Mask */
#define QMSPI_MODE_LDMA_TXEN(value)           (QMSPI_MODE_LDMA_TXEN_Msk & (_UINT32_(value) << QMSPI_MODE_LDMA_TXEN_Pos)) /* Assigment of value for LDMA_TXEN in the QMSPI_MODE register */
#define QMSPI_MODE_CPOL_Pos                   _UINT32_(8)                                          /* (QMSPI_MODE) Polarity of the SPI clock line when there are no transactions in process. 1=SPI Clock starts High; 0=SPI Clock starts Low. Position */
#define QMSPI_MODE_CPOL_Msk                   (_UINT32_(0x1) << QMSPI_MODE_CPOL_Pos)               /* (QMSPI_MODE) Polarity of the SPI clock line when there are no transactions in process. 1=SPI Clock starts High; 0=SPI Clock starts Low. Mask */
#define QMSPI_MODE_CPOL(value)                (QMSPI_MODE_CPOL_Msk & (_UINT32_(value) << QMSPI_MODE_CPOL_Pos)) /* Assigment of value for CPOL in the QMSPI_MODE register */
#define QMSPI_MODE_CHPA_MOSI_Pos              _UINT32_(9)                                          /* (QMSPI_MODE) Clock phase of the Master data out. Common SPI modes require this field to be programmed with the same value as CHPA_MISO in this register.     e.g. Mode 0: CPOL=0; CHPA_MISO=0; CHPA_MOSI=0; Mode 3: CPOL=1; CHPA_MISO=1; CHPA_MOSI=1. See datasheet for alternate mode settings.                 If CPOL=1: 1=Data changes on the falling edge of the SPI clock; 0=Data changes on the rising edge of the SPI clock                 If CPOL=0: 1=Data changes on the rising edge of the SPI clock; 0=Data changes on the falling edge of the SPI clock Position */
#define QMSPI_MODE_CHPA_MOSI_Msk              (_UINT32_(0x1) << QMSPI_MODE_CHPA_MOSI_Pos)          /* (QMSPI_MODE) Clock phase of the Master data out. Common SPI modes require this field to be programmed with the same value as CHPA_MISO in this register.     e.g. Mode 0: CPOL=0; CHPA_MISO=0; CHPA_MOSI=0; Mode 3: CPOL=1; CHPA_MISO=1; CHPA_MOSI=1. See datasheet for alternate mode settings.                 If CPOL=1: 1=Data changes on the falling edge of the SPI clock; 0=Data changes on the rising edge of the SPI clock                 If CPOL=0: 1=Data changes on the rising edge of the SPI clock; 0=Data changes on the falling edge of the SPI clock Mask */
#define QMSPI_MODE_CHPA_MOSI(value)           (QMSPI_MODE_CHPA_MOSI_Msk & (_UINT32_(value) << QMSPI_MODE_CHPA_MOSI_Pos)) /* Assigment of value for CHPA_MOSI in the QMSPI_MODE register */
#define QMSPI_MODE_CHPA_MISO_Pos              _UINT32_(10)                                         /* (QMSPI_MODE) Clock phase of the Master data in. Common SPI modes require this field to be programmed with the same value as CHPA_MOSI in this register.     e.g. Mode 0: CPOL=0; CHPA_MISO=0; CHPA_MOSI=0; Mode 3: CPOL=1; CHPA_MISO=1; CHPA_MOSI=1. See datasheet for alternate mode settings.                 If CPOL=1: 1=Data are captured on the rising edge of the SPI clock; 0=Data are captured on the falling edge of the SPI clock                 If CPOL=0: 1=Data are captured on the falling edge of the SPI clock; 0=Data are captured on the rising edge of the SPI clock Position */
#define QMSPI_MODE_CHPA_MISO_Msk              (_UINT32_(0x1) << QMSPI_MODE_CHPA_MISO_Pos)          /* (QMSPI_MODE) Clock phase of the Master data in. Common SPI modes require this field to be programmed with the same value as CHPA_MOSI in this register.     e.g. Mode 0: CPOL=0; CHPA_MISO=0; CHPA_MOSI=0; Mode 3: CPOL=1; CHPA_MISO=1; CHPA_MOSI=1. See datasheet for alternate mode settings.                 If CPOL=1: 1=Data are captured on the rising edge of the SPI clock; 0=Data are captured on the falling edge of the SPI clock                 If CPOL=0: 1=Data are captured on the falling edge of the SPI clock; 0=Data are captured on the rising edge of the SPI clock Mask */
#define QMSPI_MODE_CHPA_MISO(value)           (QMSPI_MODE_CHPA_MISO_Msk & (_UINT32_(value) << QMSPI_MODE_CHPA_MISO_Pos)) /* Assigment of value for CHPA_MISO in the QMSPI_MODE register */
#define QMSPI_MODE_CS_Pos                     _UINT32_(12)                                         /* (QMSPI_MODE) This defines which Chip Select will be used by the H/W when doing a transfer. Position */
#define QMSPI_MODE_CS_Msk                     (_UINT32_(0x3) << QMSPI_MODE_CS_Pos)                 /* (QMSPI_MODE) This defines which Chip Select will be used by the H/W when doing a transfer. Mask */
#define QMSPI_MODE_CS(value)                  (QMSPI_MODE_CS_Msk & (_UINT32_(value) << QMSPI_MODE_CS_Pos)) /* Assigment of value for CS in the QMSPI_MODE register */
#define QMSPI_MODE_CLK_DIV_Pos                _UINT32_(16)                                         /* (QMSPI_MODE) The SPI clock divide in number of system clocks. A value of 1 divides the master clock by 1, a value of 255 divides the master clock by 255. A value of 0 divides the master clock by 256. Position */
#define QMSPI_MODE_CLK_DIV_Msk                (_UINT32_(0xFFFF) << QMSPI_MODE_CLK_DIV_Pos)         /* (QMSPI_MODE) The SPI clock divide in number of system clocks. A value of 1 divides the master clock by 1, a value of 255 divides the master clock by 255. A value of 0 divides the master clock by 256. Mask */
#define QMSPI_MODE_CLK_DIV(value)             (QMSPI_MODE_CLK_DIV_Msk & (_UINT32_(value) << QMSPI_MODE_CLK_DIV_Pos)) /* Assigment of value for CLK_DIV in the QMSPI_MODE register */
#define QMSPI_MODE_Msk                        _UINT32_(0xFFFF371F)                                 /* (QMSPI_MODE) Register Mask  */


/* -------- QMSPI_CTRL : (QMSPI Offset: 0x04) (R/W 32) QMSPI SPI Control -------- */
#define QMSPI_CTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (QMSPI_CTRL) QMSPI SPI Control  Reset Value */

#define QMSPI_CTRL_TX_MODE_Pos                _UINT32_(0)                                          /* (QMSPI_CTRL) This field sets the transmission mode. If this field is set for Dual Mode or Quad Mode then either      TX_TRANSFER_ENABLE or RX_TRANSFER_ENABLE must be 0.                  3=Reserved; 2=Quad Mode; 1=Dual Mode; 0=Single/Duplex Mode. Position */
#define QMSPI_CTRL_TX_MODE_Msk                (_UINT32_(0x3) << QMSPI_CTRL_TX_MODE_Pos)            /* (QMSPI_CTRL) This field sets the transmission mode. If this field is set for Dual Mode or Quad Mode then either      TX_TRANSFER_ENABLE or RX_TRANSFER_ENABLE must be 0.                  3=Reserved; 2=Quad Mode; 1=Dual Mode; 0=Single/Duplex Mode. Mask */
#define QMSPI_CTRL_TX_MODE(value)             (QMSPI_CTRL_TX_MODE_Msk & (_UINT32_(value) << QMSPI_CTRL_TX_MODE_Pos)) /* Assigment of value for TX_MODE in the QMSPI_CTRL register */
#define QMSPI_CTRL_TX_TRANS_EN_Pos            _UINT32_(2)                                          /* (QMSPI_CTRL) This field bit selects the transmit function of the SPI interface.                 3=Transmit Enabled in 1 Mode. The MOSI or IO Bus will send out only 1's. The Transmit Buffer will not be used.                 2=Transmit Enabled in 0 Mode. The MOSI or IO Bus will send out only 0's. The Transmit Buffer will not be used.                 1=Transmit Enabled. Data will be fetched from the Transmit Buffer and sent out on the MOSI or IO Bus.                 0=Transmit is Disabled. Not data is sent. This will cause the MOSI be to be undriven, or the IO bus to be undriven if Receive is also disabled. Position */
#define QMSPI_CTRL_TX_TRANS_EN_Msk            (_UINT32_(0x3) << QMSPI_CTRL_TX_TRANS_EN_Pos)        /* (QMSPI_CTRL) This field bit selects the transmit function of the SPI interface.                 3=Transmit Enabled in 1 Mode. The MOSI or IO Bus will send out only 1's. The Transmit Buffer will not be used.                 2=Transmit Enabled in 0 Mode. The MOSI or IO Bus will send out only 0's. The Transmit Buffer will not be used.                 1=Transmit Enabled. Data will be fetched from the Transmit Buffer and sent out on the MOSI or IO Bus.                 0=Transmit is Disabled. Not data is sent. This will cause the MOSI be to be undriven, or the IO bus to be undriven if Receive is also disabled. Mask */
#define QMSPI_CTRL_TX_TRANS_EN(value)         (QMSPI_CTRL_TX_TRANS_EN_Msk & (_UINT32_(value) << QMSPI_CTRL_TX_TRANS_EN_Pos)) /* Assigment of value for TX_TRANS_EN in the QMSPI_CTRL register */
#define QMSPI_CTRL_TX_DMA_EN_Pos              _UINT32_(4)                                          /* (QMSPI_CTRL) This bit enables DMA support for Transmit Transfer. If enabled, DMA will be requested to fill the FIFO until either     the interface reaches TRANSFER_LENGTH or the DMA sends a termination request. The size defined here must match DMA programmed access size.     1=DMA is enabled.and set to 1 Byte                 2=DMA is enabled and set to 2 Bytes                 3=DMA is enabled and set to 4 Bytes.     0=DMA is disabled. All data in the Transmit Buffer must be emptied by firmware Position */
#define QMSPI_CTRL_TX_DMA_EN_Msk              (_UINT32_(0x3) << QMSPI_CTRL_TX_DMA_EN_Pos)          /* (QMSPI_CTRL) This bit enables DMA support for Transmit Transfer. If enabled, DMA will be requested to fill the FIFO until either     the interface reaches TRANSFER_LENGTH or the DMA sends a termination request. The size defined here must match DMA programmed access size.     1=DMA is enabled.and set to 1 Byte                 2=DMA is enabled and set to 2 Bytes                 3=DMA is enabled and set to 4 Bytes.     0=DMA is disabled. All data in the Transmit Buffer must be emptied by firmware Mask */
#define QMSPI_CTRL_TX_DMA_EN(value)           (QMSPI_CTRL_TX_DMA_EN_Msk & (_UINT32_(value) << QMSPI_CTRL_TX_DMA_EN_Pos)) /* Assigment of value for TX_DMA_EN in the QMSPI_CTRL register */
#define QMSPI_CTRL_RX_TRANS_EN_Pos            _UINT32_(6)                                          /* (QMSPI_CTRL) This bit enables the receive function of the SPI interface.                 1=Receive is enabled. Data received from the SPI Slave is stored in the Receive Buffer                 0=Receive is disabled Position */
#define QMSPI_CTRL_RX_TRANS_EN_Msk            (_UINT32_(0x1) << QMSPI_CTRL_RX_TRANS_EN_Pos)        /* (QMSPI_CTRL) This bit enables the receive function of the SPI interface.                 1=Receive is enabled. Data received from the SPI Slave is stored in the Receive Buffer                 0=Receive is disabled Mask */
#define QMSPI_CTRL_RX_TRANS_EN(value)         (QMSPI_CTRL_RX_TRANS_EN_Msk & (_UINT32_(value) << QMSPI_CTRL_RX_TRANS_EN_Pos)) /* Assigment of value for RX_TRANS_EN in the QMSPI_CTRL register */
#define QMSPI_CTRL_RX_DMA_EN_Pos              _UINT32_(7)                                          /* (QMSPI_CTRL) This bit enables DMA support for Receive Transfer. If enabled, DMA will be requested to empty the FIFO until either the interface                 reaches TRANSFER_LENGTH or the DMA sends a termination request. The size defined here must match DMA programmed access size.                 1=DMA is enabled.and set to 1 Byte                 2=DMA is enabled and set to 2 Bytes                 3=DMA is enabled and set to 4 Bytes                 0=DMA is disabled. All data in the Receive Buffer must be emptied by firmware Position */
#define QMSPI_CTRL_RX_DMA_EN_Msk              (_UINT32_(0x3) << QMSPI_CTRL_RX_DMA_EN_Pos)          /* (QMSPI_CTRL) This bit enables DMA support for Receive Transfer. If enabled, DMA will be requested to empty the FIFO until either the interface                 reaches TRANSFER_LENGTH or the DMA sends a termination request. The size defined here must match DMA programmed access size.                 1=DMA is enabled.and set to 1 Byte                 2=DMA is enabled and set to 2 Bytes                 3=DMA is enabled and set to 4 Bytes                 0=DMA is disabled. All data in the Receive Buffer must be emptied by firmware Mask */
#define QMSPI_CTRL_RX_DMA_EN(value)           (QMSPI_CTRL_RX_DMA_EN_Msk & (_UINT32_(value) << QMSPI_CTRL_RX_DMA_EN_Pos)) /* Assigment of value for RX_DMA_EN in the QMSPI_CTRL register */
#define QMSPI_CTRL_CLOSE_TRANS_EN_Pos         _UINT32_(9)                                          /* (QMSPI_CTRL) This selects what action is taken at the end of a transfer. When the transaction closes, the Chip Select de-asserts, the SPI      interface returns to IDLE and the DMA interface terminates When Description Buffers are in use this bit must be set only on the Last Buffer.     1=The transaction is terminated     0=The transaction is not terminated Position */
#define QMSPI_CTRL_CLOSE_TRANS_EN_Msk         (_UINT32_(0x1) << QMSPI_CTRL_CLOSE_TRANS_EN_Pos)     /* (QMSPI_CTRL) This selects what action is taken at the end of a transfer. When the transaction closes, the Chip Select de-asserts, the SPI      interface returns to IDLE and the DMA interface terminates When Description Buffers are in use this bit must be set only on the Last Buffer.     1=The transaction is terminated     0=The transaction is not terminated Mask */
#define QMSPI_CTRL_CLOSE_TRANS_EN(value)      (QMSPI_CTRL_CLOSE_TRANS_EN_Msk & (_UINT32_(value) << QMSPI_CTRL_CLOSE_TRANS_EN_Pos)) /* Assigment of value for CLOSE_TRANS_EN in the QMSPI_CTRL register */
#define QMSPI_CTRL_TRANS_UNITS_Pos            _UINT32_(10)                                         /* (QMSPI_CTRL) 3=TRANSFER_LENGTH defined in units of 16-byte segments     2=TRANSFER_LENGTH defined in units of 4-byte segments     1=TRANSFER_LENGTH defined in units of bytes     0=TRANSFER_LENGTH defined in units of bits. Position */
#define QMSPI_CTRL_TRANS_UNITS_Msk            (_UINT32_(0x3) << QMSPI_CTRL_TRANS_UNITS_Pos)        /* (QMSPI_CTRL) 3=TRANSFER_LENGTH defined in units of 16-byte segments     2=TRANSFER_LENGTH defined in units of 4-byte segments     1=TRANSFER_LENGTH defined in units of bytes     0=TRANSFER_LENGTH defined in units of bits. Mask */
#define QMSPI_CTRL_TRANS_UNITS(value)         (QMSPI_CTRL_TRANS_UNITS_Msk & (_UINT32_(value) << QMSPI_CTRL_TRANS_UNITS_Pos)) /* Assigment of value for TRANS_UNITS in the QMSPI_CTRL register */
#define QMSPI_CTRL_DESCR_BUFF_PTR_Pos         _UINT32_(12)                                         /* (QMSPI_CTRL) This field selects the first buffer used if Description Buffers are enabled. Position */
#define QMSPI_CTRL_DESCR_BUFF_PTR_Msk         (_UINT32_(0xF) << QMSPI_CTRL_DESCR_BUFF_PTR_Pos)     /* (QMSPI_CTRL) This field selects the first buffer used if Description Buffers are enabled. Mask */
#define QMSPI_CTRL_DESCR_BUFF_PTR(value)      (QMSPI_CTRL_DESCR_BUFF_PTR_Msk & (_UINT32_(value) << QMSPI_CTRL_DESCR_BUFF_PTR_Pos)) /* Assigment of value for DESCR_BUFF_PTR in the QMSPI_CTRL register */
#define QMSPI_CTRL_DESCR_BUFF_EN_Pos          _UINT32_(16)                                         /* (QMSPI_CTRL) This enables the Description Buffers to be used.     1=Description Buffers in use. The first buffer is defined in DESCRIPTION_BUFFER_POINTER     0=Description Buffers disabled. Position */
#define QMSPI_CTRL_DESCR_BUFF_EN_Msk          (_UINT32_(0x1) << QMSPI_CTRL_DESCR_BUFF_EN_Pos)      /* (QMSPI_CTRL) This enables the Description Buffers to be used.     1=Description Buffers in use. The first buffer is defined in DESCRIPTION_BUFFER_POINTER     0=Description Buffers disabled. Mask */
#define QMSPI_CTRL_DESCR_BUFF_EN(value)       (QMSPI_CTRL_DESCR_BUFF_EN_Msk & (_UINT32_(value) << QMSPI_CTRL_DESCR_BUFF_EN_Pos)) /* Assigment of value for DESCR_BUFF_EN in the QMSPI_CTRL register */
#define QMSPI_CTRL_TRANS_LEN_Pos              _UINT32_(17)                                         /* (QMSPI_CTRL) The length of the SPI transfer. The count is in bytes or bits, depending on the value of TRANSFER_LENGTH_BITS.     A value of 0 means an infinite length transfer. Position */
#define QMSPI_CTRL_TRANS_LEN_Msk              (_UINT32_(0x7FFF) << QMSPI_CTRL_TRANS_LEN_Pos)       /* (QMSPI_CTRL) The length of the SPI transfer. The count is in bytes or bits, depending on the value of TRANSFER_LENGTH_BITS.     A value of 0 means an infinite length transfer. Mask */
#define QMSPI_CTRL_TRANS_LEN(value)           (QMSPI_CTRL_TRANS_LEN_Msk & (_UINT32_(value) << QMSPI_CTRL_TRANS_LEN_Pos)) /* Assigment of value for TRANS_LEN in the QMSPI_CTRL register */
#define QMSPI_CTRL_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (QMSPI_CTRL) Register Mask  */


/* -------- QMSPI_EXE : (QMSPI Offset: 0x08) (R/W 32) QMSPI Execute Register -------- */
#define QMSPI_EXE_RESETVALUE                  _UINT32_(0x00)                                       /*  (QMSPI_EXE) QMSPI Execute Register  Reset Value */

#define QMSPI_EXE_START_Pos                   _UINT32_(0)                                          /* (QMSPI_EXE) Writing a 1 to this bit will start the SPI transfer. Writing a 0 to this bit has no effect. This bit is self-clearing.     This bit must not be set to 1 if the field STOP in this register is set to 1. Position */
#define QMSPI_EXE_START_Msk                   (_UINT32_(0x1) << QMSPI_EXE_START_Pos)               /* (QMSPI_EXE) Writing a 1 to this bit will start the SPI transfer. Writing a 0 to this bit has no effect. This bit is self-clearing.     This bit must not be set to 1 if the field STOP in this register is set to 1. Mask */
#define QMSPI_EXE_START(value)                (QMSPI_EXE_START_Msk & (_UINT32_(value) << QMSPI_EXE_START_Pos)) /* Assigment of value for START in the QMSPI_EXE register */
#define QMSPI_EXE_STOP_Pos                    _UINT32_(1)                                          /* (QMSPI_EXE) Writing a 1 to this bit will stop any transfer in progress at the next byte boundary. Writing a 0 to this bit has no effect.     This bit is self clearing. This bit must not be set to 1 if the field START in this register is set to 1. Position */
#define QMSPI_EXE_STOP_Msk                    (_UINT32_(0x1) << QMSPI_EXE_STOP_Pos)                /* (QMSPI_EXE) Writing a 1 to this bit will stop any transfer in progress at the next byte boundary. Writing a 0 to this bit has no effect.     This bit is self clearing. This bit must not be set to 1 if the field START in this register is set to 1. Mask */
#define QMSPI_EXE_STOP(value)                 (QMSPI_EXE_STOP_Msk & (_UINT32_(value) << QMSPI_EXE_STOP_Pos)) /* Assigment of value for STOP in the QMSPI_EXE register */
#define QMSPI_EXE_CLR_DAT_BUFF_Pos            _UINT32_(2)                                          /* (QMSPI_EXE) Writing a 1 to this bit will clear out the Transmit and Receive FIFOs. Any data stored in the FIFOs is discarded and all count fields are reset.     Writing a 0 to this bit has no effect. This bit is self clearing. Position */
#define QMSPI_EXE_CLR_DAT_BUFF_Msk            (_UINT32_(0x1) << QMSPI_EXE_CLR_DAT_BUFF_Pos)        /* (QMSPI_EXE) Writing a 1 to this bit will clear out the Transmit and Receive FIFOs. Any data stored in the FIFOs is discarded and all count fields are reset.     Writing a 0 to this bit has no effect. This bit is self clearing. Mask */
#define QMSPI_EXE_CLR_DAT_BUFF(value)         (QMSPI_EXE_CLR_DAT_BUFF_Msk & (_UINT32_(value) << QMSPI_EXE_CLR_DAT_BUFF_Pos)) /* Assigment of value for CLR_DAT_BUFF in the QMSPI_EXE register */
#define QMSPI_EXE_Msk                         _UINT32_(0x00000007)                                 /* (QMSPI_EXE) Register Mask  */


/* -------- QMSPI_IFCTRL : (QMSPI Offset: 0x0C) (R/W 32) QMSPI Interface Control Register -------- */
#define QMSPI_IFCTRL_RESETVALUE               _UINT32_(0x00)                                       /*  (QMSPI_IFCTRL) QMSPI Interface Control Register  Reset Value */

#define QMSPI_IFCTRL_WR_PRCT_OUT_VAL_Pos      _UINT32_(0)                                          /* (QMSPI_IFCTRL) This bit sets the value on the WRITE PROTECT SPI Output Port if it is driven.                 1=WRITE PROTECT is driven to 1; 0=WRITE PROTECT is driven to 0 Position */
#define QMSPI_IFCTRL_WR_PRCT_OUT_VAL_Msk      (_UINT32_(0x1) << QMSPI_IFCTRL_WR_PRCT_OUT_VAL_Pos)  /* (QMSPI_IFCTRL) This bit sets the value on the WRITE PROTECT SPI Output Port if it is driven.                 1=WRITE PROTECT is driven to 1; 0=WRITE PROTECT is driven to 0 Mask */
#define QMSPI_IFCTRL_WR_PRCT_OUT_VAL(value)   (QMSPI_IFCTRL_WR_PRCT_OUT_VAL_Msk & (_UINT32_(value) << QMSPI_IFCTRL_WR_PRCT_OUT_VAL_Pos)) /* Assigment of value for WR_PRCT_OUT_VAL in the QMSPI_IFCTRL register */
#define QMSPI_IFCTRL_WR_PRCT_OUT_EN_Pos       _UINT32_(1)                                          /* (QMSPI_IFCTRL) 1=WRITE PROTECT SPI Output Port is driven                 0=WRITE PROTECT SPI Output Port is not driven Position */
#define QMSPI_IFCTRL_WR_PRCT_OUT_EN_Msk       (_UINT32_(0x1) << QMSPI_IFCTRL_WR_PRCT_OUT_EN_Pos)   /* (QMSPI_IFCTRL) 1=WRITE PROTECT SPI Output Port is driven                 0=WRITE PROTECT SPI Output Port is not driven Mask */
#define QMSPI_IFCTRL_WR_PRCT_OUT_EN(value)    (QMSPI_IFCTRL_WR_PRCT_OUT_EN_Msk & (_UINT32_(value) << QMSPI_IFCTRL_WR_PRCT_OUT_EN_Pos)) /* Assigment of value for WR_PRCT_OUT_EN in the QMSPI_IFCTRL register */
#define QMSPI_IFCTRL_HLD_OUT_VAL_Pos          _UINT32_(2)                                          /* (QMSPI_IFCTRL) This bit sets the value on the HOLD SPI Output Port if it is driven.                 1=HOLD is driven to 1; 0=HOLD is driven to 0. Position */
#define QMSPI_IFCTRL_HLD_OUT_VAL_Msk          (_UINT32_(0x1) << QMSPI_IFCTRL_HLD_OUT_VAL_Pos)      /* (QMSPI_IFCTRL) This bit sets the value on the HOLD SPI Output Port if it is driven.                 1=HOLD is driven to 1; 0=HOLD is driven to 0. Mask */
#define QMSPI_IFCTRL_HLD_OUT_VAL(value)       (QMSPI_IFCTRL_HLD_OUT_VAL_Msk & (_UINT32_(value) << QMSPI_IFCTRL_HLD_OUT_VAL_Pos)) /* Assigment of value for HLD_OUT_VAL in the QMSPI_IFCTRL register */
#define QMSPI_IFCTRL_HLD_OUT_EN_Pos           _UINT32_(3)                                          /* (QMSPI_IFCTRL) 1=HOLD SPI Output Port is driven                 0=HOLD SPI Output Port is not driven. Position */
#define QMSPI_IFCTRL_HLD_OUT_EN_Msk           (_UINT32_(0x1) << QMSPI_IFCTRL_HLD_OUT_EN_Pos)       /* (QMSPI_IFCTRL) 1=HOLD SPI Output Port is driven                 0=HOLD SPI Output Port is not driven. Mask */
#define QMSPI_IFCTRL_HLD_OUT_EN(value)        (QMSPI_IFCTRL_HLD_OUT_EN_Msk & (_UINT32_(value) << QMSPI_IFCTRL_HLD_OUT_EN_Pos)) /* Assigment of value for HLD_OUT_EN in the QMSPI_IFCTRL register */
#define QMSPI_IFCTRL_PD_ON_NOT_SEL_Pos        _UINT32_(4)                                          /* (QMSPI_IFCTRL) 1=Enable pull-down resistors on Receive pins while the SPI Chip Select signal is not asserted     0=No pull-down resistors enabled on Receive pins Position */
#define QMSPI_IFCTRL_PD_ON_NOT_SEL_Msk        (_UINT32_(0x1) << QMSPI_IFCTRL_PD_ON_NOT_SEL_Pos)    /* (QMSPI_IFCTRL) 1=Enable pull-down resistors on Receive pins while the SPI Chip Select signal is not asserted     0=No pull-down resistors enabled on Receive pins Mask */
#define QMSPI_IFCTRL_PD_ON_NOT_SEL(value)     (QMSPI_IFCTRL_PD_ON_NOT_SEL_Msk & (_UINT32_(value) << QMSPI_IFCTRL_PD_ON_NOT_SEL_Pos)) /* Assigment of value for PD_ON_NOT_SEL in the QMSPI_IFCTRL register */
#define QMSPI_IFCTRL_PU_ON_NOTSEL_Pos         _UINT32_(5)                                          /* (QMSPI_IFCTRL) 1=Enable pull-up resistors on Receive pins while the SPI Chip Select signal is not asserted     0=No pull-up resistors enabled on Receive pins. Position */
#define QMSPI_IFCTRL_PU_ON_NOTSEL_Msk         (_UINT32_(0x1) << QMSPI_IFCTRL_PU_ON_NOTSEL_Pos)     /* (QMSPI_IFCTRL) 1=Enable pull-up resistors on Receive pins while the SPI Chip Select signal is not asserted     0=No pull-up resistors enabled on Receive pins. Mask */
#define QMSPI_IFCTRL_PU_ON_NOTSEL(value)      (QMSPI_IFCTRL_PU_ON_NOTSEL_Msk & (_UINT32_(value) << QMSPI_IFCTRL_PU_ON_NOTSEL_Pos)) /* Assigment of value for PU_ON_NOTSEL in the QMSPI_IFCTRL register */
#define QMSPI_IFCTRL_PD_ON_NOTDRIVEN_Pos      _UINT32_(6)                                          /* (QMSPI_IFCTRL) 1=Enable pull-down resistors on Transmit pins while the pins are not driven     0=No pull-down resistors enabled ion Transmit pins. Position */
#define QMSPI_IFCTRL_PD_ON_NOTDRIVEN_Msk      (_UINT32_(0x1) << QMSPI_IFCTRL_PD_ON_NOTDRIVEN_Pos)  /* (QMSPI_IFCTRL) 1=Enable pull-down resistors on Transmit pins while the pins are not driven     0=No pull-down resistors enabled ion Transmit pins. Mask */
#define QMSPI_IFCTRL_PD_ON_NOTDRIVEN(value)   (QMSPI_IFCTRL_PD_ON_NOTDRIVEN_Msk & (_UINT32_(value) << QMSPI_IFCTRL_PD_ON_NOTDRIVEN_Pos)) /* Assigment of value for PD_ON_NOTDRIVEN in the QMSPI_IFCTRL register */
#define QMSPI_IFCTRL_PU_ON_NOTDRIVEN_Pos      _UINT32_(7)                                          /* (QMSPI_IFCTRL) 1=Enable pull-up resistors on Transmit pins while the pins are not driven     0=No pull-up resistors enabled ion Transmit pins. Position */
#define QMSPI_IFCTRL_PU_ON_NOTDRIVEN_Msk      (_UINT32_(0x1) << QMSPI_IFCTRL_PU_ON_NOTDRIVEN_Pos)  /* (QMSPI_IFCTRL) 1=Enable pull-up resistors on Transmit pins while the pins are not driven     0=No pull-up resistors enabled ion Transmit pins. Mask */
#define QMSPI_IFCTRL_PU_ON_NOTDRIVEN(value)   (QMSPI_IFCTRL_PU_ON_NOTDRIVEN_Msk & (_UINT32_(value) << QMSPI_IFCTRL_PU_ON_NOTDRIVEN_Pos)) /* Assigment of value for PU_ON_NOTDRIVEN in the QMSPI_IFCTRL register */
#define QMSPI_IFCTRL_Msk                      _UINT32_(0x000000FF)                                 /* (QMSPI_IFCTRL) Register Mask  */


/* -------- QMSPI_STS : (QMSPI Offset: 0x10) (R/W 32) QMSPI Status Register -------- */
#define QMSPI_STS_RESETVALUE                  _UINT32_(0x2200)                                     /*  (QMSPI_STS) QMSPI Status Register  Reset Value */

#define QMSPI_STS_TRANS_COMPL_Pos             _UINT32_(0)                                          /* (QMSPI_STS) In Manual Mode (neither DMA nor Description Buffers are enabled), this bit will be set to 1 when the transfer matches TRANSFER_LENGTH.                 If DMA Mode is enabled, this bit will be set to 1 when DMA_COMPLETE is set to 1. In Description Buffer Mode, this bit will be set to 1 only when the Last Buffer completes its transfer.     In all cases, this bit will be set to 1 if the STOP bit is set to 1 and the controller has completed the current 8 bits being copied.                 1=Transfer completed; 0=Transfer not complete. Position */
#define QMSPI_STS_TRANS_COMPL_Msk             (_UINT32_(0x1) << QMSPI_STS_TRANS_COMPL_Pos)         /* (QMSPI_STS) In Manual Mode (neither DMA nor Description Buffers are enabled), this bit will be set to 1 when the transfer matches TRANSFER_LENGTH.                 If DMA Mode is enabled, this bit will be set to 1 when DMA_COMPLETE is set to 1. In Description Buffer Mode, this bit will be set to 1 only when the Last Buffer completes its transfer.     In all cases, this bit will be set to 1 if the STOP bit is set to 1 and the controller has completed the current 8 bits being copied.                 1=Transfer completed; 0=Transfer not complete. Mask */
#define QMSPI_STS_TRANS_COMPL(value)          (QMSPI_STS_TRANS_COMPL_Msk & (_UINT32_(value) << QMSPI_STS_TRANS_COMPL_Pos)) /* Assigment of value for TRANS_COMPL in the QMSPI_STS register */
#define QMSPI_STS_DMA_COMPL_Pos               _UINT32_(1)                                          /* (QMSPI_STS) This field has no meaning if DMA is not enabled. This bit will be set to 1 when the DMA controller asserts the DONE signal to the SPI controller.     This occurs either when the SPI controller has closed the DMA transfer, or the DMA channel has completed its count. If both Transmit and Receive DMA transfers are      active, then this bit will only assert after both have completed. If CLOSE_TRANSFER_ENABLE is enabled, DMA_COMPLETE and TRANSFER_COMPLETE will be asserted simultaneously.     This status is not inhibited by the description buffers, so it can fire on all valid description buffers while operating in that mode.                 1=DMA completed; 0=DMA not completed. Position */
#define QMSPI_STS_DMA_COMPL_Msk               (_UINT32_(0x1) << QMSPI_STS_DMA_COMPL_Pos)           /* (QMSPI_STS) This field has no meaning if DMA is not enabled. This bit will be set to 1 when the DMA controller asserts the DONE signal to the SPI controller.     This occurs either when the SPI controller has closed the DMA transfer, or the DMA channel has completed its count. If both Transmit and Receive DMA transfers are      active, then this bit will only assert after both have completed. If CLOSE_TRANSFER_ENABLE is enabled, DMA_COMPLETE and TRANSFER_COMPLETE will be asserted simultaneously.     This status is not inhibited by the description buffers, so it can fire on all valid description buffers while operating in that mode.                 1=DMA completed; 0=DMA not completed. Mask */
#define QMSPI_STS_DMA_COMPL(value)            (QMSPI_STS_DMA_COMPL_Msk & (_UINT32_(value) << QMSPI_STS_DMA_COMPL_Pos)) /* Assigment of value for DMA_COMPL in the QMSPI_STS register */
#define QMSPI_STS_TX_BUFF_ERR_Pos             _UINT32_(2)                                          /* (QMSPI_STS) 1=Overflow error occurred (attempt to write to a full Transmit Buffer)                 0=No overflow occurred. Position */
#define QMSPI_STS_TX_BUFF_ERR_Msk             (_UINT32_(0x1) << QMSPI_STS_TX_BUFF_ERR_Pos)         /* (QMSPI_STS) 1=Overflow error occurred (attempt to write to a full Transmit Buffer)                 0=No overflow occurred. Mask */
#define QMSPI_STS_TX_BUFF_ERR(value)          (QMSPI_STS_TX_BUFF_ERR_Msk & (_UINT32_(value) << QMSPI_STS_TX_BUFF_ERR_Pos)) /* Assigment of value for TX_BUFF_ERR in the QMSPI_STS register */
#define QMSPI_STS_RX_BUFF_ERR_Pos             _UINT32_(3)                                          /* (QMSPI_STS) 1=Underflow error occurred (attempt to read from an empty Receive Buffer)                 0=No underflow occurred. Position */
#define QMSPI_STS_RX_BUFF_ERR_Msk             (_UINT32_(0x1) << QMSPI_STS_RX_BUFF_ERR_Pos)         /* (QMSPI_STS) 1=Underflow error occurred (attempt to read from an empty Receive Buffer)                 0=No underflow occurred. Mask */
#define QMSPI_STS_RX_BUFF_ERR(value)          (QMSPI_STS_RX_BUFF_ERR_Msk & (_UINT32_(value) << QMSPI_STS_RX_BUFF_ERR_Pos)) /* Assigment of value for RX_BUFF_ERR in the QMSPI_STS register */
#define QMSPI_STS_PRGM_ERR_Pos                _UINT32_(4)                                          /* (QMSPI_STS) This bit if a programming error is detected.     1=Programming Error detected; 0=No programming error detected. Position */
#define QMSPI_STS_PRGM_ERR_Msk                (_UINT32_(0x1) << QMSPI_STS_PRGM_ERR_Pos)            /* (QMSPI_STS) This bit if a programming error is detected.     1=Programming Error detected; 0=No programming error detected. Mask */
#define QMSPI_STS_PRGM_ERR(value)             (QMSPI_STS_PRGM_ERR_Msk & (_UINT32_(value) << QMSPI_STS_PRGM_ERR_Pos)) /* Assigment of value for PRGM_ERR in the QMSPI_STS register */
#define QMSPI_STS_LDMA_RXERR_Pos              _UINT32_(5)                                          /* (QMSPI_STS) This bit is set if Local DMA Receive error is detected.     1=Local DMA RX Error detected; 0=No Local DMA RX detected. Position */
#define QMSPI_STS_LDMA_RXERR_Msk              (_UINT32_(0x1) << QMSPI_STS_LDMA_RXERR_Pos)          /* (QMSPI_STS) This bit is set if Local DMA Receive error is detected.     1=Local DMA RX Error detected; 0=No Local DMA RX detected. Mask */
#define QMSPI_STS_LDMA_RXERR(value)           (QMSPI_STS_LDMA_RXERR_Msk & (_UINT32_(value) << QMSPI_STS_LDMA_RXERR_Pos)) /* Assigment of value for LDMA_RXERR in the QMSPI_STS register */
#define QMSPI_STS_LDMA_TXERR_Pos              _UINT32_(6)                                          /* (QMSPI_STS) This bit is set if Local DMA Transmit error is detected.     1=Local DMA TX Error detected; 0=No Local DMA TX detected. Position */
#define QMSPI_STS_LDMA_TXERR_Msk              (_UINT32_(0x1) << QMSPI_STS_LDMA_TXERR_Pos)          /* (QMSPI_STS) This bit is set if Local DMA Transmit error is detected.     1=Local DMA TX Error detected; 0=No Local DMA TX detected. Mask */
#define QMSPI_STS_LDMA_TXERR(value)           (QMSPI_STS_LDMA_TXERR_Msk & (_UINT32_(value) << QMSPI_STS_LDMA_TXERR_Pos)) /* Assigment of value for LDMA_TXERR in the QMSPI_STS register */
#define QMSPI_STS_TX_BUFF_FULL_Pos            _UINT32_(8)                                          /* (QMSPI_STS) 1=The Transmit Buffer is full     0=The Transmit Buffer is not full. Position */
#define QMSPI_STS_TX_BUFF_FULL_Msk            (_UINT32_(0x1) << QMSPI_STS_TX_BUFF_FULL_Pos)        /* (QMSPI_STS) 1=The Transmit Buffer is full     0=The Transmit Buffer is not full. Mask */
#define QMSPI_STS_TX_BUFF_FULL(value)         (QMSPI_STS_TX_BUFF_FULL_Msk & (_UINT32_(value) << QMSPI_STS_TX_BUFF_FULL_Pos)) /* Assigment of value for TX_BUFF_FULL in the QMSPI_STS register */
#define QMSPI_STS_TX_BUFF_EMP_Pos             _UINT32_(9)                                          /* (QMSPI_STS) 1=The Transmit Buffer is empty     0=The Transmit Buffer is not empty. Position */
#define QMSPI_STS_TX_BUFF_EMP_Msk             (_UINT32_(0x1) << QMSPI_STS_TX_BUFF_EMP_Pos)         /* (QMSPI_STS) 1=The Transmit Buffer is empty     0=The Transmit Buffer is not empty. Mask */
#define QMSPI_STS_TX_BUFF_EMP(value)          (QMSPI_STS_TX_BUFF_EMP_Msk & (_UINT32_(value) << QMSPI_STS_TX_BUFF_EMP_Pos)) /* Assigment of value for TX_BUFF_EMP in the QMSPI_STS register */
#define QMSPI_STS_TX_BUFF_REQ_Pos             _UINT32_(10)                                         /* (QMSPI_STS) This status is asserted if the Transmit Buffer reaches a high water mark established by the TRANSMIT_BUFFER_TRIGGER field.     1=TRANSMIT_BUFFER_COUNT is less than or equal to TRANSMIT_BUFFER_TRIGGER; 0=TRANSMIT_BUFFER_COUNT is greater than TRANSMIT_BUFFER_TRIGGER. Position */
#define QMSPI_STS_TX_BUFF_REQ_Msk             (_UINT32_(0x1) << QMSPI_STS_TX_BUFF_REQ_Pos)         /* (QMSPI_STS) This status is asserted if the Transmit Buffer reaches a high water mark established by the TRANSMIT_BUFFER_TRIGGER field.     1=TRANSMIT_BUFFER_COUNT is less than or equal to TRANSMIT_BUFFER_TRIGGER; 0=TRANSMIT_BUFFER_COUNT is greater than TRANSMIT_BUFFER_TRIGGER. Mask */
#define QMSPI_STS_TX_BUFF_REQ(value)          (QMSPI_STS_TX_BUFF_REQ_Msk & (_UINT32_(value) << QMSPI_STS_TX_BUFF_REQ_Pos)) /* Assigment of value for TX_BUFF_REQ in the QMSPI_STS register */
#define QMSPI_STS_TX_BUFF_STALL_Pos           _UINT32_(11)                                         /* (QMSPI_STS) 1=The SPI interface had been stalled due to a flow issue (an attempt by the interface to read from an empty Transmit Buffer)     0=No stalls occurred. Position */
#define QMSPI_STS_TX_BUFF_STALL_Msk           (_UINT32_(0x1) << QMSPI_STS_TX_BUFF_STALL_Pos)       /* (QMSPI_STS) 1=The SPI interface had been stalled due to a flow issue (an attempt by the interface to read from an empty Transmit Buffer)     0=No stalls occurred. Mask */
#define QMSPI_STS_TX_BUFF_STALL(value)        (QMSPI_STS_TX_BUFF_STALL_Msk & (_UINT32_(value) << QMSPI_STS_TX_BUFF_STALL_Pos)) /* Assigment of value for TX_BUFF_STALL in the QMSPI_STS register */
#define QMSPI_STS_RX_BUFF_FULL_Pos            _UINT32_(12)                                         /* (QMSPI_STS) 1=The Receive Buffer is full     0=The Receive Buffer is not full. Position */
#define QMSPI_STS_RX_BUFF_FULL_Msk            (_UINT32_(0x1) << QMSPI_STS_RX_BUFF_FULL_Pos)        /* (QMSPI_STS) 1=The Receive Buffer is full     0=The Receive Buffer is not full. Mask */
#define QMSPI_STS_RX_BUFF_FULL(value)         (QMSPI_STS_RX_BUFF_FULL_Msk & (_UINT32_(value) << QMSPI_STS_RX_BUFF_FULL_Pos)) /* Assigment of value for RX_BUFF_FULL in the QMSPI_STS register */
#define QMSPI_STS_RX_BUFF_EMP_Pos             _UINT32_(13)                                         /* (QMSPI_STS) 1=The Receive Buffer is empty     0=The Receive Buffer is not empty. Position */
#define QMSPI_STS_RX_BUFF_EMP_Msk             (_UINT32_(0x1) << QMSPI_STS_RX_BUFF_EMP_Pos)         /* (QMSPI_STS) 1=The Receive Buffer is empty     0=The Receive Buffer is not empty. Mask */
#define QMSPI_STS_RX_BUFF_EMP(value)          (QMSPI_STS_RX_BUFF_EMP_Msk & (_UINT32_(value) << QMSPI_STS_RX_BUFF_EMP_Pos)) /* Assigment of value for RX_BUFF_EMP in the QMSPI_STS register */
#define QMSPI_STS_RX_BUFF_REQ_Pos             _UINT32_(14)                                         /* (QMSPI_STS) This status is asserted if the Receive Buffer reaches a high water mark established by the RECEIVE_BUFFER_TRIGGER field.                 1=RECEIVE_BUFFER_COUNT is greater than or equal to RECEIVE_BUFFER_TRIGGER                 0=RECEIVE_BUFFER_COUNT is less than RECEIVE_BUFFER_TRIGGER. Position */
#define QMSPI_STS_RX_BUFF_REQ_Msk             (_UINT32_(0x1) << QMSPI_STS_RX_BUFF_REQ_Pos)         /* (QMSPI_STS) This status is asserted if the Receive Buffer reaches a high water mark established by the RECEIVE_BUFFER_TRIGGER field.                 1=RECEIVE_BUFFER_COUNT is greater than or equal to RECEIVE_BUFFER_TRIGGER                 0=RECEIVE_BUFFER_COUNT is less than RECEIVE_BUFFER_TRIGGER. Mask */
#define QMSPI_STS_RX_BUFF_REQ(value)          (QMSPI_STS_RX_BUFF_REQ_Msk & (_UINT32_(value) << QMSPI_STS_RX_BUFF_REQ_Pos)) /* Assigment of value for RX_BUFF_REQ in the QMSPI_STS register */
#define QMSPI_STS_RX_BUFF_STALL_Pos           _UINT32_(15)                                         /* (QMSPI_STS) 1=The SPI interface had been stalled due to a flow issue (an attempt by the interface to write to a full Receive Buffer)     0=No stalls occurred. Position */
#define QMSPI_STS_RX_BUFF_STALL_Msk           (_UINT32_(0x1) << QMSPI_STS_RX_BUFF_STALL_Pos)       /* (QMSPI_STS) 1=The SPI interface had been stalled due to a flow issue (an attempt by the interface to write to a full Receive Buffer)     0=No stalls occurred. Mask */
#define QMSPI_STS_RX_BUFF_STALL(value)        (QMSPI_STS_RX_BUFF_STALL_Msk & (_UINT32_(value) << QMSPI_STS_RX_BUFF_STALL_Pos)) /* Assigment of value for RX_BUFF_STALL in the QMSPI_STS register */
#define QMSPI_STS_TRANS_ACTIV_Pos             _UINT32_(16)                                         /* (QMSPI_STS) 1=A transfer is currently executing     0=No transfer currently in progress. Position */
#define QMSPI_STS_TRANS_ACTIV_Msk             (_UINT32_(0x1) << QMSPI_STS_TRANS_ACTIV_Pos)         /* (QMSPI_STS) 1=A transfer is currently executing     0=No transfer currently in progress. Mask */
#define QMSPI_STS_TRANS_ACTIV(value)          (QMSPI_STS_TRANS_ACTIV_Msk & (_UINT32_(value) << QMSPI_STS_TRANS_ACTIV_Pos)) /* Assigment of value for TRANS_ACTIV in the QMSPI_STS register */
#define QMSPI_STS_CUR_DESCR_BUF_Pos           _UINT32_(24)                                         /* (QMSPI_STS) This field shows the Description Buffer currently active. This field has no meaning if Description Buffers are not enabled. Position */
#define QMSPI_STS_CUR_DESCR_BUF_Msk           (_UINT32_(0xF) << QMSPI_STS_CUR_DESCR_BUF_Pos)       /* (QMSPI_STS) This field shows the Description Buffer currently active. This field has no meaning if Description Buffers are not enabled. Mask */
#define QMSPI_STS_CUR_DESCR_BUF(value)        (QMSPI_STS_CUR_DESCR_BUF_Msk & (_UINT32_(value) << QMSPI_STS_CUR_DESCR_BUF_Pos)) /* Assigment of value for CUR_DESCR_BUF in the QMSPI_STS register */
#define QMSPI_STS_Msk                         _UINT32_(0x0F01FF7F)                                 /* (QMSPI_STS) Register Mask  */


/* -------- QMSPI_BUF_CNT_STS : (QMSPI Offset: 0x14) (R/W 32) QMSPI Buffer Count Status Register -------- */
#define QMSPI_BUF_CNT_STS_RESETVALUE          _UINT32_(0x00)                                       /*  (QMSPI_BUF_CNT_STS) QMSPI Buffer Count Status Register  Reset Value */

#define QMSPI_BUF_CNT_STS_TX_BUFF_CNT_Pos     _UINT32_(0)                                          /* (QMSPI_BUF_CNT_STS) This is a count of the number of bytes currently valid in the Transmit Buffer. Position */
#define QMSPI_BUF_CNT_STS_TX_BUFF_CNT_Msk     (_UINT32_(0xFFFF) << QMSPI_BUF_CNT_STS_TX_BUFF_CNT_Pos) /* (QMSPI_BUF_CNT_STS) This is a count of the number of bytes currently valid in the Transmit Buffer. Mask */
#define QMSPI_BUF_CNT_STS_TX_BUFF_CNT(value)  (QMSPI_BUF_CNT_STS_TX_BUFF_CNT_Msk & (_UINT32_(value) << QMSPI_BUF_CNT_STS_TX_BUFF_CNT_Pos)) /* Assigment of value for TX_BUFF_CNT in the QMSPI_BUF_CNT_STS register */
#define QMSPI_BUF_CNT_STS_RX_BUFF_CNT_Pos     _UINT32_(16)                                         /* (QMSPI_BUF_CNT_STS) This is a count of the number of bytes currently valid in the Receive Buffer. Position */
#define QMSPI_BUF_CNT_STS_RX_BUFF_CNT_Msk     (_UINT32_(0xFFFF) << QMSPI_BUF_CNT_STS_RX_BUFF_CNT_Pos) /* (QMSPI_BUF_CNT_STS) This is a count of the number of bytes currently valid in the Receive Buffer. Mask */
#define QMSPI_BUF_CNT_STS_RX_BUFF_CNT(value)  (QMSPI_BUF_CNT_STS_RX_BUFF_CNT_Msk & (_UINT32_(value) << QMSPI_BUF_CNT_STS_RX_BUFF_CNT_Pos)) /* Assigment of value for RX_BUFF_CNT in the QMSPI_BUF_CNT_STS register */
#define QMSPI_BUF_CNT_STS_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (QMSPI_BUF_CNT_STS) Register Mask  */


/* -------- QMSPI_IEN : (QMSPI Offset: 0x18) (R/W 32) QMSPI Interrupt Enable Register -------- */
#define QMSPI_IEN_RESETVALUE                  _UINT32_(0x2000)                                     /*  (QMSPI_IEN) QMSPI Interrupt Enable Register  Reset Value */

#define QMSPI_IEN_TRANS_COMPL_EN_Pos          _UINT32_(0)                                          /* (QMSPI_IEN) 1=Enable an interrupt if TRANSFER_COMPLETE is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_TRANS_COMPL_EN_Msk          (_UINT32_(0x1) << QMSPI_IEN_TRANS_COMPL_EN_Pos)      /* (QMSPI_IEN) 1=Enable an interrupt if TRANSFER_COMPLETE is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_TRANS_COMPL_EN(value)       (QMSPI_IEN_TRANS_COMPL_EN_Msk & (_UINT32_(value) << QMSPI_IEN_TRANS_COMPL_EN_Pos)) /* Assigment of value for TRANS_COMPL_EN in the QMSPI_IEN register */
#define QMSPI_IEN_DMA_COMPL_EN_Pos            _UINT32_(1)                                          /* (QMSPI_IEN) 1=Enable an interrupt if DMA_COMPLETE is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_DMA_COMPL_EN_Msk            (_UINT32_(0x1) << QMSPI_IEN_DMA_COMPL_EN_Pos)        /* (QMSPI_IEN) 1=Enable an interrupt if DMA_COMPLETE is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_DMA_COMPL_EN(value)         (QMSPI_IEN_DMA_COMPL_EN_Msk & (_UINT32_(value) << QMSPI_IEN_DMA_COMPL_EN_Pos)) /* Assigment of value for DMA_COMPL_EN in the QMSPI_IEN register */
#define QMSPI_IEN_TX_BUF_ERR_EN_Pos           _UINT32_(2)                                          /* (QMSPI_IEN) 1=Enable an interrupt if TRANSMIT_BUFFER_ERROR is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_TX_BUF_ERR_EN_Msk           (_UINT32_(0x1) << QMSPI_IEN_TX_BUF_ERR_EN_Pos)       /* (QMSPI_IEN) 1=Enable an interrupt if TRANSMIT_BUFFER_ERROR is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_TX_BUF_ERR_EN(value)        (QMSPI_IEN_TX_BUF_ERR_EN_Msk & (_UINT32_(value) << QMSPI_IEN_TX_BUF_ERR_EN_Pos)) /* Assigment of value for TX_BUF_ERR_EN in the QMSPI_IEN register */
#define QMSPI_IEN_RX_BUF_ERR_EN_Pos           _UINT32_(3)                                          /* (QMSPI_IEN) 1=Enable an interrupt if RECEIVE_BUFFER_ERROR is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_RX_BUF_ERR_EN_Msk           (_UINT32_(0x1) << QMSPI_IEN_RX_BUF_ERR_EN_Pos)       /* (QMSPI_IEN) 1=Enable an interrupt if RECEIVE_BUFFER_ERROR is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_RX_BUF_ERR_EN(value)        (QMSPI_IEN_RX_BUF_ERR_EN_Msk & (_UINT32_(value) << QMSPI_IEN_RX_BUF_ERR_EN_Pos)) /* Assigment of value for RX_BUF_ERR_EN in the QMSPI_IEN register */
#define QMSPI_IEN_PRGM_ERR_EN_Pos             _UINT32_(4)                                          /* (QMSPI_IEN) 1=Enable an interrupt if PROGRAMMING_ERROR is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_PRGM_ERR_EN_Msk             (_UINT32_(0x1) << QMSPI_IEN_PRGM_ERR_EN_Pos)         /* (QMSPI_IEN) 1=Enable an interrupt if PROGRAMMING_ERROR is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_PRGM_ERR_EN(value)          (QMSPI_IEN_PRGM_ERR_EN_Msk & (_UINT32_(value) << QMSPI_IEN_PRGM_ERR_EN_Pos)) /* Assigment of value for PRGM_ERR_EN in the QMSPI_IEN register */
#define QMSPI_IEN_LDMA_RXERRIE_Pos            _UINT32_(5)                                          /* (QMSPI_IEN) 1=Enable an interrupt if Local DMA RX Error is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_LDMA_RXERRIE_Msk            (_UINT32_(0x1) << QMSPI_IEN_LDMA_RXERRIE_Pos)        /* (QMSPI_IEN) 1=Enable an interrupt if Local DMA RX Error is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_LDMA_RXERRIE(value)         (QMSPI_IEN_LDMA_RXERRIE_Msk & (_UINT32_(value) << QMSPI_IEN_LDMA_RXERRIE_Pos)) /* Assigment of value for LDMA_RXERRIE in the QMSPI_IEN register */
#define QMSPI_IEN_LDMA_TXERRIE_Pos            _UINT32_(6)                                          /* (QMSPI_IEN) 1=Enable an interrupt if Local DMA TX Error is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_LDMA_TXERRIE_Msk            (_UINT32_(0x1) << QMSPI_IEN_LDMA_TXERRIE_Pos)        /* (QMSPI_IEN) 1=Enable an interrupt if Local DMA TX Error is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_LDMA_TXERRIE(value)         (QMSPI_IEN_LDMA_TXERRIE_Msk & (_UINT32_(value) << QMSPI_IEN_LDMA_TXERRIE_Pos)) /* Assigment of value for LDMA_TXERRIE in the QMSPI_IEN register */
#define QMSPI_IEN_TX_BUF_FULL_EN_Pos          _UINT32_(8)                                          /* (QMSPI_IEN) 1=Enable an interrupt if TRANSMIT_BUFFER_FULL is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_TX_BUF_FULL_EN_Msk          (_UINT32_(0x1) << QMSPI_IEN_TX_BUF_FULL_EN_Pos)      /* (QMSPI_IEN) 1=Enable an interrupt if TRANSMIT_BUFFER_FULL is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_TX_BUF_FULL_EN(value)       (QMSPI_IEN_TX_BUF_FULL_EN_Msk & (_UINT32_(value) << QMSPI_IEN_TX_BUF_FULL_EN_Pos)) /* Assigment of value for TX_BUF_FULL_EN in the QMSPI_IEN register */
#define QMSPI_IEN_TX_BUF_EMPTY_EN_Pos         _UINT32_(9)                                          /* (QMSPI_IEN) 1=Enable an interrupt if TRANSMIT_BUFFER_EMPTY is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_TX_BUF_EMPTY_EN_Msk         (_UINT32_(0x1) << QMSPI_IEN_TX_BUF_EMPTY_EN_Pos)     /* (QMSPI_IEN) 1=Enable an interrupt if TRANSMIT_BUFFER_EMPTY is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_TX_BUF_EMPTY_EN(value)      (QMSPI_IEN_TX_BUF_EMPTY_EN_Msk & (_UINT32_(value) << QMSPI_IEN_TX_BUF_EMPTY_EN_Pos)) /* Assigment of value for TX_BUF_EMPTY_EN in the QMSPI_IEN register */
#define QMSPI_IEN_TX_BUF_REQ_EN_Pos           _UINT32_(10)                                         /* (QMSPI_IEN) 1=Enable an interrupt if TRANSMIT_BUFFER_REQUEST is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_TX_BUF_REQ_EN_Msk           (_UINT32_(0x1) << QMSPI_IEN_TX_BUF_REQ_EN_Pos)       /* (QMSPI_IEN) 1=Enable an interrupt if TRANSMIT_BUFFER_REQUEST is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_TX_BUF_REQ_EN(value)        (QMSPI_IEN_TX_BUF_REQ_EN_Msk & (_UINT32_(value) << QMSPI_IEN_TX_BUF_REQ_EN_Pos)) /* Assigment of value for TX_BUF_REQ_EN in the QMSPI_IEN register */
#define QMSPI_IEN_RX_BUF_FUL_EN_Pos           _UINT32_(12)                                         /* (QMSPI_IEN) 1=Enable an interrupt if RECEIVE_BUFFER_FULL is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_RX_BUF_FUL_EN_Msk           (_UINT32_(0x1) << QMSPI_IEN_RX_BUF_FUL_EN_Pos)       /* (QMSPI_IEN) 1=Enable an interrupt if RECEIVE_BUFFER_FULL is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_RX_BUF_FUL_EN(value)        (QMSPI_IEN_RX_BUF_FUL_EN_Msk & (_UINT32_(value) << QMSPI_IEN_RX_BUF_FUL_EN_Pos)) /* Assigment of value for RX_BUF_FUL_EN in the QMSPI_IEN register */
#define QMSPI_IEN_RX_BUF_EMPTY_EN_Pos         _UINT32_(13)                                         /* (QMSPI_IEN) 1=Enable an interrupt if RECEIVE_BUFFER_EMPTY is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_RX_BUF_EMPTY_EN_Msk         (_UINT32_(0x1) << QMSPI_IEN_RX_BUF_EMPTY_EN_Pos)     /* (QMSPI_IEN) 1=Enable an interrupt if RECEIVE_BUFFER_EMPTY is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_RX_BUF_EMPTY_EN(value)      (QMSPI_IEN_RX_BUF_EMPTY_EN_Msk & (_UINT32_(value) << QMSPI_IEN_RX_BUF_EMPTY_EN_Pos)) /* Assigment of value for RX_BUF_EMPTY_EN in the QMSPI_IEN register */
#define QMSPI_IEN_RX_BUF_REQ_EN_Pos           _UINT32_(14)                                         /* (QMSPI_IEN) 1=Enable an interrupt if RECEIVE_BUFFER_REQUEST is asserted     0=Disable the interrupt. Position */
#define QMSPI_IEN_RX_BUF_REQ_EN_Msk           (_UINT32_(0x1) << QMSPI_IEN_RX_BUF_REQ_EN_Pos)       /* (QMSPI_IEN) 1=Enable an interrupt if RECEIVE_BUFFER_REQUEST is asserted     0=Disable the interrupt. Mask */
#define QMSPI_IEN_RX_BUF_REQ_EN(value)        (QMSPI_IEN_RX_BUF_REQ_EN_Msk & (_UINT32_(value) << QMSPI_IEN_RX_BUF_REQ_EN_Pos)) /* Assigment of value for RX_BUF_REQ_EN in the QMSPI_IEN register */
#define QMSPI_IEN_Msk                         _UINT32_(0x0000777F)                                 /* (QMSPI_IEN) Register Mask  */


/* -------- QMSPI_BUF_CNT_TRIG : (QMSPI Offset: 0x1C) (R/W 32) QMSPI Buffer Count Trigger Register -------- */
#define QMSPI_BUF_CNT_TRIG_RESETVALUE         _UINT32_(0x00)                                       /*  (QMSPI_BUF_CNT_TRIG) QMSPI Buffer Count Trigger Register  Reset Value */

#define QMSPI_BUF_CNT_TRIG_TX_BUF_TRIG_Pos    _UINT32_(0)                                          /* (QMSPI_BUF_CNT_TRIG) An interrupt is triggered if the TRANSMIT_BUFFER_COUNT field is less than or equal to this value. A value of 0 disables the interrupt. Position */
#define QMSPI_BUF_CNT_TRIG_TX_BUF_TRIG_Msk    (_UINT32_(0xFFFF) << QMSPI_BUF_CNT_TRIG_TX_BUF_TRIG_Pos) /* (QMSPI_BUF_CNT_TRIG) An interrupt is triggered if the TRANSMIT_BUFFER_COUNT field is less than or equal to this value. A value of 0 disables the interrupt. Mask */
#define QMSPI_BUF_CNT_TRIG_TX_BUF_TRIG(value) (QMSPI_BUF_CNT_TRIG_TX_BUF_TRIG_Msk & (_UINT32_(value) << QMSPI_BUF_CNT_TRIG_TX_BUF_TRIG_Pos)) /* Assigment of value for TX_BUF_TRIG in the QMSPI_BUF_CNT_TRIG register */
#define QMSPI_BUF_CNT_TRIG_RX_BUF_TRIG_Pos    _UINT32_(16)                                         /* (QMSPI_BUF_CNT_TRIG) An interrupt is triggered if the RECEIVE_BUFFER_COUNT field is greater than or equal to this value. A value of 0 disables the interrupt. Position */
#define QMSPI_BUF_CNT_TRIG_RX_BUF_TRIG_Msk    (_UINT32_(0xFFFF) << QMSPI_BUF_CNT_TRIG_RX_BUF_TRIG_Pos) /* (QMSPI_BUF_CNT_TRIG) An interrupt is triggered if the RECEIVE_BUFFER_COUNT field is greater than or equal to this value. A value of 0 disables the interrupt. Mask */
#define QMSPI_BUF_CNT_TRIG_RX_BUF_TRIG(value) (QMSPI_BUF_CNT_TRIG_RX_BUF_TRIG_Msk & (_UINT32_(value) << QMSPI_BUF_CNT_TRIG_RX_BUF_TRIG_Pos)) /* Assigment of value for RX_BUF_TRIG in the QMSPI_BUF_CNT_TRIG register */
#define QMSPI_BUF_CNT_TRIG_Msk                _UINT32_(0xFFFFFFFF)                                 /* (QMSPI_BUF_CNT_TRIG) Register Mask  */


/* -------- QMSPI_TX_FIFO : (QMSPI Offset: 0x20) (R/W 32) QMSPI Transmit Buffer Register -------- */
#define QMSPI_TX_FIFO_RESETVALUE              _UINT32_(0x00)                                       /*  (QMSPI_TX_FIFO) QMSPI Transmit Buffer Register  Reset Value */

#define QMSPI_TX_FIFO_TX_BUF_Pos              _UINT32_(0)                                          /* (QMSPI_TX_FIFO) Writes to this register store data to be transmitted from the SPI Master to the external SPI Slave.     Writes to this block will be written to the Transmit FIFO. A 1 Byte write fills 1 byte of the FIFO. A Word write fills 2 Bytes and a Doubleword write fills 4 bytes.     The data must always be aligned to the bottom most byte (so 1 byte write is on bits [7:0] and Word write is on [15:0]).     An overflow condition, TRANSMIT_BUFFER_ERROR, if a write to a full FIFO occurs. Write accesses to this register increment the TRANSMIT_BUFFER_COUNT field. Position */
#define QMSPI_TX_FIFO_TX_BUF_Msk              (_UINT32_(0xFFFFFFFF) << QMSPI_TX_FIFO_TX_BUF_Pos)   /* (QMSPI_TX_FIFO) Writes to this register store data to be transmitted from the SPI Master to the external SPI Slave.     Writes to this block will be written to the Transmit FIFO. A 1 Byte write fills 1 byte of the FIFO. A Word write fills 2 Bytes and a Doubleword write fills 4 bytes.     The data must always be aligned to the bottom most byte (so 1 byte write is on bits [7:0] and Word write is on [15:0]).     An overflow condition, TRANSMIT_BUFFER_ERROR, if a write to a full FIFO occurs. Write accesses to this register increment the TRANSMIT_BUFFER_COUNT field. Mask */
#define QMSPI_TX_FIFO_TX_BUF(value)           (QMSPI_TX_FIFO_TX_BUF_Msk & (_UINT32_(value) << QMSPI_TX_FIFO_TX_BUF_Pos)) /* Assigment of value for TX_BUF in the QMSPI_TX_FIFO register */
#define QMSPI_TX_FIFO_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (QMSPI_TX_FIFO) Register Mask  */


/* -------- QMSPI_RX_FIFO : (QMSPI Offset: 0x24) (R/W 32) QMSPI Receive Buffer Register -------- */
#define QMSPI_RX_FIFO_RESETVALUE              _UINT32_(0x00)                                       /*  (QMSPI_RX_FIFO) QMSPI Receive Buffer Register  Reset Value */

#define QMSPI_RX_FIFO_RX_BUF_Pos              _UINT32_(0)                                          /* (QMSPI_RX_FIFO) Buffer that stores data from the external SPI Slave device to the SPI Master (this block), which is received over MISO or IO.     Reads from this register will empty the Rx FIFO. A 1 Byte read will have valid data on bits [7:0] and a Word read will have data on bits [15:0].     It is possible to request more data than the FIFO has (underflow condition), but this will cause an error (Rx Buffer Error).     Read accesses to this register decrement the RECEIVE_BUFFER_COUNT field. Position */
#define QMSPI_RX_FIFO_RX_BUF_Msk              (_UINT32_(0xFFFFFFFF) << QMSPI_RX_FIFO_RX_BUF_Pos)   /* (QMSPI_RX_FIFO) Buffer that stores data from the external SPI Slave device to the SPI Master (this block), which is received over MISO or IO.     Reads from this register will empty the Rx FIFO. A 1 Byte read will have valid data on bits [7:0] and a Word read will have data on bits [15:0].     It is possible to request more data than the FIFO has (underflow condition), but this will cause an error (Rx Buffer Error).     Read accesses to this register decrement the RECEIVE_BUFFER_COUNT field. Mask */
#define QMSPI_RX_FIFO_RX_BUF(value)           (QMSPI_RX_FIFO_RX_BUF_Msk & (_UINT32_(value) << QMSPI_RX_FIFO_RX_BUF_Pos)) /* Assigment of value for RX_BUF in the QMSPI_RX_FIFO register */
#define QMSPI_RX_FIFO_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (QMSPI_RX_FIFO) Register Mask  */


/* -------- QMSPI_CSTM : (QMSPI Offset: 0x28) (R/W 32) QMSPI Chip Select Timing Register -------- */
#define QMSPI_CSTM_RESETVALUE                 _UINT32_(0x6060406)                                  /*  (QMSPI_CSTM) QMSPI Chip Select Timing Register  Reset Value */

#define QMSPI_CSTM_DLY_CS_ON_TO_CLOCK_START_Pos _UINT32_(0)                                          /* (QMSPI_CSTM) This selects the number of system clock cycles between CS assertion to the start of the SPI Clock. Position */
#define QMSPI_CSTM_DLY_CS_ON_TO_CLOCK_START_Msk (_UINT32_(0xF) << QMSPI_CSTM_DLY_CS_ON_TO_CLOCK_START_Pos) /* (QMSPI_CSTM) This selects the number of system clock cycles between CS assertion to the start of the SPI Clock. Mask */
#define QMSPI_CSTM_DLY_CS_ON_TO_CLOCK_START(value) (QMSPI_CSTM_DLY_CS_ON_TO_CLOCK_START_Msk & (_UINT32_(value) << QMSPI_CSTM_DLY_CS_ON_TO_CLOCK_START_Pos)) /* Assigment of value for DLY_CS_ON_TO_CLOCK_START in the QMSPI_CSTM register */
#define QMSPI_CSTM_DLY_CLK_STOP_TO_CS_OFF_Pos _UINT32_(8)                                          /* (QMSPI_CSTM) This selects the number of system clock cycles between the last clock edge and the deassertion of CS. Position */
#define QMSPI_CSTM_DLY_CLK_STOP_TO_CS_OFF_Msk (_UINT32_(0xF) << QMSPI_CSTM_DLY_CLK_STOP_TO_CS_OFF_Pos) /* (QMSPI_CSTM) This selects the number of system clock cycles between the last clock edge and the deassertion of CS. Mask */
#define QMSPI_CSTM_DLY_CLK_STOP_TO_CS_OFF(value) (QMSPI_CSTM_DLY_CLK_STOP_TO_CS_OFF_Msk & (_UINT32_(value) << QMSPI_CSTM_DLY_CLK_STOP_TO_CS_OFF_Pos)) /* Assigment of value for DLY_CLK_STOP_TO_CS_OFF in the QMSPI_CSTM register */
#define QMSPI_CSTM_DLY_LAST_DATA_HOLD_Pos     _UINT32_(16)                                         /* (QMSPI_CSTM) This selects the number of system clock cycles between CS deassertion to the data ports for WP and HOLD     switching from input to output. Position */
#define QMSPI_CSTM_DLY_LAST_DATA_HOLD_Msk     (_UINT32_(0xF) << QMSPI_CSTM_DLY_LAST_DATA_HOLD_Pos) /* (QMSPI_CSTM) This selects the number of system clock cycles between CS deassertion to the data ports for WP and HOLD     switching from input to output. Mask */
#define QMSPI_CSTM_DLY_LAST_DATA_HOLD(value)  (QMSPI_CSTM_DLY_LAST_DATA_HOLD_Msk & (_UINT32_(value) << QMSPI_CSTM_DLY_LAST_DATA_HOLD_Pos)) /* Assigment of value for DLY_LAST_DATA_HOLD in the QMSPI_CSTM register */
#define QMSPI_CSTM_DLY_CS_OFF_TO_CS_ON_Pos    _UINT32_(24)                                         /* (QMSPI_CSTM) This selects the number of system clock cycles between CS deassertion to CS assertion. This is the minimum            pulse width of CS deassertion. Position */
#define QMSPI_CSTM_DLY_CS_OFF_TO_CS_ON_Msk    (_UINT32_(0xFF) << QMSPI_CSTM_DLY_CS_OFF_TO_CS_ON_Pos) /* (QMSPI_CSTM) This selects the number of system clock cycles between CS deassertion to CS assertion. This is the minimum            pulse width of CS deassertion. Mask */
#define QMSPI_CSTM_DLY_CS_OFF_TO_CS_ON(value) (QMSPI_CSTM_DLY_CS_OFF_TO_CS_ON_Msk & (_UINT32_(value) << QMSPI_CSTM_DLY_CS_OFF_TO_CS_ON_Pos)) /* Assigment of value for DLY_CS_OFF_TO_CS_ON in the QMSPI_CSTM register */
#define QMSPI_CSTM_Msk                        _UINT32_(0xFF0F0F0F)                                 /* (QMSPI_CSTM) Register Mask  */


/* -------- QMSPI_DESCR : (QMSPI Offset: 0x30) (R/W 32) QMSPI Description Buffer 0 Register -------- */
#define QMSPI_DESCR_RESETVALUE                _UINT32_(0x00)                                       /*  (QMSPI_DESCR) QMSPI Description Buffer 0 Register  Reset Value */

#define QMSPI_DESCR_INFACE_MOD_Pos            _UINT32_(0)                                          /* (QMSPI_DESCR) This field sets the transmission mode. If this field is set for Dual Mode or Quad Mode then either TX_TRANSFER_ENABLE or RX_TRANSFER_ENABLE must be 0.     3=Reserved; 2=Quad Mode; 1=Dual Mode; 0=Single/Duplex Mode. Position */
#define QMSPI_DESCR_INFACE_MOD_Msk            (_UINT32_(0x3) << QMSPI_DESCR_INFACE_MOD_Pos)        /* (QMSPI_DESCR) This field sets the transmission mode. If this field is set for Dual Mode or Quad Mode then either TX_TRANSFER_ENABLE or RX_TRANSFER_ENABLE must be 0.     3=Reserved; 2=Quad Mode; 1=Dual Mode; 0=Single/Duplex Mode. Mask */
#define QMSPI_DESCR_INFACE_MOD(value)         (QMSPI_DESCR_INFACE_MOD_Msk & (_UINT32_(value) << QMSPI_DESCR_INFACE_MOD_Pos)) /* Assigment of value for INFACE_MOD in the QMSPI_DESCR register */
#define QMSPI_DESCR_TX_TRANS_EN_Pos           _UINT32_(2)                                          /* (QMSPI_DESCR) This field bit selects the transmit function of the SPI interface.     3=Transmit Enabled in 1 Mode. The MOSI or IO Bus will send out only 1's. The Transmit Buffer will not be used     2=Transmit Enabled in 0 Mode. The MOSI or IO Bus will send out only 0's. The Transmit Buffer will not be used.     1=Transmit Enabled. Data will be fetched from the Transmit Buffer and sent out on the MOSI or IO Bus.     0=Transmit is Disabled. No data is sent. This will cause the MOSI be to be undriven, or the IO bus to be undriven if Receive is also disabled. Position */
#define QMSPI_DESCR_TX_TRANS_EN_Msk           (_UINT32_(0x3) << QMSPI_DESCR_TX_TRANS_EN_Pos)       /* (QMSPI_DESCR) This field bit selects the transmit function of the SPI interface.     3=Transmit Enabled in 1 Mode. The MOSI or IO Bus will send out only 1's. The Transmit Buffer will not be used     2=Transmit Enabled in 0 Mode. The MOSI or IO Bus will send out only 0's. The Transmit Buffer will not be used.     1=Transmit Enabled. Data will be fetched from the Transmit Buffer and sent out on the MOSI or IO Bus.     0=Transmit is Disabled. No data is sent. This will cause the MOSI be to be undriven, or the IO bus to be undriven if Receive is also disabled. Mask */
#define QMSPI_DESCR_TX_TRANS_EN(value)        (QMSPI_DESCR_TX_TRANS_EN_Msk & (_UINT32_(value) << QMSPI_DESCR_TX_TRANS_EN_Pos)) /* Assigment of value for TX_TRANS_EN in the QMSPI_DESCR register */
#define QMSPI_DESCR_TX_DMA_EN_Pos             _UINT32_(4)                                          /* (QMSPI_DESCR) This bit enables DMA support for Transmit Transfer. If enabled, DMA will be requested to fill the FIFO until either the interface     reaches TRANSFER_LENGTH or the DMA sends a termination request. The size defined here must match DMA programmed access size.     1=DMA is enabled.and set to 1 Byte      2=DMA is enabled and set to 2 Bytes      3=DMA is enabled and set to 4 Bytes     0=DMA is disabled. All data in the Transmit Buffer must be emptied by firmware. Position */
#define QMSPI_DESCR_TX_DMA_EN_Msk             (_UINT32_(0x3) << QMSPI_DESCR_TX_DMA_EN_Pos)         /* (QMSPI_DESCR) This bit enables DMA support for Transmit Transfer. If enabled, DMA will be requested to fill the FIFO until either the interface     reaches TRANSFER_LENGTH or the DMA sends a termination request. The size defined here must match DMA programmed access size.     1=DMA is enabled.and set to 1 Byte      2=DMA is enabled and set to 2 Bytes      3=DMA is enabled and set to 4 Bytes     0=DMA is disabled. All data in the Transmit Buffer must be emptied by firmware. Mask */
#define QMSPI_DESCR_TX_DMA_EN(value)          (QMSPI_DESCR_TX_DMA_EN_Msk & (_UINT32_(value) << QMSPI_DESCR_TX_DMA_EN_Pos)) /* Assigment of value for TX_DMA_EN in the QMSPI_DESCR register */
#define QMSPI_DESCR_RX_TRANS_EN_Pos           _UINT32_(6)                                          /* (QMSPI_DESCR) This bit enables the receive function of the SPI interface.     1=Receive is enabled. Data received from the SPI Slave is stored in the Receive Buffer; 0=Receive is disabled. Position */
#define QMSPI_DESCR_RX_TRANS_EN_Msk           (_UINT32_(0x1) << QMSPI_DESCR_RX_TRANS_EN_Pos)       /* (QMSPI_DESCR) This bit enables the receive function of the SPI interface.     1=Receive is enabled. Data received from the SPI Slave is stored in the Receive Buffer; 0=Receive is disabled. Mask */
#define QMSPI_DESCR_RX_TRANS_EN(value)        (QMSPI_DESCR_RX_TRANS_EN_Msk & (_UINT32_(value) << QMSPI_DESCR_RX_TRANS_EN_Pos)) /* Assigment of value for RX_TRANS_EN in the QMSPI_DESCR register */
#define QMSPI_DESCR_RX_DMA_EN_Pos             _UINT32_(7)                                          /* (QMSPI_DESCR) This bit enables DMA support for Receive Transfer. If enabled, DMA will be requested to empty the FIFO until either the interface reaches TRANSFER_LENGTH or the DMA sends a termination request. The size defined here must match DMA programmed access size.     1=DMA is enabled.and set to 1 Byte     2=DMA is enabled and set to 2 Bytes     3=DMA is enabled and set to 4 Bytes     0=DMA is disabled. All data in the Receive Buffer must be emptied by firmware. Position */
#define QMSPI_DESCR_RX_DMA_EN_Msk             (_UINT32_(0x3) << QMSPI_DESCR_RX_DMA_EN_Pos)         /* (QMSPI_DESCR) This bit enables DMA support for Receive Transfer. If enabled, DMA will be requested to empty the FIFO until either the interface reaches TRANSFER_LENGTH or the DMA sends a termination request. The size defined here must match DMA programmed access size.     1=DMA is enabled.and set to 1 Byte     2=DMA is enabled and set to 2 Bytes     3=DMA is enabled and set to 4 Bytes     0=DMA is disabled. All data in the Receive Buffer must be emptied by firmware. Mask */
#define QMSPI_DESCR_RX_DMA_EN(value)          (QMSPI_DESCR_RX_DMA_EN_Msk & (_UINT32_(value) << QMSPI_DESCR_RX_DMA_EN_Pos)) /* Assigment of value for RX_DMA_EN in the QMSPI_DESCR register */
#define QMSPI_DESCR_CLOSE_TRANS_EN_Pos        _UINT32_(9)                                          /* (QMSPI_DESCR) This selects what action is taken at the end of a transfer. This bit must be set only on the Last Buffer.     1=The transfer is terminated. The Chip Select de-asserts, the SPI interface returns to IDLE and the DMA interface completes the transfer.     0=The transfer is not closed. Chip Select remains asserted and the DMA interface and the SPI interface remain active Position */
#define QMSPI_DESCR_CLOSE_TRANS_EN_Msk        (_UINT32_(0x1) << QMSPI_DESCR_CLOSE_TRANS_EN_Pos)    /* (QMSPI_DESCR) This selects what action is taken at the end of a transfer. This bit must be set only on the Last Buffer.     1=The transfer is terminated. The Chip Select de-asserts, the SPI interface returns to IDLE and the DMA interface completes the transfer.     0=The transfer is not closed. Chip Select remains asserted and the DMA interface and the SPI interface remain active Mask */
#define QMSPI_DESCR_CLOSE_TRANS_EN(value)     (QMSPI_DESCR_CLOSE_TRANS_EN_Msk & (_UINT32_(value) << QMSPI_DESCR_CLOSE_TRANS_EN_Pos)) /* Assigment of value for CLOSE_TRANS_EN in the QMSPI_DESCR register */
#define QMSPI_DESCR_TRANS_LEN_Pos             _UINT32_(10)                                         /* (QMSPI_DESCR) 3=TRANSFER_LENGTH defined in units of 16-byte segments,            2=TRANSFER_LENGTH defined in units of 4-byte segments     1=TRANSFER_LENGTH defined in units of bytes,     0=TRANSFER_LENGTH defined in units of bits Position */
#define QMSPI_DESCR_TRANS_LEN_Msk             (_UINT32_(0x3) << QMSPI_DESCR_TRANS_LEN_Pos)         /* (QMSPI_DESCR) 3=TRANSFER_LENGTH defined in units of 16-byte segments,            2=TRANSFER_LENGTH defined in units of 4-byte segments     1=TRANSFER_LENGTH defined in units of bytes,     0=TRANSFER_LENGTH defined in units of bits Mask */
#define QMSPI_DESCR_TRANS_LEN(value)          (QMSPI_DESCR_TRANS_LEN_Msk & (_UINT32_(value) << QMSPI_DESCR_TRANS_LEN_Pos)) /* Assigment of value for TRANS_LEN in the QMSPI_DESCR register */
#define QMSPI_DESCR_DESCR_BUF_NXT_PTR_Pos     _UINT32_(12)                                         /* (QMSPI_DESCR) This defines the next buffer to be used if Description Buffers are enabled and this is not the last buffer. This can point to the current buffer, creating an infinite loop. Position */
#define QMSPI_DESCR_DESCR_BUF_NXT_PTR_Msk     (_UINT32_(0xF) << QMSPI_DESCR_DESCR_BUF_NXT_PTR_Pos) /* (QMSPI_DESCR) This defines the next buffer to be used if Description Buffers are enabled and this is not the last buffer. This can point to the current buffer, creating an infinite loop. Mask */
#define QMSPI_DESCR_DESCR_BUF_NXT_PTR(value)  (QMSPI_DESCR_DESCR_BUF_NXT_PTR_Msk & (_UINT32_(value) << QMSPI_DESCR_DESCR_BUF_NXT_PTR_Pos)) /* Assigment of value for DESCR_BUF_NXT_PTR in the QMSPI_DESCR register */
#define QMSPI_DESCR_DESCR_BUF_LAST_Pos        _UINT32_(16)                                         /* (QMSPI_DESCR) Last Descriptor. 1=Last Description Buffer in the chain. 0=This is not the last buffer. Position */
#define QMSPI_DESCR_DESCR_BUF_LAST_Msk        (_UINT32_(0x1) << QMSPI_DESCR_DESCR_BUF_LAST_Pos)    /* (QMSPI_DESCR) Last Descriptor. 1=Last Description Buffer in the chain. 0=This is not the last buffer. Mask */
#define QMSPI_DESCR_DESCR_BUF_LAST(value)     (QMSPI_DESCR_DESCR_BUF_LAST_Msk & (_UINT32_(value) << QMSPI_DESCR_DESCR_BUF_LAST_Pos)) /* Assigment of value for DESCR_BUF_LAST in the QMSPI_DESCR register */
#define QMSPI_DESCR_TX_LEN_Pos                _UINT32_(17)                                         /* (QMSPI_DESCR) The length of the SPI transfer. The count is in bytes or bits, depending on the value of TRANSFER_LENGTH_BITS. A value of 0 means an infinite length transfer. Position */
#define QMSPI_DESCR_TX_LEN_Msk                (_UINT32_(0x7FFF) << QMSPI_DESCR_TX_LEN_Pos)         /* (QMSPI_DESCR) The length of the SPI transfer. The count is in bytes or bits, depending on the value of TRANSFER_LENGTH_BITS. A value of 0 means an infinite length transfer. Mask */
#define QMSPI_DESCR_TX_LEN(value)             (QMSPI_DESCR_TX_LEN_Msk & (_UINT32_(value) << QMSPI_DESCR_TX_LEN_Pos)) /* Assigment of value for TX_LEN in the QMSPI_DESCR register */
#define QMSPI_DESCR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (QMSPI_DESCR) Register Mask  */


/* -------- QMSPI_ALIAS_CTRL : (QMSPI Offset: 0xB0) ( /W 32) QMSPI Alias Control Register -------- */
#define QMSPI_ALIAS_CTRL_RESETVALUE           _UINT32_(0x00)                                       /*  (QMSPI_ALIAS_CTRL) QMSPI Alias Control Register  Reset Value */

#define QMSPI_ALIAS_CTRL_ALS_EXEC_STRT_Pos    _UINT32_(0)                                          /* (QMSPI_ALIAS_CTRL) Alias for the QMSPI Execution:Start field. Position */
#define QMSPI_ALIAS_CTRL_ALS_EXEC_STRT_Msk    (_UINT32_(0x1) << QMSPI_ALIAS_CTRL_ALS_EXEC_STRT_Pos) /* (QMSPI_ALIAS_CTRL) Alias for the QMSPI Execution:Start field. Mask */
#define QMSPI_ALIAS_CTRL_ALS_EXEC_STRT(value) (QMSPI_ALIAS_CTRL_ALS_EXEC_STRT_Msk & (_UINT32_(value) << QMSPI_ALIAS_CTRL_ALS_EXEC_STRT_Pos)) /* Assigment of value for ALS_EXEC_STRT in the QMSPI_ALIAS_CTRL register */
#define QMSPI_ALIAS_CTRL_CLS_ALTMODE_EN_Pos   _UINT32_(1)                                          /* (QMSPI_ALIAS_CTRL) Enable the CS1 Clock Divide to be active if CS1 is the interface in use. Position */
#define QMSPI_ALIAS_CTRL_CLS_ALTMODE_EN_Msk   (_UINT32_(0x1) << QMSPI_ALIAS_CTRL_CLS_ALTMODE_EN_Pos) /* (QMSPI_ALIAS_CTRL) Enable the CS1 Clock Divide to be active if CS1 is the interface in use. Mask */
#define QMSPI_ALIAS_CTRL_CLS_ALTMODE_EN(value) (QMSPI_ALIAS_CTRL_CLS_ALTMODE_EN_Msk & (_UINT32_(value) << QMSPI_ALIAS_CTRL_CLS_ALTMODE_EN_Pos)) /* Assigment of value for CLS_ALTMODE_EN in the QMSPI_ALIAS_CTRL register */
#define QMSPI_ALIAS_CTRL_ALS_WR_TXBUF_Pos     _UINT32_(2)                                          /* (QMSPI_ALIAS_CTRL) Alias that triggers a write to the Tx Buffer of 1 Byte using data from Alias Tx Buffer Data in this register. Position */
#define QMSPI_ALIAS_CTRL_ALS_WR_TXBUF_Msk     (_UINT32_(0x1) << QMSPI_ALIAS_CTRL_ALS_WR_TXBUF_Pos) /* (QMSPI_ALIAS_CTRL) Alias that triggers a write to the Tx Buffer of 1 Byte using data from Alias Tx Buffer Data in this register. Mask */
#define QMSPI_ALIAS_CTRL_ALS_WR_TXBUF(value)  (QMSPI_ALIAS_CTRL_ALS_WR_TXBUF_Msk & (_UINT32_(value) << QMSPI_ALIAS_CTRL_ALS_WR_TXBUF_Pos)) /* Assigment of value for ALS_WR_TXBUF in the QMSPI_ALIAS_CTRL register */
#define QMSPI_ALIAS_CTRL_ALS_WRDBUF_XFRLEN_Pos _UINT32_(3)                                          /* (QMSPI_ALIAS_CTRL) Alias that triggers a write to the Description Buffer pointed to by Alias Description Buffer Select in this register to modify the Transfer Length field with the value of Alias Description Buffer Transfer Length in this register. Position */
#define QMSPI_ALIAS_CTRL_ALS_WRDBUF_XFRLEN_Msk (_UINT32_(0x1) << QMSPI_ALIAS_CTRL_ALS_WRDBUF_XFRLEN_Pos) /* (QMSPI_ALIAS_CTRL) Alias that triggers a write to the Description Buffer pointed to by Alias Description Buffer Select in this register to modify the Transfer Length field with the value of Alias Description Buffer Transfer Length in this register. Mask */
#define QMSPI_ALIAS_CTRL_ALS_WRDBUF_XFRLEN(value) (QMSPI_ALIAS_CTRL_ALS_WRDBUF_XFRLEN_Msk & (_UINT32_(value) << QMSPI_ALIAS_CTRL_ALS_WRDBUF_XFRLEN_Pos)) /* Assigment of value for ALS_WRDBUF_XFRLEN in the QMSPI_ALIAS_CTRL register */
#define QMSPI_ALIAS_CTRL_ALS_MOD_CS_Pos       _UINT32_(4)                                          /* (QMSPI_ALIAS_CTRL) Alias for the QMSPI Mode:Chip Select field. Position */
#define QMSPI_ALIAS_CTRL_ALS_MOD_CS_Msk       (_UINT32_(0x3) << QMSPI_ALIAS_CTRL_ALS_MOD_CS_Pos)   /* (QMSPI_ALIAS_CTRL) Alias for the QMSPI Mode:Chip Select field. Mask */
#define QMSPI_ALIAS_CTRL_ALS_MOD_CS(value)    (QMSPI_ALIAS_CTRL_ALS_MOD_CS_Msk & (_UINT32_(value) << QMSPI_ALIAS_CTRL_ALS_MOD_CS_Pos)) /* Assigment of value for ALS_MOD_CS in the QMSPI_ALIAS_CTRL register */
#define QMSPI_ALIAS_CTRL_ALS_LDMA_INCR_ADD_Pos _UINT32_(6)                                          /* (QMSPI_ALIAS_CTRL) Alias that overrides the value in all QMSPI Local DMA * [Tx/Rx] Control:Increment Address Enable fields w/ this value. Position */
#define QMSPI_ALIAS_CTRL_ALS_LDMA_INCR_ADD_Msk (_UINT32_(0x1) << QMSPI_ALIAS_CTRL_ALS_LDMA_INCR_ADD_Pos) /* (QMSPI_ALIAS_CTRL) Alias that overrides the value in all QMSPI Local DMA * [Tx/Rx] Control:Increment Address Enable fields w/ this value. Mask */
#define QMSPI_ALIAS_CTRL_ALS_LDMA_INCR_ADD(value) (QMSPI_ALIAS_CTRL_ALS_LDMA_INCR_ADD_Msk & (_UINT32_(value) << QMSPI_ALIAS_CTRL_ALS_LDMA_INCR_ADD_Pos)) /* Assigment of value for ALS_LDMA_INCR_ADD in the QMSPI_ALIAS_CTRL register */
#define QMSPI_ALIAS_CTRL_ALS_CTRL_DBUF_PTR_Pos _UINT32_(8)                                          /* (QMSPI_ALIAS_CTRL) Alias for the QMSPI Control:Description Buffer Pointer field. Position */
#define QMSPI_ALIAS_CTRL_ALS_CTRL_DBUF_PTR_Msk (_UINT32_(0xF) << QMSPI_ALIAS_CTRL_ALS_CTRL_DBUF_PTR_Pos) /* (QMSPI_ALIAS_CTRL) Alias for the QMSPI Control:Description Buffer Pointer field. Mask */
#define QMSPI_ALIAS_CTRL_ALS_CTRL_DBUF_PTR(value) (QMSPI_ALIAS_CTRL_ALS_CTRL_DBUF_PTR_Msk & (_UINT32_(value) << QMSPI_ALIAS_CTRL_ALS_CTRL_DBUF_PTR_Pos)) /* Assigment of value for ALS_CTRL_DBUF_PTR in the QMSPI_ALIAS_CTRL register */
#define QMSPI_ALIAS_CTRL_ALS_DBUF_SEL_Pos     _UINT32_(12)                                         /* (QMSPI_ALIAS_CTRL) Which Description Buffer will be modified by a write if Alias Write Description Buffer Transfer Length is set. Position */
#define QMSPI_ALIAS_CTRL_ALS_DBUF_SEL_Msk     (_UINT32_(0xF) << QMSPI_ALIAS_CTRL_ALS_DBUF_SEL_Pos) /* (QMSPI_ALIAS_CTRL) Which Description Buffer will be modified by a write if Alias Write Description Buffer Transfer Length is set. Mask */
#define QMSPI_ALIAS_CTRL_ALS_DBUF_SEL(value)  (QMSPI_ALIAS_CTRL_ALS_DBUF_SEL_Msk & (_UINT32_(value) << QMSPI_ALIAS_CTRL_ALS_DBUF_SEL_Pos)) /* Assigment of value for ALS_DBUF_SEL in the QMSPI_ALIAS_CTRL register */
#define QMSPI_ALIAS_CTRL_ALS_DBUF_XFR_LEN_Pos _UINT32_(16)                                         /* (QMSPI_ALIAS_CTRL) The value of the data written to the Description Buffers Transfer Length field, if the write is enabled. Position */
#define QMSPI_ALIAS_CTRL_ALS_DBUF_XFR_LEN_Msk (_UINT32_(0xFF) << QMSPI_ALIAS_CTRL_ALS_DBUF_XFR_LEN_Pos) /* (QMSPI_ALIAS_CTRL) The value of the data written to the Description Buffers Transfer Length field, if the write is enabled. Mask */
#define QMSPI_ALIAS_CTRL_ALS_DBUF_XFR_LEN(value) (QMSPI_ALIAS_CTRL_ALS_DBUF_XFR_LEN_Msk & (_UINT32_(value) << QMSPI_ALIAS_CTRL_ALS_DBUF_XFR_LEN_Pos)) /* Assigment of value for ALS_DBUF_XFR_LEN in the QMSPI_ALIAS_CTRL register */
#define QMSPI_ALIAS_CTRL_ALS_TXDBUF_DATA_Pos  _UINT32_(24)                                         /* (QMSPI_ALIAS_CTRL) The Byte of data written into the Tx Buffer if the write is enabled. Position */
#define QMSPI_ALIAS_CTRL_ALS_TXDBUF_DATA_Msk  (_UINT32_(0xFF) << QMSPI_ALIAS_CTRL_ALS_TXDBUF_DATA_Pos) /* (QMSPI_ALIAS_CTRL) The Byte of data written into the Tx Buffer if the write is enabled. Mask */
#define QMSPI_ALIAS_CTRL_ALS_TXDBUF_DATA(value) (QMSPI_ALIAS_CTRL_ALS_TXDBUF_DATA_Msk & (_UINT32_(value) << QMSPI_ALIAS_CTRL_ALS_TXDBUF_DATA_Pos)) /* Assigment of value for ALS_TXDBUF_DATA in the QMSPI_ALIAS_CTRL register */
#define QMSPI_ALIAS_CTRL_Msk                  _UINT32_(0xFFFFFF7F)                                 /* (QMSPI_ALIAS_CTRL) Register Mask  */


/* -------- QMSPI_MODE_ALT1 : (QMSPI Offset: 0xC0) (R/W 32) QMSPI Mode Alternate 1 Register -------- */
#define QMSPI_MODE_ALT1_RESETVALUE            _UINT32_(0x00)                                       /*  (QMSPI_MODE_ALT1) QMSPI Mode Alternate 1 Register  Reset Value */

#define QMSPI_MODE_ALT1_CS1_ALTMOD_EN_Pos     _UINT32_(0)                                          /* (QMSPI_MODE_ALT1) Enable the CS1 Clock Divide to be active if CS1 is the interface in use. Position */
#define QMSPI_MODE_ALT1_CS1_ALTMOD_EN_Msk     (_UINT32_(0x1) << QMSPI_MODE_ALT1_CS1_ALTMOD_EN_Pos) /* (QMSPI_MODE_ALT1) Enable the CS1 Clock Divide to be active if CS1 is the interface in use. Mask */
#define QMSPI_MODE_ALT1_CS1_ALTMOD_EN(value)  (QMSPI_MODE_ALT1_CS1_ALTMOD_EN_Msk & (_UINT32_(value) << QMSPI_MODE_ALT1_CS1_ALTMOD_EN_Pos)) /* Assigment of value for CS1_ALTMOD_EN in the QMSPI_MODE_ALT1 register */
#define QMSPI_MODE_ALT1_CS1_ALTCLK_DIV_Pos    _UINT32_(16)                                         /* (QMSPI_MODE_ALT1) The SPI clock divide in number of system clocks when CS1 is in use and CS1 Alt Mode Enable is set. Position */
#define QMSPI_MODE_ALT1_CS1_ALTCLK_DIV_Msk    (_UINT32_(0xFFFF) << QMSPI_MODE_ALT1_CS1_ALTCLK_DIV_Pos) /* (QMSPI_MODE_ALT1) The SPI clock divide in number of system clocks when CS1 is in use and CS1 Alt Mode Enable is set. Mask */
#define QMSPI_MODE_ALT1_CS1_ALTCLK_DIV(value) (QMSPI_MODE_ALT1_CS1_ALTCLK_DIV_Msk & (_UINT32_(value) << QMSPI_MODE_ALT1_CS1_ALTCLK_DIV_Pos)) /* Assigment of value for CS1_ALTCLK_DIV in the QMSPI_MODE_ALT1 register */
#define QMSPI_MODE_ALT1_Msk                   _UINT32_(0xFFFF0001)                                 /* (QMSPI_MODE_ALT1) Register Mask  */


/* -------- QMSPI_TAPS : (QMSPI Offset: 0xD0) (R/W 32) QMSPI TAPs Register -------- */
#define QMSPI_TAPS_RESETVALUE                 _UINT32_(0x00)                                       /*  (QMSPI_TAPS) QMSPI TAPs Register  Reset Value */

#define QMSPI_TAPS_SCK_TAP_Pos                _UINT32_(0)                                          /* (QMSPI_TAPS) This will select the tap point for the feed-back SCK. Position */
#define QMSPI_TAPS_SCK_TAP_Msk                (_UINT32_(0xFF) << QMSPI_TAPS_SCK_TAP_Pos)           /* (QMSPI_TAPS) This will select the tap point for the feed-back SCK. Mask */
#define QMSPI_TAPS_SCK_TAP(value)             (QMSPI_TAPS_SCK_TAP_Msk & (_UINT32_(value) << QMSPI_TAPS_SCK_TAP_Pos)) /* Assigment of value for SCK_TAP in the QMSPI_TAPS register */
#define QMSPI_TAPS_CTRL_TAP_Pos               _UINT32_(8)                                          /* (QMSPI_TAPS) This will select the tap point for signals that go from the System Domain. Position */
#define QMSPI_TAPS_CTRL_TAP_Msk               (_UINT32_(0xFF) << QMSPI_TAPS_CTRL_TAP_Pos)          /* (QMSPI_TAPS) This will select the tap point for signals that go from the System Domain. Mask */
#define QMSPI_TAPS_CTRL_TAP(value)            (QMSPI_TAPS_CTRL_TAP_Msk & (_UINT32_(value) << QMSPI_TAPS_CTRL_TAP_Pos)) /* Assigment of value for CTRL_TAP in the QMSPI_TAPS register */
#define QMSPI_TAPS_Msk                        _UINT32_(0x0000FFFF)                                 /* (QMSPI_TAPS) Register Mask  */


/* -------- QMSPI_TAP_ADJ : (QMSPI Offset: 0xD4) (R/W 32) QMSPI TAP Control Register -------- */
#define QMSPI_TAP_ADJ_RESETVALUE              _UINT32_(0x00)                                       /*  (QMSPI_TAP_ADJ) QMSPI TAP Control Register  Reset Value */

#define QMSPI_TAP_ADJ_SCK_ADJ_Pos             _UINT32_(0)                                          /* (QMSPI_TAP_ADJ) This is a signed value that will be added to the Select SCK Tap to come up with the final value for the delay. Position */
#define QMSPI_TAP_ADJ_SCK_ADJ_Msk             (_UINT32_(0xFF) << QMSPI_TAP_ADJ_SCK_ADJ_Pos)        /* (QMSPI_TAP_ADJ) This is a signed value that will be added to the Select SCK Tap to come up with the final value for the delay. Mask */
#define QMSPI_TAP_ADJ_SCK_ADJ(value)          (QMSPI_TAP_ADJ_SCK_ADJ_Msk & (_UINT32_(value) << QMSPI_TAP_ADJ_SCK_ADJ_Pos)) /* Assigment of value for SCK_ADJ in the QMSPI_TAP_ADJ register */
#define QMSPI_TAP_ADJ_CTRL_ADJ_Pos            _UINT32_(8)                                          /* (QMSPI_TAP_ADJ) This is a signed value that will be added to the Select Control Tap to come up with the final value for the delay. Position */
#define QMSPI_TAP_ADJ_CTRL_ADJ_Msk            (_UINT32_(0xFF) << QMSPI_TAP_ADJ_CTRL_ADJ_Pos)       /* (QMSPI_TAP_ADJ) This is a signed value that will be added to the Select Control Tap to come up with the final value for the delay. Mask */
#define QMSPI_TAP_ADJ_CTRL_ADJ(value)         (QMSPI_TAP_ADJ_CTRL_ADJ_Msk & (_UINT32_(value) << QMSPI_TAP_ADJ_CTRL_ADJ_Pos)) /* Assigment of value for CTRL_ADJ in the QMSPI_TAP_ADJ register */
#define QMSPI_TAP_ADJ_Msk                     _UINT32_(0x0000FFFF)                                 /* (QMSPI_TAP_ADJ) Register Mask  */


/* -------- QMSPI_TAP_CTRL : (QMSPI Offset: 0xD8) (R/W 32) QMSPI TAP Adjustment Register -------- */
#define QMSPI_TAP_CTRL_RESETVALUE             _UINT32_(0x00)                                       /*  (QMSPI_TAP_CTRL) QMSPI TAP Adjustment Register  Reset Value */

#define QMSPI_TAP_CTRL_AUTO_MOD_Pos           _UINT32_(0)                                          /* (QMSPI_TAP_CTRL) This enables the automatic H/W trim of the Tap. Position */
#define QMSPI_TAP_CTRL_AUTO_MOD_Msk           (_UINT32_(0x3) << QMSPI_TAP_CTRL_AUTO_MOD_Pos)       /* (QMSPI_TAP_CTRL) This enables the automatic H/W trim of the Tap. Mask */
#define QMSPI_TAP_CTRL_AUTO_MOD(value)        (QMSPI_TAP_CTRL_AUTO_MOD_Msk & (_UINT32_(value) << QMSPI_TAP_CTRL_AUTO_MOD_Pos)) /* Assigment of value for AUTO_MOD in the QMSPI_TAP_CTRL register */
#define QMSPI_TAP_CTRL_CTRL_Pos               _UINT32_(2)                                          /* (QMSPI_TAP_CTRL) This is a signed value that will be added to the Select Control Tap to come up with the final value for the delay. Position */
#define QMSPI_TAP_CTRL_CTRL_Msk               (_UINT32_(0x1) << QMSPI_TAP_CTRL_CTRL_Pos)           /* (QMSPI_TAP_CTRL) This is a signed value that will be added to the Select Control Tap to come up with the final value for the delay. Mask */
#define QMSPI_TAP_CTRL_CTRL(value)            (QMSPI_TAP_CTRL_CTRL_Msk & (_UINT32_(value) << QMSPI_TAP_CTRL_CTRL_Pos)) /* Assigment of value for CTRL in the QMSPI_TAP_CTRL register */
#define QMSPI_TAP_CTRL_FW_GO_Pos              _UINT32_(8)                                          /* (QMSPI_TAP_CTRL) This will force the auto-trim H/W to run and find a new trim value. Position */
#define QMSPI_TAP_CTRL_FW_GO_Msk              (_UINT32_(0x1) << QMSPI_TAP_CTRL_FW_GO_Pos)          /* (QMSPI_TAP_CTRL) This will force the auto-trim H/W to run and find a new trim value. Mask */
#define QMSPI_TAP_CTRL_FW_GO(value)           (QMSPI_TAP_CTRL_FW_GO_Msk & (_UINT32_(value) << QMSPI_TAP_CTRL_FW_GO_Pos)) /* Assigment of value for FW_GO in the QMSPI_TAP_CTRL register */
#define QMSPI_TAP_CTRL_AUTO_MULT_Pos          _UINT32_(16)                                         /* (QMSPI_TAP_CTRL) This will multiply the target delay value the Auto-trim H/W will search for. Position */
#define QMSPI_TAP_CTRL_AUTO_MULT_Msk          (_UINT32_(0x7) << QMSPI_TAP_CTRL_AUTO_MULT_Pos)      /* (QMSPI_TAP_CTRL) This will multiply the target delay value the Auto-trim H/W will search for. Mask */
#define QMSPI_TAP_CTRL_AUTO_MULT(value)       (QMSPI_TAP_CTRL_AUTO_MULT_Msk & (_UINT32_(value) << QMSPI_TAP_CTRL_AUTO_MULT_Pos)) /* Assigment of value for AUTO_MULT in the QMSPI_TAP_CTRL register */
#define QMSPI_TAP_CTRL_Msk                    _UINT32_(0x00070107)                                 /* (QMSPI_TAP_CTRL) Register Mask  */


/* -------- QMSPI_DESC_LDMA_TXEN : (QMSPI Offset: 0x104) (R/W 32) QMSPI Descriptor Local DMA Tx Enable Register -------- */
#define QMSPI_DESC_LDMA_TXEN_RESETVALUE       _UINT32_(0x00)                                       /*  (QMSPI_DESC_LDMA_TXEN) QMSPI Descriptor Local DMA Tx Enable Register  Reset Value */

#define QMSPI_DESC_LDMA_TXEN_DESC_LDMA_TXEN_Pos _UINT32_(0)                                          /* (QMSPI_DESC_LDMA_TXEN) This enables the Local TX DMA usage (instead of the Central DMA) when the Descriptor Buffer register enables the DMA. Position */
#define QMSPI_DESC_LDMA_TXEN_DESC_LDMA_TXEN_Msk (_UINT32_(0xFFFF) << QMSPI_DESC_LDMA_TXEN_DESC_LDMA_TXEN_Pos) /* (QMSPI_DESC_LDMA_TXEN) This enables the Local TX DMA usage (instead of the Central DMA) when the Descriptor Buffer register enables the DMA. Mask */
#define QMSPI_DESC_LDMA_TXEN_DESC_LDMA_TXEN(value) (QMSPI_DESC_LDMA_TXEN_DESC_LDMA_TXEN_Msk & (_UINT32_(value) << QMSPI_DESC_LDMA_TXEN_DESC_LDMA_TXEN_Pos)) /* Assigment of value for DESC_LDMA_TXEN in the QMSPI_DESC_LDMA_TXEN register */
#define QMSPI_DESC_LDMA_TXEN_Msk              _UINT32_(0x0000FFFF)                                 /* (QMSPI_DESC_LDMA_TXEN) Register Mask  */


/* -------- QMSPI_DESC_LDMA_RXEN : (QMSPI Offset: 0x100) (R/W 32) QMSPI Descriptor Local DMA Rx Enable Register -------- */
#define QMSPI_DESC_LDMA_RXEN_RESETVALUE       _UINT32_(0x00)                                       /*  (QMSPI_DESC_LDMA_RXEN) QMSPI Descriptor Local DMA Rx Enable Register  Reset Value */

#define QMSPI_DESC_LDMA_RXEN_DESC_LDMA_RXEN_Pos _UINT32_(0)                                          /* (QMSPI_DESC_LDMA_RXEN) This enables the Local RX DMA usage (instead of the Central DMA) when the Descriptor Buffer register enables the DMA. Position */
#define QMSPI_DESC_LDMA_RXEN_DESC_LDMA_RXEN_Msk (_UINT32_(0xFFFF) << QMSPI_DESC_LDMA_RXEN_DESC_LDMA_RXEN_Pos) /* (QMSPI_DESC_LDMA_RXEN) This enables the Local RX DMA usage (instead of the Central DMA) when the Descriptor Buffer register enables the DMA. Mask */
#define QMSPI_DESC_LDMA_RXEN_DESC_LDMA_RXEN(value) (QMSPI_DESC_LDMA_RXEN_DESC_LDMA_RXEN_Msk & (_UINT32_(value) << QMSPI_DESC_LDMA_RXEN_DESC_LDMA_RXEN_Pos)) /* Assigment of value for DESC_LDMA_RXEN in the QMSPI_DESC_LDMA_RXEN register */
#define QMSPI_DESC_LDMA_RXEN_Msk              _UINT32_(0x0000FFFF)                                 /* (QMSPI_DESC_LDMA_RXEN) Register Mask  */


/** \brief QMSPI register offsets definitions */
#define QMSPI_LDMA_RXCTRL_REG_OFST     _UINT32_(0x00)      /* (QMSPI_LDMA_RXCTRL) QMSPI RX Control Register Offset */
#define QMSPI_LDMA_RXSTRT_ADDR_REG_OFST _UINT32_(0x04)      /* (QMSPI_LDMA_RXSTRT_ADDR) QMSPI Local DMA Rx Start Address Register Offset */
#define QMSPI_LDMA_RX_LEN_REG_OFST     _UINT32_(0x08)      /* (QMSPI_LDMA_RX_LEN) QMSPI Local DMA Rx Length Register Offset */
#define QMSPI_RSVD_REG_OFST            _UINT32_(0x0C)      /* (QMSPI_RSVD) Reserved Register Offset */
#define QMSPI_LDMA_TXCTRL_REG_OFST     _UINT32_(0x00)      /* (QMSPI_LDMA_TXCTRL) QMSPI TX Control Register Offset */
#define QMSPI_LDMA_TXSTRT_ADDR_REG_OFST _UINT32_(0x04)      /* (QMSPI_LDMA_TXSTRT_ADDR) QMSPI Local DMA Tx Start Address Register Offset */
#define QMSPI_LDMA_TX_LEN_REG_OFST     _UINT32_(0x08)      /* (QMSPI_LDMA_TX_LEN) QMSPI Local DMA Tx Length Register Offset */
#define QMSPI_RSVD_REG_OFST            _UINT32_(0x0C)      /* (QMSPI_RSVD) Reserved Register Offset */
#define QMSPI_MODE_REG_OFST            _UINT32_(0x00)      /* (QMSPI_MODE) QMSPI Mode Register Offset */
#define QMSPI_CTRL_REG_OFST            _UINT32_(0x04)      /* (QMSPI_CTRL) QMSPI SPI Control Offset */
#define QMSPI_EXE_REG_OFST             _UINT32_(0x08)      /* (QMSPI_EXE) QMSPI Execute Register Offset */
#define QMSPI_IFCTRL_REG_OFST          _UINT32_(0x0C)      /* (QMSPI_IFCTRL) QMSPI Interface Control Register Offset */
#define QMSPI_STS_REG_OFST             _UINT32_(0x10)      /* (QMSPI_STS) QMSPI Status Register Offset */
#define QMSPI_BUF_CNT_STS_REG_OFST     _UINT32_(0x14)      /* (QMSPI_BUF_CNT_STS) QMSPI Buffer Count Status Register Offset */
#define QMSPI_IEN_REG_OFST             _UINT32_(0x18)      /* (QMSPI_IEN) QMSPI Interrupt Enable Register Offset */
#define QMSPI_BUF_CNT_TRIG_REG_OFST    _UINT32_(0x1C)      /* (QMSPI_BUF_CNT_TRIG) QMSPI Buffer Count Trigger Register Offset */
#define QMSPI_TX_FIFO_REG_OFST         _UINT32_(0x20)      /* (QMSPI_TX_FIFO) QMSPI Transmit Buffer Register Offset */
#define QMSPI_TX_FIFO0_REG_OFST        _UINT32_(0x20)      /* (QMSPI_TX_FIFO0) QMSPI Transmit Buffer Register Offset */
#define QMSPI_RX_FIFO_REG_OFST         _UINT32_(0x24)      /* (QMSPI_RX_FIFO) QMSPI Receive Buffer Register Offset */
#define QMSPI_RX_FIFO0_REG_OFST        _UINT32_(0x24)      /* (QMSPI_RX_FIFO0) QMSPI Receive Buffer Register Offset */
#define QMSPI_CSTM_REG_OFST            _UINT32_(0x28)      /* (QMSPI_CSTM) QMSPI Chip Select Timing Register Offset */
#define QMSPI_DESCR_REG_OFST           _UINT32_(0x30)      /* (QMSPI_DESCR) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR0_REG_OFST          _UINT32_(0x30)      /* (QMSPI_DESCR0) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR1_REG_OFST          _UINT32_(0x34)      /* (QMSPI_DESCR1) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR2_REG_OFST          _UINT32_(0x38)      /* (QMSPI_DESCR2) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR3_REG_OFST          _UINT32_(0x3C)      /* (QMSPI_DESCR3) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR4_REG_OFST          _UINT32_(0x40)      /* (QMSPI_DESCR4) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR5_REG_OFST          _UINT32_(0x44)      /* (QMSPI_DESCR5) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR6_REG_OFST          _UINT32_(0x48)      /* (QMSPI_DESCR6) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR7_REG_OFST          _UINT32_(0x4C)      /* (QMSPI_DESCR7) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR8_REG_OFST          _UINT32_(0x50)      /* (QMSPI_DESCR8) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR9_REG_OFST          _UINT32_(0x54)      /* (QMSPI_DESCR9) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR10_REG_OFST         _UINT32_(0x58)      /* (QMSPI_DESCR10) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR11_REG_OFST         _UINT32_(0x5C)      /* (QMSPI_DESCR11) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR12_REG_OFST         _UINT32_(0x60)      /* (QMSPI_DESCR12) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR13_REG_OFST         _UINT32_(0x64)      /* (QMSPI_DESCR13) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR14_REG_OFST         _UINT32_(0x68)      /* (QMSPI_DESCR14) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_DESCR15_REG_OFST         _UINT32_(0x6C)      /* (QMSPI_DESCR15) QMSPI Description Buffer 0 Register Offset */
#define QMSPI_ALIAS_CTRL_REG_OFST      _UINT32_(0xB0)      /* (QMSPI_ALIAS_CTRL) QMSPI Alias Control Register Offset */
#define QMSPI_MODE_ALT1_REG_OFST       _UINT32_(0xC0)      /* (QMSPI_MODE_ALT1) QMSPI Mode Alternate 1 Register Offset */
#define QMSPI_TAPS_REG_OFST            _UINT32_(0xD0)      /* (QMSPI_TAPS) QMSPI TAPs Register Offset */
#define QMSPI_TAP_ADJ_REG_OFST         _UINT32_(0xD4)      /* (QMSPI_TAP_ADJ) QMSPI TAP Control Register Offset */
#define QMSPI_TAP_CTRL_REG_OFST        _UINT32_(0xD8)      /* (QMSPI_TAP_CTRL) QMSPI TAP Adjustment Register Offset */
#define QMSPI_DESC_LDMA_TXEN_REG_OFST  _UINT32_(0x104)     /* (QMSPI_DESC_LDMA_TXEN) QMSPI Descriptor Local DMA Tx Enable Register Offset */
#define QMSPI_DESC_LDMA_RXEN_REG_OFST  _UINT32_(0x100)     /* (QMSPI_DESC_LDMA_RXEN) QMSPI Descriptor Local DMA Rx Enable Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief LDMA_RX register API structure */
typedef struct
{  /* Local DMA RX Component */
  __IO  uint32_t                       QMSPI_LDMA_RXCTRL;  /**< Offset: 0x00 (R/W  32) QMSPI RX Control Register */
  __IO  uint32_t                       QMSPI_LDMA_RXSTRT_ADDR; /**< Offset: 0x04 (R/W  32) QMSPI Local DMA Rx Start Address Register */
  __IO  uint32_t                       QMSPI_LDMA_RX_LEN;  /**< Offset: 0x08 (R/W  32) QMSPI Local DMA Rx Length Register */
  __I   uint32_t                       QMSPI_RSVD;         /**< Offset: 0x0C (R/   32) Reserved Register */
} qmspi_ldma_rx_registers_t;

/** \brief LDMA_TX register API structure */
typedef struct
{  /* Local DMA TX Component */
  __IO  uint32_t                       QMSPI_LDMA_TXCTRL;  /**< Offset: 0x00 (R/W  32) QMSPI TX Control Register */
  __IO  uint32_t                       QMSPI_LDMA_TXSTRT_ADDR; /**< Offset: 0x04 (R/W  32) QMSPI Local DMA Tx Start Address Register */
  __IO  uint32_t                       QMSPI_LDMA_TX_LEN;  /**< Offset: 0x08 (R/W  32) QMSPI Local DMA Tx Length Register */
  __I   uint32_t                       QMSPI_RSVD;         /**< Offset: 0x0C (R/   32) Reserved Register */
} qmspi_ldma_tx_registers_t;

#define QMSPI_LDMA_RX_NUMBER 3

#define QMSPI_LDMA_TX_NUMBER 3

/** \brief QMSPI register API structure */
typedef struct
{  /* The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface. */
  __IO  uint32_t                       QMSPI_MODE;         /**< Offset: 0x00 (R/W  32) QMSPI Mode Register */
  __IO  uint32_t                       QMSPI_CTRL;         /**< Offset: 0x04 (R/W  32) QMSPI SPI Control */
  __IO  uint32_t                       QMSPI_EXE;          /**< Offset: 0x08 (R/W  32) QMSPI Execute Register */
  __IO  uint32_t                       QMSPI_IFCTRL;       /**< Offset: 0x0C (R/W  32) QMSPI Interface Control Register */
  __IO  uint32_t                       QMSPI_STS;          /**< Offset: 0x10 (R/W  32) QMSPI Status Register */
  __IO  uint32_t                       QMSPI_BUF_CNT_STS;  /**< Offset: 0x14 (R/W  32) QMSPI Buffer Count Status Register */
  __IO  uint32_t                       QMSPI_IEN;          /**< Offset: 0x18 (R/W  32) QMSPI Interrupt Enable Register */
  __IO  uint32_t                       QMSPI_BUF_CNT_TRIG; /**< Offset: 0x1C (R/W  32) QMSPI Buffer Count Trigger Register */
  __IO  uint32_t                       QMSPI_TX_FIFO[1];   /**< Offset: 0x20 (R/W  32) QMSPI Transmit Buffer Register */
  __IO  uint32_t                       QMSPI_RX_FIFO[1];   /**< Offset: 0x24 (R/W  32) QMSPI Receive Buffer Register */
  __IO  uint32_t                       QMSPI_CSTM;         /**< Offset: 0x28 (R/W  32) QMSPI Chip Select Timing Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       QMSPI_DESCR[16];    /**< Offset: 0x30 (R/W  32) QMSPI Description Buffer 0 Register */
  __I   uint8_t                        Reserved2[0x40];
  __O   uint32_t                       QMSPI_ALIAS_CTRL;   /**< Offset: 0xB0 ( /W  32) QMSPI Alias Control Register */
  __I   uint8_t                        Reserved3[0x0C];
  __IO  uint32_t                       QMSPI_MODE_ALT1;    /**< Offset: 0xC0 (R/W  32) QMSPI Mode Alternate 1 Register */
  __I   uint8_t                        Reserved4[0x0C];
  __IO  uint32_t                       QMSPI_TAPS;         /**< Offset: 0xD0 (R/W  32) QMSPI TAPs Register */
  __IO  uint32_t                       QMSPI_TAP_ADJ;      /**< Offset: 0xD4 (R/W  32) QMSPI TAP Control Register */
  __IO  uint32_t                       QMSPI_TAP_CTRL;     /**< Offset: 0xD8 (R/W  32) QMSPI TAP Adjustment Register */
  __I   uint8_t                        Reserved5[0x24];
  __IO  uint32_t                       QMSPI_DESC_LDMA_RXEN; /**< Offset: 0x100 (R/W  32) QMSPI Descriptor Local DMA Rx Enable Register */
  __IO  uint32_t                       QMSPI_DESC_LDMA_TXEN; /**< Offset: 0x104 (R/W  32) QMSPI Descriptor Local DMA Tx Enable Register */
  __I   uint8_t                        Reserved6[0x08];
        qmspi_ldma_rx_registers_t      LDMA_RX[QMSPI_LDMA_RX_NUMBER]; /**< Offset: 0x110  */
        qmspi_ldma_tx_registers_t      LDMA_TX[QMSPI_LDMA_TX_NUMBER]; /**< Offset: 0x140  */
} qmspi_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_QMSPI_COMPONENT_H_ */
