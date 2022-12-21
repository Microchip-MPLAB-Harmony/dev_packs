/*
 * Component description for EXTDMA
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

/* file generated from device description version 2022-11-28T06:54:46Z */
#ifndef _PIC32CKSG00_EXTDMA_COMPONENT_H_
#define _PIC32CKSG00_EXTDMA_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR EXTDMA                                       */
/* ************************************************************************** */

/* -------- EXTDMA_CONFIG : (EXTDMA Offset: 0x34) (R/W 32) Configuraiton -------- */
#define EXTDMA_CONFIG_FETCHER_SCATTER_GATHER_Pos _UINT32_(0)                                          /* (EXTDMA_CONFIG)  Position */
#define EXTDMA_CONFIG_FETCHER_SCATTER_GATHER_Msk (_UINT32_(0x1) << EXTDMA_CONFIG_FETCHER_SCATTER_GATHER_Pos) /* (EXTDMA_CONFIG)  Mask */
#define EXTDMA_CONFIG_FETCHER_SCATTER_GATHER(value) (EXTDMA_CONFIG_FETCHER_SCATTER_GATHER_Msk & (_UINT32_(value) << EXTDMA_CONFIG_FETCHER_SCATTER_GATHER_Pos)) /* Assigment of value for FETCHER_SCATTER_GATHER in the EXTDMA_CONFIG register */
#define EXTDMA_CONFIG_PUSHER_SCATTER_GATHER_Pos _UINT32_(1)                                          /* (EXTDMA_CONFIG)  Position */
#define EXTDMA_CONFIG_PUSHER_SCATTER_GATHER_Msk (_UINT32_(0x1) << EXTDMA_CONFIG_PUSHER_SCATTER_GATHER_Pos) /* (EXTDMA_CONFIG)  Mask */
#define EXTDMA_CONFIG_PUSHER_SCATTER_GATHER(value) (EXTDMA_CONFIG_PUSHER_SCATTER_GATHER_Msk & (_UINT32_(value) << EXTDMA_CONFIG_PUSHER_SCATTER_GATHER_Pos)) /* Assigment of value for PUSHER_SCATTER_GATHER in the EXTDMA_CONFIG register */
#define EXTDMA_CONFIG_STOP_PUSHER_Pos         _UINT32_(2)                                          /* (EXTDMA_CONFIG)  Position */
#define EXTDMA_CONFIG_STOP_PUSHER_Msk         (_UINT32_(0x1) << EXTDMA_CONFIG_STOP_PUSHER_Pos)     /* (EXTDMA_CONFIG)  Mask */
#define EXTDMA_CONFIG_STOP_PUSHER(value)      (EXTDMA_CONFIG_STOP_PUSHER_Msk & (_UINT32_(value) << EXTDMA_CONFIG_STOP_PUSHER_Pos)) /* Assigment of value for STOP_PUSHER in the EXTDMA_CONFIG register */
#define EXTDMA_CONFIG_STOP_FETCHER_Pos        _UINT32_(3)                                          /* (EXTDMA_CONFIG)  Position */
#define EXTDMA_CONFIG_STOP_FETCHER_Msk        (_UINT32_(0x1) << EXTDMA_CONFIG_STOP_FETCHER_Pos)    /* (EXTDMA_CONFIG)  Mask */
#define EXTDMA_CONFIG_STOP_FETCHER(value)     (EXTDMA_CONFIG_STOP_FETCHER_Msk & (_UINT32_(value) << EXTDMA_CONFIG_STOP_FETCHER_Pos)) /* Assigment of value for STOP_FETCHER in the EXTDMA_CONFIG register */
#define EXTDMA_CONFIG_SOFTWARE_RESET_Pos      _UINT32_(4)                                          /* (EXTDMA_CONFIG)  Position */
#define EXTDMA_CONFIG_SOFTWARE_RESET_Msk      (_UINT32_(0x1) << EXTDMA_CONFIG_SOFTWARE_RESET_Pos)  /* (EXTDMA_CONFIG)  Mask */
#define EXTDMA_CONFIG_SOFTWARE_RESET(value)   (EXTDMA_CONFIG_SOFTWARE_RESET_Msk & (_UINT32_(value) << EXTDMA_CONFIG_SOFTWARE_RESET_Pos)) /* Assigment of value for SOFTWARE_RESET in the EXTDMA_CONFIG register */
#define EXTDMA_CONFIG_Msk                     _UINT32_(0x0000001F)                                 /* (EXTDMA_CONFIG) Register Mask  */


/* -------- EXTDMA_FETCH_ADDR_LSB : (EXTDMA Offset: 0x00) (R/W 32) Lower Fetch Address -------- */
#define EXTDMA_FETCH_ADDR_LSB_RESETVALUE      _UINT32_(0x00)                                       /*  (EXTDMA_FETCH_ADDR_LSB) Lower Fetch Address  Reset Value */

#define EXTDMA_FETCH_ADDR_LSB_ADDR_Pos        _UINT32_(0)                                          /* (EXTDMA_FETCH_ADDR_LSB) Address Position */
#define EXTDMA_FETCH_ADDR_LSB_ADDR_Msk        (_UINT32_(0xFFFFFFFF) << EXTDMA_FETCH_ADDR_LSB_ADDR_Pos) /* (EXTDMA_FETCH_ADDR_LSB) Address Mask */
#define EXTDMA_FETCH_ADDR_LSB_ADDR(value)     (EXTDMA_FETCH_ADDR_LSB_ADDR_Msk & (_UINT32_(value) << EXTDMA_FETCH_ADDR_LSB_ADDR_Pos)) /* Assigment of value for ADDR in the EXTDMA_FETCH_ADDR_LSB register */
#define EXTDMA_FETCH_ADDR_LSB_Msk             _UINT32_(0xFFFFFFFF)                                 /* (EXTDMA_FETCH_ADDR_LSB) Register Mask  */


/* -------- EXTDMA_FETCH_ADDR_MSB : (EXTDMA Offset: 0x04) (R/W 32) Upper Fetch Address -------- */
#define EXTDMA_FETCH_ADDR_MSB_RESETVALUE      _UINT32_(0x00)                                       /*  (EXTDMA_FETCH_ADDR_MSB) Upper Fetch Address  Reset Value */

#define EXTDMA_FETCH_ADDR_MSB_Msk             _UINT32_(0x00000000)                                 /* (EXTDMA_FETCH_ADDR_MSB) Register Mask  */


/* -------- EXTDMA_FETCH_LEN : (EXTDMA Offset: 0x08) (R/W 32) Fetch Length -------- */
#define EXTDMA_FETCH_LEN_RESETVALUE           _UINT32_(0x00)                                       /*  (EXTDMA_FETCH_LEN) Fetch Length  Reset Value */

#define EXTDMA_FETCH_LEN_LEN_Pos              _UINT32_(0)                                          /* (EXTDMA_FETCH_LEN) Length of data block Position */
#define EXTDMA_FETCH_LEN_LEN_Msk              (_UINT32_(0xFFFFFFF) << EXTDMA_FETCH_LEN_LEN_Pos)    /* (EXTDMA_FETCH_LEN) Length of data block Mask */
#define EXTDMA_FETCH_LEN_LEN(value)           (EXTDMA_FETCH_LEN_LEN_Msk & (_UINT32_(value) << EXTDMA_FETCH_LEN_LEN_Pos)) /* Assigment of value for LEN in the EXTDMA_FETCH_LEN register */
#define EXTDMA_FETCH_LEN_CST_ADDR_Pos         _UINT32_(28)                                         /* (EXTDMA_FETCH_LEN) CST Address Position */
#define EXTDMA_FETCH_LEN_CST_ADDR_Msk         (_UINT32_(0x1) << EXTDMA_FETCH_LEN_CST_ADDR_Pos)     /* (EXTDMA_FETCH_LEN) CST Address Mask */
#define EXTDMA_FETCH_LEN_CST_ADDR(value)      (EXTDMA_FETCH_LEN_CST_ADDR_Msk & (_UINT32_(value) << EXTDMA_FETCH_LEN_CST_ADDR_Pos)) /* Assigment of value for CST_ADDR in the EXTDMA_FETCH_LEN register */
#define EXTDMA_FETCH_LEN_REALIGN_Pos          _UINT32_(29)                                         /* (EXTDMA_FETCH_LEN) Realign Position */
#define EXTDMA_FETCH_LEN_REALIGN_Msk          (_UINT32_(0x1) << EXTDMA_FETCH_LEN_REALIGN_Pos)      /* (EXTDMA_FETCH_LEN) Realign Mask */
#define EXTDMA_FETCH_LEN_REALIGN(value)       (EXTDMA_FETCH_LEN_REALIGN_Msk & (_UINT32_(value) << EXTDMA_FETCH_LEN_REALIGN_Pos)) /* Assigment of value for REALIGN in the EXTDMA_FETCH_LEN register */
#define EXTDMA_FETCH_LEN_Msk                  _UINT32_(0x3FFFFFFF)                                 /* (EXTDMA_FETCH_LEN) Register Mask  */


/* -------- EXTDMA_FETCH_TAG : (EXTDMA Offset: 0x0C) (R/W 32) Fetch Tag -------- */
#define EXTDMA_FETCH_TAG_RESETVALUE           _UINT32_(0x00)                                       /*  (EXTDMA_FETCH_TAG) Fetch Tag  Reset Value */

#define EXTDMA_FETCH_TAG_TAG_Pos              _UINT32_(0)                                          /* (EXTDMA_FETCH_TAG) User TAG Position */
#define EXTDMA_FETCH_TAG_TAG_Msk              (_UINT32_(0xFFFFFFFF) << EXTDMA_FETCH_TAG_TAG_Pos)   /* (EXTDMA_FETCH_TAG) User TAG Mask */
#define EXTDMA_FETCH_TAG_TAG(value)           (EXTDMA_FETCH_TAG_TAG_Msk & (_UINT32_(value) << EXTDMA_FETCH_TAG_TAG_Pos)) /* Assigment of value for TAG in the EXTDMA_FETCH_TAG register */
#define EXTDMA_FETCH_TAG_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (EXTDMA_FETCH_TAG) Register Mask  */


/* -------- EXTDMA_INT_EN : (EXTDMA Offset: 0x1C) (R/W 32) Interrupt Enable -------- */
#define EXTDMA_INT_EN_Msk                     _UINT32_(0x00000000)                                 /* (EXTDMA_INT_EN) Register Mask  */


/* -------- EXTDMA_INT_ENCLR : (EXTDMA Offset: 0x24) (R/W 32) Interrupt Enable Clear -------- */
#define EXTDMA_INT_ENCLR_Msk                  _UINT32_(0x00000000)                                 /* (EXTDMA_INT_ENCLR) Register Mask  */


/* -------- EXTDMA_INT_ENSET : (EXTDMA Offset: 0x20) (R/W 32) Interrupt Enable Set -------- */
#define EXTDMA_INT_ENSET_Msk                  _UINT32_(0x00000000)                                 /* (EXTDMA_INT_ENSET) Register Mask  */


/* -------- EXTDMA_INT_STAT : (EXTDMA Offset: 0x2C) (R/W 32) Interrupt Status -------- */
#define EXTDMA_INT_STAT_Msk                   _UINT32_(0x00000000)                                 /* (EXTDMA_INT_STAT) Register Mask  */


/* -------- EXTDMA_INT_STATRAW : (EXTDMA Offset: 0x28) (R/W 32) Interrupt Raw Status -------- */
#define EXTDMA_INT_STATRAW_Msk                _UINT32_(0x00000000)                                 /* (EXTDMA_INT_STATRAW) Register Mask  */


/* -------- EXTDMA_INT_STAT_CLR : (EXTDMA Offset: 0x30) (R/W 32) Interrupt Status Clear -------- */
#define EXTDMA_INT_STAT_CLR_Msk               _UINT32_(0x00000000)                                 /* (EXTDMA_INT_STAT_CLR) Register Mask  */


/* -------- EXTDMA_PUSH_ADDR_LSB : (EXTDMA Offset: 0x10) (R/W 32) Lower Push Address -------- */
#define EXTDMA_PUSH_ADDR_LSB_RESETVALUE       _UINT32_(0x00)                                       /*  (EXTDMA_PUSH_ADDR_LSB) Lower Push Address  Reset Value */

#define EXTDMA_PUSH_ADDR_LSB_ADDR_Pos         _UINT32_(0)                                          /* (EXTDMA_PUSH_ADDR_LSB) Address Position */
#define EXTDMA_PUSH_ADDR_LSB_ADDR_Msk         (_UINT32_(0xFFFFFFFF) << EXTDMA_PUSH_ADDR_LSB_ADDR_Pos) /* (EXTDMA_PUSH_ADDR_LSB) Address Mask */
#define EXTDMA_PUSH_ADDR_LSB_ADDR(value)      (EXTDMA_PUSH_ADDR_LSB_ADDR_Msk & (_UINT32_(value) << EXTDMA_PUSH_ADDR_LSB_ADDR_Pos)) /* Assigment of value for ADDR in the EXTDMA_PUSH_ADDR_LSB register */
#define EXTDMA_PUSH_ADDR_LSB_Msk              _UINT32_(0xFFFFFFFF)                                 /* (EXTDMA_PUSH_ADDR_LSB) Register Mask  */


/* -------- EXTDMA_PUSH_ADDR_MSB : (EXTDMA Offset: 0x14) (R/W 32) Upper Fetch Address -------- */
#define EXTDMA_PUSH_ADDR_MSB_RESETVALUE       _UINT32_(0x00)                                       /*  (EXTDMA_PUSH_ADDR_MSB) Upper Fetch Address  Reset Value */

#define EXTDMA_PUSH_ADDR_MSB_Msk              _UINT32_(0x00000000)                                 /* (EXTDMA_PUSH_ADDR_MSB) Register Mask  */


/* -------- EXTDMA_PUSH_LEN : (EXTDMA Offset: 0x18) (R/W 32) Push Length -------- */
#define EXTDMA_PUSH_LEN_RESETVALUE            _UINT32_(0x00)                                       /*  (EXTDMA_PUSH_LEN) Push Length  Reset Value */

#define EXTDMA_PUSH_LEN_LEN_Pos               _UINT32_(0)                                          /* (EXTDMA_PUSH_LEN) Length of data block Position */
#define EXTDMA_PUSH_LEN_LEN_Msk               (_UINT32_(0xFFFFFFF) << EXTDMA_PUSH_LEN_LEN_Pos)     /* (EXTDMA_PUSH_LEN) Length of data block Mask */
#define EXTDMA_PUSH_LEN_LEN(value)            (EXTDMA_PUSH_LEN_LEN_Msk & (_UINT32_(value) << EXTDMA_PUSH_LEN_LEN_Pos)) /* Assigment of value for LEN in the EXTDMA_PUSH_LEN register */
#define EXTDMA_PUSH_LEN_CST_ADDR_Pos          _UINT32_(28)                                         /* (EXTDMA_PUSH_LEN) CST Address Position */
#define EXTDMA_PUSH_LEN_CST_ADDR_Msk          (_UINT32_(0x1) << EXTDMA_PUSH_LEN_CST_ADDR_Pos)      /* (EXTDMA_PUSH_LEN) CST Address Mask */
#define EXTDMA_PUSH_LEN_CST_ADDR(value)       (EXTDMA_PUSH_LEN_CST_ADDR_Msk & (_UINT32_(value) << EXTDMA_PUSH_LEN_CST_ADDR_Pos)) /* Assigment of value for CST_ADDR in the EXTDMA_PUSH_LEN register */
#define EXTDMA_PUSH_LEN_REALIGN_Pos           _UINT32_(29)                                         /* (EXTDMA_PUSH_LEN) Realign Position */
#define EXTDMA_PUSH_LEN_REALIGN_Msk           (_UINT32_(0x1) << EXTDMA_PUSH_LEN_REALIGN_Pos)       /* (EXTDMA_PUSH_LEN) Realign Mask */
#define EXTDMA_PUSH_LEN_REALIGN(value)        (EXTDMA_PUSH_LEN_REALIGN_Msk & (_UINT32_(value) << EXTDMA_PUSH_LEN_REALIGN_Pos)) /* Assigment of value for REALIGN in the EXTDMA_PUSH_LEN register */
#define EXTDMA_PUSH_LEN_Msk                   _UINT32_(0x3FFFFFFF)                                 /* (EXTDMA_PUSH_LEN) Register Mask  */


/* -------- EXTDMA_START : (EXTDMA Offset: 0x38) (R/W 32) Start -------- */
#define EXTDMA_START_START_FETCH_Pos          _UINT32_(0)                                          /* (EXTDMA_START)  Position */
#define EXTDMA_START_START_FETCH_Msk          (_UINT32_(0x1) << EXTDMA_START_START_FETCH_Pos)      /* (EXTDMA_START)  Mask */
#define EXTDMA_START_START_FETCH(value)       (EXTDMA_START_START_FETCH_Msk & (_UINT32_(value) << EXTDMA_START_START_FETCH_Pos)) /* Assigment of value for START_FETCH in the EXTDMA_START register */
#define EXTDMA_START_START_PUSH_Pos           _UINT32_(1)                                          /* (EXTDMA_START)  Position */
#define EXTDMA_START_START_PUSH_Msk           (_UINT32_(0x1) << EXTDMA_START_START_PUSH_Pos)       /* (EXTDMA_START)  Mask */
#define EXTDMA_START_START_PUSH(value)        (EXTDMA_START_START_PUSH_Msk & (_UINT32_(value) << EXTDMA_START_START_PUSH_Pos)) /* Assigment of value for START_PUSH in the EXTDMA_START register */
#define EXTDMA_START_Msk                      _UINT32_(0x00000003)                                 /* (EXTDMA_START) Register Mask  */


/* -------- EXTDMA_STATUS : (EXTDMA Offset: 0x3C) (R/W 32) Stop -------- */
#define EXTDMA_STATUS_FETCHER_BUSY_Pos        _UINT32_(0)                                          /* (EXTDMA_STATUS)  Position */
#define EXTDMA_STATUS_FETCHER_BUSY_Msk        (_UINT32_(0x1) << EXTDMA_STATUS_FETCHER_BUSY_Pos)    /* (EXTDMA_STATUS)  Mask */
#define EXTDMA_STATUS_FETCHER_BUSY(value)     (EXTDMA_STATUS_FETCHER_BUSY_Msk & (_UINT32_(value) << EXTDMA_STATUS_FETCHER_BUSY_Pos)) /* Assigment of value for FETCHER_BUSY in the EXTDMA_STATUS register */
#define EXTDMA_STATUS_PUSHER_BUSY_Pos         _UINT32_(1)                                          /* (EXTDMA_STATUS)  Position */
#define EXTDMA_STATUS_PUSHER_BUSY_Msk         (_UINT32_(0x1) << EXTDMA_STATUS_PUSHER_BUSY_Pos)     /* (EXTDMA_STATUS)  Mask */
#define EXTDMA_STATUS_PUSHER_BUSY(value)      (EXTDMA_STATUS_PUSHER_BUSY_Msk & (_UINT32_(value) << EXTDMA_STATUS_PUSHER_BUSY_Pos)) /* Assigment of value for PUSHER_BUSY in the EXTDMA_STATUS register */
#define EXTDMA_STATUS_BUSY_FLAG_Pos           _UINT32_(3)                                          /* (EXTDMA_STATUS)  Position */
#define EXTDMA_STATUS_BUSY_FLAG_Msk           (_UINT32_(0x1) << EXTDMA_STATUS_BUSY_FLAG_Pos)       /* (EXTDMA_STATUS)  Mask */
#define EXTDMA_STATUS_BUSY_FLAG(value)        (EXTDMA_STATUS_BUSY_FLAG_Msk & (_UINT32_(value) << EXTDMA_STATUS_BUSY_FLAG_Pos)) /* Assigment of value for BUSY_FLAG in the EXTDMA_STATUS register */
#define EXTDMA_STATUS_FETCHER_NOT_EMPTY_Pos   _UINT32_(4)                                          /* (EXTDMA_STATUS)  Position */
#define EXTDMA_STATUS_FETCHER_NOT_EMPTY_Msk   (_UINT32_(0x1) << EXTDMA_STATUS_FETCHER_NOT_EMPTY_Pos) /* (EXTDMA_STATUS)  Mask */
#define EXTDMA_STATUS_FETCHER_NOT_EMPTY(value) (EXTDMA_STATUS_FETCHER_NOT_EMPTY_Msk & (_UINT32_(value) << EXTDMA_STATUS_FETCHER_NOT_EMPTY_Pos)) /* Assigment of value for FETCHER_NOT_EMPTY in the EXTDMA_STATUS register */
#define EXTDMA_STATUS_PUSHER_WAITING_FIFO_Pos _UINT32_(5)                                          /* (EXTDMA_STATUS)  Position */
#define EXTDMA_STATUS_PUSHER_WAITING_FIFO_Msk (_UINT32_(0x1) << EXTDMA_STATUS_PUSHER_WAITING_FIFO_Pos) /* (EXTDMA_STATUS)  Mask */
#define EXTDMA_STATUS_PUSHER_WAITING_FIFO(value) (EXTDMA_STATUS_PUSHER_WAITING_FIFO_Msk & (_UINT32_(value) << EXTDMA_STATUS_PUSHER_WAITING_FIFO_Pos)) /* Assigment of value for PUSHER_WAITING_FIFO in the EXTDMA_STATUS register */
#define EXTDMA_STATUS_BYTES_NUMBER_Pos        _UINT32_(16)                                         /* (EXTDMA_STATUS)  Position */
#define EXTDMA_STATUS_BYTES_NUMBER_Msk        (_UINT32_(0xFFFF) << EXTDMA_STATUS_BYTES_NUMBER_Pos) /* (EXTDMA_STATUS)  Mask */
#define EXTDMA_STATUS_BYTES_NUMBER(value)     (EXTDMA_STATUS_BYTES_NUMBER_Msk & (_UINT32_(value) << EXTDMA_STATUS_BYTES_NUMBER_Pos)) /* Assigment of value for BYTES_NUMBER in the EXTDMA_STATUS register */
#define EXTDMA_STATUS_Msk                     _UINT32_(0xFFFF003B)                                 /* (EXTDMA_STATUS) Register Mask  */


/** \brief EXTDMA register offsets definitions */
#define EXTDMA_CONFIG_REG_OFST         _UINT32_(0x34)      /* (EXTDMA_CONFIG) Configuraiton Offset */
#define EXTDMA_FETCH_ADDR_LSB_REG_OFST _UINT32_(0x00)      /* (EXTDMA_FETCH_ADDR_LSB) Lower Fetch Address Offset */
#define EXTDMA_FETCH_ADDR_MSB_REG_OFST _UINT32_(0x04)      /* (EXTDMA_FETCH_ADDR_MSB) Upper Fetch Address Offset */
#define EXTDMA_FETCH_LEN_REG_OFST      _UINT32_(0x08)      /* (EXTDMA_FETCH_LEN) Fetch Length Offset */
#define EXTDMA_FETCH_TAG_REG_OFST      _UINT32_(0x0C)      /* (EXTDMA_FETCH_TAG) Fetch Tag Offset */
#define EXTDMA_INT_EN_REG_OFST         _UINT32_(0x1C)      /* (EXTDMA_INT_EN) Interrupt Enable Offset */
#define EXTDMA_INT_ENCLR_REG_OFST      _UINT32_(0x24)      /* (EXTDMA_INT_ENCLR) Interrupt Enable Clear Offset */
#define EXTDMA_INT_ENSET_REG_OFST      _UINT32_(0x20)      /* (EXTDMA_INT_ENSET) Interrupt Enable Set Offset */
#define EXTDMA_INT_STAT_REG_OFST       _UINT32_(0x2C)      /* (EXTDMA_INT_STAT) Interrupt Status Offset */
#define EXTDMA_INT_STATRAW_REG_OFST    _UINT32_(0x28)      /* (EXTDMA_INT_STATRAW) Interrupt Raw Status Offset */
#define EXTDMA_INT_STAT_CLR_REG_OFST   _UINT32_(0x30)      /* (EXTDMA_INT_STAT_CLR) Interrupt Status Clear Offset */
#define EXTDMA_PUSH_ADDR_LSB_REG_OFST  _UINT32_(0x10)      /* (EXTDMA_PUSH_ADDR_LSB) Lower Push Address Offset */
#define EXTDMA_PUSH_ADDR_MSB_REG_OFST  _UINT32_(0x14)      /* (EXTDMA_PUSH_ADDR_MSB) Upper Fetch Address Offset */
#define EXTDMA_PUSH_LEN_REG_OFST       _UINT32_(0x18)      /* (EXTDMA_PUSH_LEN) Push Length Offset */
#define EXTDMA_START_REG_OFST          _UINT32_(0x38)      /* (EXTDMA_START) Start Offset */
#define EXTDMA_STATUS_REG_OFST         _UINT32_(0x3C)      /* (EXTDMA_STATUS) Stop Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief EXTDMA register API structure */
typedef struct
{  /* External DMA Module */
  __IO  uint32_t                       EXTDMA_FETCH_ADDR_LSB; /**< Offset: 0x00 (R/W  32) Lower Fetch Address */
  __IO  uint32_t                       EXTDMA_FETCH_ADDR_MSB; /**< Offset: 0x04 (R/W  32) Upper Fetch Address */
  __IO  uint32_t                       EXTDMA_FETCH_LEN;   /**< Offset: 0x08 (R/W  32) Fetch Length */
  __IO  uint32_t                       EXTDMA_FETCH_TAG;   /**< Offset: 0x0C (R/W  32) Fetch Tag */
  __IO  uint32_t                       EXTDMA_PUSH_ADDR_LSB; /**< Offset: 0x10 (R/W  32) Lower Push Address */
  __IO  uint32_t                       EXTDMA_PUSH_ADDR_MSB; /**< Offset: 0x14 (R/W  32) Upper Fetch Address */
  __IO  uint32_t                       EXTDMA_PUSH_LEN;    /**< Offset: 0x18 (R/W  32) Push Length */
  __IO  uint32_t                       EXTDMA_INT_EN;      /**< Offset: 0x1C (R/W  32) Interrupt Enable */
  __IO  uint32_t                       EXTDMA_INT_ENSET;   /**< Offset: 0x20 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       EXTDMA_INT_ENCLR;   /**< Offset: 0x24 (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       EXTDMA_INT_STATRAW; /**< Offset: 0x28 (R/W  32) Interrupt Raw Status */
  __IO  uint32_t                       EXTDMA_INT_STAT;    /**< Offset: 0x2C (R/W  32) Interrupt Status */
  __IO  uint32_t                       EXTDMA_INT_STAT_CLR; /**< Offset: 0x30 (R/W  32) Interrupt Status Clear */
  __IO  uint32_t                       EXTDMA_CONFIG;      /**< Offset: 0x34 (R/W  32) Configuraiton */
  __IO  uint32_t                       EXTDMA_START;       /**< Offset: 0x38 (R/W  32) Start */
  __IO  uint32_t                       EXTDMA_STATUS;      /**< Offset: 0x3C (R/W  32) Stop */
} extdma_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CKSG00_EXTDMA_COMPONENT_H_ */
