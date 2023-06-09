/*
 * Component description for HEFC
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2023-03-27T04:07:22Z */
#ifndef _SAMRH707_HEFC_COMPONENT_H_
#define _SAMRH707_HEFC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR HEFC                                         */
/* ************************************************************************** */

/* -------- HEFC_FMR : (HEFC Offset: 0x00) (R/W 32) HEFC Flash Mode Register -------- */
#define HEFC_FMR_FRDY_Pos                     _UINT32_(0)                                          /* (HEFC_FMR) Flash Ready Interrupt Enable Position */
#define HEFC_FMR_FRDY_Msk                     (_UINT32_(0x1) << HEFC_FMR_FRDY_Pos)                 /* (HEFC_FMR) Flash Ready Interrupt Enable Mask */
#define HEFC_FMR_FRDY(value)                  (HEFC_FMR_FRDY_Msk & (_UINT32_(value) << HEFC_FMR_FRDY_Pos)) /* Assigment of value for FRDY in the HEFC_FMR register */
#define HEFC_FMR_FPSI_Pos                     _UINT32_(1)                                          /* (HEFC_FMR) Flash Power Status Interrupt Enable Position */
#define HEFC_FMR_FPSI_Msk                     (_UINT32_(0x1) << HEFC_FMR_FPSI_Pos)                 /* (HEFC_FMR) Flash Power Status Interrupt Enable Mask */
#define HEFC_FMR_FPSI(value)                  (HEFC_FMR_FPSI_Msk & (_UINT32_(value) << HEFC_FMR_FPSI_Pos)) /* Assigment of value for FPSI in the HEFC_FMR register */
#define HEFC_FMR_ONE_Pos                      _UINT32_(16)                                         /* (HEFC_FMR) Must be written to 1 Position */
#define HEFC_FMR_ONE_Msk                      (_UINT32_(0x1) << HEFC_FMR_ONE_Pos)                  /* (HEFC_FMR) Must be written to 1 Mask */
#define HEFC_FMR_ONE(value)                   (HEFC_FMR_ONE_Msk & (_UINT32_(value) << HEFC_FMR_ONE_Pos)) /* Assigment of value for ONE in the HEFC_FMR register */
#define HEFC_FMR_Msk                          _UINT32_(0x00010003)                                 /* (HEFC_FMR) Register Mask  */


/* -------- HEFC_FCR : (HEFC Offset: 0x04) ( /W 32) HEFC Flash Command Register -------- */
#define HEFC_FCR_FCMD_Pos                     _UINT32_(0)                                          /* (HEFC_FCR) Flash Command Position */
#define HEFC_FCR_FCMD_Msk                     (_UINT32_(0xFF) << HEFC_FCR_FCMD_Pos)                /* (HEFC_FCR) Flash Command Mask */
#define HEFC_FCR_FCMD(value)                  (HEFC_FCR_FCMD_Msk & (_UINT32_(value) << HEFC_FCR_FCMD_Pos)) /* Assigment of value for FCMD in the HEFC_FCR register */
#define   HEFC_FCR_FCMD_GETD_Val              _UINT32_(0x0)                                        /* (HEFC_FCR) Get Flash descriptor  */
#define   HEFC_FCR_FCMD_WP_Val                _UINT32_(0x1)                                        /* (HEFC_FCR) Write page  */
#define   HEFC_FCR_FCMD_WPL_Val               _UINT32_(0x2)                                        /* (HEFC_FCR) Write page and lock  */
#define   HEFC_FCR_FCMD_EA_Val                _UINT32_(0x5)                                        /* (HEFC_FCR) Erase all  */
#define   HEFC_FCR_FCMD_EP_Val                _UINT32_(0x6)                                        /* (HEFC_FCR) Erase page  */
#define   HEFC_FCR_FCMD_EPA_Val               _UINT32_(0x7)                                        /* (HEFC_FCR) Erase pages  */
#define   HEFC_FCR_FCMD_SLB_Val               _UINT32_(0x8)                                        /* (HEFC_FCR) Set lock bit  */
#define   HEFC_FCR_FCMD_CLB_Val               _UINT32_(0x9)                                        /* (HEFC_FCR) Clear lock bit  */
#define   HEFC_FCR_FCMD_GLB_Val               _UINT32_(0xA)                                        /* (HEFC_FCR) Get lock bit  */
#define   HEFC_FCR_FCMD_SGPB_Val              _UINT32_(0xB)                                        /* (HEFC_FCR) Set GPNVM bit  */
#define   HEFC_FCR_FCMD_CGPB_Val              _UINT32_(0xC)                                        /* (HEFC_FCR) Clear GPNVM bit  */
#define   HEFC_FCR_FCMD_GGPB_Val              _UINT32_(0xD)                                        /* (HEFC_FCR) Get GPNVM bit  */
#define   HEFC_FCR_FCMD_GCALB_Val             _UINT32_(0x10)                                       /* (HEFC_FCR) Get CALIB bit  */
#define   HEFC_FCR_FCMD_WUS_Val               _UINT32_(0x12)                                       /* (HEFC_FCR) Write user signature  */
#define   HEFC_FCR_FCMD_EUS_Val               _UINT32_(0x13)                                       /* (HEFC_FCR) Erase user signature  */
#define   HEFC_FCR_FCMD_STUS_Val              _UINT32_(0x14)                                       /* (HEFC_FCR) Start read user signature  */
#define   HEFC_FCR_FCMD_SPUS_Val              _UINT32_(0x15)                                       /* (HEFC_FCR) Stop read user signature  */
#define HEFC_FCR_FCMD_GETD                    (HEFC_FCR_FCMD_GETD_Val << HEFC_FCR_FCMD_Pos)        /* (HEFC_FCR) Get Flash descriptor Position  */
#define HEFC_FCR_FCMD_WP                      (HEFC_FCR_FCMD_WP_Val << HEFC_FCR_FCMD_Pos)          /* (HEFC_FCR) Write page Position  */
#define HEFC_FCR_FCMD_WPL                     (HEFC_FCR_FCMD_WPL_Val << HEFC_FCR_FCMD_Pos)         /* (HEFC_FCR) Write page and lock Position  */
#define HEFC_FCR_FCMD_EA                      (HEFC_FCR_FCMD_EA_Val << HEFC_FCR_FCMD_Pos)          /* (HEFC_FCR) Erase all Position  */
#define HEFC_FCR_FCMD_EP                      (HEFC_FCR_FCMD_EP_Val << HEFC_FCR_FCMD_Pos)          /* (HEFC_FCR) Erase page Position  */
#define HEFC_FCR_FCMD_EPA                     (HEFC_FCR_FCMD_EPA_Val << HEFC_FCR_FCMD_Pos)         /* (HEFC_FCR) Erase pages Position  */
#define HEFC_FCR_FCMD_SLB                     (HEFC_FCR_FCMD_SLB_Val << HEFC_FCR_FCMD_Pos)         /* (HEFC_FCR) Set lock bit Position  */
#define HEFC_FCR_FCMD_CLB                     (HEFC_FCR_FCMD_CLB_Val << HEFC_FCR_FCMD_Pos)         /* (HEFC_FCR) Clear lock bit Position  */
#define HEFC_FCR_FCMD_GLB                     (HEFC_FCR_FCMD_GLB_Val << HEFC_FCR_FCMD_Pos)         /* (HEFC_FCR) Get lock bit Position  */
#define HEFC_FCR_FCMD_SGPB                    (HEFC_FCR_FCMD_SGPB_Val << HEFC_FCR_FCMD_Pos)        /* (HEFC_FCR) Set GPNVM bit Position  */
#define HEFC_FCR_FCMD_CGPB                    (HEFC_FCR_FCMD_CGPB_Val << HEFC_FCR_FCMD_Pos)        /* (HEFC_FCR) Clear GPNVM bit Position  */
#define HEFC_FCR_FCMD_GGPB                    (HEFC_FCR_FCMD_GGPB_Val << HEFC_FCR_FCMD_Pos)        /* (HEFC_FCR) Get GPNVM bit Position  */
#define HEFC_FCR_FCMD_GCALB                   (HEFC_FCR_FCMD_GCALB_Val << HEFC_FCR_FCMD_Pos)       /* (HEFC_FCR) Get CALIB bit Position  */
#define HEFC_FCR_FCMD_WUS                     (HEFC_FCR_FCMD_WUS_Val << HEFC_FCR_FCMD_Pos)         /* (HEFC_FCR) Write user signature Position  */
#define HEFC_FCR_FCMD_EUS                     (HEFC_FCR_FCMD_EUS_Val << HEFC_FCR_FCMD_Pos)         /* (HEFC_FCR) Erase user signature Position  */
#define HEFC_FCR_FCMD_STUS                    (HEFC_FCR_FCMD_STUS_Val << HEFC_FCR_FCMD_Pos)        /* (HEFC_FCR) Start read user signature Position  */
#define HEFC_FCR_FCMD_SPUS                    (HEFC_FCR_FCMD_SPUS_Val << HEFC_FCR_FCMD_Pos)        /* (HEFC_FCR) Stop read user signature Position  */
#define HEFC_FCR_FARG_Pos                     _UINT32_(8)                                          /* (HEFC_FCR) Flash Command Argument Position */
#define HEFC_FCR_FARG_Msk                     (_UINT32_(0xFFFF) << HEFC_FCR_FARG_Pos)              /* (HEFC_FCR) Flash Command Argument Mask */
#define HEFC_FCR_FARG(value)                  (HEFC_FCR_FARG_Msk & (_UINT32_(value) << HEFC_FCR_FARG_Pos)) /* Assigment of value for FARG in the HEFC_FCR register */
#define HEFC_FCR_FKEY_Pos                     _UINT32_(24)                                         /* (HEFC_FCR) Flash Writing Protection Key Position */
#define HEFC_FCR_FKEY_Msk                     (_UINT32_(0xFF) << HEFC_FCR_FKEY_Pos)                /* (HEFC_FCR) Flash Writing Protection Key Mask */
#define HEFC_FCR_FKEY(value)                  (HEFC_FCR_FKEY_Msk & (_UINT32_(value) << HEFC_FCR_FKEY_Pos)) /* Assigment of value for FKEY in the HEFC_FCR register */
#define   HEFC_FCR_FKEY_PASSWD_Val            _UINT32_(0x5A)                                       /* (HEFC_FCR) The 0x5A value enables the command defined by the bits of the register. If the field is written with a different value, the write is not performed and no action is started.  */
#define HEFC_FCR_FKEY_PASSWD                  (HEFC_FCR_FKEY_PASSWD_Val << HEFC_FCR_FKEY_Pos)      /* (HEFC_FCR) The 0x5A value enables the command defined by the bits of the register. If the field is written with a different value, the write is not performed and no action is started. Position  */
#define HEFC_FCR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (HEFC_FCR) Register Mask  */


/* -------- HEFC_FSR : (HEFC Offset: 0x08) ( R/ 32) HEFC Flash Status Register -------- */
#define HEFC_FSR_FRDY_Pos                     _UINT32_(0)                                          /* (HEFC_FSR) Flash Ready Status (cleared when Flash is busy) Position */
#define HEFC_FSR_FRDY_Msk                     (_UINT32_(0x1) << HEFC_FSR_FRDY_Pos)                 /* (HEFC_FSR) Flash Ready Status (cleared when Flash is busy) Mask */
#define HEFC_FSR_FRDY(value)                  (HEFC_FSR_FRDY_Msk & (_UINT32_(value) << HEFC_FSR_FRDY_Pos)) /* Assigment of value for FRDY in the HEFC_FSR register */
#define HEFC_FSR_FCMDE_Pos                    _UINT32_(1)                                          /* (HEFC_FSR) Flash Command Error Status (cleared on read or by writing HEFC_FCR) Position */
#define HEFC_FSR_FCMDE_Msk                    (_UINT32_(0x1) << HEFC_FSR_FCMDE_Pos)                /* (HEFC_FSR) Flash Command Error Status (cleared on read or by writing HEFC_FCR) Mask */
#define HEFC_FSR_FCMDE(value)                 (HEFC_FSR_FCMDE_Msk & (_UINT32_(value) << HEFC_FSR_FCMDE_Pos)) /* Assigment of value for FCMDE in the HEFC_FSR register */
#define HEFC_FSR_FLOCKE_Pos                   _UINT32_(2)                                          /* (HEFC_FSR) Flash Lock Error Status (cleared on read) Position */
#define HEFC_FSR_FLOCKE_Msk                   (_UINT32_(0x1) << HEFC_FSR_FLOCKE_Pos)               /* (HEFC_FSR) Flash Lock Error Status (cleared on read) Mask */
#define HEFC_FSR_FLOCKE(value)                (HEFC_FSR_FLOCKE_Msk & (_UINT32_(value) << HEFC_FSR_FLOCKE_Pos)) /* Assigment of value for FLOCKE in the HEFC_FSR register */
#define HEFC_FSR_WREER_Pos                    _UINT32_(4)                                          /* (HEFC_FSR) Write Register Error Status (cleared on read) Position */
#define HEFC_FSR_WREER_Msk                    (_UINT32_(0x1) << HEFC_FSR_WREER_Pos)                /* (HEFC_FSR) Write Register Error Status (cleared on read) Mask */
#define HEFC_FSR_WREER(value)                 (HEFC_FSR_WREER_Msk & (_UINT32_(value) << HEFC_FSR_WREER_Pos)) /* Assigment of value for WREER in the HEFC_FSR register */
#define HEFC_FSR_Msk                          _UINT32_(0x00000017)                                 /* (HEFC_FSR) Register Mask  */


/* -------- HEFC_FRR : (HEFC Offset: 0x0C) ( R/ 32) HEFC Flash Result Register -------- */
#define HEFC_FRR_FVALUE_Pos                   _UINT32_(0)                                          /* (HEFC_FRR) Flash Result Value Position */
#define HEFC_FRR_FVALUE_Msk                   (_UINT32_(0xFFFFFFFF) << HEFC_FRR_FVALUE_Pos)        /* (HEFC_FRR) Flash Result Value Mask */
#define HEFC_FRR_FVALUE(value)                (HEFC_FRR_FVALUE_Msk & (_UINT32_(value) << HEFC_FRR_FVALUE_Pos)) /* Assigment of value for FVALUE in the HEFC_FRR register */
#define HEFC_FRR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (HEFC_FRR) Register Mask  */


/* -------- HEFC_FPMR : (HEFC Offset: 0x40) (R/W 32) HEFC Flash Power Management Register -------- */
#define HEFC_FPMR_PWS_EN_Pos                  _UINT32_(0)                                          /* (HEFC_FPMR) Power switch enable Position */
#define HEFC_FPMR_PWS_EN_Msk                  (_UINT32_(0x1) << HEFC_FPMR_PWS_EN_Pos)              /* (HEFC_FPMR) Power switch enable Mask */
#define HEFC_FPMR_PWS_EN(value)               (HEFC_FPMR_PWS_EN_Msk & (_UINT32_(value) << HEFC_FPMR_PWS_EN_Pos)) /* Assigment of value for PWS_EN in the HEFC_FPMR register */
#define HEFC_FPMR_PWS_STAT_Pos                _UINT32_(1)                                          /* (HEFC_FPMR) Power switch Status Position */
#define HEFC_FPMR_PWS_STAT_Msk                (_UINT32_(0x1) << HEFC_FPMR_PWS_STAT_Pos)            /* (HEFC_FPMR) Power switch Status Mask */
#define HEFC_FPMR_PWS_STAT(value)             (HEFC_FPMR_PWS_STAT_Msk & (_UINT32_(value) << HEFC_FPMR_PWS_STAT_Pos)) /* Assigment of value for PWS_STAT in the HEFC_FPMR register */
#define HEFC_FPMR_PWS_DLY_Pos                 _UINT32_(2)                                          /* (HEFC_FPMR) Power switch Delay Position */
#define HEFC_FPMR_PWS_DLY_Msk                 (_UINT32_(0x3) << HEFC_FPMR_PWS_DLY_Pos)             /* (HEFC_FPMR) Power switch Delay Mask */
#define HEFC_FPMR_PWS_DLY(value)              (HEFC_FPMR_PWS_DLY_Msk & (_UINT32_(value) << HEFC_FPMR_PWS_DLY_Pos)) /* Assigment of value for PWS_DLY in the HEFC_FPMR register */
#define   HEFC_FPMR_PWS_DLY_75US_Val          _UINT32_(0x0)                                        /* (HEFC_FPMR) delay is set to 75 usec  */
#define   HEFC_FPMR_PWS_DLY_150US_Val         _UINT32_(0x1)                                        /* (HEFC_FPMR) delay is set to 150 usec  */
#define   HEFC_FPMR_PWS_DLY_300US_Val         _UINT32_(0x2)                                        /* (HEFC_FPMR) delay is set to 300 usec  */
#define   HEFC_FPMR_PWS_DLY_600US_Val         _UINT32_(0x3)                                        /* (HEFC_FPMR) delay is set to 600 usec  */
#define HEFC_FPMR_PWS_DLY_75US                (HEFC_FPMR_PWS_DLY_75US_Val << HEFC_FPMR_PWS_DLY_Pos) /* (HEFC_FPMR) delay is set to 75 usec Position  */
#define HEFC_FPMR_PWS_DLY_150US               (HEFC_FPMR_PWS_DLY_150US_Val << HEFC_FPMR_PWS_DLY_Pos) /* (HEFC_FPMR) delay is set to 150 usec Position  */
#define HEFC_FPMR_PWS_DLY_300US               (HEFC_FPMR_PWS_DLY_300US_Val << HEFC_FPMR_PWS_DLY_Pos) /* (HEFC_FPMR) delay is set to 300 usec Position  */
#define HEFC_FPMR_PWS_DLY_600US               (HEFC_FPMR_PWS_DLY_600US_Val << HEFC_FPMR_PWS_DLY_Pos) /* (HEFC_FPMR) delay is set to 600 usec Position  */
#define HEFC_FPMR_VAR_FACTOR_Pos              _UINT32_(8)                                          /* (HEFC_FPMR) Variation Factor Position */
#define HEFC_FPMR_VAR_FACTOR_Msk              (_UINT32_(0x3F) << HEFC_FPMR_VAR_FACTOR_Pos)         /* (HEFC_FPMR) Variation Factor Mask */
#define HEFC_FPMR_VAR_FACTOR(value)           (HEFC_FPMR_VAR_FACTOR_Msk & (_UINT32_(value) << HEFC_FPMR_VAR_FACTOR_Pos)) /* Assigment of value for VAR_FACTOR in the HEFC_FPMR register */
#define HEFC_FPMR_FUNC_ISOL_CTRL_N_Pos        _UINT32_(16)                                         /* (HEFC_FPMR) Flash insulated Control Status Position */
#define HEFC_FPMR_FUNC_ISOL_CTRL_N_Msk        (_UINT32_(0x1) << HEFC_FPMR_FUNC_ISOL_CTRL_N_Pos)    /* (HEFC_FPMR) Flash insulated Control Status Mask */
#define HEFC_FPMR_FUNC_ISOL_CTRL_N(value)     (HEFC_FPMR_FUNC_ISOL_CTRL_N_Msk & (_UINT32_(value) << HEFC_FPMR_FUNC_ISOL_CTRL_N_Pos)) /* Assigment of value for FUNC_ISOL_CTRL_N in the HEFC_FPMR register */
#define HEFC_FPMR_Msk                         _UINT32_(0x00013F0F)                                 /* (HEFC_FPMR) Register Mask  */


/* -------- HEFC_WPMR : (HEFC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define HEFC_WPMR_WPEN_Pos                    _UINT32_(0)                                          /* (HEFC_WPMR) Write Protection Enable Position */
#define HEFC_WPMR_WPEN_Msk                    (_UINT32_(0x1) << HEFC_WPMR_WPEN_Pos)                /* (HEFC_WPMR) Write Protection Enable Mask */
#define HEFC_WPMR_WPEN(value)                 (HEFC_WPMR_WPEN_Msk & (_UINT32_(value) << HEFC_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the HEFC_WPMR register */
#define HEFC_WPMR_GPNVMWP_Pos                 _UINT32_(1)                                          /* (HEFC_WPMR) GPNVM Bit Write Protection Position */
#define HEFC_WPMR_GPNVMWP_Msk                 (_UINT32_(0x1) << HEFC_WPMR_GPNVMWP_Pos)             /* (HEFC_WPMR) GPNVM Bit Write Protection Mask */
#define HEFC_WPMR_GPNVMWP(value)              (HEFC_WPMR_GPNVMWP_Msk & (_UINT32_(value) << HEFC_WPMR_GPNVMWP_Pos)) /* Assigment of value for GPNVMWP in the HEFC_WPMR register */
#define HEFC_WPMR_LOCKWP_Pos                  _UINT32_(2)                                          /* (HEFC_WPMR) Lock Bit Write Protection Position */
#define HEFC_WPMR_LOCKWP_Msk                  (_UINT32_(0x1) << HEFC_WPMR_LOCKWP_Pos)              /* (HEFC_WPMR) Lock Bit Write Protection Mask */
#define HEFC_WPMR_LOCKWP(value)               (HEFC_WPMR_LOCKWP_Msk & (_UINT32_(value) << HEFC_WPMR_LOCKWP_Pos)) /* Assigment of value for LOCKWP in the HEFC_WPMR register */
#define HEFC_WPMR_ERASEWP_Pos                 _UINT32_(3)                                          /* (HEFC_WPMR) Page, Sector and Plane Write Protection Position */
#define HEFC_WPMR_ERASEWP_Msk                 (_UINT32_(0x1) << HEFC_WPMR_ERASEWP_Pos)             /* (HEFC_WPMR) Page, Sector and Plane Write Protection Mask */
#define HEFC_WPMR_ERASEWP(value)              (HEFC_WPMR_ERASEWP_Msk & (_UINT32_(value) << HEFC_WPMR_ERASEWP_Pos)) /* Assigment of value for ERASEWP in the HEFC_WPMR register */
#define HEFC_WPMR_USER_Pos                    _UINT32_(4)                                          /* (HEFC_WPMR) User Signature Write Protection Position */
#define HEFC_WPMR_USER_Msk                    (_UINT32_(0x1) << HEFC_WPMR_USER_Pos)                /* (HEFC_WPMR) User Signature Write Protection Mask */
#define HEFC_WPMR_USER(value)                 (HEFC_WPMR_USER_Msk & (_UINT32_(value) << HEFC_WPMR_USER_Pos)) /* Assigment of value for USER in the HEFC_WPMR register */
#define HEFC_WPMR_WPKEY_Pos                   _UINT32_(8)                                          /* (HEFC_WPMR) Write Protection Key Position */
#define HEFC_WPMR_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << HEFC_WPMR_WPKEY_Pos)          /* (HEFC_WPMR) Write Protection Key Mask */
#define HEFC_WPMR_WPKEY(value)                (HEFC_WPMR_WPKEY_Msk & (_UINT32_(value) << HEFC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the HEFC_WPMR register */
#define   HEFC_WPMR_WPKEY_PASSWD_Val          _UINT32_(0x454643)                                   /* (HEFC_WPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define HEFC_WPMR_WPKEY_PASSWD                (HEFC_WPMR_WPKEY_PASSWD_Val << HEFC_WPMR_WPKEY_Pos)  /* (HEFC_WPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define HEFC_WPMR_Msk                         _UINT32_(0xFFFFFF1F)                                 /* (HEFC_WPMR) Register Mask  */


/* -------- HEFC_HECC_CR : (HEFC Offset: 0x100) (R/W 32) HECC Control Register ChannelNumbers (ChannelNumbers = 0) -------- */
#define HEFC_HECC_CR_ENABLE_Pos               _UINT32_(0)                                          /* (HEFC_HECC_CR) ECC protection enable Position */
#define HEFC_HECC_CR_ENABLE_Msk               (_UINT32_(0x1) << HEFC_HECC_CR_ENABLE_Pos)           /* (HEFC_HECC_CR) ECC protection enable Mask */
#define HEFC_HECC_CR_ENABLE(value)            (HEFC_HECC_CR_ENABLE_Msk & (_UINT32_(value) << HEFC_HECC_CR_ENABLE_Pos)) /* Assigment of value for ENABLE in the HEFC_HECC_CR register */
#define HEFC_HECC_CR_TEST_MODE_RD_Pos         _UINT32_(1)                                          /* (HEFC_HECC_CR) test mode of ECC protection - read mode Position */
#define HEFC_HECC_CR_TEST_MODE_RD_Msk         (_UINT32_(0x1) << HEFC_HECC_CR_TEST_MODE_RD_Pos)     /* (HEFC_HECC_CR) test mode of ECC protection - read mode Mask */
#define HEFC_HECC_CR_TEST_MODE_RD(value)      (HEFC_HECC_CR_TEST_MODE_RD_Msk & (_UINT32_(value) << HEFC_HECC_CR_TEST_MODE_RD_Pos)) /* Assigment of value for TEST_MODE_RD in the HEFC_HECC_CR register */
#define HEFC_HECC_CR_TEST_MODE_WR_Pos         _UINT32_(2)                                          /* (HEFC_HECC_CR) test mode of ECC protection - write mode Position */
#define HEFC_HECC_CR_TEST_MODE_WR_Msk         (_UINT32_(0x1) << HEFC_HECC_CR_TEST_MODE_WR_Pos)     /* (HEFC_HECC_CR) test mode of ECC protection - write mode Mask */
#define HEFC_HECC_CR_TEST_MODE_WR(value)      (HEFC_HECC_CR_TEST_MODE_WR_Msk & (_UINT32_(value) << HEFC_HECC_CR_TEST_MODE_WR_Pos)) /* Assigment of value for TEST_MODE_WR in the HEFC_HECC_CR register */
#define HEFC_HECC_CR_RST_FIX_CPT_Pos          _UINT32_(4)                                          /* (HEFC_HECC_CR) reset the fixable error counter Position */
#define HEFC_HECC_CR_RST_FIX_CPT_Msk          (_UINT32_(0x1) << HEFC_HECC_CR_RST_FIX_CPT_Pos)      /* (HEFC_HECC_CR) reset the fixable error counter Mask */
#define HEFC_HECC_CR_RST_FIX_CPT(value)       (HEFC_HECC_CR_RST_FIX_CPT_Msk & (_UINT32_(value) << HEFC_HECC_CR_RST_FIX_CPT_Pos)) /* Assigment of value for RST_FIX_CPT in the HEFC_HECC_CR register */
#define HEFC_HECC_CR_RST_NOFIX_CPT_Pos        _UINT32_(5)                                          /* (HEFC_HECC_CR) reset the un-fixable error counter Position */
#define HEFC_HECC_CR_RST_NOFIX_CPT_Msk        (_UINT32_(0x1) << HEFC_HECC_CR_RST_NOFIX_CPT_Pos)    /* (HEFC_HECC_CR) reset the un-fixable error counter Mask */
#define HEFC_HECC_CR_RST_NOFIX_CPT(value)     (HEFC_HECC_CR_RST_NOFIX_CPT_Msk & (_UINT32_(value) << HEFC_HECC_CR_RST_NOFIX_CPT_Pos)) /* Assigment of value for RST_NOFIX_CPT in the HEFC_HECC_CR register */
#define HEFC_HECC_CR_ECC12_ENABLE_Pos         _UINT32_(6)                                          /* (HEFC_HECC_CR) BCH ECC enable Position */
#define HEFC_HECC_CR_ECC12_ENABLE_Msk         (_UINT32_(0x1) << HEFC_HECC_CR_ECC12_ENABLE_Pos)     /* (HEFC_HECC_CR) BCH ECC enable Mask */
#define HEFC_HECC_CR_ECC12_ENABLE(value)      (HEFC_HECC_CR_ECC12_ENABLE_Msk & (_UINT32_(value) << HEFC_HECC_CR_ECC12_ENABLE_Pos)) /* Assigment of value for ECC12_ENABLE in the HEFC_HECC_CR register */
#define HEFC_HECC_CR_Msk                      _UINT32_(0x00000077)                                 /* (HEFC_HECC_CR) Register Mask  */


/* -------- HEFC_HECC_TESTCB : (HEFC Offset: 0x140) (R/W 32) HECC Test mode ChannelNumbers (ChannelNumbers = 0) -------- */
#define HEFC_HECC_TESTCB_TCB_Pos              _UINT32_(0)                                          /* (HEFC_HECC_TESTCB) test check bit (16 bit) Position */
#define HEFC_HECC_TESTCB_TCB_Msk              (_UINT32_(0xFFFF) << HEFC_HECC_TESTCB_TCB_Pos)       /* (HEFC_HECC_TESTCB) test check bit (16 bit) Mask */
#define HEFC_HECC_TESTCB_TCB(value)           (HEFC_HECC_TESTCB_TCB_Msk & (_UINT32_(value) << HEFC_HECC_TESTCB_TCB_Pos)) /* Assigment of value for TCB in the HEFC_HECC_TESTCB register */
#define HEFC_HECC_TESTCB_Msk                  _UINT32_(0x0000FFFF)                                 /* (HEFC_HECC_TESTCB) Register Mask  */


/* -------- HEFC_HECC_SR : (HEFC Offset: 0x180) ( R/ 32) HECC Status register -------- */
#define HEFC_HECC_SR_MEM_FIX_Pos              _UINT32_(0)                                          /* (HEFC_HECC_SR) Fixable error status Position */
#define HEFC_HECC_SR_MEM_FIX_Msk              (_UINT32_(0x1) << HEFC_HECC_SR_MEM_FIX_Pos)          /* (HEFC_HECC_SR) Fixable error status Mask */
#define HEFC_HECC_SR_MEM_FIX(value)           (HEFC_HECC_SR_MEM_FIX_Msk & (_UINT32_(value) << HEFC_HECC_SR_MEM_FIX_Pos)) /* Assigment of value for MEM_FIX in the HEFC_HECC_SR register */
#define HEFC_HECC_SR_CPT_FIX_Pos              _UINT32_(2)                                          /* (HEFC_HECC_SR) 5 bits counter Position */
#define HEFC_HECC_SR_CPT_FIX_Msk              (_UINT32_(0x1F) << HEFC_HECC_SR_CPT_FIX_Pos)         /* (HEFC_HECC_SR) 5 bits counter Mask */
#define HEFC_HECC_SR_CPT_FIX(value)           (HEFC_HECC_SR_CPT_FIX_Msk & (_UINT32_(value) << HEFC_HECC_SR_CPT_FIX_Pos)) /* Assigment of value for CPT_FIX in the HEFC_HECC_SR register */
#define HEFC_HECC_SR_OVER_FIX_Pos             _UINT32_(7)                                          /* (HEFC_HECC_SR) counter overflow Position */
#define HEFC_HECC_SR_OVER_FIX_Msk             (_UINT32_(0x1) << HEFC_HECC_SR_OVER_FIX_Pos)         /* (HEFC_HECC_SR) counter overflow Mask */
#define HEFC_HECC_SR_OVER_FIX(value)          (HEFC_HECC_SR_OVER_FIX_Msk & (_UINT32_(value) << HEFC_HECC_SR_OVER_FIX_Pos)) /* Assigment of value for OVER_FIX in the HEFC_HECC_SR register */
#define HEFC_HECC_SR_MEM_NOFIX_Pos            _UINT32_(8)                                          /* (HEFC_HECC_SR) Un-fixable error status Position */
#define HEFC_HECC_SR_MEM_NOFIX_Msk            (_UINT32_(0x1) << HEFC_HECC_SR_MEM_NOFIX_Pos)        /* (HEFC_HECC_SR) Un-fixable error status Mask */
#define HEFC_HECC_SR_MEM_NOFIX(value)         (HEFC_HECC_SR_MEM_NOFIX_Msk & (_UINT32_(value) << HEFC_HECC_SR_MEM_NOFIX_Pos)) /* Assigment of value for MEM_NOFIX in the HEFC_HECC_SR register */
#define HEFC_HECC_SR_CPT_NOFIX_Pos            _UINT32_(10)                                         /* (HEFC_HECC_SR) 5 bits counter Position */
#define HEFC_HECC_SR_CPT_NOFIX_Msk            (_UINT32_(0x1F) << HEFC_HECC_SR_CPT_NOFIX_Pos)       /* (HEFC_HECC_SR) 5 bits counter Mask */
#define HEFC_HECC_SR_CPT_NOFIX(value)         (HEFC_HECC_SR_CPT_NOFIX_Msk & (_UINT32_(value) << HEFC_HECC_SR_CPT_NOFIX_Pos)) /* Assigment of value for CPT_NOFIX in the HEFC_HECC_SR register */
#define HEFC_HECC_SR_OVER_NOFIX_Pos           _UINT32_(15)                                         /* (HEFC_HECC_SR) counter overflow Position */
#define HEFC_HECC_SR_OVER_NOFIX_Msk           (_UINT32_(0x1) << HEFC_HECC_SR_OVER_NOFIX_Pos)       /* (HEFC_HECC_SR) counter overflow Mask */
#define HEFC_HECC_SR_OVER_NOFIX(value)        (HEFC_HECC_SR_OVER_NOFIX_Msk & (_UINT32_(value) << HEFC_HECC_SR_OVER_NOFIX_Pos)) /* Assigment of value for OVER_NOFIX in the HEFC_HECC_SR register */
#define HEFC_HECC_SR_HES_Pos                  _UINT32_(24)                                         /* (HEFC_HECC_SR) Hardware Error Size Position */
#define HEFC_HECC_SR_HES_Msk                  (_UINT32_(0x7) << HEFC_HECC_SR_HES_Pos)              /* (HEFC_HECC_SR) Hardware Error Size Mask */
#define HEFC_HECC_SR_HES(value)               (HEFC_HECC_SR_HES_Msk & (_UINT32_(value) << HEFC_HECC_SR_HES_Pos)) /* Assigment of value for HES in the HEFC_HECC_SR register */
#define HEFC_HECC_SR_TYPE_Pos                 _UINT32_(27)                                         /* (HEFC_HECC_SR) write or read access Position */
#define HEFC_HECC_SR_TYPE_Msk                 (_UINT32_(0x1) << HEFC_HECC_SR_TYPE_Pos)             /* (HEFC_HECC_SR) write or read access Mask */
#define HEFC_HECC_SR_TYPE(value)              (HEFC_HECC_SR_TYPE_Msk & (_UINT32_(value) << HEFC_HECC_SR_TYPE_Pos)) /* Assigment of value for TYPE in the HEFC_HECC_SR register */
#define HEFC_HECC_SR_MEM_ID_Pos               _UINT32_(28)                                         /* (HEFC_HECC_SR) memory identification number Position */
#define HEFC_HECC_SR_MEM_ID_Msk               (_UINT32_(0x3) << HEFC_HECC_SR_MEM_ID_Pos)           /* (HEFC_HECC_SR) memory identification number Mask */
#define HEFC_HECC_SR_MEM_ID(value)            (HEFC_HECC_SR_MEM_ID_Msk & (_UINT32_(value) << HEFC_HECC_SR_MEM_ID_Pos)) /* Assigment of value for MEM_ID in the HEFC_HECC_SR register */
#define HEFC_HECC_SR_Msk                      _UINT32_(0x3F00FDFD)                                 /* (HEFC_HECC_SR) Register Mask  */


/* -------- HEFC_HECC_IER : (HEFC Offset: 0x184) ( /W 32) HECC Interrupt Enable Register -------- */
#define HEFC_HECC_IER_MEM_FIX_Pos             _UINT32_(0)                                          /* (HEFC_HECC_IER) Fixable error Position */
#define HEFC_HECC_IER_MEM_FIX_Msk             (_UINT32_(0x1) << HEFC_HECC_IER_MEM_FIX_Pos)         /* (HEFC_HECC_IER) Fixable error Mask */
#define HEFC_HECC_IER_MEM_FIX(value)          (HEFC_HECC_IER_MEM_FIX_Msk & (_UINT32_(value) << HEFC_HECC_IER_MEM_FIX_Pos)) /* Assigment of value for MEM_FIX in the HEFC_HECC_IER register */
#define HEFC_HECC_IER_MEM_NOFIX_Pos           _UINT32_(1)                                          /* (HEFC_HECC_IER) Un-fixable error Position */
#define HEFC_HECC_IER_MEM_NOFIX_Msk           (_UINT32_(0x1) << HEFC_HECC_IER_MEM_NOFIX_Pos)       /* (HEFC_HECC_IER) Un-fixable error Mask */
#define HEFC_HECC_IER_MEM_NOFIX(value)        (HEFC_HECC_IER_MEM_NOFIX_Msk & (_UINT32_(value) << HEFC_HECC_IER_MEM_NOFIX_Pos)) /* Assigment of value for MEM_NOFIX in the HEFC_HECC_IER register */
#define HEFC_HECC_IER_Msk                     _UINT32_(0x00000003)                                 /* (HEFC_HECC_IER) Register Mask  */


/* -------- HEFC_HECC_IDR : (HEFC Offset: 0x188) ( /W 32) HECC Interrupt Disable Register -------- */
#define HEFC_HECC_IDR_MEM_FIX_Pos             _UINT32_(0)                                          /* (HEFC_HECC_IDR) fixable error Position */
#define HEFC_HECC_IDR_MEM_FIX_Msk             (_UINT32_(0x1) << HEFC_HECC_IDR_MEM_FIX_Pos)         /* (HEFC_HECC_IDR) fixable error Mask */
#define HEFC_HECC_IDR_MEM_FIX(value)          (HEFC_HECC_IDR_MEM_FIX_Msk & (_UINT32_(value) << HEFC_HECC_IDR_MEM_FIX_Pos)) /* Assigment of value for MEM_FIX in the HEFC_HECC_IDR register */
#define HEFC_HECC_IDR_MEM_NOFIX_Pos           _UINT32_(1)                                          /* (HEFC_HECC_IDR) un-fixable error Position */
#define HEFC_HECC_IDR_MEM_NOFIX_Msk           (_UINT32_(0x1) << HEFC_HECC_IDR_MEM_NOFIX_Pos)       /* (HEFC_HECC_IDR) un-fixable error Mask */
#define HEFC_HECC_IDR_MEM_NOFIX(value)        (HEFC_HECC_IDR_MEM_NOFIX_Msk & (_UINT32_(value) << HEFC_HECC_IDR_MEM_NOFIX_Pos)) /* Assigment of value for MEM_NOFIX in the HEFC_HECC_IDR register */
#define HEFC_HECC_IDR_Msk                     _UINT32_(0x00000003)                                 /* (HEFC_HECC_IDR) Register Mask  */


/* -------- HEFC_HECC_IMR : (HEFC Offset: 0x18C) ( R/ 32) HECC Interrupt Mask Register -------- */
#define HEFC_HECC_IMR_MEM_FIX_Pos             _UINT32_(0)                                          /* (HEFC_HECC_IMR) fixable error Position */
#define HEFC_HECC_IMR_MEM_FIX_Msk             (_UINT32_(0x1) << HEFC_HECC_IMR_MEM_FIX_Pos)         /* (HEFC_HECC_IMR) fixable error Mask */
#define HEFC_HECC_IMR_MEM_FIX(value)          (HEFC_HECC_IMR_MEM_FIX_Msk & (_UINT32_(value) << HEFC_HECC_IMR_MEM_FIX_Pos)) /* Assigment of value for MEM_FIX in the HEFC_HECC_IMR register */
#define HEFC_HECC_IMR_MEM_NOFIX_Pos           _UINT32_(1)                                          /* (HEFC_HECC_IMR) un-fixable error Position */
#define HEFC_HECC_IMR_MEM_NOFIX_Msk           (_UINT32_(0x1) << HEFC_HECC_IMR_MEM_NOFIX_Pos)       /* (HEFC_HECC_IMR) un-fixable error Mask */
#define HEFC_HECC_IMR_MEM_NOFIX(value)        (HEFC_HECC_IMR_MEM_NOFIX_Msk & (_UINT32_(value) << HEFC_HECC_IMR_MEM_NOFIX_Pos)) /* Assigment of value for MEM_NOFIX in the HEFC_HECC_IMR register */
#define HEFC_HECC_IMR_Msk                     _UINT32_(0x00000003)                                 /* (HEFC_HECC_IMR) Register Mask  */


/* -------- HEFC_HECC_FAILAR : (HEFC Offset: 0x190) ( R/ 32) HECC Fail address register -------- */
#define HEFC_HECC_FAILAR_ADDRESS_Pos          _UINT32_(0)                                          /* (HEFC_HECC_FAILAR) address of the error detected Position */
#define HEFC_HECC_FAILAR_ADDRESS_Msk          (_UINT32_(0xFFFFFFFF) << HEFC_HECC_FAILAR_ADDRESS_Pos) /* (HEFC_HECC_FAILAR) address of the error detected Mask */
#define HEFC_HECC_FAILAR_ADDRESS(value)       (HEFC_HECC_FAILAR_ADDRESS_Msk & (_UINT32_(value) << HEFC_HECC_FAILAR_ADDRESS_Pos)) /* Assigment of value for ADDRESS in the HEFC_HECC_FAILAR register */
#define HEFC_HECC_FAILAR_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (HEFC_HECC_FAILAR) Register Mask  */


/* -------- HEFC_HECC_FAILDR : (HEFC Offset: 0x194) ( R/ 32) HECC Fail data register -------- */
#define HEFC_HECC_FAILDR_DATA_Pos             _UINT32_(0)                                          /* (HEFC_HECC_FAILDR) data of the error detected Position */
#define HEFC_HECC_FAILDR_DATA_Msk             (_UINT32_(0xFFFFFFFF) << HEFC_HECC_FAILDR_DATA_Pos)  /* (HEFC_HECC_FAILDR) data of the error detected Mask */
#define HEFC_HECC_FAILDR_DATA(value)          (HEFC_HECC_FAILDR_DATA_Msk & (_UINT32_(value) << HEFC_HECC_FAILDR_DATA_Pos)) /* Assigment of value for DATA in the HEFC_HECC_FAILDR register */
#define HEFC_HECC_FAILDR_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (HEFC_HECC_FAILDR) Register Mask  */


/* -------- HEFC_GPNVM_TRIM_RC : (HEFC Offset: 0x00) (R/W 32) HEFC GPNVM word RC trim CRC -------- */
#define HEFC_GPNVM_TRIM_RC_RC_TRIM_CRC_Pos    _UINT32_(0)                                          /* (HEFC_GPNVM_TRIM_RC) RC Trim CRC Position */
#define HEFC_GPNVM_TRIM_RC_RC_TRIM_CRC_Msk    (_UINT32_(0xFFFFFFFF) << HEFC_GPNVM_TRIM_RC_RC_TRIM_CRC_Pos) /* (HEFC_GPNVM_TRIM_RC) RC Trim CRC Mask */
#define HEFC_GPNVM_TRIM_RC_RC_TRIM_CRC(value) (HEFC_GPNVM_TRIM_RC_RC_TRIM_CRC_Msk & (_UINT32_(value) << HEFC_GPNVM_TRIM_RC_RC_TRIM_CRC_Pos)) /* Assigment of value for RC_TRIM_CRC in the HEFC_GPNVM_TRIM_RC register */
#define HEFC_GPNVM_TRIM_RC_Msk                _UINT32_(0xFFFFFFFF)                                 /* (HEFC_GPNVM_TRIM_RC) Register Mask  */


/* -------- HEFC_GPNVM_RC_TRIM : (HEFC Offset: 0x04) (R/W 32) HEFC GPNVM word RC trim -------- */
#define HEFC_GPNVM_RC_TRIM_RC_TTRIM0_Pos      _UINT32_(0)                                          /* (HEFC_GPNVM_RC_TRIM) RC Temperature Trim 0 Position */
#define HEFC_GPNVM_RC_TRIM_RC_TTRIM0_Msk      (_UINT32_(0x3) << HEFC_GPNVM_RC_TRIM_RC_TTRIM0_Pos)  /* (HEFC_GPNVM_RC_TRIM) RC Temperature Trim 0 Mask */
#define HEFC_GPNVM_RC_TRIM_RC_TTRIM0(value)   (HEFC_GPNVM_RC_TRIM_RC_TTRIM0_Msk & (_UINT32_(value) << HEFC_GPNVM_RC_TRIM_RC_TTRIM0_Pos)) /* Assigment of value for RC_TTRIM0 in the HEFC_GPNVM_RC_TRIM register */
#define HEFC_GPNVM_RC_TRIM_RC_FTRIM0_Pos      _UINT32_(2)                                          /* (HEFC_GPNVM_RC_TRIM) RC Frequency Trim 0 Position */
#define HEFC_GPNVM_RC_TRIM_RC_FTRIM0_Msk      (_UINT32_(0x7) << HEFC_GPNVM_RC_TRIM_RC_FTRIM0_Pos)  /* (HEFC_GPNVM_RC_TRIM) RC Frequency Trim 0 Mask */
#define HEFC_GPNVM_RC_TRIM_RC_FTRIM0(value)   (HEFC_GPNVM_RC_TRIM_RC_FTRIM0_Msk & (_UINT32_(value) << HEFC_GPNVM_RC_TRIM_RC_FTRIM0_Pos)) /* Assigment of value for RC_FTRIM0 in the HEFC_GPNVM_RC_TRIM register */
#define HEFC_GPNVM_RC_TRIM_RC_TTRIM1_Pos      _UINT32_(5)                                          /* (HEFC_GPNVM_RC_TRIM) RC Temperature Trim 1 Position */
#define HEFC_GPNVM_RC_TRIM_RC_TTRIM1_Msk      (_UINT32_(0x3) << HEFC_GPNVM_RC_TRIM_RC_TTRIM1_Pos)  /* (HEFC_GPNVM_RC_TRIM) RC Temperature Trim 1 Mask */
#define HEFC_GPNVM_RC_TRIM_RC_TTRIM1(value)   (HEFC_GPNVM_RC_TRIM_RC_TTRIM1_Msk & (_UINT32_(value) << HEFC_GPNVM_RC_TRIM_RC_TTRIM1_Pos)) /* Assigment of value for RC_TTRIM1 in the HEFC_GPNVM_RC_TRIM register */
#define HEFC_GPNVM_RC_TRIM_RC_FTRIM1_Pos      _UINT32_(7)                                          /* (HEFC_GPNVM_RC_TRIM) RC Frequency Trim 1 Position */
#define HEFC_GPNVM_RC_TRIM_RC_FTRIM1_Msk      (_UINT32_(0x7) << HEFC_GPNVM_RC_TRIM_RC_FTRIM1_Pos)  /* (HEFC_GPNVM_RC_TRIM) RC Frequency Trim 1 Mask */
#define HEFC_GPNVM_RC_TRIM_RC_FTRIM1(value)   (HEFC_GPNVM_RC_TRIM_RC_FTRIM1_Msk & (_UINT32_(value) << HEFC_GPNVM_RC_TRIM_RC_FTRIM1_Pos)) /* Assigment of value for RC_FTRIM1 in the HEFC_GPNVM_RC_TRIM register */
#define HEFC_GPNVM_RC_TRIM_RC_TTRIM2_Pos      _UINT32_(10)                                         /* (HEFC_GPNVM_RC_TRIM) RC Temperature Trim 2 Position */
#define HEFC_GPNVM_RC_TRIM_RC_TTRIM2_Msk      (_UINT32_(0x3) << HEFC_GPNVM_RC_TRIM_RC_TTRIM2_Pos)  /* (HEFC_GPNVM_RC_TRIM) RC Temperature Trim 2 Mask */
#define HEFC_GPNVM_RC_TRIM_RC_TTRIM2(value)   (HEFC_GPNVM_RC_TRIM_RC_TTRIM2_Msk & (_UINT32_(value) << HEFC_GPNVM_RC_TRIM_RC_TTRIM2_Pos)) /* Assigment of value for RC_TTRIM2 in the HEFC_GPNVM_RC_TRIM register */
#define HEFC_GPNVM_RC_TRIM_RC_FTRIM2_Pos      _UINT32_(12)                                         /* (HEFC_GPNVM_RC_TRIM) RC Frequency Trim 2 Position */
#define HEFC_GPNVM_RC_TRIM_RC_FTRIM2_Msk      (_UINT32_(0x7) << HEFC_GPNVM_RC_TRIM_RC_FTRIM2_Pos)  /* (HEFC_GPNVM_RC_TRIM) RC Frequency Trim 2 Mask */
#define HEFC_GPNVM_RC_TRIM_RC_FTRIM2(value)   (HEFC_GPNVM_RC_TRIM_RC_FTRIM2_Msk & (_UINT32_(value) << HEFC_GPNVM_RC_TRIM_RC_FTRIM2_Pos)) /* Assigment of value for RC_FTRIM2 in the HEFC_GPNVM_RC_TRIM register */
#define HEFC_GPNVM_RC_TRIM_Msk                _UINT32_(0x00007FFF)                                 /* (HEFC_GPNVM_RC_TRIM) Register Mask  */


/* -------- HEFC_GPNVM_USR2 : (HEFC Offset: 0x04) (R/W 32) User Word 2 -------- */
#define HEFC_GPNVM_USR2_USR_WORD2_Pos         _UINT32_(0)                                          /* (HEFC_GPNVM_USR2) User Word 2 Position */
#define HEFC_GPNVM_USR2_USR_WORD2_Msk         (_UINT32_(0xFFFFFFFF) << HEFC_GPNVM_USR2_USR_WORD2_Pos) /* (HEFC_GPNVM_USR2) User Word 2 Mask */
#define HEFC_GPNVM_USR2_USR_WORD2(value)      (HEFC_GPNVM_USR2_USR_WORD2_Msk & (_UINT32_(value) << HEFC_GPNVM_USR2_USR_WORD2_Pos)) /* Assigment of value for USR_WORD2 in the HEFC_GPNVM_USR2 register */
#define HEFC_GPNVM_USR2_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (HEFC_GPNVM_USR2) Register Mask  */


/* -------- HEFC_GPNVM_USR3 : (HEFC Offset: 0x04) (R/W 32) User Word 3 -------- */
#define HEFC_GPNVM_USR3_USR_WORD3_Pos         _UINT32_(0)                                          /* (HEFC_GPNVM_USR3) User Word 3 Position */
#define HEFC_GPNVM_USR3_USR_WORD3_Msk         (_UINT32_(0xFFFFFFFF) << HEFC_GPNVM_USR3_USR_WORD3_Pos) /* (HEFC_GPNVM_USR3) User Word 3 Mask */
#define HEFC_GPNVM_USR3_USR_WORD3(value)      (HEFC_GPNVM_USR3_USR_WORD3_Msk & (_UINT32_(value) << HEFC_GPNVM_USR3_USR_WORD3_Pos)) /* Assigment of value for USR_WORD3 in the HEFC_GPNVM_USR3 register */
#define HEFC_GPNVM_USR3_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (HEFC_GPNVM_USR3) Register Mask  */


/** \brief HEFC register offsets definitions */
#define HEFC_FMR_REG_OFST              _UINT32_(0x00)      /* (HEFC_FMR) HEFC Flash Mode Register Offset */
#define HEFC_FCR_REG_OFST              _UINT32_(0x04)      /* (HEFC_FCR) HEFC Flash Command Register Offset */
#define HEFC_FSR_REG_OFST              _UINT32_(0x08)      /* (HEFC_FSR) HEFC Flash Status Register Offset */
#define HEFC_FRR_REG_OFST              _UINT32_(0x0C)      /* (HEFC_FRR) HEFC Flash Result Register Offset */
#define HEFC_FPMR_REG_OFST             _UINT32_(0x40)      /* (HEFC_FPMR) HEFC Flash Power Management Register Offset */
#define HEFC_WPMR_REG_OFST             _UINT32_(0xE4)      /* (HEFC_WPMR) Write Protection Mode Register Offset */
#define HEFC_HECC_CR_REG_OFST          _UINT32_(0x100)     /* (HEFC_HECC_CR) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR0_REG_OFST         _UINT32_(0x100)     /* (HEFC_HECC_CR0) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR1_REG_OFST         _UINT32_(0x104)     /* (HEFC_HECC_CR1) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR2_REG_OFST         _UINT32_(0x108)     /* (HEFC_HECC_CR2) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR3_REG_OFST         _UINT32_(0x10C)     /* (HEFC_HECC_CR3) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR4_REG_OFST         _UINT32_(0x110)     /* (HEFC_HECC_CR4) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR5_REG_OFST         _UINT32_(0x114)     /* (HEFC_HECC_CR5) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR6_REG_OFST         _UINT32_(0x118)     /* (HEFC_HECC_CR6) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR7_REG_OFST         _UINT32_(0x11C)     /* (HEFC_HECC_CR7) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR8_REG_OFST         _UINT32_(0x120)     /* (HEFC_HECC_CR8) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR9_REG_OFST         _UINT32_(0x124)     /* (HEFC_HECC_CR9) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR10_REG_OFST        _UINT32_(0x128)     /* (HEFC_HECC_CR10) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR11_REG_OFST        _UINT32_(0x12C)     /* (HEFC_HECC_CR11) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR12_REG_OFST        _UINT32_(0x130)     /* (HEFC_HECC_CR12) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR13_REG_OFST        _UINT32_(0x134)     /* (HEFC_HECC_CR13) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR14_REG_OFST        _UINT32_(0x138)     /* (HEFC_HECC_CR14) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_CR15_REG_OFST        _UINT32_(0x13C)     /* (HEFC_HECC_CR15) HECC Control Register ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB_REG_OFST      _UINT32_(0x140)     /* (HEFC_HECC_TESTCB) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB0_REG_OFST     _UINT32_(0x140)     /* (HEFC_HECC_TESTCB0) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB1_REG_OFST     _UINT32_(0x144)     /* (HEFC_HECC_TESTCB1) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB2_REG_OFST     _UINT32_(0x148)     /* (HEFC_HECC_TESTCB2) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB3_REG_OFST     _UINT32_(0x14C)     /* (HEFC_HECC_TESTCB3) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB4_REG_OFST     _UINT32_(0x150)     /* (HEFC_HECC_TESTCB4) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB5_REG_OFST     _UINT32_(0x154)     /* (HEFC_HECC_TESTCB5) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB6_REG_OFST     _UINT32_(0x158)     /* (HEFC_HECC_TESTCB6) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB7_REG_OFST     _UINT32_(0x15C)     /* (HEFC_HECC_TESTCB7) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB8_REG_OFST     _UINT32_(0x160)     /* (HEFC_HECC_TESTCB8) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB9_REG_OFST     _UINT32_(0x164)     /* (HEFC_HECC_TESTCB9) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB10_REG_OFST    _UINT32_(0x168)     /* (HEFC_HECC_TESTCB10) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB11_REG_OFST    _UINT32_(0x16C)     /* (HEFC_HECC_TESTCB11) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB12_REG_OFST    _UINT32_(0x170)     /* (HEFC_HECC_TESTCB12) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB13_REG_OFST    _UINT32_(0x174)     /* (HEFC_HECC_TESTCB13) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB14_REG_OFST    _UINT32_(0x178)     /* (HEFC_HECC_TESTCB14) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_TESTCB15_REG_OFST    _UINT32_(0x17C)     /* (HEFC_HECC_TESTCB15) HECC Test mode ChannelNumbers (ChannelNumbers = 0) Offset */
#define HEFC_HECC_SR_REG_OFST          _UINT32_(0x180)     /* (HEFC_HECC_SR) HECC Status register Offset */
#define HEFC_HECC_IER_REG_OFST         _UINT32_(0x184)     /* (HEFC_HECC_IER) HECC Interrupt Enable Register Offset */
#define HEFC_HECC_IDR_REG_OFST         _UINT32_(0x188)     /* (HEFC_HECC_IDR) HECC Interrupt Disable Register Offset */
#define HEFC_HECC_IMR_REG_OFST         _UINT32_(0x18C)     /* (HEFC_HECC_IMR) HECC Interrupt Mask Register Offset */
#define HEFC_HECC_FAILAR_REG_OFST      _UINT32_(0x190)     /* (HEFC_HECC_FAILAR) HECC Fail address register Offset */
#define HEFC_HECC_FAILDR_REG_OFST      _UINT32_(0x194)     /* (HEFC_HECC_FAILDR) HECC Fail data register Offset */
#define HEFC_GPNVM_TRIM_RC_REG_OFST    _UINT32_(0x00)      /* (HEFC_GPNVM_TRIM_RC) HEFC GPNVM word RC trim CRC Offset */
#define HEFC_GPNVM_RC_TRIM_REG_OFST    _UINT32_(0x04)      /* (HEFC_GPNVM_RC_TRIM) HEFC GPNVM word RC trim Offset */
#define HEFC_GPNVM_USR2_REG_OFST       _UINT32_(0x04)      /* (HEFC_GPNVM_USR2) User Word 2 Offset */
#define HEFC_GPNVM_USR3_REG_OFST       _UINT32_(0x04)      /* (HEFC_GPNVM_USR3) User Word 3 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief HEFC register API structure */
typedef struct
{
  __IO  uint32_t                       HEFC_FMR;           /**< Offset: 0x00 (R/W  32) HEFC Flash Mode Register */
  __O   uint32_t                       HEFC_FCR;           /**< Offset: 0x04 ( /W  32) HEFC Flash Command Register */
  __I   uint32_t                       HEFC_FSR;           /**< Offset: 0x08 (R/   32) HEFC Flash Status Register */
  __I   uint32_t                       HEFC_FRR;           /**< Offset: 0x0C (R/   32) HEFC Flash Result Register */
  __I   uint8_t                        Reserved1[0x30];
  __IO  uint32_t                       HEFC_FPMR;          /**< Offset: 0x40 (R/W  32) HEFC Flash Power Management Register */
  __I   uint8_t                        Reserved2[0xA0];
  __IO  uint32_t                       HEFC_WPMR;          /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint8_t                        Reserved3[0x18];
  __IO  uint32_t                       HEFC_HECC_CR[16];   /**< Offset: 0x100 (R/W  32) HECC Control Register ChannelNumbers (ChannelNumbers = 0) */
  __IO  uint32_t                       HEFC_HECC_TESTCB[16]; /**< Offset: 0x140 (R/W  32) HECC Test mode ChannelNumbers (ChannelNumbers = 0) */
  __I   uint32_t                       HEFC_HECC_SR;       /**< Offset: 0x180 (R/   32) HECC Status register */
  __O   uint32_t                       HEFC_HECC_IER;      /**< Offset: 0x184 ( /W  32) HECC Interrupt Enable Register */
  __O   uint32_t                       HEFC_HECC_IDR;      /**< Offset: 0x188 ( /W  32) HECC Interrupt Disable Register */
  __I   uint32_t                       HEFC_HECC_IMR;      /**< Offset: 0x18C (R/   32) HECC Interrupt Mask Register */
  __I   uint32_t                       HEFC_HECC_FAILAR;   /**< Offset: 0x190 (R/   32) HECC Fail address register */
  __I   uint32_t                       HEFC_HECC_FAILDR;   /**< Offset: 0x194 (R/   32) HECC Fail data register */
} hefc_registers_t;

/** \brief GPNVMBITS register API structure */
typedef struct
{  /* GPNVM Bits */
  __IO  uint32_t                       HEFC_GPNVM_TRIM_RC; /**< Offset: 0x00 (R/W  32) HEFC GPNVM word RC trim CRC */
  union
  {
      __IO  uint32_t                       HEFC_GPNVM_USR2;    /**< Offset: 0x04 (R/W  32) User Word 2 */
      __IO  uint32_t                       HEFC_GPNVM_USR3;    /**< Offset: 0x04 (R/W  32) User Word 3 */
      __IO  uint32_t                       HEFC_GPNVM_RC_TRIM; /**< Offset: 0x04 (R/W  32) HEFC GPNVM word RC trim */
  };
} hefc_gpnvmbits_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH707_HEFC_COMPONENT_H_ */
