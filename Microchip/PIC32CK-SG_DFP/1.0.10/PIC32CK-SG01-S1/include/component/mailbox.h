/*
 * Component description for MAILBOX
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

/* file generated from device description version 2022-11-28T06:55:11Z */
#ifndef _PIC32CKSG01_MAILBOX_COMPONENT_H_
#define _PIC32CKSG01_MAILBOX_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MAILBOX                                      */
/* ************************************************************************** */

/* -------- MAILBOX_CONFIG : (MAILBOX Offset: 0x58) (R/W 32) Configuration -------- */
#define MAILBOX_CONFIG_TX_INT_ENABLE_Pos      _UINT32_(0)                                          /* (MAILBOX_CONFIG) Transmit Interrupt Enable Position */
#define MAILBOX_CONFIG_TX_INT_ENABLE_Msk      (_UINT32_(0x1) << MAILBOX_CONFIG_TX_INT_ENABLE_Pos)  /* (MAILBOX_CONFIG) Transmit Interrupt Enable Mask */
#define MAILBOX_CONFIG_TX_INT_ENABLE(value)   (MAILBOX_CONFIG_TX_INT_ENABLE_Msk & (_UINT32_(value) << MAILBOX_CONFIG_TX_INT_ENABLE_Pos)) /* Assigment of value for TX_INT_ENABLE in the MAILBOX_CONFIG register */
#define MAILBOX_CONFIG_RX_INT_ENABLE_Pos      _UINT32_(1)                                          /* (MAILBOX_CONFIG) Receive Interrupt Enable Position */
#define MAILBOX_CONFIG_RX_INT_ENABLE_Msk      (_UINT32_(0x1) << MAILBOX_CONFIG_RX_INT_ENABLE_Pos)  /* (MAILBOX_CONFIG) Receive Interrupt Enable Mask */
#define MAILBOX_CONFIG_RX_INT_ENABLE(value)   (MAILBOX_CONFIG_RX_INT_ENABLE_Msk & (_UINT32_(value) << MAILBOX_CONFIG_RX_INT_ENABLE_Pos)) /* Assigment of value for RX_INT_ENABLE in the MAILBOX_CONFIG register */
#define MAILBOX_CONFIG_Msk                    _UINT32_(0x00000003)                                 /* (MAILBOX_CONFIG) Register Mask  */


/* -------- MAILBOX_FIFO : (MAILBOX Offset: 0x00) (R/W 32) Mailbox FIFO -------- */
#define MAILBOX_FIFO_Data_Pos                 _UINT32_(0)                                          /* (MAILBOX_FIFO) Mailbox data Position */
#define MAILBOX_FIFO_Data_Msk                 (_UINT32_(0xFFFFFFFF) << MAILBOX_FIFO_Data_Pos)      /* (MAILBOX_FIFO) Mailbox data Mask */
#define MAILBOX_FIFO_Data(value)              (MAILBOX_FIFO_Data_Msk & (_UINT32_(value) << MAILBOX_FIFO_Data_Pos)) /* Assigment of value for Data in the MAILBOX_FIFO register */
#define MAILBOX_FIFO_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (MAILBOX_FIFO) Register Mask  */


/* -------- MAILBOX_RX_HEADER : (MAILBOX Offset: 0x54) ( R/ 32) Receive Header -------- */
#define MAILBOX_RX_HEADER_MSGSIZE_Pos         _UINT32_(0)                                          /* (MAILBOX_RX_HEADER) Message Size Position */
#define MAILBOX_RX_HEADER_MSGSIZE_Msk         (_UINT32_(0xFFFF) << MAILBOX_RX_HEADER_MSGSIZE_Pos)  /* (MAILBOX_RX_HEADER) Message Size Mask */
#define MAILBOX_RX_HEADER_MSGSIZE(value)      (MAILBOX_RX_HEADER_MSGSIZE_Msk & (_UINT32_(value) << MAILBOX_RX_HEADER_MSGSIZE_Pos)) /* Assigment of value for MSGSIZE in the MAILBOX_RX_HEADER register */
#define MAILBOX_RX_HEADER_MSGINFO_Pos         _UINT32_(16)                                         /* (MAILBOX_RX_HEADER) Message Information Position */
#define MAILBOX_RX_HEADER_MSGINFO_Msk         (_UINT32_(0xF) << MAILBOX_RX_HEADER_MSGINFO_Pos)     /* (MAILBOX_RX_HEADER) Message Information Mask */
#define MAILBOX_RX_HEADER_MSGINFO(value)      (MAILBOX_RX_HEADER_MSGINFO_Msk & (_UINT32_(value) << MAILBOX_RX_HEADER_MSGINFO_Pos)) /* Assigment of value for MSGINFO in the MAILBOX_RX_HEADER register */
#define MAILBOX_RX_HEADER_UNPROT_Pos          _UINT32_(21)                                         /* (MAILBOX_RX_HEADER) Unprotected Access Position */
#define MAILBOX_RX_HEADER_UNPROT_Msk          (_UINT32_(0x1) << MAILBOX_RX_HEADER_UNPROT_Pos)      /* (MAILBOX_RX_HEADER) Unprotected Access Mask */
#define MAILBOX_RX_HEADER_UNPROT(value)       (MAILBOX_RX_HEADER_UNPROT_Msk & (_UINT32_(value) << MAILBOX_RX_HEADER_UNPROT_Pos)) /* Assigment of value for UNPROT in the MAILBOX_RX_HEADER register */
#define MAILBOX_RX_HEADER_Msk                 _UINT32_(0x002FFFFF)                                 /* (MAILBOX_RX_HEADER) Register Mask  */


/* -------- MAILBOX_RX_PROT : (MAILBOX Offset: 0x4C) ( R/ 32) Receieve Protect -------- */
#define MAILBOX_RX_PROT_UNPROTECT_Pos         _UINT32_(21)                                         /* (MAILBOX_RX_PROT) Mailbox Message Unprotected Position */
#define MAILBOX_RX_PROT_UNPROTECT_Msk         (_UINT32_(0x1) << MAILBOX_RX_PROT_UNPROTECT_Pos)     /* (MAILBOX_RX_PROT) Mailbox Message Unprotected Mask */
#define MAILBOX_RX_PROT_UNPROTECT(value)      (MAILBOX_RX_PROT_UNPROTECT_Msk & (_UINT32_(value) << MAILBOX_RX_PROT_UNPROTECT_Pos)) /* Assigment of value for UNPROTECT in the MAILBOX_RX_PROT register */
#define MAILBOX_RX_PROT_PRIV_Pos              _UINT32_(22)                                         /* (MAILBOX_RX_PROT) Mailbox message Privilaged Position */
#define MAILBOX_RX_PROT_PRIV_Msk              (_UINT32_(0x1) << MAILBOX_RX_PROT_PRIV_Pos)          /* (MAILBOX_RX_PROT) Mailbox message Privilaged Mask */
#define MAILBOX_RX_PROT_PRIV(value)           (MAILBOX_RX_PROT_PRIV_Msk & (_UINT32_(value) << MAILBOX_RX_PROT_PRIV_Pos)) /* Assigment of value for PRIV in the MAILBOX_RX_PROT register */
#define MAILBOX_RX_PROT_NSEC_Pos              _UINT32_(23)                                         /* (MAILBOX_RX_PROT) Mailbox Message Unsecured Position */
#define MAILBOX_RX_PROT_NSEC_Msk              (_UINT32_(0x1) << MAILBOX_RX_PROT_NSEC_Pos)          /* (MAILBOX_RX_PROT) Mailbox Message Unsecured Mask */
#define MAILBOX_RX_PROT_NSEC(value)           (MAILBOX_RX_PROT_NSEC_Msk & (_UINT32_(value) << MAILBOX_RX_PROT_NSEC_Pos)) /* Assigment of value for NSEC in the MAILBOX_RX_PROT register */
#define MAILBOX_RX_PROT_USER_Pos              _UINT32_(24)                                         /* (MAILBOX_RX_PROT) User bits Position */
#define MAILBOX_RX_PROT_USER_Msk              (_UINT32_(0xFF) << MAILBOX_RX_PROT_USER_Pos)         /* (MAILBOX_RX_PROT) User bits Mask */
#define MAILBOX_RX_PROT_USER(value)           (MAILBOX_RX_PROT_USER_Msk & (_UINT32_(value) << MAILBOX_RX_PROT_USER_Pos)) /* Assigment of value for USER in the MAILBOX_RX_PROT register */
#define MAILBOX_RX_PROT_Msk                   _UINT32_(0xFFE00000)                                 /* (MAILBOX_RX_PROT) Register Mask  */


/* -------- MAILBOX_RX_STATUS : (MAILBOX Offset: 0x44) ( R/ 32) Receive Status -------- */
#define MAILBOX_RX_STATUS_RXREMAINING_Pos     _UINT32_(0)                                          /* (MAILBOX_RX_STATUS) Receive Bytes Remaining Position */
#define MAILBOX_RX_STATUS_RXREMAINING_Msk     (_UINT32_(0xFFFF) << MAILBOX_RX_STATUS_RXREMAINING_Pos) /* (MAILBOX_RX_STATUS) Receive Bytes Remaining Mask */
#define MAILBOX_RX_STATUS_RXREMAINING(value)  (MAILBOX_RX_STATUS_RXREMAINING_Msk & (_UINT32_(value) << MAILBOX_RX_STATUS_RXREMAINING_Pos)) /* Assigment of value for RXREMAINING in the MAILBOX_RX_STATUS register */
#define MAILBOX_RX_STATUS_RXTYPE_Pos          _UINT32_(16)                                         /* (MAILBOX_RX_STATUS) Receive Message Type Position */
#define MAILBOX_RX_STATUS_RXTYPE_Msk          (_UINT32_(0xF) << MAILBOX_RX_STATUS_RXTYPE_Pos)      /* (MAILBOX_RX_STATUS) Receive Message Type Mask */
#define MAILBOX_RX_STATUS_RXTYPE(value)       (MAILBOX_RX_STATUS_RXTYPE_Msk & (_UINT32_(value) << MAILBOX_RX_STATUS_RXTYPE_Pos)) /* Assigment of value for RXTYPE in the MAILBOX_RX_STATUS register */
#define MAILBOX_RX_STATUS_RXINT_Pos           _UINT32_(20)                                         /* (MAILBOX_RX_STATUS) Receive Interrupt Occurred Position */
#define MAILBOX_RX_STATUS_RXINT_Msk           (_UINT32_(0x1) << MAILBOX_RX_STATUS_RXINT_Pos)       /* (MAILBOX_RX_STATUS) Receive Interrupt Occurred Mask */
#define MAILBOX_RX_STATUS_RXINT(value)        (MAILBOX_RX_STATUS_RXINT_Msk & (_UINT32_(value) << MAILBOX_RX_STATUS_RXINT_Pos)) /* Assigment of value for RXINT in the MAILBOX_RX_STATUS register */
#define MAILBOX_RX_STATUS_RXEMPTY_Pos         _UINT32_(21)                                         /* (MAILBOX_RX_STATUS) Receive FIFO Empty Position */
#define MAILBOX_RX_STATUS_RXEMPTY_Msk         (_UINT32_(0x1) << MAILBOX_RX_STATUS_RXEMPTY_Pos)     /* (MAILBOX_RX_STATUS) Receive FIFO Empty Mask */
#define MAILBOX_RX_STATUS_RXEMPTY(value)      (MAILBOX_RX_STATUS_RXEMPTY_Msk & (_UINT32_(value) << MAILBOX_RX_STATUS_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the MAILBOX_RX_STATUS register */
#define MAILBOX_RX_STATUS_RXHEADER_Pos        _UINT32_(22)                                         /* (MAILBOX_RX_STATUS) Receive Header Position */
#define MAILBOX_RX_STATUS_RXHEADER_Msk        (_UINT32_(0x1) << MAILBOX_RX_STATUS_RXHEADER_Pos)    /* (MAILBOX_RX_STATUS) Receive Header Mask */
#define MAILBOX_RX_STATUS_RXHEADER(value)     (MAILBOX_RX_STATUS_RXHEADER_Msk & (_UINT32_(value) << MAILBOX_RX_STATUS_RXHEADER_Pos)) /* Assigment of value for RXHEADER in the MAILBOX_RX_STATUS register */
#define MAILBOX_RX_STATUS_RXERROR_Pos         _UINT32_(23)                                         /* (MAILBOX_RX_STATUS) Receive Error Position */
#define MAILBOX_RX_STATUS_RXERROR_Msk         (_UINT32_(0x1) << MAILBOX_RX_STATUS_RXERROR_Pos)     /* (MAILBOX_RX_STATUS) Receive Error Mask */
#define MAILBOX_RX_STATUS_RXERROR(value)      (MAILBOX_RX_STATUS_RXERROR_Msk & (_UINT32_(value) << MAILBOX_RX_STATUS_RXERROR_Pos)) /* Assigment of value for RXERROR in the MAILBOX_RX_STATUS register */
#define MAILBOX_RX_STATUS_Msk                 _UINT32_(0x00FFFFFF)                                 /* (MAILBOX_RX_STATUS) Register Mask  */


/* -------- MAILBOX_TX_HEADER : (MAILBOX Offset: 0x50) ( /W 32) Transmit Header -------- */
#define MAILBOX_TX_HEADER_MSGSIZE_Pos         _UINT32_(0)                                          /* (MAILBOX_TX_HEADER) Message Size Position */
#define MAILBOX_TX_HEADER_MSGSIZE_Msk         (_UINT32_(0xFFFF) << MAILBOX_TX_HEADER_MSGSIZE_Pos)  /* (MAILBOX_TX_HEADER) Message Size Mask */
#define MAILBOX_TX_HEADER_MSGSIZE(value)      (MAILBOX_TX_HEADER_MSGSIZE_Msk & (_UINT32_(value) << MAILBOX_TX_HEADER_MSGSIZE_Pos)) /* Assigment of value for MSGSIZE in the MAILBOX_TX_HEADER register */
#define MAILBOX_TX_HEADER_MSGINFO_Pos         _UINT32_(16)                                         /* (MAILBOX_TX_HEADER) Message Info Position */
#define MAILBOX_TX_HEADER_MSGINFO_Msk         (_UINT32_(0xF) << MAILBOX_TX_HEADER_MSGINFO_Pos)     /* (MAILBOX_TX_HEADER) Message Info Mask */
#define MAILBOX_TX_HEADER_MSGINFO(value)      (MAILBOX_TX_HEADER_MSGINFO_Msk & (_UINT32_(value) << MAILBOX_TX_HEADER_MSGINFO_Pos)) /* Assigment of value for MSGINFO in the MAILBOX_TX_HEADER register */
#define MAILBOX_TX_HEADER_UNPROT_Pos          _UINT32_(21)                                         /* (MAILBOX_TX_HEADER) Unprotected Access Position */
#define MAILBOX_TX_HEADER_UNPROT_Msk          (_UINT32_(0x1) << MAILBOX_TX_HEADER_UNPROT_Pos)      /* (MAILBOX_TX_HEADER) Unprotected Access Mask */
#define MAILBOX_TX_HEADER_UNPROT(value)       (MAILBOX_TX_HEADER_UNPROT_Msk & (_UINT32_(value) << MAILBOX_TX_HEADER_UNPROT_Pos)) /* Assigment of value for UNPROT in the MAILBOX_TX_HEADER register */
#define MAILBOX_TX_HEADER_PRIV_Pos            _UINT32_(22)                                         /* (MAILBOX_TX_HEADER) Privilaged Access Position */
#define MAILBOX_TX_HEADER_PRIV_Msk            (_UINT32_(0x1) << MAILBOX_TX_HEADER_PRIV_Pos)        /* (MAILBOX_TX_HEADER) Privilaged Access Mask */
#define MAILBOX_TX_HEADER_PRIV(value)         (MAILBOX_TX_HEADER_PRIV_Msk & (_UINT32_(value) << MAILBOX_TX_HEADER_PRIV_Pos)) /* Assigment of value for PRIV in the MAILBOX_TX_HEADER register */
#define MAILBOX_TX_HEADER_NSEC_Pos            _UINT32_(23)                                         /* (MAILBOX_TX_HEADER) Non Secure Access Position */
#define MAILBOX_TX_HEADER_NSEC_Msk            (_UINT32_(0x1) << MAILBOX_TX_HEADER_NSEC_Pos)        /* (MAILBOX_TX_HEADER) Non Secure Access Mask */
#define MAILBOX_TX_HEADER_NSEC(value)         (MAILBOX_TX_HEADER_NSEC_Msk & (_UINT32_(value) << MAILBOX_TX_HEADER_NSEC_Pos)) /* Assigment of value for NSEC in the MAILBOX_TX_HEADER register */
#define MAILBOX_TX_HEADER_USER_Pos            _UINT32_(24)                                         /* (MAILBOX_TX_HEADER) User Bits Position */
#define MAILBOX_TX_HEADER_USER_Msk            (_UINT32_(0xFF) << MAILBOX_TX_HEADER_USER_Pos)       /* (MAILBOX_TX_HEADER) User Bits Mask */
#define MAILBOX_TX_HEADER_USER(value)         (MAILBOX_TX_HEADER_USER_Msk & (_UINT32_(value) << MAILBOX_TX_HEADER_USER_Pos)) /* Assigment of value for USER in the MAILBOX_TX_HEADER register */
#define MAILBOX_TX_HEADER_Msk                 _UINT32_(0xFFEFFFFF)                                 /* (MAILBOX_TX_HEADER) Register Mask  */


/* -------- MAILBOX_TX_PROT : (MAILBOX Offset: 0x48) ( R/ 32) Transmit Protect -------- */
#define MAILBOX_TX_PROT_UNPROT_Pos            _UINT32_(21)                                         /* (MAILBOX_TX_PROT) Mailbox Message Unprotected Position */
#define MAILBOX_TX_PROT_UNPROT_Msk            (_UINT32_(0x1) << MAILBOX_TX_PROT_UNPROT_Pos)        /* (MAILBOX_TX_PROT) Mailbox Message Unprotected Mask */
#define MAILBOX_TX_PROT_UNPROT(value)         (MAILBOX_TX_PROT_UNPROT_Msk & (_UINT32_(value) << MAILBOX_TX_PROT_UNPROT_Pos)) /* Assigment of value for UNPROT in the MAILBOX_TX_PROT register */
#define MAILBOX_TX_PROT_PRIV_Pos              _UINT32_(22)                                         /* (MAILBOX_TX_PROT) Mailbox message Privilaged Position */
#define MAILBOX_TX_PROT_PRIV_Msk              (_UINT32_(0x1) << MAILBOX_TX_PROT_PRIV_Pos)          /* (MAILBOX_TX_PROT) Mailbox message Privilaged Mask */
#define MAILBOX_TX_PROT_PRIV(value)           (MAILBOX_TX_PROT_PRIV_Msk & (_UINT32_(value) << MAILBOX_TX_PROT_PRIV_Pos)) /* Assigment of value for PRIV in the MAILBOX_TX_PROT register */
#define MAILBOX_TX_PROT_NSEC_Pos              _UINT32_(23)                                         /* (MAILBOX_TX_PROT) Mailbox Message Unsecured Position */
#define MAILBOX_TX_PROT_NSEC_Msk              (_UINT32_(0x1) << MAILBOX_TX_PROT_NSEC_Pos)          /* (MAILBOX_TX_PROT) Mailbox Message Unsecured Mask */
#define MAILBOX_TX_PROT_NSEC(value)           (MAILBOX_TX_PROT_NSEC_Msk & (_UINT32_(value) << MAILBOX_TX_PROT_NSEC_Pos)) /* Assigment of value for NSEC in the MAILBOX_TX_PROT register */
#define MAILBOX_TX_PROT_USER_Pos              _UINT32_(24)                                         /* (MAILBOX_TX_PROT) User bits Position */
#define MAILBOX_TX_PROT_USER_Msk              (_UINT32_(0xFF) << MAILBOX_TX_PROT_USER_Pos)         /* (MAILBOX_TX_PROT) User bits Mask */
#define MAILBOX_TX_PROT_USER(value)           (MAILBOX_TX_PROT_USER_Msk & (_UINT32_(value) << MAILBOX_TX_PROT_USER_Pos)) /* Assigment of value for USER in the MAILBOX_TX_PROT register */
#define MAILBOX_TX_PROT_Msk                   _UINT32_(0xFFE00000)                                 /* (MAILBOX_TX_PROT) Register Mask  */


/* -------- MAILBOX_TX_STATUS : (MAILBOX Offset: 0x40) ( R/ 32) Transmit Status -------- */
#define MAILBOX_TX_STATUS_TXREMAINING_Pos     _UINT32_(0)                                          /* (MAILBOX_TX_STATUS) Transmit Bytes Remaining Position */
#define MAILBOX_TX_STATUS_TXREMAINING_Msk     (_UINT32_(0xFFFF) << MAILBOX_TX_STATUS_TXREMAINING_Pos) /* (MAILBOX_TX_STATUS) Transmit Bytes Remaining Mask */
#define MAILBOX_TX_STATUS_TXREMAINING(value)  (MAILBOX_TX_STATUS_TXREMAINING_Msk & (_UINT32_(value) << MAILBOX_TX_STATUS_TXREMAINING_Pos)) /* Assigment of value for TXREMAINING in the MAILBOX_TX_STATUS register */
#define MAILBOX_TX_STATUS_TXTYPE_Pos          _UINT32_(16)                                         /* (MAILBOX_TX_STATUS) Message Type Position */
#define MAILBOX_TX_STATUS_TXTYPE_Msk          (_UINT32_(0xF) << MAILBOX_TX_STATUS_TXTYPE_Pos)      /* (MAILBOX_TX_STATUS) Message Type Mask */
#define MAILBOX_TX_STATUS_TXTYPE(value)       (MAILBOX_TX_STATUS_TXTYPE_Msk & (_UINT32_(value) << MAILBOX_TX_STATUS_TXTYPE_Pos)) /* Assigment of value for TXTYPE in the MAILBOX_TX_STATUS register */
#define MAILBOX_TX_STATUS_TXINT_Pos           _UINT32_(20)                                         /* (MAILBOX_TX_STATUS) Transmit Interrupt Position */
#define MAILBOX_TX_STATUS_TXINT_Msk           (_UINT32_(0x1) << MAILBOX_TX_STATUS_TXINT_Pos)       /* (MAILBOX_TX_STATUS) Transmit Interrupt Mask */
#define MAILBOX_TX_STATUS_TXINT(value)        (MAILBOX_TX_STATUS_TXINT_Msk & (_UINT32_(value) << MAILBOX_TX_STATUS_TXINT_Pos)) /* Assigment of value for TXINT in the MAILBOX_TX_STATUS register */
#define MAILBOX_TX_STATUS_TXFULL_Pos          _UINT32_(21)                                         /* (MAILBOX_TX_STATUS) Transmit FIFO Full Position */
#define MAILBOX_TX_STATUS_TXFULL_Msk          (_UINT32_(0x1) << MAILBOX_TX_STATUS_TXFULL_Pos)      /* (MAILBOX_TX_STATUS) Transmit FIFO Full Mask */
#define MAILBOX_TX_STATUS_TXFULL(value)       (MAILBOX_TX_STATUS_TXFULL_Msk & (_UINT32_(value) << MAILBOX_TX_STATUS_TXFULL_Pos)) /* Assigment of value for TXFULL in the MAILBOX_TX_STATUS register */
#define MAILBOX_TX_STATUS_TXERROR_Pos         _UINT32_(23)                                         /* (MAILBOX_TX_STATUS) Transmit Error Position */
#define MAILBOX_TX_STATUS_TXERROR_Msk         (_UINT32_(0x1) << MAILBOX_TX_STATUS_TXERROR_Pos)     /* (MAILBOX_TX_STATUS) Transmit Error Mask */
#define MAILBOX_TX_STATUS_TXERROR(value)      (MAILBOX_TX_STATUS_TXERROR_Msk & (_UINT32_(value) << MAILBOX_TX_STATUS_TXERROR_Pos)) /* Assigment of value for TXERROR in the MAILBOX_TX_STATUS register */
#define MAILBOX_TX_STATUS_Msk                 _UINT32_(0x00BFFFFF)                                 /* (MAILBOX_TX_STATUS) Register Mask  */


/** \brief MAILBOX register offsets definitions */
#define MAILBOX_CONFIG_REG_OFST        _UINT32_(0x58)      /* (MAILBOX_CONFIG) Configuration Offset */
#define MAILBOX_FIFO_REG_OFST          _UINT32_(0x00)      /* (MAILBOX_FIFO) Mailbox FIFO Offset */
#define MAILBOX_FIFO0_REG_OFST         _UINT32_(0x00)      /* (MAILBOX_FIFO0) Mailbox FIFO Offset */
#define MAILBOX_FIFO1_REG_OFST         _UINT32_(0x04)      /* (MAILBOX_FIFO1) Mailbox FIFO Offset */
#define MAILBOX_FIFO2_REG_OFST         _UINT32_(0x08)      /* (MAILBOX_FIFO2) Mailbox FIFO Offset */
#define MAILBOX_FIFO3_REG_OFST         _UINT32_(0x0C)      /* (MAILBOX_FIFO3) Mailbox FIFO Offset */
#define MAILBOX_FIFO4_REG_OFST         _UINT32_(0x10)      /* (MAILBOX_FIFO4) Mailbox FIFO Offset */
#define MAILBOX_FIFO5_REG_OFST         _UINT32_(0x14)      /* (MAILBOX_FIFO5) Mailbox FIFO Offset */
#define MAILBOX_FIFO6_REG_OFST         _UINT32_(0x18)      /* (MAILBOX_FIFO6) Mailbox FIFO Offset */
#define MAILBOX_FIFO7_REG_OFST         _UINT32_(0x1C)      /* (MAILBOX_FIFO7) Mailbox FIFO Offset */
#define MAILBOX_FIFO8_REG_OFST         _UINT32_(0x20)      /* (MAILBOX_FIFO8) Mailbox FIFO Offset */
#define MAILBOX_FIFO9_REG_OFST         _UINT32_(0x24)      /* (MAILBOX_FIFO9) Mailbox FIFO Offset */
#define MAILBOX_FIFO10_REG_OFST        _UINT32_(0x28)      /* (MAILBOX_FIFO10) Mailbox FIFO Offset */
#define MAILBOX_FIFO11_REG_OFST        _UINT32_(0x2C)      /* (MAILBOX_FIFO11) Mailbox FIFO Offset */
#define MAILBOX_FIFO12_REG_OFST        _UINT32_(0x30)      /* (MAILBOX_FIFO12) Mailbox FIFO Offset */
#define MAILBOX_FIFO13_REG_OFST        _UINT32_(0x34)      /* (MAILBOX_FIFO13) Mailbox FIFO Offset */
#define MAILBOX_FIFO14_REG_OFST        _UINT32_(0x38)      /* (MAILBOX_FIFO14) Mailbox FIFO Offset */
#define MAILBOX_FIFO15_REG_OFST        _UINT32_(0x3C)      /* (MAILBOX_FIFO15) Mailbox FIFO Offset */
#define MAILBOX_RX_HEADER_REG_OFST     _UINT32_(0x54)      /* (MAILBOX_RX_HEADER) Receive Header Offset */
#define MAILBOX_RX_PROT_REG_OFST       _UINT32_(0x4C)      /* (MAILBOX_RX_PROT) Receieve Protect Offset */
#define MAILBOX_RX_STATUS_REG_OFST     _UINT32_(0x44)      /* (MAILBOX_RX_STATUS) Receive Status Offset */
#define MAILBOX_TX_HEADER_REG_OFST     _UINT32_(0x50)      /* (MAILBOX_TX_HEADER) Transmit Header Offset */
#define MAILBOX_TX_PROT_REG_OFST       _UINT32_(0x48)      /* (MAILBOX_TX_PROT) Transmit Protect Offset */
#define MAILBOX_TX_STATUS_REG_OFST     _UINT32_(0x40)      /* (MAILBOX_TX_STATUS) Transmit Status Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MAILBOX register API structure */
typedef struct
{  /* eSecure MailBox Module */
  __IO  uint32_t                       MAILBOX_FIFO[16];   /**< Offset: 0x00 (R/W  32) Mailbox FIFO */
  __I   uint32_t                       MAILBOX_TX_STATUS;  /**< Offset: 0x40 (R/   32) Transmit Status */
  __I   uint32_t                       MAILBOX_RX_STATUS;  /**< Offset: 0x44 (R/   32) Receive Status */
  __I   uint32_t                       MAILBOX_TX_PROT;    /**< Offset: 0x48 (R/   32) Transmit Protect */
  __I   uint32_t                       MAILBOX_RX_PROT;    /**< Offset: 0x4C (R/   32) Receieve Protect */
  __O   uint32_t                       MAILBOX_TX_HEADER;  /**< Offset: 0x50 ( /W  32) Transmit Header */
  __I   uint32_t                       MAILBOX_RX_HEADER;  /**< Offset: 0x54 (R/   32) Receive Header */
  __IO  uint32_t                       MAILBOX_CONFIG;     /**< Offset: 0x58 (R/W  32) Configuration */
} mailbox_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CKSG01_MAILBOX_COMPONENT_H_ */
