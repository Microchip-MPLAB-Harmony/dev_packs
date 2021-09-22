/**
 * \brief Component description for DSCON
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
#ifndef _BZ45_DSCON_COMPONENT_H_
#define _BZ45_DSCON_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DSCON                                        */
/* ************************************************************************** */

/* -------- DSCON_DSCON : (DSCON Offset: 0x00) (R/W 32)  -------- */
#define DSCON_DSCON_RESETVALUE                _U_(0x00)                                            /**<  (DSCON_DSCON)   Reset Value */

#define DSCON_DSCON_DSSR_Pos                  _U_(0)                                               /**< (DSCON_DSCON)  Position */
#define DSCON_DSCON_DSSR_Msk                  (_U_(0x1) << DSCON_DSCON_DSSR_Pos)                   /**< (DSCON_DSCON)  Mask */
#define DSCON_DSCON_DSSR(value)               (DSCON_DSCON_DSSR_Msk & ((value) << DSCON_DSCON_DSSR_Pos))
#define DSCON_DSCON_ZPBOR_Pos                 _U_(1)                                               /**< (DSCON_DSCON)  Position */
#define DSCON_DSCON_ZPBOR_Msk                 (_U_(0x1) << DSCON_DSCON_ZPBOR_Pos)                  /**< (DSCON_DSCON)  Mask */
#define DSCON_DSCON_ZPBOR(value)              (DSCON_DSCON_ZPBOR_Msk & ((value) << DSCON_DSCON_ZPBOR_Pos))
#define DSCON_DSCON_RTCCWDIS_Pos              _U_(8)                                               /**< (DSCON_DSCON)  Position */
#define DSCON_DSCON_RTCCWDIS_Msk              (_U_(0x1) << DSCON_DSCON_RTCCWDIS_Pos)               /**< (DSCON_DSCON)  Mask */
#define DSCON_DSCON_RTCCWDIS(value)           (DSCON_DSCON_RTCCWDIS_Msk & ((value) << DSCON_DSCON_RTCCWDIS_Pos))
#define DSCON_DSCON_RTCPWREQ_Pos              _U_(12)                                              /**< (DSCON_DSCON)  Position */
#define DSCON_DSCON_RTCPWREQ_Msk              (_U_(0x1) << DSCON_DSCON_RTCPWREQ_Pos)               /**< (DSCON_DSCON)  Mask */
#define DSCON_DSCON_RTCPWREQ(value)           (DSCON_DSCON_RTCPWREQ_Msk & ((value) << DSCON_DSCON_RTCPWREQ_Pos))
#define DSCON_DSCON_XSEMAEN_Pos               _U_(13)                                              /**< (DSCON_DSCON)  Position */
#define DSCON_DSCON_XSEMAEN_Msk               (_U_(0x1) << DSCON_DSCON_XSEMAEN_Pos)                /**< (DSCON_DSCON)  Mask */
#define DSCON_DSCON_XSEMAEN(value)            (DSCON_DSCON_XSEMAEN_Msk & ((value) << DSCON_DSCON_XSEMAEN_Pos))
#define DSCON_DSCON_DSEN_Pos                  _U_(15)                                              /**< (DSCON_DSCON)  Position */
#define DSCON_DSCON_DSEN_Msk                  (_U_(0x1) << DSCON_DSCON_DSEN_Pos)                   /**< (DSCON_DSCON)  Mask */
#define DSCON_DSCON_DSEN(value)               (DSCON_DSCON_DSEN_Msk & ((value) << DSCON_DSCON_DSEN_Pos))
#define DSCON_DSCON_Msk                       _U_(0x0000B103)                                      /**< (DSCON_DSCON) Register Mask  */


/* -------- DSCON_DSWAKE : (DSCON Offset: 0x04) (R/W 32)  -------- */
#define DSCON_DSWAKE_RESETVALUE               _U_(0x00)                                            /**<  (DSCON_DSWAKE)   Reset Value */

#define DSCON_DSWAKE_ICD_Pos                  _U_(1)                                               /**< (DSCON_DSWAKE)  Position */
#define DSCON_DSWAKE_ICD_Msk                  (_U_(0x1) << DSCON_DSWAKE_ICD_Pos)                   /**< (DSCON_DSWAKE)  Mask */
#define DSCON_DSWAKE_ICD(value)               (DSCON_DSWAKE_ICD_Msk & ((value) << DSCON_DSWAKE_ICD_Pos))
#define DSCON_DSWAKE_MCLR_Pos                 _U_(2)                                               /**< (DSCON_DSWAKE)  Position */
#define DSCON_DSWAKE_MCLR_Msk                 (_U_(0x1) << DSCON_DSWAKE_MCLR_Pos)                  /**< (DSCON_DSWAKE)  Mask */
#define DSCON_DSWAKE_MCLR(value)              (DSCON_DSWAKE_MCLR_Msk & ((value) << DSCON_DSWAKE_MCLR_Pos))
#define DSCON_DSWAKE_RTCC_Pos                 _U_(3)                                               /**< (DSCON_DSWAKE)  Position */
#define DSCON_DSWAKE_RTCC_Msk                 (_U_(0x1) << DSCON_DSWAKE_RTCC_Pos)                  /**< (DSCON_DSWAKE)  Mask */
#define DSCON_DSWAKE_RTCC(value)              (DSCON_DSWAKE_RTCC_Msk & ((value) << DSCON_DSWAKE_RTCC_Pos))
#define DSCON_DSWAKE_DSWDT_Pos                _U_(4)                                               /**< (DSCON_DSWAKE)  Position */
#define DSCON_DSWAKE_DSWDT_Msk                (_U_(0x1) << DSCON_DSWAKE_DSWDT_Pos)                 /**< (DSCON_DSWAKE)  Mask */
#define DSCON_DSWAKE_DSWDT(value)             (DSCON_DSWAKE_DSWDT_Msk & ((value) << DSCON_DSWAKE_DSWDT_Pos))
#define DSCON_DSWAKE_EXT_Pos                  _U_(5)                                               /**< (DSCON_DSWAKE)  Position */
#define DSCON_DSWAKE_EXT_Msk                  (_U_(0x1) << DSCON_DSWAKE_EXT_Pos)                   /**< (DSCON_DSWAKE)  Mask */
#define DSCON_DSWAKE_EXT(value)               (DSCON_DSWAKE_EXT_Msk & ((value) << DSCON_DSWAKE_EXT_Pos))
#define DSCON_DSWAKE_FAULT_Pos                _U_(7)                                               /**< (DSCON_DSWAKE)  Position */
#define DSCON_DSWAKE_FAULT_Msk                (_U_(0x1) << DSCON_DSWAKE_FAULT_Pos)                 /**< (DSCON_DSWAKE)  Mask */
#define DSCON_DSWAKE_FAULT(value)             (DSCON_DSWAKE_FAULT_Msk & ((value) << DSCON_DSWAKE_FAULT_Pos))
#define DSCON_DSWAKE_INT0_Pos                 _U_(8)                                               /**< (DSCON_DSWAKE)  Position */
#define DSCON_DSWAKE_INT0_Msk                 (_U_(0x1) << DSCON_DSWAKE_INT0_Pos)                  /**< (DSCON_DSWAKE)  Mask */
#define DSCON_DSWAKE_INT0(value)              (DSCON_DSWAKE_INT0_Msk & ((value) << DSCON_DSWAKE_INT0_Pos))
#define DSCON_DSWAKE_Msk                      _U_(0x000001BE)                                      /**< (DSCON_DSWAKE) Register Mask  */

#define DSCON_DSWAKE_INT_Pos                  _U_(8)                                               /**< (DSCON_DSWAKE Position)  */
#define DSCON_DSWAKE_INT_Msk                  (_U_(0x1) << DSCON_DSWAKE_INT_Pos)                   /**< (DSCON_DSWAKE Mask) INT */
#define DSCON_DSWAKE_INT(value)               (DSCON_DSWAKE_INT_Msk & ((value) << DSCON_DSWAKE_INT_Pos)) 

/* -------- DSCON_DSSEMA1 : (DSCON Offset: 0x08) (R/W 32)  -------- */
#define DSCON_DSSEMA1_RESETVALUE              _U_(0x00)                                            /**<  (DSCON_DSSEMA1)   Reset Value */

#define DSCON_DSSEMA1_DSSEMA_Pos              _U_(0)                                               /**< (DSCON_DSSEMA1)  Position */
#define DSCON_DSSEMA1_DSSEMA_Msk              (_U_(0xFFFFFFFF) << DSCON_DSSEMA1_DSSEMA_Pos)        /**< (DSCON_DSSEMA1)  Mask */
#define DSCON_DSSEMA1_DSSEMA(value)           (DSCON_DSSEMA1_DSSEMA_Msk & ((value) << DSCON_DSSEMA1_DSSEMA_Pos))
#define DSCON_DSSEMA1_Msk                     _U_(0xFFFFFFFF)                                      /**< (DSCON_DSSEMA1) Register Mask  */


/* -------- DSCON_DSXSEMA1 : (DSCON Offset: 0x10) (R/W 32)  -------- */
#define DSCON_DSXSEMA1_DSXSEMA_Pos            _U_(0)                                               /**< (DSCON_DSXSEMA1)  Position */
#define DSCON_DSXSEMA1_DSXSEMA_Msk            (_U_(0xFFFFFFFF) << DSCON_DSXSEMA1_DSXSEMA_Pos)      /**< (DSCON_DSXSEMA1)  Mask */
#define DSCON_DSXSEMA1_DSXSEMA(value)         (DSCON_DSXSEMA1_DSXSEMA_Msk & ((value) << DSCON_DSXSEMA1_DSXSEMA_Pos))
#define DSCON_DSXSEMA1_Msk                    _U_(0xFFFFFFFF)                                      /**< (DSCON_DSXSEMA1) Register Mask  */


/** \brief DSCON register offsets definitions */
#define DSCON_DSCON_REG_OFST           (0x00)              /**< (DSCON_DSCON)  Offset */
#define DSCON_DSWAKE_REG_OFST          (0x04)              /**< (DSCON_DSWAKE)  Offset */
#define DSCON_DSSEMA1_REG_OFST         (0x08)              /**< (DSCON_DSSEMA1)  Offset */
#define DSCON_DSXSEMA1_REG_OFST        (0x10)              /**< (DSCON_DSXSEMA1)  Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DSCON register API structure */
typedef struct
{  /*  */
  __IO  uint32_t                       DSCON_DSCON;        /**< Offset: 0x00 (R/W  32)  */
  __IO  uint32_t                       DSCON_DSWAKE;       /**< Offset: 0x04 (R/W  32)  */
  __IO  uint32_t                       DSCON_DSSEMA1;      /**< Offset: 0x08 (R/W  32)  */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       DSCON_DSXSEMA1;     /**< Offset: 0x10 (R/W  32)  */
} dscon_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _BZ45_DSCON_COMPONENT_H_ */
