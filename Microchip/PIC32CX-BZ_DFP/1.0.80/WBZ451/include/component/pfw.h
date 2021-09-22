/**
 * \brief Component description for PFW
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2021-05-04T23:48:40Z */
#ifndef _BZ45_PFW_COMPONENT_H_
#define _BZ45_PFW_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PFW                                          */
/* ************************************************************************** */

/* -------- PFW_IFT_CON : (PFW Offset: 0x00) (R/W 32)  -------- */
#define PFW_IFT_CON_RESETVALUE                _U_(0x00)                                            /**<  (PFW_IFT_CON)   Reset Value */

#define PFW_IFT_CON_FRZ_Pos                   _U_(13)                                              /**< (PFW_IFT_CON)  Position */
#define PFW_IFT_CON_FRZ_Msk                   (_U_(0x1) << PFW_IFT_CON_FRZ_Pos)                    /**< (PFW_IFT_CON)  Mask */
#define PFW_IFT_CON_FRZ(value)                (PFW_IFT_CON_FRZ_Msk & ((value) << PFW_IFT_CON_FRZ_Pos))
#define PFW_IFT_CON_SIDL_Pos                  _U_(14)                                              /**< (PFW_IFT_CON)  Position */
#define PFW_IFT_CON_SIDL_Msk                  (_U_(0x1) << PFW_IFT_CON_SIDL_Pos)                   /**< (PFW_IFT_CON)  Mask */
#define PFW_IFT_CON_SIDL(value)               (PFW_IFT_CON_SIDL_Msk & ((value) << PFW_IFT_CON_SIDL_Pos))
#define PFW_IFT_CON_ON_Pos                    _U_(15)                                              /**< (PFW_IFT_CON)  Position */
#define PFW_IFT_CON_ON_Msk                    (_U_(0x1) << PFW_IFT_CON_ON_Pos)                     /**< (PFW_IFT_CON)  Mask */
#define PFW_IFT_CON_ON(value)                 (PFW_IFT_CON_ON_Msk & ((value) << PFW_IFT_CON_ON_Pos))
#define PFW_IFT_CON_Msk                       _U_(0x0000E000)                                      /**< (PFW_IFT_CON) Register Mask  */


/* -------- PFW_IFT_CRCCON : (PFW Offset: 0x10) (R/W 32)  -------- */
#define PFW_IFT_CRCCON_RESETVALUE             _U_(0x00)                                            /**<  (PFW_IFT_CRCCON)   Reset Value */

#define PFW_IFT_CRCCON_AUTOR_Pos              _U_(0)                                               /**< (PFW_IFT_CRCCON)  Position */
#define PFW_IFT_CRCCON_AUTOR_Msk              (_U_(0x1) << PFW_IFT_CRCCON_AUTOR_Pos)               /**< (PFW_IFT_CRCCON)  Mask */
#define PFW_IFT_CRCCON_AUTOR(value)           (PFW_IFT_CRCCON_AUTOR_Msk & ((value) << PFW_IFT_CRCCON_AUTOR_Pos))
#define PFW_IFT_CRCCON_RBITO_Pos              _U_(1)                                               /**< (PFW_IFT_CRCCON)  Position */
#define PFW_IFT_CRCCON_RBITO_Msk              (_U_(0x1) << PFW_IFT_CRCCON_RBITO_Pos)               /**< (PFW_IFT_CRCCON)  Mask */
#define PFW_IFT_CRCCON_RBITO(value)           (PFW_IFT_CRCCON_RBITO_Msk & ((value) << PFW_IFT_CRCCON_RBITO_Pos))
#define PFW_IFT_CRCCON_PAUSE_Pos              _U_(2)                                               /**< (PFW_IFT_CRCCON)  Position */
#define PFW_IFT_CRCCON_PAUSE_Msk              (_U_(0x1) << PFW_IFT_CRCCON_PAUSE_Pos)               /**< (PFW_IFT_CRCCON)  Mask */
#define PFW_IFT_CRCCON_PAUSE(value)           (PFW_IFT_CRCCON_PAUSE_Msk & ((value) << PFW_IFT_CRCCON_PAUSE_Pos))
#define PFW_IFT_CRCCON_PLEN32_Pos             _U_(12)                                              /**< (PFW_IFT_CRCCON)  Position */
#define PFW_IFT_CRCCON_PLEN32_Msk             (_U_(0x1) << PFW_IFT_CRCCON_PLEN32_Pos)              /**< (PFW_IFT_CRCCON)  Mask */
#define PFW_IFT_CRCCON_PLEN32(value)          (PFW_IFT_CRCCON_PLEN32_Msk & ((value) << PFW_IFT_CRCCON_PLEN32_Pos))
#define PFW_IFT_CRCCON_ERROR_Pos              _U_(13)                                              /**< (PFW_IFT_CRCCON)  Position */
#define PFW_IFT_CRCCON_ERROR_Msk              (_U_(0x1) << PFW_IFT_CRCCON_ERROR_Pos)               /**< (PFW_IFT_CRCCON)  Mask */
#define PFW_IFT_CRCCON_ERROR(value)           (PFW_IFT_CRCCON_ERROR_Msk & ((value) << PFW_IFT_CRCCON_ERROR_Pos))
#define PFW_IFT_CRCCON_DONE_Pos               _U_(14)                                              /**< (PFW_IFT_CRCCON)  Position */
#define PFW_IFT_CRCCON_DONE_Msk               (_U_(0x1) << PFW_IFT_CRCCON_DONE_Pos)                /**< (PFW_IFT_CRCCON)  Mask */
#define PFW_IFT_CRCCON_DONE(value)            (PFW_IFT_CRCCON_DONE_Msk & ((value) << PFW_IFT_CRCCON_DONE_Pos))
#define PFW_IFT_CRCCON_CRCEN_Pos              _U_(15)                                              /**< (PFW_IFT_CRCCON)  Position */
#define PFW_IFT_CRCCON_CRCEN_Msk              (_U_(0x1) << PFW_IFT_CRCCON_CRCEN_Pos)               /**< (PFW_IFT_CRCCON)  Mask */
#define PFW_IFT_CRCCON_CRCEN(value)           (PFW_IFT_CRCCON_CRCEN_Msk & ((value) << PFW_IFT_CRCCON_CRCEN_Pos))
#define PFW_IFT_CRCCON_PERIOD_Pos             _U_(16)                                              /**< (PFW_IFT_CRCCON)  Position */
#define PFW_IFT_CRCCON_PERIOD_Msk             (_U_(0xFFFF) << PFW_IFT_CRCCON_PERIOD_Pos)           /**< (PFW_IFT_CRCCON)  Mask */
#define PFW_IFT_CRCCON_PERIOD(value)          (PFW_IFT_CRCCON_PERIOD_Msk & ((value) << PFW_IFT_CRCCON_PERIOD_Pos))
#define PFW_IFT_CRCCON_Msk                    _U_(0xFFFFF007)                                      /**< (PFW_IFT_CRCCON) Register Mask  */

#define PFW_IFT_CRCCON_PLEN_Pos               _U_(12)                                              /**< (PFW_IFT_CRCCON Position)  */
#define PFW_IFT_CRCCON_PLEN_Msk               (_U_(0x1) << PFW_IFT_CRCCON_PLEN_Pos)                /**< (PFW_IFT_CRCCON Mask) PLEN */
#define PFW_IFT_CRCCON_PLEN(value)            (PFW_IFT_CRCCON_PLEN_Msk & ((value) << PFW_IFT_CRCCON_PLEN_Pos)) 

/* -------- PFW_IFT_CRCMADR : (PFW Offset: 0x20) (R/W 32)  -------- */
#define PFW_IFT_CRCMADR_RESETVALUE            _U_(0x00)                                            /**<  (PFW_IFT_CRCMADR)   Reset Value */

#define PFW_IFT_CRCMADR_IFT_CRCMADR_Pos       _U_(0)                                               /**< (PFW_IFT_CRCMADR)  Position */
#define PFW_IFT_CRCMADR_IFT_CRCMADR_Msk       (_U_(0xFFFFFFFF) << PFW_IFT_CRCMADR_IFT_CRCMADR_Pos) /**< (PFW_IFT_CRCMADR)  Mask */
#define PFW_IFT_CRCMADR_IFT_CRCMADR(value)    (PFW_IFT_CRCMADR_IFT_CRCMADR_Msk & ((value) << PFW_IFT_CRCMADR_IFT_CRCMADR_Pos))
#define PFW_IFT_CRCMADR_Msk                   _U_(0xFFFFFFFF)                                      /**< (PFW_IFT_CRCMADR) Register Mask  */


/* -------- PFW_IFT_CRCMLEN : (PFW Offset: 0x30) (R/W 32)  -------- */
#define PFW_IFT_CRCMLEN_RESETVALUE            _U_(0x00)                                            /**<  (PFW_IFT_CRCMLEN)   Reset Value */

#define PFW_IFT_CRCMLEN_CRCMLEN_Pos           _U_(0)                                               /**< (PFW_IFT_CRCMLEN)  Position */
#define PFW_IFT_CRCMLEN_CRCMLEN_Msk           (_U_(0xFFFFFF) << PFW_IFT_CRCMLEN_CRCMLEN_Pos)       /**< (PFW_IFT_CRCMLEN)  Mask */
#define PFW_IFT_CRCMLEN_CRCMLEN(value)        (PFW_IFT_CRCMLEN_CRCMLEN_Msk & ((value) << PFW_IFT_CRCMLEN_CRCMLEN_Pos))
#define PFW_IFT_CRCMLEN_Msk                   _U_(0x00FFFFFF)                                      /**< (PFW_IFT_CRCMLEN) Register Mask  */


/* -------- PFW_IFT_CRCIV : (PFW Offset: 0x40) (R/W 32)  -------- */
#define PFW_IFT_CRCIV_RESETVALUE              _U_(0x00)                                            /**<  (PFW_IFT_CRCIV)   Reset Value */

#define PFW_IFT_CRCIV_CRCIV_Pos               _U_(0)                                               /**< (PFW_IFT_CRCIV)  Position */
#define PFW_IFT_CRCIV_CRCIV_Msk               (_U_(0xFFFFFFFF) << PFW_IFT_CRCIV_CRCIV_Pos)         /**< (PFW_IFT_CRCIV)  Mask */
#define PFW_IFT_CRCIV_CRCIV(value)            (PFW_IFT_CRCIV_CRCIV_Msk & ((value) << PFW_IFT_CRCIV_CRCIV_Pos))
#define PFW_IFT_CRCIV_Msk                     _U_(0xFFFFFFFF)                                      /**< (PFW_IFT_CRCIV) Register Mask  */


/* -------- PFW_IFT_CRCACC : (PFW Offset: 0x50) (R/W 32)  -------- */
#define PFW_IFT_CRCACC_RESETVALUE             _U_(0x00)                                            /**<  (PFW_IFT_CRCACC)   Reset Value */

#define PFW_IFT_CRCACC_CRCACC_Pos             _U_(0)                                               /**< (PFW_IFT_CRCACC)  Position */
#define PFW_IFT_CRCACC_CRCACC_Msk             (_U_(0xFFFFFFFF) << PFW_IFT_CRCACC_CRCACC_Pos)       /**< (PFW_IFT_CRCACC)  Mask */
#define PFW_IFT_CRCACC_CRCACC(value)          (PFW_IFT_CRCACC_CRCACC_Msk & ((value) << PFW_IFT_CRCACC_CRCACC_Pos))
#define PFW_IFT_CRCACC_Msk                    _U_(0xFFFFFFFF)                                      /**< (PFW_IFT_CRCACC) Register Mask  */


/* -------- PFW_IFT_CRCPOLY : (PFW Offset: 0x60) (R/W 32)  -------- */
#define PFW_IFT_CRCPOLY_RESETVALUE            _U_(0x00)                                            /**<  (PFW_IFT_CRCPOLY)   Reset Value */

#define PFW_IFT_CRCPOLY_CYCPOLY_Pos           _U_(0)                                               /**< (PFW_IFT_CRCPOLY)  Position */
#define PFW_IFT_CRCPOLY_CYCPOLY_Msk           (_U_(0xFFFFFFFF) << PFW_IFT_CRCPOLY_CYCPOLY_Pos)     /**< (PFW_IFT_CRCPOLY)  Mask */
#define PFW_IFT_CRCPOLY_CYCPOLY(value)        (PFW_IFT_CRCPOLY_CYCPOLY_Msk & ((value) << PFW_IFT_CRCPOLY_CYCPOLY_Pos))
#define PFW_IFT_CRCPOLY_Msk                   _U_(0xFFFFFFFF)                                      /**< (PFW_IFT_CRCPOLY) Register Mask  */


/* -------- PFW_IFT_CRCFXOR : (PFW Offset: 0x70) (R/W 32)  -------- */
#define PFW_IFT_CRCFXOR_RESETVALUE            _U_(0x00)                                            /**<  (PFW_IFT_CRCFXOR)   Reset Value */

#define PFW_IFT_CRCFXOR_CRCFXOR_Pos           _U_(0)                                               /**< (PFW_IFT_CRCFXOR)  Position */
#define PFW_IFT_CRCFXOR_CRCFXOR_Msk           (_U_(0xFFFFFFFF) << PFW_IFT_CRCFXOR_CRCFXOR_Pos)     /**< (PFW_IFT_CRCFXOR)  Mask */
#define PFW_IFT_CRCFXOR_CRCFXOR(value)        (PFW_IFT_CRCFXOR_CRCFXOR_Msk & ((value) << PFW_IFT_CRCFXOR_CRCFXOR_Pos))
#define PFW_IFT_CRCFXOR_Msk                   _U_(0xFFFFFFFF)                                      /**< (PFW_IFT_CRCFXOR) Register Mask  */


/* -------- PFW_IFT_CRCSUM : (PFW Offset: 0x80) (R/W 32)  -------- */
#define PFW_IFT_CRCSUM_RESETVALUE             _U_(0x00)                                            /**<  (PFW_IFT_CRCSUM)   Reset Value */

#define PFW_IFT_CRCSUM_CRCSUM_Pos             _U_(0)                                               /**< (PFW_IFT_CRCSUM)  Position */
#define PFW_IFT_CRCSUM_CRCSUM_Msk             (_U_(0xFFFFFFFF) << PFW_IFT_CRCSUM_CRCSUM_Pos)       /**< (PFW_IFT_CRCSUM)  Mask */
#define PFW_IFT_CRCSUM_CRCSUM(value)          (PFW_IFT_CRCSUM_CRCSUM_Msk & ((value) << PFW_IFT_CRCSUM_CRCSUM_Pos))
#define PFW_IFT_CRCSUM_Msk                    _U_(0xFFFFFFFF)                                      /**< (PFW_IFT_CRCSUM) Register Mask  */


/* -------- PFW_IFT_ECCCON : (PFW Offset: 0x90) (R/W 32)  -------- */
#define PFW_IFT_ECCCON_RESETVALUE             _U_(0x00)                                            /**<  (PFW_IFT_ECCCON)   Reset Value */

#define PFW_IFT_ECCCON_FLT_MD_Pos             _U_(0)                                               /**< (PFW_IFT_ECCCON)  Position */
#define PFW_IFT_ECCCON_FLT_MD_Msk             (_U_(0x7) << PFW_IFT_ECCCON_FLT_MD_Pos)              /**< (PFW_IFT_ECCCON)  Mask */
#define PFW_IFT_ECCCON_FLT_MD(value)          (PFW_IFT_ECCCON_FLT_MD_Msk & ((value) << PFW_IFT_ECCCON_FLT_MD_Pos))
#define PFW_IFT_ECCCON_EVENT_Pos              _U_(7)                                               /**< (PFW_IFT_ECCCON)  Position */
#define PFW_IFT_ECCCON_EVENT_Msk              (_U_(0x1) << PFW_IFT_ECCCON_EVENT_Pos)               /**< (PFW_IFT_ECCCON)  Mask */
#define PFW_IFT_ECCCON_EVENT(value)           (PFW_IFT_ECCCON_EVENT_Msk & ((value) << PFW_IFT_ECCCON_EVENT_Pos))
#define PFW_IFT_ECCCON_CTLFLT_Pos             _U_(8)                                               /**< (PFW_IFT_ECCCON)  Position */
#define PFW_IFT_ECCCON_CTLFLT_Msk             (_U_(0x7) << PFW_IFT_ECCCON_CTLFLT_Pos)              /**< (PFW_IFT_ECCCON)  Mask */
#define PFW_IFT_ECCCON_CTLFLT(value)          (PFW_IFT_ECCCON_CTLFLT_Msk & ((value) << PFW_IFT_ECCCON_CTLFLT_Pos))
#define PFW_IFT_ECCCON_FLTEN_Pos              _U_(15)                                              /**< (PFW_IFT_ECCCON)  Position */
#define PFW_IFT_ECCCON_FLTEN_Msk              (_U_(0x1) << PFW_IFT_ECCCON_FLTEN_Pos)               /**< (PFW_IFT_ECCCON)  Mask */
#define PFW_IFT_ECCCON_FLTEN(value)           (PFW_IFT_ECCCON_FLTEN_Msk & ((value) << PFW_IFT_ECCCON_FLTEN_Pos))
#define PFW_IFT_ECCCON_Msk                    _U_(0x00008787)                                      /**< (PFW_IFT_ECCCON) Register Mask  */


/* -------- PFW_IFT_ECCFLT : (PFW Offset: 0xA0) (R/W 32)  -------- */
#define PFW_IFT_ECCFLT_RESETVALUE             _U_(0x00)                                            /**<  (PFW_IFT_ECCFLT)   Reset Value */

#define PFW_IFT_ECCFLT_FLT1PTR_Pos            _U_(0)                                               /**< (PFW_IFT_ECCFLT)  Position */
#define PFW_IFT_ECCFLT_FLT1PTR_Msk            (_U_(0x1FF) << PFW_IFT_ECCFLT_FLT1PTR_Pos)           /**< (PFW_IFT_ECCFLT)  Mask */
#define PFW_IFT_ECCFLT_FLT1PTR(value)         (PFW_IFT_ECCFLT_FLT1PTR_Msk & ((value) << PFW_IFT_ECCFLT_FLT1PTR_Pos))
#define PFW_IFT_ECCFLT_FLT2PTR_Pos            _U_(16)                                              /**< (PFW_IFT_ECCFLT)  Position */
#define PFW_IFT_ECCFLT_FLT2PTR_Msk            (_U_(0x1FF) << PFW_IFT_ECCFLT_FLT2PTR_Pos)           /**< (PFW_IFT_ECCFLT)  Mask */
#define PFW_IFT_ECCFLT_FLT2PTR(value)         (PFW_IFT_ECCFLT_FLT2PTR_Msk & ((value) << PFW_IFT_ECCFLT_FLT2PTR_Pos))
#define PFW_IFT_ECCFLT_Msk                    _U_(0x01FF01FF)                                      /**< (PFW_IFT_ECCFLT) Register Mask  */


/* -------- PFW_IFT_ECCADR : (PFW Offset: 0xB0) (R/W 32)  -------- */
#define PFW_IFT_ECCADR_RESETVALUE             _U_(0x00)                                            /**<  (PFW_IFT_ECCADR)   Reset Value */

#define PFW_IFT_ECCADR_ECCADR_Pos             _U_(0)                                               /**< (PFW_IFT_ECCADR)  Position */
#define PFW_IFT_ECCADR_ECCADR_Msk             (_U_(0xFFFFFFFF) << PFW_IFT_ECCADR_ECCADR_Pos)       /**< (PFW_IFT_ECCADR)  Mask */
#define PFW_IFT_ECCADR_ECCADR(value)          (PFW_IFT_ECCADR_ECCADR_Msk & ((value) << PFW_IFT_ECCADR_ECCADR_Pos))
#define PFW_IFT_ECCADR_Msk                    _U_(0xFFFFFFFF)                                      /**< (PFW_IFT_ECCADR) Register Mask  */


/* -------- PFW_IFT_ECCPAR : (PFW Offset: 0xC0) (R/W 32)  -------- */
#define PFW_IFT_ECCPAR_RESETVALUE             _U_(0x00)                                            /**<  (PFW_IFT_ECCPAR)   Reset Value */

#define PFW_IFT_ECCPAR_SECIN_Pos              _U_(0)                                               /**< (PFW_IFT_ECCPAR)  Position */
#define PFW_IFT_ECCPAR_SECIN_Msk              (_U_(0x1FF) << PFW_IFT_ECCPAR_SECIN_Pos)             /**< (PFW_IFT_ECCPAR)  Mask */
#define PFW_IFT_ECCPAR_SECIN(value)           (PFW_IFT_ECCPAR_SECIN_Msk & ((value) << PFW_IFT_ECCPAR_SECIN_Pos))
#define PFW_IFT_ECCPAR_DEDIN_Pos              _U_(15)                                              /**< (PFW_IFT_ECCPAR)  Position */
#define PFW_IFT_ECCPAR_DEDIN_Msk              (_U_(0x1) << PFW_IFT_ECCPAR_DEDIN_Pos)               /**< (PFW_IFT_ECCPAR)  Mask */
#define PFW_IFT_ECCPAR_DEDIN(value)           (PFW_IFT_ECCPAR_DEDIN_Msk & ((value) << PFW_IFT_ECCPAR_DEDIN_Pos))
#define PFW_IFT_ECCPAR_SECOUT_Pos             _U_(16)                                              /**< (PFW_IFT_ECCPAR)  Position */
#define PFW_IFT_ECCPAR_SECOUT_Msk             (_U_(0x1FF) << PFW_IFT_ECCPAR_SECOUT_Pos)            /**< (PFW_IFT_ECCPAR)  Mask */
#define PFW_IFT_ECCPAR_SECOUT(value)          (PFW_IFT_ECCPAR_SECOUT_Msk & ((value) << PFW_IFT_ECCPAR_SECOUT_Pos))
#define PFW_IFT_ECCPAR_DEDOUT_Pos             _U_(31)                                              /**< (PFW_IFT_ECCPAR)  Position */
#define PFW_IFT_ECCPAR_DEDOUT_Msk             (_U_(0x1) << PFW_IFT_ECCPAR_DEDOUT_Pos)              /**< (PFW_IFT_ECCPAR)  Mask */
#define PFW_IFT_ECCPAR_DEDOUT(value)          (PFW_IFT_ECCPAR_DEDOUT_Msk & ((value) << PFW_IFT_ECCPAR_DEDOUT_Pos))
#define PFW_IFT_ECCPAR_Msk                    _U_(0x81FF81FF)                                      /**< (PFW_IFT_ECCPAR) Register Mask  */


/* -------- PFW_IFT_ECCSYN : (PFW Offset: 0xD0) (R/W 32)  -------- */
#define PFW_IFT_ECCSYN_RESETVALUE             _U_(0x00)                                            /**<  (PFW_IFT_ECCSYN)   Reset Value */

#define PFW_IFT_ECCSYN_SECSYN_Pos             _U_(0)                                               /**< (PFW_IFT_ECCSYN)  Position */
#define PFW_IFT_ECCSYN_SECSYN_Msk             (_U_(0x1FF) << PFW_IFT_ECCSYN_SECSYN_Pos)            /**< (PFW_IFT_ECCSYN)  Mask */
#define PFW_IFT_ECCSYN_SECSYN(value)          (PFW_IFT_ECCSYN_SECSYN_Msk & ((value) << PFW_IFT_ECCSYN_SECSYN_Pos))
#define PFW_IFT_ECCSYN_DEDSYS_Pos             _U_(15)                                              /**< (PFW_IFT_ECCSYN)  Position */
#define PFW_IFT_ECCSYN_DEDSYS_Msk             (_U_(0x1) << PFW_IFT_ECCSYN_DEDSYS_Pos)              /**< (PFW_IFT_ECCSYN)  Mask */
#define PFW_IFT_ECCSYN_DEDSYS(value)          (PFW_IFT_ECCSYN_DEDSYS_Msk & ((value) << PFW_IFT_ECCSYN_DEDSYS_Pos))
#define PFW_IFT_ECCSYN_SERR_Pos               _U_(16)                                              /**< (PFW_IFT_ECCSYN)  Position */
#define PFW_IFT_ECCSYN_SERR_Msk               (_U_(0x1) << PFW_IFT_ECCSYN_SERR_Pos)                /**< (PFW_IFT_ECCSYN)  Mask */
#define PFW_IFT_ECCSYN_SERR(value)            (PFW_IFT_ECCSYN_SERR_Msk & ((value) << PFW_IFT_ECCSYN_SERR_Pos))
#define PFW_IFT_ECCSYN_DERR_Pos               _U_(17)                                              /**< (PFW_IFT_ECCSYN)  Position */
#define PFW_IFT_ECCSYN_DERR_Msk               (_U_(0x1) << PFW_IFT_ECCSYN_DERR_Pos)                /**< (PFW_IFT_ECCSYN)  Mask */
#define PFW_IFT_ECCSYN_DERR(value)            (PFW_IFT_ECCSYN_DERR_Msk & ((value) << PFW_IFT_ECCSYN_DERR_Pos))
#define PFW_IFT_ECCSYN_CERR_Pos               _U_(18)                                              /**< (PFW_IFT_ECCSYN)  Position */
#define PFW_IFT_ECCSYN_CERR_Msk               (_U_(0x1) << PFW_IFT_ECCSYN_CERR_Pos)                /**< (PFW_IFT_ECCSYN)  Mask */
#define PFW_IFT_ECCSYN_CERR(value)            (PFW_IFT_ECCSYN_CERR_Msk & ((value) << PFW_IFT_ECCSYN_CERR_Pos))
#define PFW_IFT_ECCSYN_CTLSTAT_Pos            _U_(24)                                              /**< (PFW_IFT_ECCSYN)  Position */
#define PFW_IFT_ECCSYN_CTLSTAT_Msk            (_U_(0x7) << PFW_IFT_ECCSYN_CTLSTAT_Pos)             /**< (PFW_IFT_ECCSYN)  Mask */
#define PFW_IFT_ECCSYN_CTLSTAT(value)         (PFW_IFT_ECCSYN_CTLSTAT_Msk & ((value) << PFW_IFT_ECCSYN_CTLSTAT_Pos))
#define PFW_IFT_ECCSYN_PERR0_Pos              _U_(28)                                              /**< (PFW_IFT_ECCSYN)  Position */
#define PFW_IFT_ECCSYN_PERR0_Msk              (_U_(0x1) << PFW_IFT_ECCSYN_PERR0_Pos)               /**< (PFW_IFT_ECCSYN)  Mask */
#define PFW_IFT_ECCSYN_PERR0(value)           (PFW_IFT_ECCSYN_PERR0_Msk & ((value) << PFW_IFT_ECCSYN_PERR0_Pos))
#define PFW_IFT_ECCSYN_PERR1_Pos              _U_(29)                                              /**< (PFW_IFT_ECCSYN)  Position */
#define PFW_IFT_ECCSYN_PERR1_Msk              (_U_(0x1) << PFW_IFT_ECCSYN_PERR1_Pos)               /**< (PFW_IFT_ECCSYN)  Mask */
#define PFW_IFT_ECCSYN_PERR1(value)           (PFW_IFT_ECCSYN_PERR1_Msk & ((value) << PFW_IFT_ECCSYN_PERR1_Pos))
#define PFW_IFT_ECCSYN_PERR2_Pos              _U_(30)                                              /**< (PFW_IFT_ECCSYN)  Position */
#define PFW_IFT_ECCSYN_PERR2_Msk              (_U_(0x1) << PFW_IFT_ECCSYN_PERR2_Pos)               /**< (PFW_IFT_ECCSYN)  Mask */
#define PFW_IFT_ECCSYN_PERR2(value)           (PFW_IFT_ECCSYN_PERR2_Msk & ((value) << PFW_IFT_ECCSYN_PERR2_Pos))
#define PFW_IFT_ECCSYN_PERR3_Pos              _U_(31)                                              /**< (PFW_IFT_ECCSYN)  Position */
#define PFW_IFT_ECCSYN_PERR3_Msk              (_U_(0x1) << PFW_IFT_ECCSYN_PERR3_Pos)               /**< (PFW_IFT_ECCSYN)  Mask */
#define PFW_IFT_ECCSYN_PERR3(value)           (PFW_IFT_ECCSYN_PERR3_Msk & ((value) << PFW_IFT_ECCSYN_PERR3_Pos))
#define PFW_IFT_ECCSYN_Msk                    _U_(0xF70781FF)                                      /**< (PFW_IFT_ECCSYN) Register Mask  */

#define PFW_IFT_ECCSYN_PERR_Pos               _U_(28)                                              /**< (PFW_IFT_ECCSYN Position)  */
#define PFW_IFT_ECCSYN_PERR_Msk               (_U_(0xF) << PFW_IFT_ECCSYN_PERR_Pos)                /**< (PFW_IFT_ECCSYN Mask) PERR */
#define PFW_IFT_ECCSYN_PERR(value)            (PFW_IFT_ECCSYN_PERR_Msk & ((value) << PFW_IFT_ECCSYN_PERR_Pos)) 

/* -------- PFW_DFT_VALCON : (PFW Offset: 0xF0) (R/W 32)  -------- */
#define PFW_DFT_VALCON_RESETVALUE             _U_(0x00)                                            /**<  (PFW_DFT_VALCON)   Reset Value */

#define PFW_DFT_VALCON_VAL_ON_Pos             _U_(15)                                              /**< (PFW_DFT_VALCON)  Position */
#define PFW_DFT_VALCON_VAL_ON_Msk             (_U_(0x1) << PFW_DFT_VALCON_VAL_ON_Pos)              /**< (PFW_DFT_VALCON)  Mask */
#define PFW_DFT_VALCON_VAL_ON(value)          (PFW_DFT_VALCON_VAL_ON_Msk & ((value) << PFW_DFT_VALCON_VAL_ON_Pos))
#define PFW_DFT_VALCON_Msk                    _U_(0x00008000)                                      /**< (PFW_DFT_VALCON) Register Mask  */


/* -------- PFW_DFT_VALP1RR01 : (PFW Offset: 0x100) (R/W 32)  -------- */
#define PFW_DFT_VALP1RR01_RESETVALUE          _U_(0x00)                                            /**<  (PFW_DFT_VALP1RR01)   Reset Value */

#define PFW_DFT_VALP1RR01_PR1RR0_Pos          _U_(0)                                               /**< (PFW_DFT_VALP1RR01)  Position */
#define PFW_DFT_VALP1RR01_PR1RR0_Msk          (_U_(0xFFFF) << PFW_DFT_VALP1RR01_PR1RR0_Pos)        /**< (PFW_DFT_VALP1RR01)  Mask */
#define PFW_DFT_VALP1RR01_PR1RR0(value)       (PFW_DFT_VALP1RR01_PR1RR0_Msk & ((value) << PFW_DFT_VALP1RR01_PR1RR0_Pos))
#define PFW_DFT_VALP1RR01_P1RR1_Pos           _U_(16)                                              /**< (PFW_DFT_VALP1RR01)  Position */
#define PFW_DFT_VALP1RR01_P1RR1_Msk           (_U_(0xFFFF) << PFW_DFT_VALP1RR01_P1RR1_Pos)         /**< (PFW_DFT_VALP1RR01)  Mask */
#define PFW_DFT_VALP1RR01_P1RR1(value)        (PFW_DFT_VALP1RR01_P1RR1_Msk & ((value) << PFW_DFT_VALP1RR01_P1RR1_Pos))
#define PFW_DFT_VALP1RR01_Msk                 _U_(0xFFFFFFFF)                                      /**< (PFW_DFT_VALP1RR01) Register Mask  */


/* -------- PFW_DFT_VALP1RR23 : (PFW Offset: 0x110) (R/W 32)  -------- */
#define PFW_DFT_VALP1RR23_RESETVALUE          _U_(0x00)                                            /**<  (PFW_DFT_VALP1RR23)   Reset Value */

#define PFW_DFT_VALP1RR23_PR1RR2_Pos          _U_(0)                                               /**< (PFW_DFT_VALP1RR23)  Position */
#define PFW_DFT_VALP1RR23_PR1RR2_Msk          (_U_(0xFFFF) << PFW_DFT_VALP1RR23_PR1RR2_Pos)        /**< (PFW_DFT_VALP1RR23)  Mask */
#define PFW_DFT_VALP1RR23_PR1RR2(value)       (PFW_DFT_VALP1RR23_PR1RR2_Msk & ((value) << PFW_DFT_VALP1RR23_PR1RR2_Pos))
#define PFW_DFT_VALP1RR23_P1RR3_Pos           _U_(16)                                              /**< (PFW_DFT_VALP1RR23)  Position */
#define PFW_DFT_VALP1RR23_P1RR3_Msk           (_U_(0xFFFF) << PFW_DFT_VALP1RR23_P1RR3_Pos)         /**< (PFW_DFT_VALP1RR23)  Mask */
#define PFW_DFT_VALP1RR23_P1RR3(value)        (PFW_DFT_VALP1RR23_P1RR3_Msk & ((value) << PFW_DFT_VALP1RR23_P1RR3_Pos))
#define PFW_DFT_VALP1RR23_Msk                 _U_(0xFFFFFFFF)                                      /**< (PFW_DFT_VALP1RR23) Register Mask  */


/* -------- PFW_DFT_VALP1RR45 : (PFW Offset: 0x120) (R/W 32)  -------- */
#define PFW_DFT_VALP1RR45_RESETVALUE          _U_(0x00)                                            /**<  (PFW_DFT_VALP1RR45)   Reset Value */

#define PFW_DFT_VALP1RR45_PR1RR4_Pos          _U_(0)                                               /**< (PFW_DFT_VALP1RR45)  Position */
#define PFW_DFT_VALP1RR45_PR1RR4_Msk          (_U_(0xFFFF) << PFW_DFT_VALP1RR45_PR1RR4_Pos)        /**< (PFW_DFT_VALP1RR45)  Mask */
#define PFW_DFT_VALP1RR45_PR1RR4(value)       (PFW_DFT_VALP1RR45_PR1RR4_Msk & ((value) << PFW_DFT_VALP1RR45_PR1RR4_Pos))
#define PFW_DFT_VALP1RR45_P1RR5_Pos           _U_(16)                                              /**< (PFW_DFT_VALP1RR45)  Position */
#define PFW_DFT_VALP1RR45_P1RR5_Msk           (_U_(0xFFFF) << PFW_DFT_VALP1RR45_P1RR5_Pos)         /**< (PFW_DFT_VALP1RR45)  Mask */
#define PFW_DFT_VALP1RR45_P1RR5(value)        (PFW_DFT_VALP1RR45_P1RR5_Msk & ((value) << PFW_DFT_VALP1RR45_P1RR5_Pos))
#define PFW_DFT_VALP1RR45_Msk                 _U_(0xFFFFFFFF)                                      /**< (PFW_DFT_VALP1RR45) Register Mask  */


/* -------- PFW_DFT_VALP1RR67 : (PFW Offset: 0x130) (R/W 32)  -------- */
#define PFW_DFT_VALP1RR67_RESETVALUE          _U_(0x00)                                            /**<  (PFW_DFT_VALP1RR67)   Reset Value */

#define PFW_DFT_VALP1RR67_PR1RR6_Pos          _U_(0)                                               /**< (PFW_DFT_VALP1RR67)  Position */
#define PFW_DFT_VALP1RR67_PR1RR6_Msk          (_U_(0xFFFF) << PFW_DFT_VALP1RR67_PR1RR6_Pos)        /**< (PFW_DFT_VALP1RR67)  Mask */
#define PFW_DFT_VALP1RR67_PR1RR6(value)       (PFW_DFT_VALP1RR67_PR1RR6_Msk & ((value) << PFW_DFT_VALP1RR67_PR1RR6_Pos))
#define PFW_DFT_VALP1RR67_P1RR7_Pos           _U_(16)                                              /**< (PFW_DFT_VALP1RR67)  Position */
#define PFW_DFT_VALP1RR67_P1RR7_Msk           (_U_(0xFFFF) << PFW_DFT_VALP1RR67_P1RR7_Pos)         /**< (PFW_DFT_VALP1RR67)  Mask */
#define PFW_DFT_VALP1RR67_P1RR7(value)        (PFW_DFT_VALP1RR67_P1RR7_Msk & ((value) << PFW_DFT_VALP1RR67_P1RR7_Pos))
#define PFW_DFT_VALP1RR67_Msk                 _U_(0xFFFFFFFF)                                      /**< (PFW_DFT_VALP1RR67) Register Mask  */


/* -------- PFW_DFT_VALP2RR01 : (PFW Offset: 0x140) (R/W 32)  -------- */
#define PFW_DFT_VALP2RR01_RESETVALUE          _U_(0x00)                                            /**<  (PFW_DFT_VALP2RR01)   Reset Value */

#define PFW_DFT_VALP2RR01_PR2RR0_Pos          _U_(0)                                               /**< (PFW_DFT_VALP2RR01)  Position */
#define PFW_DFT_VALP2RR01_PR2RR0_Msk          (_U_(0xFFFF) << PFW_DFT_VALP2RR01_PR2RR0_Pos)        /**< (PFW_DFT_VALP2RR01)  Mask */
#define PFW_DFT_VALP2RR01_PR2RR0(value)       (PFW_DFT_VALP2RR01_PR2RR0_Msk & ((value) << PFW_DFT_VALP2RR01_PR2RR0_Pos))
#define PFW_DFT_VALP2RR01_P2RR1_Pos           _U_(16)                                              /**< (PFW_DFT_VALP2RR01)  Position */
#define PFW_DFT_VALP2RR01_P2RR1_Msk           (_U_(0xFFFF) << PFW_DFT_VALP2RR01_P2RR1_Pos)         /**< (PFW_DFT_VALP2RR01)  Mask */
#define PFW_DFT_VALP2RR01_P2RR1(value)        (PFW_DFT_VALP2RR01_P2RR1_Msk & ((value) << PFW_DFT_VALP2RR01_P2RR1_Pos))
#define PFW_DFT_VALP2RR01_Msk                 _U_(0xFFFFFFFF)                                      /**< (PFW_DFT_VALP2RR01) Register Mask  */


/* -------- PFW_DFT_VALP2RR23 : (PFW Offset: 0x150) (R/W 32)  -------- */
#define PFW_DFT_VALP2RR23_RESETVALUE          _U_(0x00)                                            /**<  (PFW_DFT_VALP2RR23)   Reset Value */

#define PFW_DFT_VALP2RR23_PR2RR2_Pos          _U_(0)                                               /**< (PFW_DFT_VALP2RR23)  Position */
#define PFW_DFT_VALP2RR23_PR2RR2_Msk          (_U_(0xFFFF) << PFW_DFT_VALP2RR23_PR2RR2_Pos)        /**< (PFW_DFT_VALP2RR23)  Mask */
#define PFW_DFT_VALP2RR23_PR2RR2(value)       (PFW_DFT_VALP2RR23_PR2RR2_Msk & ((value) << PFW_DFT_VALP2RR23_PR2RR2_Pos))
#define PFW_DFT_VALP2RR23_P2RR3_Pos           _U_(16)                                              /**< (PFW_DFT_VALP2RR23)  Position */
#define PFW_DFT_VALP2RR23_P2RR3_Msk           (_U_(0xFFFF) << PFW_DFT_VALP2RR23_P2RR3_Pos)         /**< (PFW_DFT_VALP2RR23)  Mask */
#define PFW_DFT_VALP2RR23_P2RR3(value)        (PFW_DFT_VALP2RR23_P2RR3_Msk & ((value) << PFW_DFT_VALP2RR23_P2RR3_Pos))
#define PFW_DFT_VALP2RR23_Msk                 _U_(0xFFFFFFFF)                                      /**< (PFW_DFT_VALP2RR23) Register Mask  */


/* -------- PFW_DFT_VALP2RR45 : (PFW Offset: 0x160) (R/W 32)  -------- */
#define PFW_DFT_VALP2RR45_RESETVALUE          _U_(0x00)                                            /**<  (PFW_DFT_VALP2RR45)   Reset Value */

#define PFW_DFT_VALP2RR45_PR2RR4_Pos          _U_(0)                                               /**< (PFW_DFT_VALP2RR45)  Position */
#define PFW_DFT_VALP2RR45_PR2RR4_Msk          (_U_(0xFFFF) << PFW_DFT_VALP2RR45_PR2RR4_Pos)        /**< (PFW_DFT_VALP2RR45)  Mask */
#define PFW_DFT_VALP2RR45_PR2RR4(value)       (PFW_DFT_VALP2RR45_PR2RR4_Msk & ((value) << PFW_DFT_VALP2RR45_PR2RR4_Pos))
#define PFW_DFT_VALP2RR45_P2RR5_Pos           _U_(16)                                              /**< (PFW_DFT_VALP2RR45)  Position */
#define PFW_DFT_VALP2RR45_P2RR5_Msk           (_U_(0xFFFF) << PFW_DFT_VALP2RR45_P2RR5_Pos)         /**< (PFW_DFT_VALP2RR45)  Mask */
#define PFW_DFT_VALP2RR45_P2RR5(value)        (PFW_DFT_VALP2RR45_P2RR5_Msk & ((value) << PFW_DFT_VALP2RR45_P2RR5_Pos))
#define PFW_DFT_VALP2RR45_Msk                 _U_(0xFFFFFFFF)                                      /**< (PFW_DFT_VALP2RR45) Register Mask  */


/* -------- PFW_DFT_VALP2RR67 : (PFW Offset: 0x170) (R/W 32)  -------- */
#define PFW_DFT_VALP2RR67_RESETVALUE          _U_(0x00)                                            /**<  (PFW_DFT_VALP2RR67)   Reset Value */

#define PFW_DFT_VALP2RR67_PR2RR6_Pos          _U_(0)                                               /**< (PFW_DFT_VALP2RR67)  Position */
#define PFW_DFT_VALP2RR67_PR2RR6_Msk          (_U_(0xFFFF) << PFW_DFT_VALP2RR67_PR2RR6_Pos)        /**< (PFW_DFT_VALP2RR67)  Mask */
#define PFW_DFT_VALP2RR67_PR2RR6(value)       (PFW_DFT_VALP2RR67_PR2RR6_Msk & ((value) << PFW_DFT_VALP2RR67_PR2RR6_Pos))
#define PFW_DFT_VALP2RR67_P2RR7_Pos           _U_(16)                                              /**< (PFW_DFT_VALP2RR67)  Position */
#define PFW_DFT_VALP2RR67_P2RR7_Msk           (_U_(0xFFFF) << PFW_DFT_VALP2RR67_P2RR7_Pos)         /**< (PFW_DFT_VALP2RR67)  Mask */
#define PFW_DFT_VALP2RR67_P2RR7(value)        (PFW_DFT_VALP2RR67_P2RR7_Msk & ((value) << PFW_DFT_VALP2RR67_P2RR7_Pos))
#define PFW_DFT_VALP2RR67_Msk                 _U_(0xFFFFFFFF)                                      /**< (PFW_DFT_VALP2RR67) Register Mask  */


/** \brief PFW register offsets definitions */
#define PFW_IFT_CON_REG_OFST           (0x00)              /**< (PFW_IFT_CON)  Offset */
#define PFW_IFT_CRCCON_REG_OFST        (0x10)              /**< (PFW_IFT_CRCCON)  Offset */
#define PFW_IFT_CRCMADR_REG_OFST       (0x20)              /**< (PFW_IFT_CRCMADR)  Offset */
#define PFW_IFT_CRCMLEN_REG_OFST       (0x30)              /**< (PFW_IFT_CRCMLEN)  Offset */
#define PFW_IFT_CRCIV_REG_OFST         (0x40)              /**< (PFW_IFT_CRCIV)  Offset */
#define PFW_IFT_CRCACC_REG_OFST        (0x50)              /**< (PFW_IFT_CRCACC)  Offset */
#define PFW_IFT_CRCPOLY_REG_OFST       (0x60)              /**< (PFW_IFT_CRCPOLY)  Offset */
#define PFW_IFT_CRCFXOR_REG_OFST       (0x70)              /**< (PFW_IFT_CRCFXOR)  Offset */
#define PFW_IFT_CRCSUM_REG_OFST        (0x80)              /**< (PFW_IFT_CRCSUM)  Offset */
#define PFW_IFT_ECCCON_REG_OFST        (0x90)              /**< (PFW_IFT_ECCCON)  Offset */
#define PFW_IFT_ECCFLT_REG_OFST        (0xA0)              /**< (PFW_IFT_ECCFLT)  Offset */
#define PFW_IFT_ECCADR_REG_OFST        (0xB0)              /**< (PFW_IFT_ECCADR)  Offset */
#define PFW_IFT_ECCPAR_REG_OFST        (0xC0)              /**< (PFW_IFT_ECCPAR)  Offset */
#define PFW_IFT_ECCSYN_REG_OFST        (0xD0)              /**< (PFW_IFT_ECCSYN)  Offset */
#define PFW_DFT_VALCON_REG_OFST        (0xF0)              /**< (PFW_DFT_VALCON)  Offset */
#define PFW_DFT_VALP1RR01_REG_OFST     (0x100)             /**< (PFW_DFT_VALP1RR01)  Offset */
#define PFW_DFT_VALP1RR23_REG_OFST     (0x110)             /**< (PFW_DFT_VALP1RR23)  Offset */
#define PFW_DFT_VALP1RR45_REG_OFST     (0x120)             /**< (PFW_DFT_VALP1RR45)  Offset */
#define PFW_DFT_VALP1RR67_REG_OFST     (0x130)             /**< (PFW_DFT_VALP1RR67)  Offset */
#define PFW_DFT_VALP2RR01_REG_OFST     (0x140)             /**< (PFW_DFT_VALP2RR01)  Offset */
#define PFW_DFT_VALP2RR23_REG_OFST     (0x150)             /**< (PFW_DFT_VALP2RR23)  Offset */
#define PFW_DFT_VALP2RR45_REG_OFST     (0x160)             /**< (PFW_DFT_VALP2RR45)  Offset */
#define PFW_DFT_VALP2RR67_REG_OFST     (0x170)             /**< (PFW_DFT_VALP2RR67)  Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PFW register API structure */
typedef struct
{  /* flash wrapper */
  __IO  uint32_t                       PFW_IFT_CON;        /**< Offset: 0x00 (R/W  32)  */
  __I   uint8_t                        Reserved1[0x0C];
  __IO  uint32_t                       PFW_IFT_CRCCON;     /**< Offset: 0x10 (R/W  32)  */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       PFW_IFT_CRCMADR;    /**< Offset: 0x20 (R/W  32)  */
  __I   uint8_t                        Reserved3[0x0C];
  __IO  uint32_t                       PFW_IFT_CRCMLEN;    /**< Offset: 0x30 (R/W  32)  */
  __I   uint8_t                        Reserved4[0x0C];
  __IO  uint32_t                       PFW_IFT_CRCIV;      /**< Offset: 0x40 (R/W  32)  */
  __I   uint8_t                        Reserved5[0x0C];
  __IO  uint32_t                       PFW_IFT_CRCACC;     /**< Offset: 0x50 (R/W  32)  */
  __I   uint8_t                        Reserved6[0x0C];
  __IO  uint32_t                       PFW_IFT_CRCPOLY;    /**< Offset: 0x60 (R/W  32)  */
  __I   uint8_t                        Reserved7[0x0C];
  __IO  uint32_t                       PFW_IFT_CRCFXOR;    /**< Offset: 0x70 (R/W  32)  */
  __I   uint8_t                        Reserved8[0x0C];
  __IO  uint32_t                       PFW_IFT_CRCSUM;     /**< Offset: 0x80 (R/W  32)  */
  __I   uint8_t                        Reserved9[0x0C];
  __IO  uint32_t                       PFW_IFT_ECCCON;     /**< Offset: 0x90 (R/W  32)  */
  __I   uint8_t                        Reserved10[0x0C];
  __IO  uint32_t                       PFW_IFT_ECCFLT;     /**< Offset: 0xA0 (R/W  32)  */
  __I   uint8_t                        Reserved11[0x0C];
  __IO  uint32_t                       PFW_IFT_ECCADR;     /**< Offset: 0xB0 (R/W  32)  */
  __I   uint8_t                        Reserved12[0x0C];
  __IO  uint32_t                       PFW_IFT_ECCPAR;     /**< Offset: 0xC0 (R/W  32)  */
  __I   uint8_t                        Reserved13[0x0C];
  __IO  uint32_t                       PFW_IFT_ECCSYN;     /**< Offset: 0xD0 (R/W  32)  */
  __I   uint8_t                        Reserved14[0x1C];
  __IO  uint32_t                       PFW_DFT_VALCON;     /**< Offset: 0xF0 (R/W  32)  */
  __I   uint8_t                        Reserved15[0x0C];
  __IO  uint32_t                       PFW_DFT_VALP1RR01;  /**< Offset: 0x100 (R/W  32)  */
  __I   uint8_t                        Reserved16[0x0C];
  __IO  uint32_t                       PFW_DFT_VALP1RR23;  /**< Offset: 0x110 (R/W  32)  */
  __I   uint8_t                        Reserved17[0x0C];
  __IO  uint32_t                       PFW_DFT_VALP1RR45;  /**< Offset: 0x120 (R/W  32)  */
  __I   uint8_t                        Reserved18[0x0C];
  __IO  uint32_t                       PFW_DFT_VALP1RR67;  /**< Offset: 0x130 (R/W  32)  */
  __I   uint8_t                        Reserved19[0x0C];
  __IO  uint32_t                       PFW_DFT_VALP2RR01;  /**< Offset: 0x140 (R/W  32)  */
  __I   uint8_t                        Reserved20[0x0C];
  __IO  uint32_t                       PFW_DFT_VALP2RR23;  /**< Offset: 0x150 (R/W  32)  */
  __I   uint8_t                        Reserved21[0x0C];
  __IO  uint32_t                       PFW_DFT_VALP2RR45;  /**< Offset: 0x160 (R/W  32)  */
  __I   uint8_t                        Reserved22[0x0C];
  __IO  uint32_t                       PFW_DFT_VALP2RR67;  /**< Offset: 0x170 (R/W  32)  */
} pfw_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _BZ45_PFW_COMPONENT_H_ */
