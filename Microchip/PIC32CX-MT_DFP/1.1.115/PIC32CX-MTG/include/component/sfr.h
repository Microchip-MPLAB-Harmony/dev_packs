/*
 * Component description for SFR
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

/* file generated from device description version 2023-01-20T11:01:01Z */
#ifndef _PIC32CXMTG_SFR_COMPONENT_H_
#define _PIC32CXMTG_SFR_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SFR                                          */
/* ************************************************************************** */

/* -------- SFR_SRAM0_SW_CFG : (SFR Offset: 0x10) (R/W 32) SRAM0 Software Config Register -------- */
#define SFR_SRAM0_SW_CFG_M128LS_Pos           _UINT32_(0)                                          /* (SFR_SRAM0_SW_CFG) 128 KB Light Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M128LS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M128LS_Pos)       /* (SFR_SRAM0_SW_CFG) 128 KB Light Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M128LS(value)        (SFR_SRAM0_SW_CFG_M128LS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M128LS_Pos)) /* Assigment of value for M128LS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M128DS_Pos           _UINT32_(1)                                          /* (SFR_SRAM0_SW_CFG) 128 KB Deep Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M128DS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M128DS_Pos)       /* (SFR_SRAM0_SW_CFG) 128 KB Deep Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M128DS(value)        (SFR_SRAM0_SW_CFG_M128DS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M128DS_Pos)) /* Assigment of value for M128DS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M128SD_Pos           _UINT32_(2)                                          /* (SFR_SRAM0_SW_CFG) 128 KB Shutdown Mode Position */
#define SFR_SRAM0_SW_CFG_M128SD_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M128SD_Pos)       /* (SFR_SRAM0_SW_CFG) 128 KB Shutdown Mode Mask */
#define SFR_SRAM0_SW_CFG_M128SD(value)        (SFR_SRAM0_SW_CFG_M128SD_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M128SD_Pos)) /* Assigment of value for M128SD in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M256LS_Pos           _UINT32_(4)                                          /* (SFR_SRAM0_SW_CFG) 256 KB Light Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M256LS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M256LS_Pos)       /* (SFR_SRAM0_SW_CFG) 256 KB Light Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M256LS(value)        (SFR_SRAM0_SW_CFG_M256LS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M256LS_Pos)) /* Assigment of value for M256LS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M256DS_Pos           _UINT32_(5)                                          /* (SFR_SRAM0_SW_CFG) 256 KB Deep Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M256DS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M256DS_Pos)       /* (SFR_SRAM0_SW_CFG) 256 KB Deep Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M256DS(value)        (SFR_SRAM0_SW_CFG_M256DS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M256DS_Pos)) /* Assigment of value for M256DS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M256SD_Pos           _UINT32_(6)                                          /* (SFR_SRAM0_SW_CFG) 256 KB Shutdown Mode Position */
#define SFR_SRAM0_SW_CFG_M256SD_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M256SD_Pos)       /* (SFR_SRAM0_SW_CFG) 256 KB Shutdown Mode Mask */
#define SFR_SRAM0_SW_CFG_M256SD(value)        (SFR_SRAM0_SW_CFG_M256SD_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M256SD_Pos)) /* Assigment of value for M256SD in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M384LS_Pos           _UINT32_(8)                                          /* (SFR_SRAM0_SW_CFG) 384 KB Light Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M384LS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M384LS_Pos)       /* (SFR_SRAM0_SW_CFG) 384 KB Light Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M384LS(value)        (SFR_SRAM0_SW_CFG_M384LS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M384LS_Pos)) /* Assigment of value for M384LS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M384DS_Pos           _UINT32_(9)                                          /* (SFR_SRAM0_SW_CFG) 384 KB Deep Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M384DS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M384DS_Pos)       /* (SFR_SRAM0_SW_CFG) 384 KB Deep Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M384DS(value)        (SFR_SRAM0_SW_CFG_M384DS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M384DS_Pos)) /* Assigment of value for M384DS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M384SD_Pos           _UINT32_(10)                                         /* (SFR_SRAM0_SW_CFG) 384 KB Shutdown Mode Position */
#define SFR_SRAM0_SW_CFG_M384SD_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M384SD_Pos)       /* (SFR_SRAM0_SW_CFG) 384 KB Shutdown Mode Mask */
#define SFR_SRAM0_SW_CFG_M384SD(value)        (SFR_SRAM0_SW_CFG_M384SD_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M384SD_Pos)) /* Assigment of value for M384SD in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M512LS_Pos           _UINT32_(12)                                         /* (SFR_SRAM0_SW_CFG) 512 KB Light Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M512LS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M512LS_Pos)       /* (SFR_SRAM0_SW_CFG) 512 KB Light Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M512LS(value)        (SFR_SRAM0_SW_CFG_M512LS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M512LS_Pos)) /* Assigment of value for M512LS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M512DS_Pos           _UINT32_(13)                                         /* (SFR_SRAM0_SW_CFG) 512 KB Deep Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M512DS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M512DS_Pos)       /* (SFR_SRAM0_SW_CFG) 512 KB Deep Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M512DS(value)        (SFR_SRAM0_SW_CFG_M512DS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M512DS_Pos)) /* Assigment of value for M512DS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M512SD_Pos           _UINT32_(14)                                         /* (SFR_SRAM0_SW_CFG) 512 KB Shutdown Mode Position */
#define SFR_SRAM0_SW_CFG_M512SD_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M512SD_Pos)       /* (SFR_SRAM0_SW_CFG) 512 KB Shutdown Mode Mask */
#define SFR_SRAM0_SW_CFG_M512SD(value)        (SFR_SRAM0_SW_CFG_M512SD_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M512SD_Pos)) /* Assigment of value for M512SD in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_CLKG_DIS_Pos         _UINT32_(16)                                         /* (SFR_SRAM0_SW_CFG) Clock Gating Disable Position */
#define SFR_SRAM0_SW_CFG_CLKG_DIS_Msk         (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_CLKG_DIS_Pos)     /* (SFR_SRAM0_SW_CFG) Clock Gating Disable Mask */
#define SFR_SRAM0_SW_CFG_CLKG_DIS(value)      (SFR_SRAM0_SW_CFG_CLKG_DIS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_CLKG_DIS_Pos)) /* Assigment of value for CLKG_DIS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_Msk                  _UINT32_(0x00017777)                                 /* (SFR_SRAM0_SW_CFG) Register Mask  */


/* -------- SFR_SRAM0_HW_CFG : (SFR Offset: 0x14) ( R/ 32) SRAM0 Hardware Status Register -------- */
#define SFR_SRAM0_HW_CFG_M128LS_Pos           _UINT32_(0)                                          /* (SFR_SRAM0_HW_CFG) 128 KB Light Sleep Mode Position */
#define SFR_SRAM0_HW_CFG_M128LS_Msk           (_UINT32_(0x1) << SFR_SRAM0_HW_CFG_M128LS_Pos)       /* (SFR_SRAM0_HW_CFG) 128 KB Light Sleep Mode Mask */
#define SFR_SRAM0_HW_CFG_M128LS(value)        (SFR_SRAM0_HW_CFG_M128LS_Msk & (_UINT32_(value) << SFR_SRAM0_HW_CFG_M128LS_Pos)) /* Assigment of value for M128LS in the SFR_SRAM0_HW_CFG register */
#define SFR_SRAM0_HW_CFG_M128DS_Pos           _UINT32_(1)                                          /* (SFR_SRAM0_HW_CFG) 128 KB Deep Sleep Mode Position */
#define SFR_SRAM0_HW_CFG_M128DS_Msk           (_UINT32_(0x1) << SFR_SRAM0_HW_CFG_M128DS_Pos)       /* (SFR_SRAM0_HW_CFG) 128 KB Deep Sleep Mode Mask */
#define SFR_SRAM0_HW_CFG_M128DS(value)        (SFR_SRAM0_HW_CFG_M128DS_Msk & (_UINT32_(value) << SFR_SRAM0_HW_CFG_M128DS_Pos)) /* Assigment of value for M128DS in the SFR_SRAM0_HW_CFG register */
#define SFR_SRAM0_HW_CFG_M128SD_Pos           _UINT32_(2)                                          /* (SFR_SRAM0_HW_CFG) 128 KB Shutdown Mode Position */
#define SFR_SRAM0_HW_CFG_M128SD_Msk           (_UINT32_(0x1) << SFR_SRAM0_HW_CFG_M128SD_Pos)       /* (SFR_SRAM0_HW_CFG) 128 KB Shutdown Mode Mask */
#define SFR_SRAM0_HW_CFG_M128SD(value)        (SFR_SRAM0_HW_CFG_M128SD_Msk & (_UINT32_(value) << SFR_SRAM0_HW_CFG_M128SD_Pos)) /* Assigment of value for M128SD in the SFR_SRAM0_HW_CFG register */
#define SFR_SRAM0_HW_CFG_M256LS_Pos           _UINT32_(4)                                          /* (SFR_SRAM0_HW_CFG) 256 KB Light Sleep Mode Position */
#define SFR_SRAM0_HW_CFG_M256LS_Msk           (_UINT32_(0x1) << SFR_SRAM0_HW_CFG_M256LS_Pos)       /* (SFR_SRAM0_HW_CFG) 256 KB Light Sleep Mode Mask */
#define SFR_SRAM0_HW_CFG_M256LS(value)        (SFR_SRAM0_HW_CFG_M256LS_Msk & (_UINT32_(value) << SFR_SRAM0_HW_CFG_M256LS_Pos)) /* Assigment of value for M256LS in the SFR_SRAM0_HW_CFG register */
#define SFR_SRAM0_HW_CFG_M256DS_Pos           _UINT32_(5)                                          /* (SFR_SRAM0_HW_CFG) 256 KB Deep Sleep Mode Position */
#define SFR_SRAM0_HW_CFG_M256DS_Msk           (_UINT32_(0x1) << SFR_SRAM0_HW_CFG_M256DS_Pos)       /* (SFR_SRAM0_HW_CFG) 256 KB Deep Sleep Mode Mask */
#define SFR_SRAM0_HW_CFG_M256DS(value)        (SFR_SRAM0_HW_CFG_M256DS_Msk & (_UINT32_(value) << SFR_SRAM0_HW_CFG_M256DS_Pos)) /* Assigment of value for M256DS in the SFR_SRAM0_HW_CFG register */
#define SFR_SRAM0_HW_CFG_M256SD_Pos           _UINT32_(6)                                          /* (SFR_SRAM0_HW_CFG) 256 KB Shutdown Mode Position */
#define SFR_SRAM0_HW_CFG_M256SD_Msk           (_UINT32_(0x1) << SFR_SRAM0_HW_CFG_M256SD_Pos)       /* (SFR_SRAM0_HW_CFG) 256 KB Shutdown Mode Mask */
#define SFR_SRAM0_HW_CFG_M256SD(value)        (SFR_SRAM0_HW_CFG_M256SD_Msk & (_UINT32_(value) << SFR_SRAM0_HW_CFG_M256SD_Pos)) /* Assigment of value for M256SD in the SFR_SRAM0_HW_CFG register */
#define SFR_SRAM0_HW_CFG_M384LS_Pos           _UINT32_(8)                                          /* (SFR_SRAM0_HW_CFG) 384 KB Light Sleep Mode Position */
#define SFR_SRAM0_HW_CFG_M384LS_Msk           (_UINT32_(0x1) << SFR_SRAM0_HW_CFG_M384LS_Pos)       /* (SFR_SRAM0_HW_CFG) 384 KB Light Sleep Mode Mask */
#define SFR_SRAM0_HW_CFG_M384LS(value)        (SFR_SRAM0_HW_CFG_M384LS_Msk & (_UINT32_(value) << SFR_SRAM0_HW_CFG_M384LS_Pos)) /* Assigment of value for M384LS in the SFR_SRAM0_HW_CFG register */
#define SFR_SRAM0_HW_CFG_M384DS_Pos           _UINT32_(9)                                          /* (SFR_SRAM0_HW_CFG) 384 KB Deep Sleep Mode Position */
#define SFR_SRAM0_HW_CFG_M384DS_Msk           (_UINT32_(0x1) << SFR_SRAM0_HW_CFG_M384DS_Pos)       /* (SFR_SRAM0_HW_CFG) 384 KB Deep Sleep Mode Mask */
#define SFR_SRAM0_HW_CFG_M384DS(value)        (SFR_SRAM0_HW_CFG_M384DS_Msk & (_UINT32_(value) << SFR_SRAM0_HW_CFG_M384DS_Pos)) /* Assigment of value for M384DS in the SFR_SRAM0_HW_CFG register */
#define SFR_SRAM0_HW_CFG_M384SD_Pos           _UINT32_(10)                                         /* (SFR_SRAM0_HW_CFG) 384 KB Shutdown Mode Position */
#define SFR_SRAM0_HW_CFG_M384SD_Msk           (_UINT32_(0x1) << SFR_SRAM0_HW_CFG_M384SD_Pos)       /* (SFR_SRAM0_HW_CFG) 384 KB Shutdown Mode Mask */
#define SFR_SRAM0_HW_CFG_M384SD(value)        (SFR_SRAM0_HW_CFG_M384SD_Msk & (_UINT32_(value) << SFR_SRAM0_HW_CFG_M384SD_Pos)) /* Assigment of value for M384SD in the SFR_SRAM0_HW_CFG register */
#define SFR_SRAM0_HW_CFG_M512LS_Pos           _UINT32_(12)                                         /* (SFR_SRAM0_HW_CFG) 512 KB Light Sleep Mode Position */
#define SFR_SRAM0_HW_CFG_M512LS_Msk           (_UINT32_(0x1) << SFR_SRAM0_HW_CFG_M512LS_Pos)       /* (SFR_SRAM0_HW_CFG) 512 KB Light Sleep Mode Mask */
#define SFR_SRAM0_HW_CFG_M512LS(value)        (SFR_SRAM0_HW_CFG_M512LS_Msk & (_UINT32_(value) << SFR_SRAM0_HW_CFG_M512LS_Pos)) /* Assigment of value for M512LS in the SFR_SRAM0_HW_CFG register */
#define SFR_SRAM0_HW_CFG_M512DS_Pos           _UINT32_(13)                                         /* (SFR_SRAM0_HW_CFG) 512 KB Deep Sleep Mode Position */
#define SFR_SRAM0_HW_CFG_M512DS_Msk           (_UINT32_(0x1) << SFR_SRAM0_HW_CFG_M512DS_Pos)       /* (SFR_SRAM0_HW_CFG) 512 KB Deep Sleep Mode Mask */
#define SFR_SRAM0_HW_CFG_M512DS(value)        (SFR_SRAM0_HW_CFG_M512DS_Msk & (_UINT32_(value) << SFR_SRAM0_HW_CFG_M512DS_Pos)) /* Assigment of value for M512DS in the SFR_SRAM0_HW_CFG register */
#define SFR_SRAM0_HW_CFG_M512SD_Pos           _UINT32_(14)                                         /* (SFR_SRAM0_HW_CFG) 512 KB Shutdown Mode Position */
#define SFR_SRAM0_HW_CFG_M512SD_Msk           (_UINT32_(0x1) << SFR_SRAM0_HW_CFG_M512SD_Pos)       /* (SFR_SRAM0_HW_CFG) 512 KB Shutdown Mode Mask */
#define SFR_SRAM0_HW_CFG_M512SD(value)        (SFR_SRAM0_HW_CFG_M512SD_Msk & (_UINT32_(value) << SFR_SRAM0_HW_CFG_M512SD_Pos)) /* Assigment of value for M512SD in the SFR_SRAM0_HW_CFG register */
#define SFR_SRAM0_HW_CFG_Msk                  _UINT32_(0x00007777)                                 /* (SFR_SRAM0_HW_CFG) Register Mask  */


/* -------- SFR_SRAM0_CH : (SFR Offset: 0x18) (R/W 32) SRAM0 Read Margin Register Channel -------- */
#define SFR_SRAM0_CH_RM0_Pos                  _UINT32_(0)                                          /* (SFR_SRAM0_CH) Read Margin Position */
#define SFR_SRAM0_CH_RM0_Msk                  (_UINT32_(0xF) << SFR_SRAM0_CH_RM0_Pos)              /* (SFR_SRAM0_CH) Read Margin Mask */
#define SFR_SRAM0_CH_RM0(value)               (SFR_SRAM0_CH_RM0_Msk & (_UINT32_(value) << SFR_SRAM0_CH_RM0_Pos)) /* Assigment of value for RM0 in the SFR_SRAM0_CH register */
#define SFR_SRAM0_CH_RME0_Pos                 _UINT32_(4)                                          /* (SFR_SRAM0_CH) Read Margin Enable Position */
#define SFR_SRAM0_CH_RME0_Msk                 (_UINT32_(0x1) << SFR_SRAM0_CH_RME0_Pos)             /* (SFR_SRAM0_CH) Read Margin Enable Mask */
#define SFR_SRAM0_CH_RME0(value)              (SFR_SRAM0_CH_RME0_Msk & (_UINT32_(value) << SFR_SRAM0_CH_RME0_Pos)) /* Assigment of value for RME0 in the SFR_SRAM0_CH register */
#define SFR_SRAM0_CH_RM1_Pos                  _UINT32_(8)                                          /* (SFR_SRAM0_CH) Read Margin Position */
#define SFR_SRAM0_CH_RM1_Msk                  (_UINT32_(0xF) << SFR_SRAM0_CH_RM1_Pos)              /* (SFR_SRAM0_CH) Read Margin Mask */
#define SFR_SRAM0_CH_RM1(value)               (SFR_SRAM0_CH_RM1_Msk & (_UINT32_(value) << SFR_SRAM0_CH_RM1_Pos)) /* Assigment of value for RM1 in the SFR_SRAM0_CH register */
#define SFR_SRAM0_CH_RME1_Pos                 _UINT32_(12)                                         /* (SFR_SRAM0_CH) Read Margin Enable Position */
#define SFR_SRAM0_CH_RME1_Msk                 (_UINT32_(0x1) << SFR_SRAM0_CH_RME1_Pos)             /* (SFR_SRAM0_CH) Read Margin Enable Mask */
#define SFR_SRAM0_CH_RME1(value)              (SFR_SRAM0_CH_RME1_Msk & (_UINT32_(value) << SFR_SRAM0_CH_RME1_Pos)) /* Assigment of value for RME1 in the SFR_SRAM0_CH register */
#define SFR_SRAM0_CH_RM2_Pos                  _UINT32_(16)                                         /* (SFR_SRAM0_CH) Read Margin Position */
#define SFR_SRAM0_CH_RM2_Msk                  (_UINT32_(0xF) << SFR_SRAM0_CH_RM2_Pos)              /* (SFR_SRAM0_CH) Read Margin Mask */
#define SFR_SRAM0_CH_RM2(value)               (SFR_SRAM0_CH_RM2_Msk & (_UINT32_(value) << SFR_SRAM0_CH_RM2_Pos)) /* Assigment of value for RM2 in the SFR_SRAM0_CH register */
#define SFR_SRAM0_CH_RME2_Pos                 _UINT32_(20)                                         /* (SFR_SRAM0_CH) Read Margin Enable Position */
#define SFR_SRAM0_CH_RME2_Msk                 (_UINT32_(0x1) << SFR_SRAM0_CH_RME2_Pos)             /* (SFR_SRAM0_CH) Read Margin Enable Mask */
#define SFR_SRAM0_CH_RME2(value)              (SFR_SRAM0_CH_RME2_Msk & (_UINT32_(value) << SFR_SRAM0_CH_RME2_Pos)) /* Assigment of value for RME2 in the SFR_SRAM0_CH register */
#define SFR_SRAM0_CH_RM3_Pos                  _UINT32_(24)                                         /* (SFR_SRAM0_CH) Read Margin Position */
#define SFR_SRAM0_CH_RM3_Msk                  (_UINT32_(0xF) << SFR_SRAM0_CH_RM3_Pos)              /* (SFR_SRAM0_CH) Read Margin Mask */
#define SFR_SRAM0_CH_RM3(value)               (SFR_SRAM0_CH_RM3_Msk & (_UINT32_(value) << SFR_SRAM0_CH_RM3_Pos)) /* Assigment of value for RM3 in the SFR_SRAM0_CH register */
#define SFR_SRAM0_CH_RME3_Pos                 _UINT32_(28)                                         /* (SFR_SRAM0_CH) Read Margin Enable Position */
#define SFR_SRAM0_CH_RME3_Msk                 (_UINT32_(0x1) << SFR_SRAM0_CH_RME3_Pos)             /* (SFR_SRAM0_CH) Read Margin Enable Mask */
#define SFR_SRAM0_CH_RME3(value)              (SFR_SRAM0_CH_RME3_Msk & (_UINT32_(value) << SFR_SRAM0_CH_RME3_Pos)) /* Assigment of value for RME3 in the SFR_SRAM0_CH register */
#define SFR_SRAM0_CH_Msk                      _UINT32_(0x1F1F1F1F)                                 /* (SFR_SRAM0_CH) Register Mask  */


/* -------- SFR_SRAM : (SFR Offset: 0x28) (R/W 32) SRAM Configuration Register -------- */
#define SFR_SRAM_RM0_Pos                      _UINT32_(0)                                          /* (SFR_SRAM) Read Margin Position */
#define SFR_SRAM_RM0_Msk                      (_UINT32_(0xF) << SFR_SRAM_RM0_Pos)                  /* (SFR_SRAM) Read Margin Mask */
#define SFR_SRAM_RM0(value)                   (SFR_SRAM_RM0_Msk & (_UINT32_(value) << SFR_SRAM_RM0_Pos)) /* Assigment of value for RM0 in the SFR_SRAM register */
#define SFR_SRAM_RM1_Pos                      _UINT32_(4)                                          /* (SFR_SRAM) Read Margin Position */
#define SFR_SRAM_RM1_Msk                      (_UINT32_(0xF) << SFR_SRAM_RM1_Pos)                  /* (SFR_SRAM) Read Margin Mask */
#define SFR_SRAM_RM1(value)                   (SFR_SRAM_RM1_Msk & (_UINT32_(value) << SFR_SRAM_RM1_Pos)) /* Assigment of value for RM1 in the SFR_SRAM register */
#define SFR_SRAM_RM2_Pos                      _UINT32_(8)                                          /* (SFR_SRAM) Read Margin Position */
#define SFR_SRAM_RM2_Msk                      (_UINT32_(0xF) << SFR_SRAM_RM2_Pos)                  /* (SFR_SRAM) Read Margin Mask */
#define SFR_SRAM_RM2(value)                   (SFR_SRAM_RM2_Msk & (_UINT32_(value) << SFR_SRAM_RM2_Pos)) /* Assigment of value for RM2 in the SFR_SRAM register */
#define SFR_SRAM_RM3_Pos                      _UINT32_(12)                                         /* (SFR_SRAM) Read Margin Position */
#define SFR_SRAM_RM3_Msk                      (_UINT32_(0xF) << SFR_SRAM_RM3_Pos)                  /* (SFR_SRAM) Read Margin Mask */
#define SFR_SRAM_RM3(value)                   (SFR_SRAM_RM3_Msk & (_UINT32_(value) << SFR_SRAM_RM3_Pos)) /* Assigment of value for RM3 in the SFR_SRAM register */
#define SFR_SRAM_RME0_Pos                     _UINT32_(16)                                         /* (SFR_SRAM) Read Margin Enable Position */
#define SFR_SRAM_RME0_Msk                     (_UINT32_(0x1) << SFR_SRAM_RME0_Pos)                 /* (SFR_SRAM) Read Margin Enable Mask */
#define SFR_SRAM_RME0(value)                  (SFR_SRAM_RME0_Msk & (_UINT32_(value) << SFR_SRAM_RME0_Pos)) /* Assigment of value for RME0 in the SFR_SRAM register */
#define SFR_SRAM_RME1_Pos                     _UINT32_(17)                                         /* (SFR_SRAM) Read Margin Enable Position */
#define SFR_SRAM_RME1_Msk                     (_UINT32_(0x1) << SFR_SRAM_RME1_Pos)                 /* (SFR_SRAM) Read Margin Enable Mask */
#define SFR_SRAM_RME1(value)                  (SFR_SRAM_RME1_Msk & (_UINT32_(value) << SFR_SRAM_RME1_Pos)) /* Assigment of value for RME1 in the SFR_SRAM register */
#define SFR_SRAM_RME2_Pos                     _UINT32_(18)                                         /* (SFR_SRAM) Read Margin Enable Position */
#define SFR_SRAM_RME2_Msk                     (_UINT32_(0x1) << SFR_SRAM_RME2_Pos)                 /* (SFR_SRAM) Read Margin Enable Mask */
#define SFR_SRAM_RME2(value)                  (SFR_SRAM_RME2_Msk & (_UINT32_(value) << SFR_SRAM_RME2_Pos)) /* Assigment of value for RME2 in the SFR_SRAM register */
#define SFR_SRAM_RME3_Pos                     _UINT32_(19)                                         /* (SFR_SRAM) Read Margin Enable Position */
#define SFR_SRAM_RME3_Msk                     (_UINT32_(0x1) << SFR_SRAM_RME3_Pos)                 /* (SFR_SRAM) Read Margin Enable Mask */
#define SFR_SRAM_RME3(value)                  (SFR_SRAM_RME3_Msk & (_UINT32_(value) << SFR_SRAM_RME3_Pos)) /* Assigment of value for RME3 in the SFR_SRAM register */
#define SFR_SRAM_LS_Pos                       _UINT32_(24)                                         /* (SFR_SRAM) Light Sleep Mode Position */
#define SFR_SRAM_LS_Msk                       (_UINT32_(0x1) << SFR_SRAM_LS_Pos)                   /* (SFR_SRAM) Light Sleep Mode Mask */
#define SFR_SRAM_LS(value)                    (SFR_SRAM_LS_Msk & (_UINT32_(value) << SFR_SRAM_LS_Pos)) /* Assigment of value for LS in the SFR_SRAM register */
#define SFR_SRAM_DS_Pos                       _UINT32_(25)                                         /* (SFR_SRAM) Deep Sleep Mode Position */
#define SFR_SRAM_DS_Msk                       (_UINT32_(0x1) << SFR_SRAM_DS_Pos)                   /* (SFR_SRAM) Deep Sleep Mode Mask */
#define SFR_SRAM_DS(value)                    (SFR_SRAM_DS_Msk & (_UINT32_(value) << SFR_SRAM_DS_Pos)) /* Assigment of value for DS in the SFR_SRAM register */
#define SFR_SRAM_SD_Pos                       _UINT32_(26)                                         /* (SFR_SRAM) Shutdown Mode Position */
#define SFR_SRAM_SD_Msk                       (_UINT32_(0x1) << SFR_SRAM_SD_Pos)                   /* (SFR_SRAM) Shutdown Mode Mask */
#define SFR_SRAM_SD(value)                    (SFR_SRAM_SD_Msk & (_UINT32_(value) << SFR_SRAM_SD_Pos)) /* Assigment of value for SD in the SFR_SRAM register */
#define SFR_SRAM_Msk                          _UINT32_(0x070FFFFF)                                 /* (SFR_SRAM) Register Mask  */

#define SFR_SRAM_RME_Pos                      _UINT32_(16)                                         /* (SFR_SRAM Position) Read Margin Enable */
#define SFR_SRAM_RME_Msk                      (_UINT32_(0xF) << SFR_SRAM_RME_Pos)                  /* (SFR_SRAM Mask) RME */
#define SFR_SRAM_RME(value)                   (SFR_SRAM_RME_Msk & (_UINT32_(value) << SFR_SRAM_RME_Pos)) 

/* -------- SFR_CPKCC : (SFR Offset: 0x30) (R/W 32) CPKCC Memory Configuration Register -------- */
#define SFR_CPKCC_ROM_RM_Pos                  _UINT32_(0)                                          /* (SFR_CPKCC) ROM Read Margin Position */
#define SFR_CPKCC_ROM_RM_Msk                  (_UINT32_(0xF) << SFR_CPKCC_ROM_RM_Pos)              /* (SFR_CPKCC) ROM Read Margin Mask */
#define SFR_CPKCC_ROM_RM(value)               (SFR_CPKCC_ROM_RM_Msk & (_UINT32_(value) << SFR_CPKCC_ROM_RM_Pos)) /* Assigment of value for ROM_RM in the SFR_CPKCC register */
#define SFR_CPKCC_ROM_RME_Pos                 _UINT32_(4)                                          /* (SFR_CPKCC) ROM Read Margin Enable Position */
#define SFR_CPKCC_ROM_RME_Msk                 (_UINT32_(0x1) << SFR_CPKCC_ROM_RME_Pos)             /* (SFR_CPKCC) ROM Read Margin Enable Mask */
#define SFR_CPKCC_ROM_RME(value)              (SFR_CPKCC_ROM_RME_Msk & (_UINT32_(value) << SFR_CPKCC_ROM_RME_Pos)) /* Assigment of value for ROM_RME in the SFR_CPKCC register */
#define SFR_CPKCC_ROM_LS_Pos                  _UINT32_(8)                                          /* (SFR_CPKCC) ROM Light Sleep Mode Position */
#define SFR_CPKCC_ROM_LS_Msk                  (_UINT32_(0x1) << SFR_CPKCC_ROM_LS_Pos)              /* (SFR_CPKCC) ROM Light Sleep Mode Mask */
#define SFR_CPKCC_ROM_LS(value)               (SFR_CPKCC_ROM_LS_Msk & (_UINT32_(value) << SFR_CPKCC_ROM_LS_Pos)) /* Assigment of value for ROM_LS in the SFR_CPKCC register */
#define SFR_CPKCC_ROM_SD_Pos                  _UINT32_(9)                                          /* (SFR_CPKCC) Shutdown Mode Position */
#define SFR_CPKCC_ROM_SD_Msk                  (_UINT32_(0x1) << SFR_CPKCC_ROM_SD_Pos)              /* (SFR_CPKCC) Shutdown Mode Mask */
#define SFR_CPKCC_ROM_SD(value)               (SFR_CPKCC_ROM_SD_Msk & (_UINT32_(value) << SFR_CPKCC_ROM_SD_Pos)) /* Assigment of value for ROM_SD in the SFR_CPKCC register */
#define SFR_CPKCC_RAM_RM_Pos                  _UINT32_(16)                                         /* (SFR_CPKCC) RAM Read Margin Position */
#define SFR_CPKCC_RAM_RM_Msk                  (_UINT32_(0xF) << SFR_CPKCC_RAM_RM_Pos)              /* (SFR_CPKCC) RAM Read Margin Mask */
#define SFR_CPKCC_RAM_RM(value)               (SFR_CPKCC_RAM_RM_Msk & (_UINT32_(value) << SFR_CPKCC_RAM_RM_Pos)) /* Assigment of value for RAM_RM in the SFR_CPKCC register */
#define SFR_CPKCC_RAM_RME_Pos                 _UINT32_(20)                                         /* (SFR_CPKCC) RAM Read Margin Enable Position */
#define SFR_CPKCC_RAM_RME_Msk                 (_UINT32_(0x1) << SFR_CPKCC_RAM_RME_Pos)             /* (SFR_CPKCC) RAM Read Margin Enable Mask */
#define SFR_CPKCC_RAM_RME(value)              (SFR_CPKCC_RAM_RME_Msk & (_UINT32_(value) << SFR_CPKCC_RAM_RME_Pos)) /* Assigment of value for RAM_RME in the SFR_CPKCC register */
#define SFR_CPKCC_RAM_LS_Pos                  _UINT32_(24)                                         /* (SFR_CPKCC) RAM Light Sleep Mode Position */
#define SFR_CPKCC_RAM_LS_Msk                  (_UINT32_(0x1) << SFR_CPKCC_RAM_LS_Pos)              /* (SFR_CPKCC) RAM Light Sleep Mode Mask */
#define SFR_CPKCC_RAM_LS(value)               (SFR_CPKCC_RAM_LS_Msk & (_UINT32_(value) << SFR_CPKCC_RAM_LS_Pos)) /* Assigment of value for RAM_LS in the SFR_CPKCC register */
#define SFR_CPKCC_RAM_DS_Pos                  _UINT32_(25)                                         /* (SFR_CPKCC) RAM Deep Sleep Mode Position */
#define SFR_CPKCC_RAM_DS_Msk                  (_UINT32_(0x1) << SFR_CPKCC_RAM_DS_Pos)              /* (SFR_CPKCC) RAM Deep Sleep Mode Mask */
#define SFR_CPKCC_RAM_DS(value)               (SFR_CPKCC_RAM_DS_Msk & (_UINT32_(value) << SFR_CPKCC_RAM_DS_Pos)) /* Assigment of value for RAM_DS in the SFR_CPKCC register */
#define SFR_CPKCC_RAM_SD_Pos                  _UINT32_(26)                                         /* (SFR_CPKCC) Shutdown Mode Position */
#define SFR_CPKCC_RAM_SD_Msk                  (_UINT32_(0x1) << SFR_CPKCC_RAM_SD_Pos)              /* (SFR_CPKCC) Shutdown Mode Mask */
#define SFR_CPKCC_RAM_SD(value)               (SFR_CPKCC_RAM_SD_Msk & (_UINT32_(value) << SFR_CPKCC_RAM_SD_Pos)) /* Assigment of value for RAM_SD in the SFR_CPKCC register */
#define SFR_CPKCC_Msk                         _UINT32_(0x071F031F)                                 /* (SFR_CPKCC) Register Mask  */


/* -------- SFR_HROMC : (SFR Offset: 0x40) (R/W 32) HROMC Memory Configuration Register -------- */
#define SFR_HROMC_RM_Pos                      _UINT32_(0)                                          /* (SFR_HROMC) Read Margin Position */
#define SFR_HROMC_RM_Msk                      (_UINT32_(0xF) << SFR_HROMC_RM_Pos)                  /* (SFR_HROMC) Read Margin Mask */
#define SFR_HROMC_RM(value)                   (SFR_HROMC_RM_Msk & (_UINT32_(value) << SFR_HROMC_RM_Pos)) /* Assigment of value for RM in the SFR_HROMC register */
#define SFR_HROMC_RME_Pos                     _UINT32_(4)                                          /* (SFR_HROMC) Read Margin Enable Position */
#define SFR_HROMC_RME_Msk                     (_UINT32_(0x1) << SFR_HROMC_RME_Pos)                 /* (SFR_HROMC) Read Margin Enable Mask */
#define SFR_HROMC_RME(value)                  (SFR_HROMC_RME_Msk & (_UINT32_(value) << SFR_HROMC_RME_Pos)) /* Assigment of value for RME in the SFR_HROMC register */
#define SFR_HROMC_LS_Pos                      _UINT32_(8)                                          /* (SFR_HROMC) HROMC Light Sleep Mode Position */
#define SFR_HROMC_LS_Msk                      (_UINT32_(0x1) << SFR_HROMC_LS_Pos)                  /* (SFR_HROMC) HROMC Light Sleep Mode Mask */
#define SFR_HROMC_LS(value)                   (SFR_HROMC_LS_Msk & (_UINT32_(value) << SFR_HROMC_LS_Pos)) /* Assigment of value for LS in the SFR_HROMC register */
#define SFR_HROMC_SD_Pos                      _UINT32_(9)                                          /* (SFR_HROMC) Shutdown Mode Position */
#define SFR_HROMC_SD_Msk                      (_UINT32_(0x1) << SFR_HROMC_SD_Pos)                  /* (SFR_HROMC) Shutdown Mode Mask */
#define SFR_HROMC_SD(value)                   (SFR_HROMC_SD_Msk & (_UINT32_(value) << SFR_HROMC_SD_Pos)) /* Assigment of value for SD in the SFR_HROMC register */
#define SFR_HROMC_Msk                         _UINT32_(0x0000031F)                                 /* (SFR_HROMC) Register Mask  */


/* -------- SFR_HCACHEI_VALID : (SFR Offset: 0x50) (R/W 32) HCACHEI Valid Memory Configuration Register -------- */
#define SFR_HCACHEI_VALID_RM_Pos              _UINT32_(0)                                          /* (SFR_HCACHEI_VALID) Read Margin Position */
#define SFR_HCACHEI_VALID_RM_Msk              (_UINT32_(0xF) << SFR_HCACHEI_VALID_RM_Pos)          /* (SFR_HCACHEI_VALID) Read Margin Mask */
#define SFR_HCACHEI_VALID_RM(value)           (SFR_HCACHEI_VALID_RM_Msk & (_UINT32_(value) << SFR_HCACHEI_VALID_RM_Pos)) /* Assigment of value for RM in the SFR_HCACHEI_VALID register */
#define SFR_HCACHEI_VALID_RME_Pos             _UINT32_(4)                                          /* (SFR_HCACHEI_VALID) Read Margin Enable Position */
#define SFR_HCACHEI_VALID_RME_Msk             (_UINT32_(0x1) << SFR_HCACHEI_VALID_RME_Pos)         /* (SFR_HCACHEI_VALID) Read Margin Enable Mask */
#define SFR_HCACHEI_VALID_RME(value)          (SFR_HCACHEI_VALID_RME_Msk & (_UINT32_(value) << SFR_HCACHEI_VALID_RME_Pos)) /* Assigment of value for RME in the SFR_HCACHEI_VALID register */
#define SFR_HCACHEI_VALID_LS_Pos              _UINT32_(8)                                          /* (SFR_HCACHEI_VALID) Light Sleep Mode Position */
#define SFR_HCACHEI_VALID_LS_Msk              (_UINT32_(0x1) << SFR_HCACHEI_VALID_LS_Pos)          /* (SFR_HCACHEI_VALID) Light Sleep Mode Mask */
#define SFR_HCACHEI_VALID_LS(value)           (SFR_HCACHEI_VALID_LS_Msk & (_UINT32_(value) << SFR_HCACHEI_VALID_LS_Pos)) /* Assigment of value for LS in the SFR_HCACHEI_VALID register */
#define SFR_HCACHEI_VALID_DS_Pos              _UINT32_(9)                                          /* (SFR_HCACHEI_VALID) Deep Sleep Mode Position */
#define SFR_HCACHEI_VALID_DS_Msk              (_UINT32_(0x1) << SFR_HCACHEI_VALID_DS_Pos)          /* (SFR_HCACHEI_VALID) Deep Sleep Mode Mask */
#define SFR_HCACHEI_VALID_DS(value)           (SFR_HCACHEI_VALID_DS_Msk & (_UINT32_(value) << SFR_HCACHEI_VALID_DS_Pos)) /* Assigment of value for DS in the SFR_HCACHEI_VALID register */
#define SFR_HCACHEI_VALID_SD_Pos              _UINT32_(10)                                         /* (SFR_HCACHEI_VALID) Shutdown Mode Position */
#define SFR_HCACHEI_VALID_SD_Msk              (_UINT32_(0x1) << SFR_HCACHEI_VALID_SD_Pos)          /* (SFR_HCACHEI_VALID) Shutdown Mode Mask */
#define SFR_HCACHEI_VALID_SD(value)           (SFR_HCACHEI_VALID_SD_Msk & (_UINT32_(value) << SFR_HCACHEI_VALID_SD_Pos)) /* Assigment of value for SD in the SFR_HCACHEI_VALID register */
#define SFR_HCACHEI_VALID_Msk                 _UINT32_(0x0000071F)                                 /* (SFR_HCACHEI_VALID) Register Mask  */


/* -------- SFR_HCACHEI_DATA : (SFR Offset: 0x54) (R/W 32) HCACHEI Data Memory Configuration Register -------- */
#define SFR_HCACHEI_DATA_RM_Pos               _UINT32_(0)                                          /* (SFR_HCACHEI_DATA) Read Margin Position */
#define SFR_HCACHEI_DATA_RM_Msk               (_UINT32_(0xFFFF) << SFR_HCACHEI_DATA_RM_Pos)        /* (SFR_HCACHEI_DATA) Read Margin Mask */
#define SFR_HCACHEI_DATA_RM(value)            (SFR_HCACHEI_DATA_RM_Msk & (_UINT32_(value) << SFR_HCACHEI_DATA_RM_Pos)) /* Assigment of value for RM in the SFR_HCACHEI_DATA register */
#define SFR_HCACHEI_DATA_RME_Pos              _UINT32_(16)                                         /* (SFR_HCACHEI_DATA) Read Margin Enable Position */
#define SFR_HCACHEI_DATA_RME_Msk              (_UINT32_(0xF) << SFR_HCACHEI_DATA_RME_Pos)          /* (SFR_HCACHEI_DATA) Read Margin Enable Mask */
#define SFR_HCACHEI_DATA_RME(value)           (SFR_HCACHEI_DATA_RME_Msk & (_UINT32_(value) << SFR_HCACHEI_DATA_RME_Pos)) /* Assigment of value for RME in the SFR_HCACHEI_DATA register */
#define SFR_HCACHEI_DATA_LS_Pos               _UINT32_(20)                                         /* (SFR_HCACHEI_DATA) Light Sleep Mode Position */
#define SFR_HCACHEI_DATA_LS_Msk               (_UINT32_(0xF) << SFR_HCACHEI_DATA_LS_Pos)           /* (SFR_HCACHEI_DATA) Light Sleep Mode Mask */
#define SFR_HCACHEI_DATA_LS(value)            (SFR_HCACHEI_DATA_LS_Msk & (_UINT32_(value) << SFR_HCACHEI_DATA_LS_Pos)) /* Assigment of value for LS in the SFR_HCACHEI_DATA register */
#define SFR_HCACHEI_DATA_DS_Pos               _UINT32_(24)                                         /* (SFR_HCACHEI_DATA) Deep Sleep Mode Position */
#define SFR_HCACHEI_DATA_DS_Msk               (_UINT32_(0xF) << SFR_HCACHEI_DATA_DS_Pos)           /* (SFR_HCACHEI_DATA) Deep Sleep Mode Mask */
#define SFR_HCACHEI_DATA_DS(value)            (SFR_HCACHEI_DATA_DS_Msk & (_UINT32_(value) << SFR_HCACHEI_DATA_DS_Pos)) /* Assigment of value for DS in the SFR_HCACHEI_DATA register */
#define SFR_HCACHEI_DATA_SD_Pos               _UINT32_(28)                                         /* (SFR_HCACHEI_DATA) Shutdown Mode Position */
#define SFR_HCACHEI_DATA_SD_Msk               (_UINT32_(0xF) << SFR_HCACHEI_DATA_SD_Pos)           /* (SFR_HCACHEI_DATA) Shutdown Mode Mask */
#define SFR_HCACHEI_DATA_SD(value)            (SFR_HCACHEI_DATA_SD_Msk & (_UINT32_(value) << SFR_HCACHEI_DATA_SD_Pos)) /* Assigment of value for SD in the SFR_HCACHEI_DATA register */
#define SFR_HCACHEI_DATA_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SFR_HCACHEI_DATA) Register Mask  */


/* -------- SFR_HCACHEI_TAG : (SFR Offset: 0x58) (R/W 32) HCACHEI Tag Memory Configuration Register -------- */
#define SFR_HCACHEI_TAG_RM_Pos                _UINT32_(0)                                          /* (SFR_HCACHEI_TAG) Read Margin Position */
#define SFR_HCACHEI_TAG_RM_Msk                (_UINT32_(0xFFFF) << SFR_HCACHEI_TAG_RM_Pos)         /* (SFR_HCACHEI_TAG) Read Margin Mask */
#define SFR_HCACHEI_TAG_RM(value)             (SFR_HCACHEI_TAG_RM_Msk & (_UINT32_(value) << SFR_HCACHEI_TAG_RM_Pos)) /* Assigment of value for RM in the SFR_HCACHEI_TAG register */
#define SFR_HCACHEI_TAG_RME_Pos               _UINT32_(16)                                         /* (SFR_HCACHEI_TAG) Read Margin Enable Position */
#define SFR_HCACHEI_TAG_RME_Msk               (_UINT32_(0xF) << SFR_HCACHEI_TAG_RME_Pos)           /* (SFR_HCACHEI_TAG) Read Margin Enable Mask */
#define SFR_HCACHEI_TAG_RME(value)            (SFR_HCACHEI_TAG_RME_Msk & (_UINT32_(value) << SFR_HCACHEI_TAG_RME_Pos)) /* Assigment of value for RME in the SFR_HCACHEI_TAG register */
#define SFR_HCACHEI_TAG_LS_Pos                _UINT32_(20)                                         /* (SFR_HCACHEI_TAG) Light Sleep Mode Position */
#define SFR_HCACHEI_TAG_LS_Msk                (_UINT32_(0xF) << SFR_HCACHEI_TAG_LS_Pos)            /* (SFR_HCACHEI_TAG) Light Sleep Mode Mask */
#define SFR_HCACHEI_TAG_LS(value)             (SFR_HCACHEI_TAG_LS_Msk & (_UINT32_(value) << SFR_HCACHEI_TAG_LS_Pos)) /* Assigment of value for LS in the SFR_HCACHEI_TAG register */
#define SFR_HCACHEI_TAG_DS_Pos                _UINT32_(24)                                         /* (SFR_HCACHEI_TAG) Deep Sleep Mode Position */
#define SFR_HCACHEI_TAG_DS_Msk                (_UINT32_(0xF) << SFR_HCACHEI_TAG_DS_Pos)            /* (SFR_HCACHEI_TAG) Deep Sleep Mode Mask */
#define SFR_HCACHEI_TAG_DS(value)             (SFR_HCACHEI_TAG_DS_Msk & (_UINT32_(value) << SFR_HCACHEI_TAG_DS_Pos)) /* Assigment of value for DS in the SFR_HCACHEI_TAG register */
#define SFR_HCACHEI_TAG_SD_Pos                _UINT32_(28)                                         /* (SFR_HCACHEI_TAG) Shutdown Mode Position */
#define SFR_HCACHEI_TAG_SD_Msk                (_UINT32_(0xF) << SFR_HCACHEI_TAG_SD_Pos)            /* (SFR_HCACHEI_TAG) Shutdown Mode Mask */
#define SFR_HCACHEI_TAG_SD(value)             (SFR_HCACHEI_TAG_SD_Msk & (_UINT32_(value) << SFR_HCACHEI_TAG_SD_Pos)) /* Assigment of value for SD in the SFR_HCACHEI_TAG register */
#define SFR_HCACHEI_TAG_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (SFR_HCACHEI_TAG) Register Mask  */


/* -------- SFR_HCACHED_VALID : (SFR Offset: 0x60) (R/W 32) HCACHED Valid Memory Configuration Register -------- */
#define SFR_HCACHED_VALID_RM_Pos              _UINT32_(0)                                          /* (SFR_HCACHED_VALID) Read Margin Position */
#define SFR_HCACHED_VALID_RM_Msk              (_UINT32_(0xF) << SFR_HCACHED_VALID_RM_Pos)          /* (SFR_HCACHED_VALID) Read Margin Mask */
#define SFR_HCACHED_VALID_RM(value)           (SFR_HCACHED_VALID_RM_Msk & (_UINT32_(value) << SFR_HCACHED_VALID_RM_Pos)) /* Assigment of value for RM in the SFR_HCACHED_VALID register */
#define SFR_HCACHED_VALID_RME_Pos             _UINT32_(4)                                          /* (SFR_HCACHED_VALID) Read Margin Enable Position */
#define SFR_HCACHED_VALID_RME_Msk             (_UINT32_(0x1) << SFR_HCACHED_VALID_RME_Pos)         /* (SFR_HCACHED_VALID) Read Margin Enable Mask */
#define SFR_HCACHED_VALID_RME(value)          (SFR_HCACHED_VALID_RME_Msk & (_UINT32_(value) << SFR_HCACHED_VALID_RME_Pos)) /* Assigment of value for RME in the SFR_HCACHED_VALID register */
#define SFR_HCACHED_VALID_LS_Pos              _UINT32_(8)                                          /* (SFR_HCACHED_VALID) Light Sleep Mode Position */
#define SFR_HCACHED_VALID_LS_Msk              (_UINT32_(0x1) << SFR_HCACHED_VALID_LS_Pos)          /* (SFR_HCACHED_VALID) Light Sleep Mode Mask */
#define SFR_HCACHED_VALID_LS(value)           (SFR_HCACHED_VALID_LS_Msk & (_UINT32_(value) << SFR_HCACHED_VALID_LS_Pos)) /* Assigment of value for LS in the SFR_HCACHED_VALID register */
#define SFR_HCACHED_VALID_DS_Pos              _UINT32_(9)                                          /* (SFR_HCACHED_VALID) Deep Sleep Mode Position */
#define SFR_HCACHED_VALID_DS_Msk              (_UINT32_(0x1) << SFR_HCACHED_VALID_DS_Pos)          /* (SFR_HCACHED_VALID) Deep Sleep Mode Mask */
#define SFR_HCACHED_VALID_DS(value)           (SFR_HCACHED_VALID_DS_Msk & (_UINT32_(value) << SFR_HCACHED_VALID_DS_Pos)) /* Assigment of value for DS in the SFR_HCACHED_VALID register */
#define SFR_HCACHED_VALID_SD_Pos              _UINT32_(10)                                         /* (SFR_HCACHED_VALID) Shutdown Mode Position */
#define SFR_HCACHED_VALID_SD_Msk              (_UINT32_(0x1) << SFR_HCACHED_VALID_SD_Pos)          /* (SFR_HCACHED_VALID) Shutdown Mode Mask */
#define SFR_HCACHED_VALID_SD(value)           (SFR_HCACHED_VALID_SD_Msk & (_UINT32_(value) << SFR_HCACHED_VALID_SD_Pos)) /* Assigment of value for SD in the SFR_HCACHED_VALID register */
#define SFR_HCACHED_VALID_Msk                 _UINT32_(0x0000071F)                                 /* (SFR_HCACHED_VALID) Register Mask  */


/* -------- SFR_HCACHED_DATA : (SFR Offset: 0x64) (R/W 32) HCACHED Data Memory Configuration Register -------- */
#define SFR_HCACHED_DATA_RM_Pos               _UINT32_(0)                                          /* (SFR_HCACHED_DATA) Read Margin Position */
#define SFR_HCACHED_DATA_RM_Msk               (_UINT32_(0xFFFF) << SFR_HCACHED_DATA_RM_Pos)        /* (SFR_HCACHED_DATA) Read Margin Mask */
#define SFR_HCACHED_DATA_RM(value)            (SFR_HCACHED_DATA_RM_Msk & (_UINT32_(value) << SFR_HCACHED_DATA_RM_Pos)) /* Assigment of value for RM in the SFR_HCACHED_DATA register */
#define SFR_HCACHED_DATA_RME_Pos              _UINT32_(16)                                         /* (SFR_HCACHED_DATA) Read Margin Enable Position */
#define SFR_HCACHED_DATA_RME_Msk              (_UINT32_(0xF) << SFR_HCACHED_DATA_RME_Pos)          /* (SFR_HCACHED_DATA) Read Margin Enable Mask */
#define SFR_HCACHED_DATA_RME(value)           (SFR_HCACHED_DATA_RME_Msk & (_UINT32_(value) << SFR_HCACHED_DATA_RME_Pos)) /* Assigment of value for RME in the SFR_HCACHED_DATA register */
#define SFR_HCACHED_DATA_LS_Pos               _UINT32_(20)                                         /* (SFR_HCACHED_DATA) Light Sleep Mode Position */
#define SFR_HCACHED_DATA_LS_Msk               (_UINT32_(0xF) << SFR_HCACHED_DATA_LS_Pos)           /* (SFR_HCACHED_DATA) Light Sleep Mode Mask */
#define SFR_HCACHED_DATA_LS(value)            (SFR_HCACHED_DATA_LS_Msk & (_UINT32_(value) << SFR_HCACHED_DATA_LS_Pos)) /* Assigment of value for LS in the SFR_HCACHED_DATA register */
#define SFR_HCACHED_DATA_DS_Pos               _UINT32_(24)                                         /* (SFR_HCACHED_DATA) Deep Sleep Mode Position */
#define SFR_HCACHED_DATA_DS_Msk               (_UINT32_(0xF) << SFR_HCACHED_DATA_DS_Pos)           /* (SFR_HCACHED_DATA) Deep Sleep Mode Mask */
#define SFR_HCACHED_DATA_DS(value)            (SFR_HCACHED_DATA_DS_Msk & (_UINT32_(value) << SFR_HCACHED_DATA_DS_Pos)) /* Assigment of value for DS in the SFR_HCACHED_DATA register */
#define SFR_HCACHED_DATA_SD_Pos               _UINT32_(28)                                         /* (SFR_HCACHED_DATA) Shutdown Mode Position */
#define SFR_HCACHED_DATA_SD_Msk               (_UINT32_(0xF) << SFR_HCACHED_DATA_SD_Pos)           /* (SFR_HCACHED_DATA) Shutdown Mode Mask */
#define SFR_HCACHED_DATA_SD(value)            (SFR_HCACHED_DATA_SD_Msk & (_UINT32_(value) << SFR_HCACHED_DATA_SD_Pos)) /* Assigment of value for SD in the SFR_HCACHED_DATA register */
#define SFR_HCACHED_DATA_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SFR_HCACHED_DATA) Register Mask  */


/* -------- SFR_HCACHED_TAG : (SFR Offset: 0x68) (R/W 32) HCACHEDTag Memory Configuration Register -------- */
#define SFR_HCACHED_TAG_RM_Pos                _UINT32_(0)                                          /* (SFR_HCACHED_TAG) Read Margin Position */
#define SFR_HCACHED_TAG_RM_Msk                (_UINT32_(0xFFFF) << SFR_HCACHED_TAG_RM_Pos)         /* (SFR_HCACHED_TAG) Read Margin Mask */
#define SFR_HCACHED_TAG_RM(value)             (SFR_HCACHED_TAG_RM_Msk & (_UINT32_(value) << SFR_HCACHED_TAG_RM_Pos)) /* Assigment of value for RM in the SFR_HCACHED_TAG register */
#define SFR_HCACHED_TAG_RME_Pos               _UINT32_(16)                                         /* (SFR_HCACHED_TAG) Read Margin Enable Position */
#define SFR_HCACHED_TAG_RME_Msk               (_UINT32_(0xF) << SFR_HCACHED_TAG_RME_Pos)           /* (SFR_HCACHED_TAG) Read Margin Enable Mask */
#define SFR_HCACHED_TAG_RME(value)            (SFR_HCACHED_TAG_RME_Msk & (_UINT32_(value) << SFR_HCACHED_TAG_RME_Pos)) /* Assigment of value for RME in the SFR_HCACHED_TAG register */
#define SFR_HCACHED_TAG_LS_Pos                _UINT32_(20)                                         /* (SFR_HCACHED_TAG) Light Sleep Mode Position */
#define SFR_HCACHED_TAG_LS_Msk                (_UINT32_(0xF) << SFR_HCACHED_TAG_LS_Pos)            /* (SFR_HCACHED_TAG) Light Sleep Mode Mask */
#define SFR_HCACHED_TAG_LS(value)             (SFR_HCACHED_TAG_LS_Msk & (_UINT32_(value) << SFR_HCACHED_TAG_LS_Pos)) /* Assigment of value for LS in the SFR_HCACHED_TAG register */
#define SFR_HCACHED_TAG_DS_Pos                _UINT32_(24)                                         /* (SFR_HCACHED_TAG) Deep Sleep Mode Position */
#define SFR_HCACHED_TAG_DS_Msk                (_UINT32_(0xF) << SFR_HCACHED_TAG_DS_Pos)            /* (SFR_HCACHED_TAG) Deep Sleep Mode Mask */
#define SFR_HCACHED_TAG_DS(value)             (SFR_HCACHED_TAG_DS_Msk & (_UINT32_(value) << SFR_HCACHED_TAG_DS_Pos)) /* Assigment of value for DS in the SFR_HCACHED_TAG register */
#define SFR_HCACHED_TAG_SD_Pos                _UINT32_(28)                                         /* (SFR_HCACHED_TAG) Shutdown Mode Position */
#define SFR_HCACHED_TAG_SD_Msk                (_UINT32_(0xF) << SFR_HCACHED_TAG_SD_Pos)            /* (SFR_HCACHED_TAG) Shutdown Mode Mask */
#define SFR_HCACHED_TAG_SD(value)             (SFR_HCACHED_TAG_SD_Msk & (_UINT32_(value) << SFR_HCACHED_TAG_SD_Pos)) /* Assigment of value for SD in the SFR_HCACHED_TAG register */
#define SFR_HCACHED_TAG_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (SFR_HCACHED_TAG) Register Mask  */


/* -------- SFR_FLASH : (SFR Offset: 0x70) (R/W 32) Flash Memory Configuration Register -------- */
#define SFR_FLASH_PATCH_BYPASS_Pos            _UINT32_(0)                                          /* (SFR_FLASH)  Position */
#define SFR_FLASH_PATCH_BYPASS_Msk            (_UINT32_(0x1) << SFR_FLASH_PATCH_BYPASS_Pos)        /* (SFR_FLASH)  Mask */
#define SFR_FLASH_PATCH_BYPASS(value)         (SFR_FLASH_PATCH_BYPASS_Msk & (_UINT32_(value) << SFR_FLASH_PATCH_BYPASS_Pos)) /* Assigment of value for PATCH_BYPASS in the SFR_FLASH register */
#define SFR_FLASH_Msk                         _UINT32_(0x00000001)                                 /* (SFR_FLASH) Register Mask  */


/* -------- SFR_OPT_LINK : (SFR Offset: 0x80) (R/W 32) Optical Link Register -------- */
#define SFR_OPT_LINK_CLK_SELECT_Pos           _UINT32_(0)                                          /* (SFR_OPT_LINK) Clock Selection Position */
#define SFR_OPT_LINK_CLK_SELECT_Msk           (_UINT32_(0x1) << SFR_OPT_LINK_CLK_SELECT_Pos)       /* (SFR_OPT_LINK) Clock Selection Mask */
#define SFR_OPT_LINK_CLK_SELECT(value)        (SFR_OPT_LINK_CLK_SELECT_Msk & (_UINT32_(value) << SFR_OPT_LINK_CLK_SELECT_Pos)) /* Assigment of value for CLK_SELECT in the SFR_OPT_LINK register */
#define SFR_OPT_LINK_Msk                      _UINT32_(0x00000001)                                 /* (SFR_OPT_LINK) Register Mask  */


/* -------- SFR_JTAG : (SFR Offset: 0x90) (R/W 32) JTAG Register -------- */
#define SFR_JTAG_JTAG_LOCK_Pos                _UINT32_(0)                                          /* (SFR_JTAG) JTAG Lock Position */
#define SFR_JTAG_JTAG_LOCK_Msk                (_UINT32_(0x1) << SFR_JTAG_JTAG_LOCK_Pos)            /* (SFR_JTAG) JTAG Lock Mask */
#define SFR_JTAG_JTAG_LOCK(value)             (SFR_JTAG_JTAG_LOCK_Msk & (_UINT32_(value) << SFR_JTAG_JTAG_LOCK_Pos)) /* Assigment of value for JTAG_LOCK in the SFR_JTAG register */
#define SFR_JTAG_Msk                          _UINT32_(0x00000001)                                 /* (SFR_JTAG) Register Mask  */


/* -------- SFR_CORE_DEBUG_CFG : (SFR Offset: 0xA0) (R/W 32) Core Debug Configuration Register -------- */
#define SFR_CORE_DEBUG_CFG_SWV_Pos            _UINT32_(0)                                          /* (SFR_CORE_DEBUG_CFG) SWV Selection Position */
#define SFR_CORE_DEBUG_CFG_SWV_Msk            (_UINT32_(0x1) << SFR_CORE_DEBUG_CFG_SWV_Pos)        /* (SFR_CORE_DEBUG_CFG) SWV Selection Mask */
#define SFR_CORE_DEBUG_CFG_SWV(value)         (SFR_CORE_DEBUG_CFG_SWV_Msk & (_UINT32_(value) << SFR_CORE_DEBUG_CFG_SWV_Pos)) /* Assigment of value for SWV in the SFR_CORE_DEBUG_CFG register */
#define SFR_CORE_DEBUG_CFG_XTRG1_Pos          _UINT32_(1)                                          /* (SFR_CORE_DEBUG_CFG) From Core 1 to Core 0 Cross Triggering Position */
#define SFR_CORE_DEBUG_CFG_XTRG1_Msk          (_UINT32_(0x1) << SFR_CORE_DEBUG_CFG_XTRG1_Pos)      /* (SFR_CORE_DEBUG_CFG) From Core 1 to Core 0 Cross Triggering Mask */
#define SFR_CORE_DEBUG_CFG_XTRG1(value)       (SFR_CORE_DEBUG_CFG_XTRG1_Msk & (_UINT32_(value) << SFR_CORE_DEBUG_CFG_XTRG1_Pos)) /* Assigment of value for XTRG1 in the SFR_CORE_DEBUG_CFG register */
#define SFR_CORE_DEBUG_CFG_XTRG0_Pos          _UINT32_(2)                                          /* (SFR_CORE_DEBUG_CFG) From Core 0 to Core 1 Cross Triggering Position */
#define SFR_CORE_DEBUG_CFG_XTRG0_Msk          (_UINT32_(0x1) << SFR_CORE_DEBUG_CFG_XTRG0_Pos)      /* (SFR_CORE_DEBUG_CFG) From Core 0 to Core 1 Cross Triggering Mask */
#define SFR_CORE_DEBUG_CFG_XTRG0(value)       (SFR_CORE_DEBUG_CFG_XTRG0_Msk & (_UINT32_(value) << SFR_CORE_DEBUG_CFG_XTRG0_Pos)) /* Assigment of value for XTRG0 in the SFR_CORE_DEBUG_CFG register */
#define SFR_CORE_DEBUG_CFG_Msk                _UINT32_(0x00000007)                                 /* (SFR_CORE_DEBUG_CFG) Register Mask  */

#define SFR_CORE_DEBUG_CFG_XTRG_Pos           _UINT32_(1)                                          /* (SFR_CORE_DEBUG_CFG Position) From Core x to Core x Cross Triggering */
#define SFR_CORE_DEBUG_CFG_XTRG_Msk           (_UINT32_(0x3) << SFR_CORE_DEBUG_CFG_XTRG_Pos)       /* (SFR_CORE_DEBUG_CFG Mask) XTRG */
#define SFR_CORE_DEBUG_CFG_XTRG(value)        (SFR_CORE_DEBUG_CFG_XTRG_Msk & (_UINT32_(value) << SFR_CORE_DEBUG_CFG_XTRG_Pos)) 

/* -------- SFR_EMAHB2AHB : (SFR Offset: 0xA4) (R/W 32) AHB2AHB Configuration Register -------- */
#define SFR_EMAHB2AHB_PFETCH8_0_1_Pos         _UINT32_(0)                                          /* (SFR_EMAHB2AHB) AHB MASTER0_1 Converter Prefetch Position */
#define SFR_EMAHB2AHB_PFETCH8_0_1_Msk         (_UINT32_(0x1) << SFR_EMAHB2AHB_PFETCH8_0_1_Pos)     /* (SFR_EMAHB2AHB) AHB MASTER0_1 Converter Prefetch Mask */
#define SFR_EMAHB2AHB_PFETCH8_0_1(value)      (SFR_EMAHB2AHB_PFETCH8_0_1_Msk & (_UINT32_(value) << SFR_EMAHB2AHB_PFETCH8_0_1_Pos)) /* Assigment of value for PFETCH8_0_1 in the SFR_EMAHB2AHB register */
#define   SFR_EMAHB2AHB_PFETCH8_0_1_INCR4_Val _UINT32_(0x0)                                        /* (SFR_EMAHB2AHB) INCR undefined burst converted to burst of 4 data.  */
#define   SFR_EMAHB2AHB_PFETCH8_0_1_INCR8_Val _UINT32_(0x1)                                        /* (SFR_EMAHB2AHB) INCR undefined burst converted to burst of 8 data.  */
#define SFR_EMAHB2AHB_PFETCH8_0_1_INCR4       (SFR_EMAHB2AHB_PFETCH8_0_1_INCR4_Val << SFR_EMAHB2AHB_PFETCH8_0_1_Pos) /* (SFR_EMAHB2AHB) INCR undefined burst converted to burst of 4 data. Position  */
#define SFR_EMAHB2AHB_PFETCH8_0_1_INCR8       (SFR_EMAHB2AHB_PFETCH8_0_1_INCR8_Val << SFR_EMAHB2AHB_PFETCH8_0_1_Pos) /* (SFR_EMAHB2AHB) INCR undefined burst converted to burst of 8 data. Position  */
#define SFR_EMAHB2AHB_PFETCH8_1_0_Pos         _UINT32_(1)                                          /* (SFR_EMAHB2AHB) AHB MASTER1_0 Converter Prefetch Position */
#define SFR_EMAHB2AHB_PFETCH8_1_0_Msk         (_UINT32_(0x1) << SFR_EMAHB2AHB_PFETCH8_1_0_Pos)     /* (SFR_EMAHB2AHB) AHB MASTER1_0 Converter Prefetch Mask */
#define SFR_EMAHB2AHB_PFETCH8_1_0(value)      (SFR_EMAHB2AHB_PFETCH8_1_0_Msk & (_UINT32_(value) << SFR_EMAHB2AHB_PFETCH8_1_0_Pos)) /* Assigment of value for PFETCH8_1_0 in the SFR_EMAHB2AHB register */
#define   SFR_EMAHB2AHB_PFETCH8_1_0_INCR4_Val _UINT32_(0x0)                                        /* (SFR_EMAHB2AHB) INCR undefined burst converted to burst of 4 data.  */
#define   SFR_EMAHB2AHB_PFETCH8_1_0_INCR8_Val _UINT32_(0x1)                                        /* (SFR_EMAHB2AHB) INCR undefined burst converted to burst of 8 data.  */
#define SFR_EMAHB2AHB_PFETCH8_1_0_INCR4       (SFR_EMAHB2AHB_PFETCH8_1_0_INCR4_Val << SFR_EMAHB2AHB_PFETCH8_1_0_Pos) /* (SFR_EMAHB2AHB) INCR undefined burst converted to burst of 4 data. Position  */
#define SFR_EMAHB2AHB_PFETCH8_1_0_INCR8       (SFR_EMAHB2AHB_PFETCH8_1_0_INCR8_Val << SFR_EMAHB2AHB_PFETCH8_1_0_Pos) /* (SFR_EMAHB2AHB) INCR undefined burst converted to burst of 8 data. Position  */
#define SFR_EMAHB2AHB_Msk                     _UINT32_(0x00000003)                                 /* (SFR_EMAHB2AHB) Register Mask  */

#define SFR_EMAHB2AHB_PFETCH8_0__Pos          _UINT32_(0)                                          /* (SFR_EMAHB2AHB Position) AHB MASTERx_x Converter Prefetch */
#define SFR_EMAHB2AHB_PFETCH8_0__Msk          (_UINT32_(0x1) << SFR_EMAHB2AHB_PFETCH8_0__Pos)      /* (SFR_EMAHB2AHB Mask) PFETCH8_0_ */
#define SFR_EMAHB2AHB_PFETCH8_0_(value)       (SFR_EMAHB2AHB_PFETCH8_0__Msk & (_UINT32_(value) << SFR_EMAHB2AHB_PFETCH8_0__Pos)) 
#define SFR_EMAHB2AHB_PFETCH8_1__Pos          _UINT32_(1)                                          /* (SFR_EMAHB2AHB Position) AHB MASTERx_x Converter Prefetch */
#define SFR_EMAHB2AHB_PFETCH8_1__Msk          (_UINT32_(0x1) << SFR_EMAHB2AHB_PFETCH8_1__Pos)      /* (SFR_EMAHB2AHB Mask) PFETCH8_1_ */
#define SFR_EMAHB2AHB_PFETCH8_1_(value)       (SFR_EMAHB2AHB_PFETCH8_1__Msk & (_UINT32_(value) << SFR_EMAHB2AHB_PFETCH8_1__Pos)) 

/* -------- SFR_SECURE : (SFR Offset: 0xA8) (R/W 32) Secure Register -------- */
#define SFR_SECURE_ROM_ENA_Pos                _UINT32_(0)                                          /* (SFR_SECURE) ROM Access Enable Position */
#define SFR_SECURE_ROM_ENA_Msk                (_UINT32_(0x1) << SFR_SECURE_ROM_ENA_Pos)            /* (SFR_SECURE) ROM Access Enable Mask */
#define SFR_SECURE_ROM_ENA(value)             (SFR_SECURE_ROM_ENA_Msk & (_UINT32_(value) << SFR_SECURE_ROM_ENA_Pos)) /* Assigment of value for ROM_ENA in the SFR_SECURE register */
#define SFR_SECURE_Msk                        _UINT32_(0x00000001)                                 /* (SFR_SECURE) Register Mask  */


/* -------- SFR_SECURE_BIT : (SFR Offset: 0xAC) ( R/ 32) Secure Bit Register -------- */
#define SFR_SECURE_BIT_MODE_DIS_Pos           _UINT32_(0)                                          /* (SFR_SECURE_BIT) Secure Mode Position */
#define SFR_SECURE_BIT_MODE_DIS_Msk           (_UINT32_(0x1) << SFR_SECURE_BIT_MODE_DIS_Pos)       /* (SFR_SECURE_BIT) Secure Mode Mask */
#define SFR_SECURE_BIT_MODE_DIS(value)        (SFR_SECURE_BIT_MODE_DIS_Msk & (_UINT32_(value) << SFR_SECURE_BIT_MODE_DIS_Pos)) /* Assigment of value for MODE_DIS in the SFR_SECURE_BIT register */
#define SFR_SECURE_BIT_Msk                    _UINT32_(0x00000001)                                 /* (SFR_SECURE_BIT) Register Mask  */


/* -------- SFR_ERASE_FLASH_SRAM : (SFR Offset: 0xB0) (R/W 32) Erase Flash/SRAM Register -------- */
#define SFR_ERASE_FLASH_SRAM_HW_ERASE_Pos     _UINT32_(0)                                          /* (SFR_ERASE_FLASH_SRAM) PB2/Peripherals or Hardware Erase Signal Assignment Position */
#define SFR_ERASE_FLASH_SRAM_HW_ERASE_Msk     (_UINT32_(0x1) << SFR_ERASE_FLASH_SRAM_HW_ERASE_Pos) /* (SFR_ERASE_FLASH_SRAM) PB2/Peripherals or Hardware Erase Signal Assignment Mask */
#define SFR_ERASE_FLASH_SRAM_HW_ERASE(value)  (SFR_ERASE_FLASH_SRAM_HW_ERASE_Msk & (_UINT32_(value) << SFR_ERASE_FLASH_SRAM_HW_ERASE_Pos)) /* Assigment of value for HW_ERASE in the SFR_ERASE_FLASH_SRAM register */
#define   SFR_ERASE_FLASH_SRAM_HW_ERASE_DISABLE_Val _UINT32_(0x0)                                        /* (SFR_ERASE_FLASH_SRAM) Hardware erase signal disabled. PB2 pin can be used in GPIO or Peripheral IO mode.  */
#define   SFR_ERASE_FLASH_SRAM_HW_ERASE_ENABLE_Val _UINT32_(0x1)                                        /* (SFR_ERASE_FLASH_SRAM) Hardware erase signal enabled. PB2 pin is assigned to Flash erase function.  */
#define SFR_ERASE_FLASH_SRAM_HW_ERASE_DISABLE (SFR_ERASE_FLASH_SRAM_HW_ERASE_DISABLE_Val << SFR_ERASE_FLASH_SRAM_HW_ERASE_Pos) /* (SFR_ERASE_FLASH_SRAM) Hardware erase signal disabled. PB2 pin can be used in GPIO or Peripheral IO mode. Position  */
#define SFR_ERASE_FLASH_SRAM_HW_ERASE_ENABLE  (SFR_ERASE_FLASH_SRAM_HW_ERASE_ENABLE_Val << SFR_ERASE_FLASH_SRAM_HW_ERASE_Pos) /* (SFR_ERASE_FLASH_SRAM) Hardware erase signal enabled. PB2 pin is assigned to Flash erase function. Position  */
#define SFR_ERASE_FLASH_SRAM_SRAM0_Pos        _UINT32_(1)                                          /* (SFR_ERASE_FLASH_SRAM) Erase SRAM0 Content Position */
#define SFR_ERASE_FLASH_SRAM_SRAM0_Msk        (_UINT32_(0x1) << SFR_ERASE_FLASH_SRAM_SRAM0_Pos)    /* (SFR_ERASE_FLASH_SRAM) Erase SRAM0 Content Mask */
#define SFR_ERASE_FLASH_SRAM_SRAM0(value)     (SFR_ERASE_FLASH_SRAM_SRAM0_Msk & (_UINT32_(value) << SFR_ERASE_FLASH_SRAM_SRAM0_Pos)) /* Assigment of value for SRAM0 in the SFR_ERASE_FLASH_SRAM register */
#define   SFR_ERASE_FLASH_SRAM_SRAM0_NOT_DELETED_Val _UINT32_(0x0)                                        /* (SFR_ERASE_FLASH_SRAM) If HW_ERASE = 1, and HW erase signal assertion occurs, SRAM0 content is not deleted.  */
#define   SFR_ERASE_FLASH_SRAM_SRAM0_DELETED_Val _UINT32_(0x1)                                        /* (SFR_ERASE_FLASH_SRAM) If HW_ERASE = 1, and HW erase signal assertion occurs, SRAM0 content is deleted.  */
#define SFR_ERASE_FLASH_SRAM_SRAM0_NOT_DELETED (SFR_ERASE_FLASH_SRAM_SRAM0_NOT_DELETED_Val << SFR_ERASE_FLASH_SRAM_SRAM0_Pos) /* (SFR_ERASE_FLASH_SRAM) If HW_ERASE = 1, and HW erase signal assertion occurs, SRAM0 content is not deleted. Position  */
#define SFR_ERASE_FLASH_SRAM_SRAM0_DELETED    (SFR_ERASE_FLASH_SRAM_SRAM0_DELETED_Val << SFR_ERASE_FLASH_SRAM_SRAM0_Pos) /* (SFR_ERASE_FLASH_SRAM) If HW_ERASE = 1, and HW erase signal assertion occurs, SRAM0 content is deleted. Position  */
#define SFR_ERASE_FLASH_SRAM_Msk              _UINT32_(0x00000003)                                 /* (SFR_ERASE_FLASH_SRAM) Register Mask  */

#define SFR_ERASE_FLASH_SRAM_SRAM_Pos         _UINT32_(1)                                          /* (SFR_ERASE_FLASH_SRAM Position) Erase SRAMx Content */
#define SFR_ERASE_FLASH_SRAM_SRAM_Msk         (_UINT32_(0x1) << SFR_ERASE_FLASH_SRAM_SRAM_Pos)     /* (SFR_ERASE_FLASH_SRAM Mask) SRAM */
#define SFR_ERASE_FLASH_SRAM_SRAM(value)      (SFR_ERASE_FLASH_SRAM_SRAM_Msk & (_UINT32_(value) << SFR_ERASE_FLASH_SRAM_SRAM_Pos)) 

/* -------- SFR_PWM_DEBUG : (SFR Offset: 0xB4) (R/W 32) PWM Debug Register -------- */
#define SFR_PWM_DEBUG_CORE0_Pos               _UINT32_(0)                                          /* (SFR_PWM_DEBUG) Debug Information Propagation Mode Position */
#define SFR_PWM_DEBUG_CORE0_Msk               (_UINT32_(0x1) << SFR_PWM_DEBUG_CORE0_Pos)           /* (SFR_PWM_DEBUG) Debug Information Propagation Mode Mask */
#define SFR_PWM_DEBUG_CORE0(value)            (SFR_PWM_DEBUG_CORE0_Msk & (_UINT32_(value) << SFR_PWM_DEBUG_CORE0_Pos)) /* Assigment of value for CORE0 in the SFR_PWM_DEBUG register */
#define   SFR_PWM_DEBUG_CORE0_NOT_SENT_Val    _UINT32_(0x0)                                        /* (SFR_PWM_DEBUG) Core x does not send the debug signal to the PWM.  */
#define   SFR_PWM_DEBUG_CORE0_SENT_Val        _UINT32_(0x1)                                        /* (SFR_PWM_DEBUG) Core x sends the debug signal to PWM. Refer to "Debug Mode" in the section "Pulse Width Modulation Controller (PWM)" for details on configuring an action when the debug signal is active.  */
#define SFR_PWM_DEBUG_CORE0_NOT_SENT          (SFR_PWM_DEBUG_CORE0_NOT_SENT_Val << SFR_PWM_DEBUG_CORE0_Pos) /* (SFR_PWM_DEBUG) Core x does not send the debug signal to the PWM. Position  */
#define SFR_PWM_DEBUG_CORE0_SENT              (SFR_PWM_DEBUG_CORE0_SENT_Val << SFR_PWM_DEBUG_CORE0_Pos) /* (SFR_PWM_DEBUG) Core x sends the debug signal to PWM. Refer to "Debug Mode" in the section "Pulse Width Modulation Controller (PWM)" for details on configuring an action when the debug signal is active. Position  */
#define SFR_PWM_DEBUG_CORE1_Pos               _UINT32_(1)                                          /* (SFR_PWM_DEBUG) Debug Information Propagation Mode Position */
#define SFR_PWM_DEBUG_CORE1_Msk               (_UINT32_(0x1) << SFR_PWM_DEBUG_CORE1_Pos)           /* (SFR_PWM_DEBUG) Debug Information Propagation Mode Mask */
#define SFR_PWM_DEBUG_CORE1(value)            (SFR_PWM_DEBUG_CORE1_Msk & (_UINT32_(value) << SFR_PWM_DEBUG_CORE1_Pos)) /* Assigment of value for CORE1 in the SFR_PWM_DEBUG register */
#define   SFR_PWM_DEBUG_CORE1_NOT_SENT_Val    _UINT32_(0x0)                                        /* (SFR_PWM_DEBUG) Core x does not send the debug signal to the PWM.  */
#define   SFR_PWM_DEBUG_CORE1_SENT_Val        _UINT32_(0x1)                                        /* (SFR_PWM_DEBUG) Core x sends the debug signal to PWM. Refer to "Debug Mode" in the section "Pulse Width Modulation Controller (PWM)" for details on configuring an action when the debug signal is active.  */
#define SFR_PWM_DEBUG_CORE1_NOT_SENT          (SFR_PWM_DEBUG_CORE1_NOT_SENT_Val << SFR_PWM_DEBUG_CORE1_Pos) /* (SFR_PWM_DEBUG) Core x does not send the debug signal to the PWM. Position  */
#define SFR_PWM_DEBUG_CORE1_SENT              (SFR_PWM_DEBUG_CORE1_SENT_Val << SFR_PWM_DEBUG_CORE1_Pos) /* (SFR_PWM_DEBUG) Core x sends the debug signal to PWM. Refer to "Debug Mode" in the section "Pulse Width Modulation Controller (PWM)" for details on configuring an action when the debug signal is active. Position  */
#define SFR_PWM_DEBUG_Msk                     _UINT32_(0x00000003)                                 /* (SFR_PWM_DEBUG) Register Mask  */

#define SFR_PWM_DEBUG_CORE_Pos                _UINT32_(0)                                          /* (SFR_PWM_DEBUG Position) Debug Information Propagation Mode */
#define SFR_PWM_DEBUG_CORE_Msk                (_UINT32_(0x3) << SFR_PWM_DEBUG_CORE_Pos)            /* (SFR_PWM_DEBUG Mask) CORE */
#define SFR_PWM_DEBUG_CORE(value)             (SFR_PWM_DEBUG_CORE_Msk & (_UINT32_(value) << SFR_PWM_DEBUG_CORE_Pos)) 

/* -------- SFR_FFPI : (SFR Offset: 0xB8) ( R/ 32) FFPI Register -------- */
#define SFR_FFPI_MODE_Pos                     _UINT32_(0)                                          /* (SFR_FFPI) FFPI Status Position */
#define SFR_FFPI_MODE_Msk                     (_UINT32_(0x1) << SFR_FFPI_MODE_Pos)                 /* (SFR_FFPI) FFPI Status Mask */
#define SFR_FFPI_MODE(value)                  (SFR_FFPI_MODE_Msk & (_UINT32_(value) << SFR_FFPI_MODE_Pos)) /* Assigment of value for MODE in the SFR_FFPI register */
#define SFR_FFPI_Msk                          _UINT32_(0x00000001)                                 /* (SFR_FFPI) Register Mask  */


/* -------- SFR_WAIT_MODE : (SFR Offset: 0xBC) (R/W 32) Improved Wait Mode Register -------- */
#define SFR_WAIT_MODE_CONTROL_Pos             _UINT32_(0)                                          /* (SFR_WAIT_MODE) Improved Wait Mode Control Position */
#define SFR_WAIT_MODE_CONTROL_Msk             (_UINT32_(0x1) << SFR_WAIT_MODE_CONTROL_Pos)         /* (SFR_WAIT_MODE) Improved Wait Mode Control Mask */
#define SFR_WAIT_MODE_CONTROL(value)          (SFR_WAIT_MODE_CONTROL_Msk & (_UINT32_(value) << SFR_WAIT_MODE_CONTROL_Pos)) /* Assigment of value for CONTROL in the SFR_WAIT_MODE register */
#define SFR_WAIT_MODE_Msk                     _UINT32_(0x00000001)                                 /* (SFR_WAIT_MODE) Register Mask  */


/* -------- SFR_ROM_CODE : (SFR Offset: 0xC0) ( R/ 32) ROM Code Register -------- */
#define SFR_ROM_CODE_PLLA_STATUS_Pos          _UINT32_(0)                                          /* (SFR_ROM_CODE) PLLA Status Position */
#define SFR_ROM_CODE_PLLA_STATUS_Msk          (_UINT32_(0x3) << SFR_ROM_CODE_PLLA_STATUS_Pos)      /* (SFR_ROM_CODE) PLLA Status Mask */
#define SFR_ROM_CODE_PLLA_STATUS(value)       (SFR_ROM_CODE_PLLA_STATUS_Msk & (_UINT32_(value) << SFR_ROM_CODE_PLLA_STATUS_Pos)) /* Assigment of value for PLLA_STATUS in the SFR_ROM_CODE register */
#define SFR_ROM_CODE_FORCE_BYPASS_Pos         _UINT32_(2)                                          /* (SFR_ROM_CODE)  Position */
#define SFR_ROM_CODE_FORCE_BYPASS_Msk         (_UINT32_(0x1) << SFR_ROM_CODE_FORCE_BYPASS_Pos)     /* (SFR_ROM_CODE)  Mask */
#define SFR_ROM_CODE_FORCE_BYPASS(value)      (SFR_ROM_CODE_FORCE_BYPASS_Msk & (_UINT32_(value) << SFR_ROM_CODE_FORCE_BYPASS_Pos)) /* Assigment of value for FORCE_BYPASS in the SFR_ROM_CODE register */
#define SFR_ROM_CODE_FORCE_BYPASS_VALUE_Pos   _UINT32_(3)                                          /* (SFR_ROM_CODE)  Position */
#define SFR_ROM_CODE_FORCE_BYPASS_VALUE_Msk   (_UINT32_(0x1) << SFR_ROM_CODE_FORCE_BYPASS_VALUE_Pos) /* (SFR_ROM_CODE)  Mask */
#define SFR_ROM_CODE_FORCE_BYPASS_VALUE(value) (SFR_ROM_CODE_FORCE_BYPASS_VALUE_Msk & (_UINT32_(value) << SFR_ROM_CODE_FORCE_BYPASS_VALUE_Pos)) /* Assigment of value for FORCE_BYPASS_VALUE in the SFR_ROM_CODE register */
#define SFR_ROM_CODE_Msk                      _UINT32_(0x0000000F)                                 /* (SFR_ROM_CODE) Register Mask  */


/* -------- SFR_WPMR : (SFR Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define SFR_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (SFR_WPMR) Write Protection Enable Position */
#define SFR_WPMR_WPEN_Msk                     (_UINT32_(0x1) << SFR_WPMR_WPEN_Pos)                 /* (SFR_WPMR) Write Protection Enable Mask */
#define SFR_WPMR_WPEN(value)                  (SFR_WPMR_WPEN_Msk & (_UINT32_(value) << SFR_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the SFR_WPMR register */
#define SFR_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (SFR_WPMR) Write Protection Key Position */
#define SFR_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << SFR_WPMR_WPKEY_Pos)           /* (SFR_WPMR) Write Protection Key Mask */
#define SFR_WPMR_WPKEY(value)                 (SFR_WPMR_WPKEY_Msk & (_UINT32_(value) << SFR_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the SFR_WPMR register */
#define   SFR_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x534652)                                   /* (SFR_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define SFR_WPMR_WPKEY_PASSWD                 (SFR_WPMR_WPKEY_PASSWD_Val << SFR_WPMR_WPKEY_Pos)    /* (SFR_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define SFR_WPMR_Msk                          _UINT32_(0xFFFFFF01)                                 /* (SFR_WPMR) Register Mask  */


/* -------- SFR_WPSR : (SFR Offset: 0xE8) (R/W 32) Write Protection Status Register -------- */
#define SFR_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (SFR_WPSR) Write Protection Violation Status Position */
#define SFR_WPSR_WPVS_Msk                     (_UINT32_(0x1) << SFR_WPSR_WPVS_Pos)                 /* (SFR_WPSR) Write Protection Violation Status Mask */
#define SFR_WPSR_WPVS(value)                  (SFR_WPSR_WPVS_Msk & (_UINT32_(value) << SFR_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the SFR_WPSR register */
#define SFR_WPSR_WPSRC_Pos                    _UINT32_(8)                                          /* (SFR_WPSR) Write Protection Source Position */
#define SFR_WPSR_WPSRC_Msk                    (_UINT32_(0xFFFF) << SFR_WPSR_WPSRC_Pos)             /* (SFR_WPSR) Write Protection Source Mask */
#define SFR_WPSR_WPSRC(value)                 (SFR_WPSR_WPSRC_Msk & (_UINT32_(value) << SFR_WPSR_WPSRC_Pos)) /* Assigment of value for WPSRC in the SFR_WPSR register */
#define SFR_WPSR_Msk                          _UINT32_(0x00FFFF01)                                 /* (SFR_WPSR) Register Mask  */


/* -------- SFR_SPARE : (SFR Offset: 0xF0) (R/W 32) Spare Register -------- */
#define SFR_SPARE_VALUE_Pos                   _UINT32_(0)                                          /* (SFR_SPARE) Spare Position */
#define SFR_SPARE_VALUE_Msk                   (_UINT32_(0xFFFFFFFF) << SFR_SPARE_VALUE_Pos)        /* (SFR_SPARE) Spare Mask */
#define SFR_SPARE_VALUE(value)                (SFR_SPARE_VALUE_Msk & (_UINT32_(value) << SFR_SPARE_VALUE_Pos)) /* Assigment of value for VALUE in the SFR_SPARE register */
#define SFR_SPARE_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (SFR_SPARE) Register Mask  */


/* -------- SFR_VERSION : (SFR Offset: 0xFC) ( R/ 32) Version Register -------- */
#define SFR_VERSION_VERSION_Pos               _UINT32_(0)                                          /* (SFR_VERSION) Version of the Hardware Module Position */
#define SFR_VERSION_VERSION_Msk               (_UINT32_(0xFFF) << SFR_VERSION_VERSION_Pos)         /* (SFR_VERSION) Version of the Hardware Module Mask */
#define SFR_VERSION_VERSION(value)            (SFR_VERSION_VERSION_Msk & (_UINT32_(value) << SFR_VERSION_VERSION_Pos)) /* Assigment of value for VERSION in the SFR_VERSION register */
#define SFR_VERSION_MFN_Pos                   _UINT32_(16)                                         /* (SFR_VERSION) Metal Fix Number Position */
#define SFR_VERSION_MFN_Msk                   (_UINT32_(0x7) << SFR_VERSION_MFN_Pos)               /* (SFR_VERSION) Metal Fix Number Mask */
#define SFR_VERSION_MFN(value)                (SFR_VERSION_MFN_Msk & (_UINT32_(value) << SFR_VERSION_MFN_Pos)) /* Assigment of value for MFN in the SFR_VERSION register */
#define SFR_VERSION_Msk                       _UINT32_(0x00070FFF)                                 /* (SFR_VERSION) Register Mask  */


/** \brief SFR register offsets definitions */
#define SFR_SRAM0_SW_CFG_REG_OFST      _UINT32_(0x10)      /* (SFR_SRAM0_SW_CFG) SRAM0 Software Config Register Offset */
#define SFR_SRAM0_HW_CFG_REG_OFST      _UINT32_(0x14)      /* (SFR_SRAM0_HW_CFG) SRAM0 Hardware Status Register Offset */
#define SFR_SRAM0_CH_REG_OFST          _UINT32_(0x18)      /* (SFR_SRAM0_CH) SRAM0 Read Margin Register Channel Offset */
#define SFR_SRAM0_CH0_REG_OFST         _UINT32_(0x18)      /* (SFR_SRAM0_CH0) SRAM0 Read Margin Register Channel Offset */
#define SFR_SRAM0_CH1_REG_OFST         _UINT32_(0x1C)      /* (SFR_SRAM0_CH1) SRAM0 Read Margin Register Channel Offset */
#define SFR_SRAM0_CH2_REG_OFST         _UINT32_(0x20)      /* (SFR_SRAM0_CH2) SRAM0 Read Margin Register Channel Offset */
#define SFR_SRAM0_CH3_REG_OFST         _UINT32_(0x24)      /* (SFR_SRAM0_CH3) SRAM0 Read Margin Register Channel Offset */
#define SFR_SRAM_REG_OFST              _UINT32_(0x28)      /* (SFR_SRAM) SRAM Configuration Register Offset */
#define SFR_SRAM0_REG_OFST             _UINT32_(0x28)      /* (SFR_SRAM0) SRAM Configuration Register Offset */
#define SFR_SRAM1_REG_OFST             _UINT32_(0x2C)      /* (SFR_SRAM1) SRAM Configuration Register Offset */
#define SFR_CPKCC_REG_OFST             _UINT32_(0x30)      /* (SFR_CPKCC) CPKCC Memory Configuration Register Offset */
#define SFR_HROMC_REG_OFST             _UINT32_(0x40)      /* (SFR_HROMC) HROMC Memory Configuration Register Offset */
#define SFR_HCACHEI_VALID_REG_OFST     _UINT32_(0x50)      /* (SFR_HCACHEI_VALID) HCACHEI Valid Memory Configuration Register Offset */
#define SFR_HCACHEI_DATA_REG_OFST      _UINT32_(0x54)      /* (SFR_HCACHEI_DATA) HCACHEI Data Memory Configuration Register Offset */
#define SFR_HCACHEI_TAG_REG_OFST       _UINT32_(0x58)      /* (SFR_HCACHEI_TAG) HCACHEI Tag Memory Configuration Register Offset */
#define SFR_HCACHED_VALID_REG_OFST     _UINT32_(0x60)      /* (SFR_HCACHED_VALID) HCACHED Valid Memory Configuration Register Offset */
#define SFR_HCACHED_DATA_REG_OFST      _UINT32_(0x64)      /* (SFR_HCACHED_DATA) HCACHED Data Memory Configuration Register Offset */
#define SFR_HCACHED_TAG_REG_OFST       _UINT32_(0x68)      /* (SFR_HCACHED_TAG) HCACHEDTag Memory Configuration Register Offset */
#define SFR_FLASH_REG_OFST             _UINT32_(0x70)      /* (SFR_FLASH) Flash Memory Configuration Register Offset */
#define SFR_OPT_LINK_REG_OFST          _UINT32_(0x80)      /* (SFR_OPT_LINK) Optical Link Register Offset */
#define SFR_JTAG_REG_OFST              _UINT32_(0x90)      /* (SFR_JTAG) JTAG Register Offset */
#define SFR_CORE_DEBUG_CFG_REG_OFST    _UINT32_(0xA0)      /* (SFR_CORE_DEBUG_CFG) Core Debug Configuration Register Offset */
#define SFR_EMAHB2AHB_REG_OFST         _UINT32_(0xA4)      /* (SFR_EMAHB2AHB) AHB2AHB Configuration Register Offset */
#define SFR_SECURE_REG_OFST            _UINT32_(0xA8)      /* (SFR_SECURE) Secure Register Offset */
#define SFR_SECURE_BIT_REG_OFST        _UINT32_(0xAC)      /* (SFR_SECURE_BIT) Secure Bit Register Offset */
#define SFR_ERASE_FLASH_SRAM_REG_OFST  _UINT32_(0xB0)      /* (SFR_ERASE_FLASH_SRAM) Erase Flash/SRAM Register Offset */
#define SFR_PWM_DEBUG_REG_OFST         _UINT32_(0xB4)      /* (SFR_PWM_DEBUG) PWM Debug Register Offset */
#define SFR_FFPI_REG_OFST              _UINT32_(0xB8)      /* (SFR_FFPI) FFPI Register Offset */
#define SFR_WAIT_MODE_REG_OFST         _UINT32_(0xBC)      /* (SFR_WAIT_MODE) Improved Wait Mode Register Offset */
#define SFR_ROM_CODE_REG_OFST          _UINT32_(0xC0)      /* (SFR_ROM_CODE) ROM Code Register Offset */
#define SFR_WPMR_REG_OFST              _UINT32_(0xE4)      /* (SFR_WPMR) Write Protection Mode Register Offset */
#define SFR_WPSR_REG_OFST              _UINT32_(0xE8)      /* (SFR_WPSR) Write Protection Status Register Offset */
#define SFR_SPARE_REG_OFST             _UINT32_(0xF0)      /* (SFR_SPARE) Spare Register Offset */
#define SFR_VERSION_REG_OFST           _UINT32_(0xFC)      /* (SFR_VERSION) Version Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SFR register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x10];
  __IO  uint32_t                       SFR_SRAM0_SW_CFG;   /**< Offset: 0x10 (R/W  32) SRAM0 Software Config Register */
  __I   uint32_t                       SFR_SRAM0_HW_CFG;   /**< Offset: 0x14 (R/   32) SRAM0 Hardware Status Register */
  __IO  uint32_t                       SFR_SRAM0_CH[4];    /**< Offset: 0x18 (R/W  32) SRAM0 Read Margin Register Channel */
  __IO  uint32_t                       SFR_SRAM[2];        /**< Offset: 0x28 (R/W  32) SRAM Configuration Register */
  __IO  uint32_t                       SFR_CPKCC;          /**< Offset: 0x30 (R/W  32) CPKCC Memory Configuration Register */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       SFR_HROMC;          /**< Offset: 0x40 (R/W  32) HROMC Memory Configuration Register */
  __I   uint8_t                        Reserved3[0x0C];
  __IO  uint32_t                       SFR_HCACHEI_VALID;  /**< Offset: 0x50 (R/W  32) HCACHEI Valid Memory Configuration Register */
  __IO  uint32_t                       SFR_HCACHEI_DATA;   /**< Offset: 0x54 (R/W  32) HCACHEI Data Memory Configuration Register */
  __IO  uint32_t                       SFR_HCACHEI_TAG;    /**< Offset: 0x58 (R/W  32) HCACHEI Tag Memory Configuration Register */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       SFR_HCACHED_VALID;  /**< Offset: 0x60 (R/W  32) HCACHED Valid Memory Configuration Register */
  __IO  uint32_t                       SFR_HCACHED_DATA;   /**< Offset: 0x64 (R/W  32) HCACHED Data Memory Configuration Register */
  __IO  uint32_t                       SFR_HCACHED_TAG;    /**< Offset: 0x68 (R/W  32) HCACHEDTag Memory Configuration Register */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       SFR_FLASH;          /**< Offset: 0x70 (R/W  32) Flash Memory Configuration Register */
  __I   uint8_t                        Reserved6[0x0C];
  __IO  uint32_t                       SFR_OPT_LINK;       /**< Offset: 0x80 (R/W  32) Optical Link Register */
  __I   uint8_t                        Reserved7[0x0C];
  __IO  uint32_t                       SFR_JTAG;           /**< Offset: 0x90 (R/W  32) JTAG Register */
  __I   uint8_t                        Reserved8[0x0C];
  __IO  uint32_t                       SFR_CORE_DEBUG_CFG; /**< Offset: 0xA0 (R/W  32) Core Debug Configuration Register */
  __IO  uint32_t                       SFR_EMAHB2AHB;      /**< Offset: 0xA4 (R/W  32) AHB2AHB Configuration Register */
  __IO  uint32_t                       SFR_SECURE;         /**< Offset: 0xA8 (R/W  32) Secure Register */
  __I   uint32_t                       SFR_SECURE_BIT;     /**< Offset: 0xAC (R/   32) Secure Bit Register */
  __IO  uint32_t                       SFR_ERASE_FLASH_SRAM; /**< Offset: 0xB0 (R/W  32) Erase Flash/SRAM Register */
  __IO  uint32_t                       SFR_PWM_DEBUG;      /**< Offset: 0xB4 (R/W  32) PWM Debug Register */
  __I   uint32_t                       SFR_FFPI;           /**< Offset: 0xB8 (R/   32) FFPI Register */
  __IO  uint32_t                       SFR_WAIT_MODE;      /**< Offset: 0xBC (R/W  32) Improved Wait Mode Register */
  __I   uint32_t                       SFR_ROM_CODE;       /**< Offset: 0xC0 (R/   32) ROM Code Register */
  __I   uint8_t                        Reserved9[0x20];
  __IO  uint32_t                       SFR_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __IO  uint32_t                       SFR_WPSR;           /**< Offset: 0xE8 (R/W  32) Write Protection Status Register */
  __I   uint8_t                        Reserved10[0x04];
  __IO  uint32_t                       SFR_SPARE;          /**< Offset: 0xF0 (R/W  32) Spare Register */
  __I   uint8_t                        Reserved11[0x08];
  __I   uint32_t                       SFR_VERSION;        /**< Offset: 0xFC (R/   32) Version Register */
} sfr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTG_SFR_COMPONENT_H_ */
