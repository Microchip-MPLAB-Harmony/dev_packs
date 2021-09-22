/**
 * \brief Component description for PCHE
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
#ifndef _BZ45_PCHE_COMPONENT_H_
#define _BZ45_PCHE_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PCHE                                         */
/* ************************************************************************** */

/* -------- PCHE_CHECON : (PCHE Offset: 0x00) (R/W 32)  -------- */
#define PCHE_CHECON_RESETVALUE                _U_(0x700010F)                                       /**<  (PCHE_CHECON)   Reset Value */

#define PCHE_CHECON_PFMWS_Pos                 _U_(0)                                               /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_PFMWS_Msk                 (_U_(0xF) << PCHE_CHECON_PFMWS_Pos)                  /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_PFMWS(value)              (PCHE_CHECON_PFMWS_Msk & ((value) << PCHE_CHECON_PFMWS_Pos))
#define PCHE_CHECON_PREFEN_Pos                _U_(4)                                               /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_PREFEN_Msk                (_U_(0x3) << PCHE_CHECON_PREFEN_Pos)                 /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_PREFEN(value)             (PCHE_CHECON_PREFEN_Msk & ((value) << PCHE_CHECON_PREFEN_Pos))
#define PCHE_CHECON_PFMSECEN_Pos              _U_(7)                                               /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_PFMSECEN_Msk              (_U_(0x1) << PCHE_CHECON_PFMSECEN_Pos)               /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_PFMSECEN(value)           (PCHE_CHECON_PFMSECEN_Msk & ((value) << PCHE_CHECON_PFMSECEN_Pos))
#define PCHE_CHECON_ADRWS_Pos                 _U_(8)                                               /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_ADRWS_Msk                 (_U_(0x1) << PCHE_CHECON_ADRWS_Pos)                  /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_ADRWS(value)              (PCHE_CHECON_ADRWS_Msk & ((value) << PCHE_CHECON_ADRWS_Pos))
#define PCHE_CHECON_CHEPERF_Pos               _U_(12)                                              /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_CHEPERF_Msk               (_U_(0x1) << PCHE_CHECON_CHEPERF_Pos)                /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_CHEPERF(value)            (PCHE_CHECON_CHEPERF_Msk & ((value) << PCHE_CHECON_CHEPERF_Pos))
#define PCHE_CHECON_ICHECOH_Pos               _U_(16)                                              /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_ICHECOH_Msk               (_U_(0x1) << PCHE_CHECON_ICHECOH_Pos)                /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_ICHECOH(value)            (PCHE_CHECON_ICHECOH_Msk & ((value) << PCHE_CHECON_ICHECOH_Pos))
#define PCHE_CHECON_DCHECOH_Pos               _U_(17)                                              /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_DCHECOH_Msk               (_U_(0x1) << PCHE_CHECON_DCHECOH_Pos)                /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_DCHECOH(value)            (PCHE_CHECON_DCHECOH_Msk & ((value) << PCHE_CHECON_DCHECOH_Pos))
#define PCHE_CHECON_ACHECOH_Pos               _U_(18)                                              /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_ACHECOH_Msk               (_U_(0x1) << PCHE_CHECON_ACHECOH_Pos)                /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_ACHECOH(value)            (PCHE_CHECON_ACHECOH_Msk & ((value) << PCHE_CHECON_ACHECOH_Pos))
#define PCHE_CHECON_ICHEINV_Pos               _U_(20)                                              /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_ICHEINV_Msk               (_U_(0x1) << PCHE_CHECON_ICHEINV_Pos)                /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_ICHEINV(value)            (PCHE_CHECON_ICHEINV_Msk & ((value) << PCHE_CHECON_ICHEINV_Pos))
#define PCHE_CHECON_DCHEINV_Pos               _U_(21)                                              /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_DCHEINV_Msk               (_U_(0x1) << PCHE_CHECON_DCHEINV_Pos)                /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_DCHEINV(value)            (PCHE_CHECON_DCHEINV_Msk & ((value) << PCHE_CHECON_DCHEINV_Pos))
#define PCHE_CHECON_ACHEINV_Pos               _U_(22)                                              /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_ACHEINV_Msk               (_U_(0x1) << PCHE_CHECON_ACHEINV_Pos)                /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_ACHEINV(value)            (PCHE_CHECON_ACHEINV_Msk & ((value) << PCHE_CHECON_ACHEINV_Pos))
#define PCHE_CHECON_ICHEEN_Pos                _U_(24)                                              /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_ICHEEN_Msk                (_U_(0x1) << PCHE_CHECON_ICHEEN_Pos)                 /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_ICHEEN(value)             (PCHE_CHECON_ICHEEN_Msk & ((value) << PCHE_CHECON_ICHEEN_Pos))
#define PCHE_CHECON_DCHEEN_Pos                _U_(25)                                              /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_DCHEEN_Msk                (_U_(0x1) << PCHE_CHECON_DCHEEN_Pos)                 /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_DCHEEN(value)             (PCHE_CHECON_DCHEEN_Msk & ((value) << PCHE_CHECON_DCHEEN_Pos))
#define PCHE_CHECON_ACHEEN_Pos                _U_(26)                                              /**< (PCHE_CHECON)  Position */
#define PCHE_CHECON_ACHEEN_Msk                (_U_(0x1) << PCHE_CHECON_ACHEEN_Pos)                 /**< (PCHE_CHECON)  Mask */
#define PCHE_CHECON_ACHEEN(value)             (PCHE_CHECON_ACHEEN_Msk & ((value) << PCHE_CHECON_ACHEEN_Pos))
#define PCHE_CHECON_Msk                       _U_(0x077711BF)                                      /**< (PCHE_CHECON) Register Mask  */


/* -------- PCHE_CHESTAT : (PCHE Offset: 0x10) (R/W 32)  -------- */
#define PCHE_CHESTAT_RESETVALUE               _U_(0x00)                                            /**<  (PCHE_CHESTAT)   Reset Value */

#define PCHE_CHESTAT_PFMSECCNT_Pos            _U_(0)                                               /**< (PCHE_CHESTAT)  Position */
#define PCHE_CHESTAT_PFMSECCNT_Msk            (_U_(0xFF) << PCHE_CHESTAT_PFMSECCNT_Pos)            /**< (PCHE_CHESTAT)  Mask */
#define PCHE_CHESTAT_PFMSECCNT(value)         (PCHE_CHESTAT_PFMSECCNT_Msk & ((value) << PCHE_CHESTAT_PFMSECCNT_Pos))
#define PCHE_CHESTAT_PFMSEC_Pos               _U_(26)                                              /**< (PCHE_CHESTAT)  Position */
#define PCHE_CHESTAT_PFMSEC_Msk               (_U_(0x1) << PCHE_CHESTAT_PFMSEC_Pos)                /**< (PCHE_CHESTAT)  Mask */
#define PCHE_CHESTAT_PFMSEC(value)            (PCHE_CHESTAT_PFMSEC_Msk & ((value) << PCHE_CHESTAT_PFMSEC_Pos))
#define PCHE_CHESTAT_PFMDED_Pos               _U_(27)                                              /**< (PCHE_CHESTAT)  Position */
#define PCHE_CHESTAT_PFMDED_Msk               (_U_(0x1) << PCHE_CHESTAT_PFMDED_Pos)                /**< (PCHE_CHESTAT)  Mask */
#define PCHE_CHESTAT_PFMDED(value)            (PCHE_CHESTAT_PFMDED_Msk & ((value) << PCHE_CHESTAT_PFMDED_Pos))
#define PCHE_CHESTAT_Msk                      _U_(0x0C0000FF)                                      /**< (PCHE_CHESTAT) Register Mask  */


/* -------- PCHE_CHEHIT : (PCHE Offset: 0x20) (R/W 32)  -------- */
#define PCHE_CHEHIT_RESETVALUE                _U_(0x00)                                            /**<  (PCHE_CHEHIT)   Reset Value */

#define PCHE_CHEHIT_CHEHIT_Pos                _U_(0)                                               /**< (PCHE_CHEHIT)  Position */
#define PCHE_CHEHIT_CHEHIT_Msk                (_U_(0xFFFFFFFF) << PCHE_CHEHIT_CHEHIT_Pos)          /**< (PCHE_CHEHIT)  Mask */
#define PCHE_CHEHIT_CHEHIT(value)             (PCHE_CHEHIT_CHEHIT_Msk & ((value) << PCHE_CHEHIT_CHEHIT_Pos))
#define PCHE_CHEHIT_Msk                       _U_(0xFFFFFFFF)                                      /**< (PCHE_CHEHIT) Register Mask  */


/* -------- PCHE_CHEMIS : (PCHE Offset: 0x30) (R/W 32)  -------- */
#define PCHE_CHEMIS_RESETVALUE                _U_(0x00)                                            /**<  (PCHE_CHEMIS)   Reset Value */

#define PCHE_CHEMIS_CHEMIS_Pos                _U_(0)                                               /**< (PCHE_CHEMIS)  Position */
#define PCHE_CHEMIS_CHEMIS_Msk                (_U_(0xFFFFFFFF) << PCHE_CHEMIS_CHEMIS_Pos)          /**< (PCHE_CHEMIS)  Mask */
#define PCHE_CHEMIS_CHEMIS(value)             (PCHE_CHEMIS_CHEMIS_Msk & ((value) << PCHE_CHEMIS_CHEMIS_Pos))
#define PCHE_CHEMIS_Msk                       _U_(0xFFFFFFFF)                                      /**< (PCHE_CHEMIS) Register Mask  */


/** \brief PCHE register offsets definitions */
#define PCHE_CHECON_REG_OFST           (0x00)              /**< (PCHE_CHECON)  Offset */
#define PCHE_CHESTAT_REG_OFST          (0x10)              /**< (PCHE_CHESTAT)  Offset */
#define PCHE_CHEHIT_REG_OFST           (0x20)              /**< (PCHE_CHEHIT)  Offset */
#define PCHE_CHEMIS_REG_OFST           (0x30)              /**< (PCHE_CHEMIS)  Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PCHE register API structure */
typedef struct
{  /* this is the PCHE */
  __IO  uint32_t                       PCHE_CHECON;        /**< Offset: 0x00 (R/W  32)  */
  __I   uint8_t                        Reserved1[0x0C];
  __IO  uint32_t                       PCHE_CHESTAT;       /**< Offset: 0x10 (R/W  32)  */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       PCHE_CHEHIT;        /**< Offset: 0x20 (R/W  32)  */
  __I   uint8_t                        Reserved3[0x0C];
  __IO  uint32_t                       PCHE_CHEMIS;        /**< Offset: 0x30 (R/W  32)  */
} pche_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _BZ45_PCHE_COMPONENT_H_ */
