/*
 * Component description for TAMPER
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

/* file generated from device description version 2023-02-20T18:49:00Z */
#ifndef _PIC32CKSG01_TAMPER_COMPONENT_H_
#define _PIC32CKSG01_TAMPER_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TAMPER                                       */
/* ************************************************************************** */

/* -------- TAMPER_LEVELA : (TAMPER Offset: 0x00) ( R/ 32) Level A -------- */
#define TAMPER_LEVELA_RESETVALUE              _UINT32_(0x11111115)                                 /*  (TAMPER_LEVELA) Level A  Reset Value */

#define TAMPER_LEVELA_LEVEL0_Pos              _UINT32_(0)                                          /* (TAMPER_LEVELA) Level 0 Position */
#define TAMPER_LEVELA_LEVEL0_Msk              (_UINT32_(0xF) << TAMPER_LEVELA_LEVEL0_Pos)          /* (TAMPER_LEVELA) Level 0 Mask */
#define TAMPER_LEVELA_LEVEL0(value)           (TAMPER_LEVELA_LEVEL0_Msk & (_UINT32_(value) << TAMPER_LEVELA_LEVEL0_Pos)) /* Assigment of value for LEVEL0 in the TAMPER_LEVELA register */
#define   TAMPER_LEVELA_LEVEL0_NONE_Val       _UINT32_(0x0)                                        /* (TAMPER_LEVELA) No Action  */
#define   TAMPER_LEVELA_LEVEL0_HOSTIRQ_Val    _UINT32_(0x1)                                        /* (TAMPER_LEVELA) Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL0_LEHIRQ_Val     _UINT32_(0x2)                                        /* (TAMPER_LEVELA) Log Event and Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL0_SAFEMODE_Val   _UINT32_(0x4)                                        /* (TAMPER_LEVELA) Enter Safe Mode  */
#define   TAMPER_LEVELA_LEVEL0_ERSTKEY_Val    _UINT32_(0x5)                                        /* (TAMPER_LEVELA) Erase Tamper Key  */
#define   TAMPER_LEVELA_LEVEL0_ERSFKEY_Val    _UINT32_(0x6)                                        /* (TAMPER_LEVELA) Erase Flash Key  */
#define TAMPER_LEVELA_LEVEL0_NONE             (TAMPER_LEVELA_LEVEL0_NONE_Val << TAMPER_LEVELA_LEVEL0_Pos) /* (TAMPER_LEVELA) No Action Position  */
#define TAMPER_LEVELA_LEVEL0_HOSTIRQ          (TAMPER_LEVELA_LEVEL0_HOSTIRQ_Val << TAMPER_LEVELA_LEVEL0_Pos) /* (TAMPER_LEVELA) Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL0_LEHIRQ           (TAMPER_LEVELA_LEVEL0_LEHIRQ_Val << TAMPER_LEVELA_LEVEL0_Pos) /* (TAMPER_LEVELA) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL0_SAFEMODE         (TAMPER_LEVELA_LEVEL0_SAFEMODE_Val << TAMPER_LEVELA_LEVEL0_Pos) /* (TAMPER_LEVELA) Enter Safe Mode Position  */
#define TAMPER_LEVELA_LEVEL0_ERSTKEY          (TAMPER_LEVELA_LEVEL0_ERSTKEY_Val << TAMPER_LEVELA_LEVEL0_Pos) /* (TAMPER_LEVELA) Erase Tamper Key Position  */
#define TAMPER_LEVELA_LEVEL0_ERSFKEY          (TAMPER_LEVELA_LEVEL0_ERSFKEY_Val << TAMPER_LEVELA_LEVEL0_Pos) /* (TAMPER_LEVELA) Erase Flash Key Position  */
#define TAMPER_LEVELA_LEVEL1_Pos              _UINT32_(4)                                          /* (TAMPER_LEVELA) Level 1 Position */
#define TAMPER_LEVELA_LEVEL1_Msk              (_UINT32_(0xF) << TAMPER_LEVELA_LEVEL1_Pos)          /* (TAMPER_LEVELA) Level 1 Mask */
#define TAMPER_LEVELA_LEVEL1(value)           (TAMPER_LEVELA_LEVEL1_Msk & (_UINT32_(value) << TAMPER_LEVELA_LEVEL1_Pos)) /* Assigment of value for LEVEL1 in the TAMPER_LEVELA register */
#define   TAMPER_LEVELA_LEVEL1_NONE_Val       _UINT32_(0x0)                                        /* (TAMPER_LEVELA) No Action  */
#define   TAMPER_LEVELA_LEVEL1_HOSTIRQ_Val    _UINT32_(0x1)                                        /* (TAMPER_LEVELA) Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL1_LEHIRQ_Val     _UINT32_(0x2)                                        /* (TAMPER_LEVELA) Log Event and Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL1_SAFEMODE_Val   _UINT32_(0x4)                                        /* (TAMPER_LEVELA) Enter Safe Mode  */
#define   TAMPER_LEVELA_LEVEL1_ERSTKEY_Val    _UINT32_(0x5)                                        /* (TAMPER_LEVELA) Erase Tamper Key  */
#define   TAMPER_LEVELA_LEVEL1_ERSFKEY_Val    _UINT32_(0x6)                                        /* (TAMPER_LEVELA) Erase Flash Key  */
#define TAMPER_LEVELA_LEVEL1_NONE             (TAMPER_LEVELA_LEVEL1_NONE_Val << TAMPER_LEVELA_LEVEL1_Pos) /* (TAMPER_LEVELA) No Action Position  */
#define TAMPER_LEVELA_LEVEL1_HOSTIRQ          (TAMPER_LEVELA_LEVEL1_HOSTIRQ_Val << TAMPER_LEVELA_LEVEL1_Pos) /* (TAMPER_LEVELA) Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL1_LEHIRQ           (TAMPER_LEVELA_LEVEL1_LEHIRQ_Val << TAMPER_LEVELA_LEVEL1_Pos) /* (TAMPER_LEVELA) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL1_SAFEMODE         (TAMPER_LEVELA_LEVEL1_SAFEMODE_Val << TAMPER_LEVELA_LEVEL1_Pos) /* (TAMPER_LEVELA) Enter Safe Mode Position  */
#define TAMPER_LEVELA_LEVEL1_ERSTKEY          (TAMPER_LEVELA_LEVEL1_ERSTKEY_Val << TAMPER_LEVELA_LEVEL1_Pos) /* (TAMPER_LEVELA) Erase Tamper Key Position  */
#define TAMPER_LEVELA_LEVEL1_ERSFKEY          (TAMPER_LEVELA_LEVEL1_ERSFKEY_Val << TAMPER_LEVELA_LEVEL1_Pos) /* (TAMPER_LEVELA) Erase Flash Key Position  */
#define TAMPER_LEVELA_LEVEL2_Pos              _UINT32_(8)                                          /* (TAMPER_LEVELA) Level 2 Position */
#define TAMPER_LEVELA_LEVEL2_Msk              (_UINT32_(0xF) << TAMPER_LEVELA_LEVEL2_Pos)          /* (TAMPER_LEVELA) Level 2 Mask */
#define TAMPER_LEVELA_LEVEL2(value)           (TAMPER_LEVELA_LEVEL2_Msk & (_UINT32_(value) << TAMPER_LEVELA_LEVEL2_Pos)) /* Assigment of value for LEVEL2 in the TAMPER_LEVELA register */
#define   TAMPER_LEVELA_LEVEL2_NONE_Val       _UINT32_(0x0)                                        /* (TAMPER_LEVELA) No Action  */
#define   TAMPER_LEVELA_LEVEL2_HOSTIRQ_Val    _UINT32_(0x1)                                        /* (TAMPER_LEVELA) Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL2_LEHIRQ_Val     _UINT32_(0x2)                                        /* (TAMPER_LEVELA) Log Event and Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL2_SAFEMODE_Val   _UINT32_(0x4)                                        /* (TAMPER_LEVELA) Enter Safe Mode  */
#define   TAMPER_LEVELA_LEVEL2_ERSTKEY_Val    _UINT32_(0x5)                                        /* (TAMPER_LEVELA) Erase Tamper Key  */
#define   TAMPER_LEVELA_LEVEL2_ERSFKEY_Val    _UINT32_(0x6)                                        /* (TAMPER_LEVELA) Erase Flash Key  */
#define TAMPER_LEVELA_LEVEL2_NONE             (TAMPER_LEVELA_LEVEL2_NONE_Val << TAMPER_LEVELA_LEVEL2_Pos) /* (TAMPER_LEVELA) No Action Position  */
#define TAMPER_LEVELA_LEVEL2_HOSTIRQ          (TAMPER_LEVELA_LEVEL2_HOSTIRQ_Val << TAMPER_LEVELA_LEVEL2_Pos) /* (TAMPER_LEVELA) Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL2_LEHIRQ           (TAMPER_LEVELA_LEVEL2_LEHIRQ_Val << TAMPER_LEVELA_LEVEL2_Pos) /* (TAMPER_LEVELA) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL2_SAFEMODE         (TAMPER_LEVELA_LEVEL2_SAFEMODE_Val << TAMPER_LEVELA_LEVEL2_Pos) /* (TAMPER_LEVELA) Enter Safe Mode Position  */
#define TAMPER_LEVELA_LEVEL2_ERSTKEY          (TAMPER_LEVELA_LEVEL2_ERSTKEY_Val << TAMPER_LEVELA_LEVEL2_Pos) /* (TAMPER_LEVELA) Erase Tamper Key Position  */
#define TAMPER_LEVELA_LEVEL2_ERSFKEY          (TAMPER_LEVELA_LEVEL2_ERSFKEY_Val << TAMPER_LEVELA_LEVEL2_Pos) /* (TAMPER_LEVELA) Erase Flash Key Position  */
#define TAMPER_LEVELA_LEVEL3_Pos              _UINT32_(12)                                         /* (TAMPER_LEVELA) Level 3 Position */
#define TAMPER_LEVELA_LEVEL3_Msk              (_UINT32_(0xF) << TAMPER_LEVELA_LEVEL3_Pos)          /* (TAMPER_LEVELA) Level 3 Mask */
#define TAMPER_LEVELA_LEVEL3(value)           (TAMPER_LEVELA_LEVEL3_Msk & (_UINT32_(value) << TAMPER_LEVELA_LEVEL3_Pos)) /* Assigment of value for LEVEL3 in the TAMPER_LEVELA register */
#define   TAMPER_LEVELA_LEVEL3_NONE_Val       _UINT32_(0x0)                                        /* (TAMPER_LEVELA) No Action  */
#define   TAMPER_LEVELA_LEVEL3_HOSTIRQ_Val    _UINT32_(0x1)                                        /* (TAMPER_LEVELA) Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL3_LEHIRQ_Val     _UINT32_(0x2)                                        /* (TAMPER_LEVELA) Log Event and Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL3_SAFEMODE_Val   _UINT32_(0x4)                                        /* (TAMPER_LEVELA) Enter Safe Mode  */
#define   TAMPER_LEVELA_LEVEL3_ERSTKEY_Val    _UINT32_(0x5)                                        /* (TAMPER_LEVELA) Erase Tamper Key  */
#define   TAMPER_LEVELA_LEVEL3_ERSFKEY_Val    _UINT32_(0x6)                                        /* (TAMPER_LEVELA) Erase Flash Key  */
#define TAMPER_LEVELA_LEVEL3_NONE             (TAMPER_LEVELA_LEVEL3_NONE_Val << TAMPER_LEVELA_LEVEL3_Pos) /* (TAMPER_LEVELA) No Action Position  */
#define TAMPER_LEVELA_LEVEL3_HOSTIRQ          (TAMPER_LEVELA_LEVEL3_HOSTIRQ_Val << TAMPER_LEVELA_LEVEL3_Pos) /* (TAMPER_LEVELA) Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL3_LEHIRQ           (TAMPER_LEVELA_LEVEL3_LEHIRQ_Val << TAMPER_LEVELA_LEVEL3_Pos) /* (TAMPER_LEVELA) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL3_SAFEMODE         (TAMPER_LEVELA_LEVEL3_SAFEMODE_Val << TAMPER_LEVELA_LEVEL3_Pos) /* (TAMPER_LEVELA) Enter Safe Mode Position  */
#define TAMPER_LEVELA_LEVEL3_ERSTKEY          (TAMPER_LEVELA_LEVEL3_ERSTKEY_Val << TAMPER_LEVELA_LEVEL3_Pos) /* (TAMPER_LEVELA) Erase Tamper Key Position  */
#define TAMPER_LEVELA_LEVEL3_ERSFKEY          (TAMPER_LEVELA_LEVEL3_ERSFKEY_Val << TAMPER_LEVELA_LEVEL3_Pos) /* (TAMPER_LEVELA) Erase Flash Key Position  */
#define TAMPER_LEVELA_LEVEL4_Pos              _UINT32_(16)                                         /* (TAMPER_LEVELA) Level 4 Position */
#define TAMPER_LEVELA_LEVEL4_Msk              (_UINT32_(0xF) << TAMPER_LEVELA_LEVEL4_Pos)          /* (TAMPER_LEVELA) Level 4 Mask */
#define TAMPER_LEVELA_LEVEL4(value)           (TAMPER_LEVELA_LEVEL4_Msk & (_UINT32_(value) << TAMPER_LEVELA_LEVEL4_Pos)) /* Assigment of value for LEVEL4 in the TAMPER_LEVELA register */
#define   TAMPER_LEVELA_LEVEL4_NONE_Val       _UINT32_(0x0)                                        /* (TAMPER_LEVELA) No Action  */
#define   TAMPER_LEVELA_LEVEL4_HOSTIRQ_Val    _UINT32_(0x1)                                        /* (TAMPER_LEVELA) Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL4_LEHIRQ_Val     _UINT32_(0x2)                                        /* (TAMPER_LEVELA) Log Event and Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL4_SAFEMODE_Val   _UINT32_(0x4)                                        /* (TAMPER_LEVELA) Enter Safe Mode  */
#define   TAMPER_LEVELA_LEVEL4_ERSTKEY_Val    _UINT32_(0x5)                                        /* (TAMPER_LEVELA) Erase Tamper Key  */
#define   TAMPER_LEVELA_LEVEL4_ERSFKEY_Val    _UINT32_(0x6)                                        /* (TAMPER_LEVELA) Erase Flash Key  */
#define TAMPER_LEVELA_LEVEL4_NONE             (TAMPER_LEVELA_LEVEL4_NONE_Val << TAMPER_LEVELA_LEVEL4_Pos) /* (TAMPER_LEVELA) No Action Position  */
#define TAMPER_LEVELA_LEVEL4_HOSTIRQ          (TAMPER_LEVELA_LEVEL4_HOSTIRQ_Val << TAMPER_LEVELA_LEVEL4_Pos) /* (TAMPER_LEVELA) Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL4_LEHIRQ           (TAMPER_LEVELA_LEVEL4_LEHIRQ_Val << TAMPER_LEVELA_LEVEL4_Pos) /* (TAMPER_LEVELA) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL4_SAFEMODE         (TAMPER_LEVELA_LEVEL4_SAFEMODE_Val << TAMPER_LEVELA_LEVEL4_Pos) /* (TAMPER_LEVELA) Enter Safe Mode Position  */
#define TAMPER_LEVELA_LEVEL4_ERSTKEY          (TAMPER_LEVELA_LEVEL4_ERSTKEY_Val << TAMPER_LEVELA_LEVEL4_Pos) /* (TAMPER_LEVELA) Erase Tamper Key Position  */
#define TAMPER_LEVELA_LEVEL4_ERSFKEY          (TAMPER_LEVELA_LEVEL4_ERSFKEY_Val << TAMPER_LEVELA_LEVEL4_Pos) /* (TAMPER_LEVELA) Erase Flash Key Position  */
#define TAMPER_LEVELA_LEVEL5_Pos              _UINT32_(20)                                         /* (TAMPER_LEVELA) Level 5 Position */
#define TAMPER_LEVELA_LEVEL5_Msk              (_UINT32_(0xF) << TAMPER_LEVELA_LEVEL5_Pos)          /* (TAMPER_LEVELA) Level 5 Mask */
#define TAMPER_LEVELA_LEVEL5(value)           (TAMPER_LEVELA_LEVEL5_Msk & (_UINT32_(value) << TAMPER_LEVELA_LEVEL5_Pos)) /* Assigment of value for LEVEL5 in the TAMPER_LEVELA register */
#define   TAMPER_LEVELA_LEVEL5_NONE_Val       _UINT32_(0x0)                                        /* (TAMPER_LEVELA) No Action  */
#define   TAMPER_LEVELA_LEVEL5_HOSTIRQ_Val    _UINT32_(0x1)                                        /* (TAMPER_LEVELA) Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL5_LEHIRQ_Val     _UINT32_(0x2)                                        /* (TAMPER_LEVELA) Log Event and Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL5_SAFEMODE_Val   _UINT32_(0x4)                                        /* (TAMPER_LEVELA) Enter Safe Mode  */
#define   TAMPER_LEVELA_LEVEL5_ERSTKEY_Val    _UINT32_(0x5)                                        /* (TAMPER_LEVELA) Erase Tamper Key  */
#define   TAMPER_LEVELA_LEVEL5_ERSFKEY_Val    _UINT32_(0x6)                                        /* (TAMPER_LEVELA) Erase Flash Key  */
#define TAMPER_LEVELA_LEVEL5_NONE             (TAMPER_LEVELA_LEVEL5_NONE_Val << TAMPER_LEVELA_LEVEL5_Pos) /* (TAMPER_LEVELA) No Action Position  */
#define TAMPER_LEVELA_LEVEL5_HOSTIRQ          (TAMPER_LEVELA_LEVEL5_HOSTIRQ_Val << TAMPER_LEVELA_LEVEL5_Pos) /* (TAMPER_LEVELA) Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL5_LEHIRQ           (TAMPER_LEVELA_LEVEL5_LEHIRQ_Val << TAMPER_LEVELA_LEVEL5_Pos) /* (TAMPER_LEVELA) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL5_SAFEMODE         (TAMPER_LEVELA_LEVEL5_SAFEMODE_Val << TAMPER_LEVELA_LEVEL5_Pos) /* (TAMPER_LEVELA) Enter Safe Mode Position  */
#define TAMPER_LEVELA_LEVEL5_ERSTKEY          (TAMPER_LEVELA_LEVEL5_ERSTKEY_Val << TAMPER_LEVELA_LEVEL5_Pos) /* (TAMPER_LEVELA) Erase Tamper Key Position  */
#define TAMPER_LEVELA_LEVEL5_ERSFKEY          (TAMPER_LEVELA_LEVEL5_ERSFKEY_Val << TAMPER_LEVELA_LEVEL5_Pos) /* (TAMPER_LEVELA) Erase Flash Key Position  */
#define TAMPER_LEVELA_LEVEL6_Pos              _UINT32_(24)                                         /* (TAMPER_LEVELA) Level 6 Position */
#define TAMPER_LEVELA_LEVEL6_Msk              (_UINT32_(0xF) << TAMPER_LEVELA_LEVEL6_Pos)          /* (TAMPER_LEVELA) Level 6 Mask */
#define TAMPER_LEVELA_LEVEL6(value)           (TAMPER_LEVELA_LEVEL6_Msk & (_UINT32_(value) << TAMPER_LEVELA_LEVEL6_Pos)) /* Assigment of value for LEVEL6 in the TAMPER_LEVELA register */
#define   TAMPER_LEVELA_LEVEL6_NONE_Val       _UINT32_(0x0)                                        /* (TAMPER_LEVELA) No Action  */
#define   TAMPER_LEVELA_LEVEL6_HOSTIRQ_Val    _UINT32_(0x1)                                        /* (TAMPER_LEVELA) Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL6_LEHIRQ_Val     _UINT32_(0x2)                                        /* (TAMPER_LEVELA) Log Event and Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL6_SAFEMODE_Val   _UINT32_(0x4)                                        /* (TAMPER_LEVELA) Enter Safe Mode  */
#define   TAMPER_LEVELA_LEVEL6_ERSTKEY_Val    _UINT32_(0x5)                                        /* (TAMPER_LEVELA) Erase Tamper Key  */
#define   TAMPER_LEVELA_LEVEL6_ERSFKEY_Val    _UINT32_(0x6)                                        /* (TAMPER_LEVELA) Erase Flash Key  */
#define TAMPER_LEVELA_LEVEL6_NONE             (TAMPER_LEVELA_LEVEL6_NONE_Val << TAMPER_LEVELA_LEVEL6_Pos) /* (TAMPER_LEVELA) No Action Position  */
#define TAMPER_LEVELA_LEVEL6_HOSTIRQ          (TAMPER_LEVELA_LEVEL6_HOSTIRQ_Val << TAMPER_LEVELA_LEVEL6_Pos) /* (TAMPER_LEVELA) Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL6_LEHIRQ           (TAMPER_LEVELA_LEVEL6_LEHIRQ_Val << TAMPER_LEVELA_LEVEL6_Pos) /* (TAMPER_LEVELA) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL6_SAFEMODE         (TAMPER_LEVELA_LEVEL6_SAFEMODE_Val << TAMPER_LEVELA_LEVEL6_Pos) /* (TAMPER_LEVELA) Enter Safe Mode Position  */
#define TAMPER_LEVELA_LEVEL6_ERSTKEY          (TAMPER_LEVELA_LEVEL6_ERSTKEY_Val << TAMPER_LEVELA_LEVEL6_Pos) /* (TAMPER_LEVELA) Erase Tamper Key Position  */
#define TAMPER_LEVELA_LEVEL6_ERSFKEY          (TAMPER_LEVELA_LEVEL6_ERSFKEY_Val << TAMPER_LEVELA_LEVEL6_Pos) /* (TAMPER_LEVELA) Erase Flash Key Position  */
#define TAMPER_LEVELA_LEVEL7_Pos              _UINT32_(28)                                         /* (TAMPER_LEVELA) Level 7 Position */
#define TAMPER_LEVELA_LEVEL7_Msk              (_UINT32_(0xF) << TAMPER_LEVELA_LEVEL7_Pos)          /* (TAMPER_LEVELA) Level 7 Mask */
#define TAMPER_LEVELA_LEVEL7(value)           (TAMPER_LEVELA_LEVEL7_Msk & (_UINT32_(value) << TAMPER_LEVELA_LEVEL7_Pos)) /* Assigment of value for LEVEL7 in the TAMPER_LEVELA register */
#define   TAMPER_LEVELA_LEVEL7_NONE_Val       _UINT32_(0x0)                                        /* (TAMPER_LEVELA) No Action  */
#define   TAMPER_LEVELA_LEVEL7_HOSTIRQ_Val    _UINT32_(0x1)                                        /* (TAMPER_LEVELA) Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL7_LEHIRQ_Val     _UINT32_(0x2)                                        /* (TAMPER_LEVELA) Log Event and Host Interrupt  */
#define   TAMPER_LEVELA_LEVEL7_SAFEMODE_Val   _UINT32_(0x4)                                        /* (TAMPER_LEVELA) Enter Safe Mode  */
#define   TAMPER_LEVELA_LEVEL7_ERSTKEY_Val    _UINT32_(0x5)                                        /* (TAMPER_LEVELA) Erase Tamper Key  */
#define   TAMPER_LEVELA_LEVEL7_ERSFKEY_Val    _UINT32_(0x6)                                        /* (TAMPER_LEVELA) Erase Flash Key  */
#define TAMPER_LEVELA_LEVEL7_NONE             (TAMPER_LEVELA_LEVEL7_NONE_Val << TAMPER_LEVELA_LEVEL7_Pos) /* (TAMPER_LEVELA) No Action Position  */
#define TAMPER_LEVELA_LEVEL7_HOSTIRQ          (TAMPER_LEVELA_LEVEL7_HOSTIRQ_Val << TAMPER_LEVELA_LEVEL7_Pos) /* (TAMPER_LEVELA) Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL7_LEHIRQ           (TAMPER_LEVELA_LEVEL7_LEHIRQ_Val << TAMPER_LEVELA_LEVEL7_Pos) /* (TAMPER_LEVELA) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELA_LEVEL7_SAFEMODE         (TAMPER_LEVELA_LEVEL7_SAFEMODE_Val << TAMPER_LEVELA_LEVEL7_Pos) /* (TAMPER_LEVELA) Enter Safe Mode Position  */
#define TAMPER_LEVELA_LEVEL7_ERSTKEY          (TAMPER_LEVELA_LEVEL7_ERSTKEY_Val << TAMPER_LEVELA_LEVEL7_Pos) /* (TAMPER_LEVELA) Erase Tamper Key Position  */
#define TAMPER_LEVELA_LEVEL7_ERSFKEY          (TAMPER_LEVELA_LEVEL7_ERSFKEY_Val << TAMPER_LEVELA_LEVEL7_Pos) /* (TAMPER_LEVELA) Erase Flash Key Position  */
#define TAMPER_LEVELA_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (TAMPER_LEVELA) Register Mask  */


/* -------- TAMPER_LEVELB : (TAMPER Offset: 0x04) ( R/ 32) Level B -------- */
#define TAMPER_LEVELB_RESETVALUE              _UINT32_(0x11111111)                                 /*  (TAMPER_LEVELB) Level B  Reset Value */

#define TAMPER_LEVELB_LEVEL8_Pos              _UINT32_(0)                                          /* (TAMPER_LEVELB) Level 8 Position */
#define TAMPER_LEVELB_LEVEL8_Msk              (_UINT32_(0xF) << TAMPER_LEVELB_LEVEL8_Pos)          /* (TAMPER_LEVELB) Level 8 Mask */
#define TAMPER_LEVELB_LEVEL8(value)           (TAMPER_LEVELB_LEVEL8_Msk & (_UINT32_(value) << TAMPER_LEVELB_LEVEL8_Pos)) /* Assigment of value for LEVEL8 in the TAMPER_LEVELB register */
#define   TAMPER_LEVELB_LEVEL8_NONE_Val       _UINT32_(0x0)                                        /* (TAMPER_LEVELB) No Action  */
#define   TAMPER_LEVELB_LEVEL8_HOSTIRQ_Val    _UINT32_(0x1)                                        /* (TAMPER_LEVELB) Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL8_LEHIRQ_Val     _UINT32_(0x2)                                        /* (TAMPER_LEVELB) Log Event and Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL8_SAFEMODE_Val   _UINT32_(0x4)                                        /* (TAMPER_LEVELB) Enter Safe Mode  */
#define   TAMPER_LEVELB_LEVEL8_ERSTKEY_Val    _UINT32_(0x5)                                        /* (TAMPER_LEVELB) Erase Tamper Key  */
#define   TAMPER_LEVELB_LEVEL8_ERSFKEY_Val    _UINT32_(0x6)                                        /* (TAMPER_LEVELB) Erase Flash Key  */
#define TAMPER_LEVELB_LEVEL8_NONE             (TAMPER_LEVELB_LEVEL8_NONE_Val << TAMPER_LEVELB_LEVEL8_Pos) /* (TAMPER_LEVELB) No Action Position  */
#define TAMPER_LEVELB_LEVEL8_HOSTIRQ          (TAMPER_LEVELB_LEVEL8_HOSTIRQ_Val << TAMPER_LEVELB_LEVEL8_Pos) /* (TAMPER_LEVELB) Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL8_LEHIRQ           (TAMPER_LEVELB_LEVEL8_LEHIRQ_Val << TAMPER_LEVELB_LEVEL8_Pos) /* (TAMPER_LEVELB) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL8_SAFEMODE         (TAMPER_LEVELB_LEVEL8_SAFEMODE_Val << TAMPER_LEVELB_LEVEL8_Pos) /* (TAMPER_LEVELB) Enter Safe Mode Position  */
#define TAMPER_LEVELB_LEVEL8_ERSTKEY          (TAMPER_LEVELB_LEVEL8_ERSTKEY_Val << TAMPER_LEVELB_LEVEL8_Pos) /* (TAMPER_LEVELB) Erase Tamper Key Position  */
#define TAMPER_LEVELB_LEVEL8_ERSFKEY          (TAMPER_LEVELB_LEVEL8_ERSFKEY_Val << TAMPER_LEVELB_LEVEL8_Pos) /* (TAMPER_LEVELB) Erase Flash Key Position  */
#define TAMPER_LEVELB_LEVEL9_Pos              _UINT32_(4)                                          /* (TAMPER_LEVELB) Level 9 Position */
#define TAMPER_LEVELB_LEVEL9_Msk              (_UINT32_(0xF) << TAMPER_LEVELB_LEVEL9_Pos)          /* (TAMPER_LEVELB) Level 9 Mask */
#define TAMPER_LEVELB_LEVEL9(value)           (TAMPER_LEVELB_LEVEL9_Msk & (_UINT32_(value) << TAMPER_LEVELB_LEVEL9_Pos)) /* Assigment of value for LEVEL9 in the TAMPER_LEVELB register */
#define   TAMPER_LEVELB_LEVEL9_NONE_Val       _UINT32_(0x0)                                        /* (TAMPER_LEVELB) No Action  */
#define   TAMPER_LEVELB_LEVEL9_HOSTIRQ_Val    _UINT32_(0x1)                                        /* (TAMPER_LEVELB) Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL9_LEHIRQ_Val     _UINT32_(0x2)                                        /* (TAMPER_LEVELB) Log Event and Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL9_SAFEMODE_Val   _UINT32_(0x4)                                        /* (TAMPER_LEVELB) Enter Safe Mode  */
#define   TAMPER_LEVELB_LEVEL9_ERSTKEY_Val    _UINT32_(0x5)                                        /* (TAMPER_LEVELB) Erase Tamper Key  */
#define   TAMPER_LEVELB_LEVEL9_ERSFKEY_Val    _UINT32_(0x6)                                        /* (TAMPER_LEVELB) Erase Flash Key  */
#define TAMPER_LEVELB_LEVEL9_NONE             (TAMPER_LEVELB_LEVEL9_NONE_Val << TAMPER_LEVELB_LEVEL9_Pos) /* (TAMPER_LEVELB) No Action Position  */
#define TAMPER_LEVELB_LEVEL9_HOSTIRQ          (TAMPER_LEVELB_LEVEL9_HOSTIRQ_Val << TAMPER_LEVELB_LEVEL9_Pos) /* (TAMPER_LEVELB) Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL9_LEHIRQ           (TAMPER_LEVELB_LEVEL9_LEHIRQ_Val << TAMPER_LEVELB_LEVEL9_Pos) /* (TAMPER_LEVELB) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL9_SAFEMODE         (TAMPER_LEVELB_LEVEL9_SAFEMODE_Val << TAMPER_LEVELB_LEVEL9_Pos) /* (TAMPER_LEVELB) Enter Safe Mode Position  */
#define TAMPER_LEVELB_LEVEL9_ERSTKEY          (TAMPER_LEVELB_LEVEL9_ERSTKEY_Val << TAMPER_LEVELB_LEVEL9_Pos) /* (TAMPER_LEVELB) Erase Tamper Key Position  */
#define TAMPER_LEVELB_LEVEL9_ERSFKEY          (TAMPER_LEVELB_LEVEL9_ERSFKEY_Val << TAMPER_LEVELB_LEVEL9_Pos) /* (TAMPER_LEVELB) Erase Flash Key Position  */
#define TAMPER_LEVELB_LEVEL10_Pos             _UINT32_(8)                                          /* (TAMPER_LEVELB) Level 10 Position */
#define TAMPER_LEVELB_LEVEL10_Msk             (_UINT32_(0xF) << TAMPER_LEVELB_LEVEL10_Pos)         /* (TAMPER_LEVELB) Level 10 Mask */
#define TAMPER_LEVELB_LEVEL10(value)          (TAMPER_LEVELB_LEVEL10_Msk & (_UINT32_(value) << TAMPER_LEVELB_LEVEL10_Pos)) /* Assigment of value for LEVEL10 in the TAMPER_LEVELB register */
#define   TAMPER_LEVELB_LEVEL10_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELB) No Action  */
#define   TAMPER_LEVELB_LEVEL10_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELB) Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL10_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELB) Log Event and Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL10_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELB) Enter Safe Mode  */
#define   TAMPER_LEVELB_LEVEL10_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELB) Erase Tamper Key  */
#define   TAMPER_LEVELB_LEVEL10_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELB) Erase Flash Key  */
#define TAMPER_LEVELB_LEVEL10_NONE            (TAMPER_LEVELB_LEVEL10_NONE_Val << TAMPER_LEVELB_LEVEL10_Pos) /* (TAMPER_LEVELB) No Action Position  */
#define TAMPER_LEVELB_LEVEL10_HOSTIRQ         (TAMPER_LEVELB_LEVEL10_HOSTIRQ_Val << TAMPER_LEVELB_LEVEL10_Pos) /* (TAMPER_LEVELB) Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL10_LEHIRQ          (TAMPER_LEVELB_LEVEL10_LEHIRQ_Val << TAMPER_LEVELB_LEVEL10_Pos) /* (TAMPER_LEVELB) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL10_SAFEMODE        (TAMPER_LEVELB_LEVEL10_SAFEMODE_Val << TAMPER_LEVELB_LEVEL10_Pos) /* (TAMPER_LEVELB) Enter Safe Mode Position  */
#define TAMPER_LEVELB_LEVEL10_ERSTKEY         (TAMPER_LEVELB_LEVEL10_ERSTKEY_Val << TAMPER_LEVELB_LEVEL10_Pos) /* (TAMPER_LEVELB) Erase Tamper Key Position  */
#define TAMPER_LEVELB_LEVEL10_ERSFKEY         (TAMPER_LEVELB_LEVEL10_ERSFKEY_Val << TAMPER_LEVELB_LEVEL10_Pos) /* (TAMPER_LEVELB) Erase Flash Key Position  */
#define TAMPER_LEVELB_LEVEL11_Pos             _UINT32_(12)                                         /* (TAMPER_LEVELB) Level 11 Position */
#define TAMPER_LEVELB_LEVEL11_Msk             (_UINT32_(0xF) << TAMPER_LEVELB_LEVEL11_Pos)         /* (TAMPER_LEVELB) Level 11 Mask */
#define TAMPER_LEVELB_LEVEL11(value)          (TAMPER_LEVELB_LEVEL11_Msk & (_UINT32_(value) << TAMPER_LEVELB_LEVEL11_Pos)) /* Assigment of value for LEVEL11 in the TAMPER_LEVELB register */
#define   TAMPER_LEVELB_LEVEL11_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELB) No Action  */
#define   TAMPER_LEVELB_LEVEL11_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELB) Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL11_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELB) Log Event and Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL11_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELB) Enter Safe Mode  */
#define   TAMPER_LEVELB_LEVEL11_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELB) Erase Tamper Key  */
#define   TAMPER_LEVELB_LEVEL11_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELB) Erase Flash Key  */
#define TAMPER_LEVELB_LEVEL11_NONE            (TAMPER_LEVELB_LEVEL11_NONE_Val << TAMPER_LEVELB_LEVEL11_Pos) /* (TAMPER_LEVELB) No Action Position  */
#define TAMPER_LEVELB_LEVEL11_HOSTIRQ         (TAMPER_LEVELB_LEVEL11_HOSTIRQ_Val << TAMPER_LEVELB_LEVEL11_Pos) /* (TAMPER_LEVELB) Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL11_LEHIRQ          (TAMPER_LEVELB_LEVEL11_LEHIRQ_Val << TAMPER_LEVELB_LEVEL11_Pos) /* (TAMPER_LEVELB) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL11_SAFEMODE        (TAMPER_LEVELB_LEVEL11_SAFEMODE_Val << TAMPER_LEVELB_LEVEL11_Pos) /* (TAMPER_LEVELB) Enter Safe Mode Position  */
#define TAMPER_LEVELB_LEVEL11_ERSTKEY         (TAMPER_LEVELB_LEVEL11_ERSTKEY_Val << TAMPER_LEVELB_LEVEL11_Pos) /* (TAMPER_LEVELB) Erase Tamper Key Position  */
#define TAMPER_LEVELB_LEVEL11_ERSFKEY         (TAMPER_LEVELB_LEVEL11_ERSFKEY_Val << TAMPER_LEVELB_LEVEL11_Pos) /* (TAMPER_LEVELB) Erase Flash Key Position  */
#define TAMPER_LEVELB_LEVEL12_Pos             _UINT32_(16)                                         /* (TAMPER_LEVELB) Level 12 Position */
#define TAMPER_LEVELB_LEVEL12_Msk             (_UINT32_(0xF) << TAMPER_LEVELB_LEVEL12_Pos)         /* (TAMPER_LEVELB) Level 12 Mask */
#define TAMPER_LEVELB_LEVEL12(value)          (TAMPER_LEVELB_LEVEL12_Msk & (_UINT32_(value) << TAMPER_LEVELB_LEVEL12_Pos)) /* Assigment of value for LEVEL12 in the TAMPER_LEVELB register */
#define   TAMPER_LEVELB_LEVEL12_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELB) No Action  */
#define   TAMPER_LEVELB_LEVEL12_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELB) Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL12_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELB) Log Event and Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL12_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELB) Enter Safe Mode  */
#define   TAMPER_LEVELB_LEVEL12_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELB) Erase Tamper Key  */
#define   TAMPER_LEVELB_LEVEL12_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELB) Erase Flash Key  */
#define TAMPER_LEVELB_LEVEL12_NONE            (TAMPER_LEVELB_LEVEL12_NONE_Val << TAMPER_LEVELB_LEVEL12_Pos) /* (TAMPER_LEVELB) No Action Position  */
#define TAMPER_LEVELB_LEVEL12_HOSTIRQ         (TAMPER_LEVELB_LEVEL12_HOSTIRQ_Val << TAMPER_LEVELB_LEVEL12_Pos) /* (TAMPER_LEVELB) Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL12_LEHIRQ          (TAMPER_LEVELB_LEVEL12_LEHIRQ_Val << TAMPER_LEVELB_LEVEL12_Pos) /* (TAMPER_LEVELB) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL12_SAFEMODE        (TAMPER_LEVELB_LEVEL12_SAFEMODE_Val << TAMPER_LEVELB_LEVEL12_Pos) /* (TAMPER_LEVELB) Enter Safe Mode Position  */
#define TAMPER_LEVELB_LEVEL12_ERSTKEY         (TAMPER_LEVELB_LEVEL12_ERSTKEY_Val << TAMPER_LEVELB_LEVEL12_Pos) /* (TAMPER_LEVELB) Erase Tamper Key Position  */
#define TAMPER_LEVELB_LEVEL12_ERSFKEY         (TAMPER_LEVELB_LEVEL12_ERSFKEY_Val << TAMPER_LEVELB_LEVEL12_Pos) /* (TAMPER_LEVELB) Erase Flash Key Position  */
#define TAMPER_LEVELB_LEVEL13_Pos             _UINT32_(20)                                         /* (TAMPER_LEVELB) Level 13 Position */
#define TAMPER_LEVELB_LEVEL13_Msk             (_UINT32_(0xF) << TAMPER_LEVELB_LEVEL13_Pos)         /* (TAMPER_LEVELB) Level 13 Mask */
#define TAMPER_LEVELB_LEVEL13(value)          (TAMPER_LEVELB_LEVEL13_Msk & (_UINT32_(value) << TAMPER_LEVELB_LEVEL13_Pos)) /* Assigment of value for LEVEL13 in the TAMPER_LEVELB register */
#define   TAMPER_LEVELB_LEVEL13_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELB) No Action  */
#define   TAMPER_LEVELB_LEVEL13_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELB) Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL13_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELB) Log Event and Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL13_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELB) Enter Safe Mode  */
#define   TAMPER_LEVELB_LEVEL13_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELB) Erase Tamper Key  */
#define   TAMPER_LEVELB_LEVEL13_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELB) Erase Flash Key  */
#define TAMPER_LEVELB_LEVEL13_NONE            (TAMPER_LEVELB_LEVEL13_NONE_Val << TAMPER_LEVELB_LEVEL13_Pos) /* (TAMPER_LEVELB) No Action Position  */
#define TAMPER_LEVELB_LEVEL13_HOSTIRQ         (TAMPER_LEVELB_LEVEL13_HOSTIRQ_Val << TAMPER_LEVELB_LEVEL13_Pos) /* (TAMPER_LEVELB) Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL13_LEHIRQ          (TAMPER_LEVELB_LEVEL13_LEHIRQ_Val << TAMPER_LEVELB_LEVEL13_Pos) /* (TAMPER_LEVELB) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL13_SAFEMODE        (TAMPER_LEVELB_LEVEL13_SAFEMODE_Val << TAMPER_LEVELB_LEVEL13_Pos) /* (TAMPER_LEVELB) Enter Safe Mode Position  */
#define TAMPER_LEVELB_LEVEL13_ERSTKEY         (TAMPER_LEVELB_LEVEL13_ERSTKEY_Val << TAMPER_LEVELB_LEVEL13_Pos) /* (TAMPER_LEVELB) Erase Tamper Key Position  */
#define TAMPER_LEVELB_LEVEL13_ERSFKEY         (TAMPER_LEVELB_LEVEL13_ERSFKEY_Val << TAMPER_LEVELB_LEVEL13_Pos) /* (TAMPER_LEVELB) Erase Flash Key Position  */
#define TAMPER_LEVELB_LEVEL14_Pos             _UINT32_(24)                                         /* (TAMPER_LEVELB) Level 14 Position */
#define TAMPER_LEVELB_LEVEL14_Msk             (_UINT32_(0xF) << TAMPER_LEVELB_LEVEL14_Pos)         /* (TAMPER_LEVELB) Level 14 Mask */
#define TAMPER_LEVELB_LEVEL14(value)          (TAMPER_LEVELB_LEVEL14_Msk & (_UINT32_(value) << TAMPER_LEVELB_LEVEL14_Pos)) /* Assigment of value for LEVEL14 in the TAMPER_LEVELB register */
#define   TAMPER_LEVELB_LEVEL14_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELB) No Action  */
#define   TAMPER_LEVELB_LEVEL14_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELB) Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL14_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELB) Log Event and Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL14_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELB) Enter Safe Mode  */
#define   TAMPER_LEVELB_LEVEL14_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELB) Erase Tamper Key  */
#define   TAMPER_LEVELB_LEVEL14_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELB) Erase Flash Key  */
#define TAMPER_LEVELB_LEVEL14_NONE            (TAMPER_LEVELB_LEVEL14_NONE_Val << TAMPER_LEVELB_LEVEL14_Pos) /* (TAMPER_LEVELB) No Action Position  */
#define TAMPER_LEVELB_LEVEL14_HOSTIRQ         (TAMPER_LEVELB_LEVEL14_HOSTIRQ_Val << TAMPER_LEVELB_LEVEL14_Pos) /* (TAMPER_LEVELB) Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL14_LEHIRQ          (TAMPER_LEVELB_LEVEL14_LEHIRQ_Val << TAMPER_LEVELB_LEVEL14_Pos) /* (TAMPER_LEVELB) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL14_SAFEMODE        (TAMPER_LEVELB_LEVEL14_SAFEMODE_Val << TAMPER_LEVELB_LEVEL14_Pos) /* (TAMPER_LEVELB) Enter Safe Mode Position  */
#define TAMPER_LEVELB_LEVEL14_ERSTKEY         (TAMPER_LEVELB_LEVEL14_ERSTKEY_Val << TAMPER_LEVELB_LEVEL14_Pos) /* (TAMPER_LEVELB) Erase Tamper Key Position  */
#define TAMPER_LEVELB_LEVEL14_ERSFKEY         (TAMPER_LEVELB_LEVEL14_ERSFKEY_Val << TAMPER_LEVELB_LEVEL14_Pos) /* (TAMPER_LEVELB) Erase Flash Key Position  */
#define TAMPER_LEVELB_LEVEL15_Pos             _UINT32_(28)                                         /* (TAMPER_LEVELB) Level 15 Position */
#define TAMPER_LEVELB_LEVEL15_Msk             (_UINT32_(0xF) << TAMPER_LEVELB_LEVEL15_Pos)         /* (TAMPER_LEVELB) Level 15 Mask */
#define TAMPER_LEVELB_LEVEL15(value)          (TAMPER_LEVELB_LEVEL15_Msk & (_UINT32_(value) << TAMPER_LEVELB_LEVEL15_Pos)) /* Assigment of value for LEVEL15 in the TAMPER_LEVELB register */
#define   TAMPER_LEVELB_LEVEL15_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELB) No Action  */
#define   TAMPER_LEVELB_LEVEL15_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELB) Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL15_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELB) Log Event and Host Interrupt  */
#define   TAMPER_LEVELB_LEVEL15_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELB) Enter Safe Mode  */
#define   TAMPER_LEVELB_LEVEL15_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELB) Erase Tamper Key  */
#define   TAMPER_LEVELB_LEVEL15_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELB) Erase Flash Key  */
#define TAMPER_LEVELB_LEVEL15_NONE            (TAMPER_LEVELB_LEVEL15_NONE_Val << TAMPER_LEVELB_LEVEL15_Pos) /* (TAMPER_LEVELB) No Action Position  */
#define TAMPER_LEVELB_LEVEL15_HOSTIRQ         (TAMPER_LEVELB_LEVEL15_HOSTIRQ_Val << TAMPER_LEVELB_LEVEL15_Pos) /* (TAMPER_LEVELB) Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL15_LEHIRQ          (TAMPER_LEVELB_LEVEL15_LEHIRQ_Val << TAMPER_LEVELB_LEVEL15_Pos) /* (TAMPER_LEVELB) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELB_LEVEL15_SAFEMODE        (TAMPER_LEVELB_LEVEL15_SAFEMODE_Val << TAMPER_LEVELB_LEVEL15_Pos) /* (TAMPER_LEVELB) Enter Safe Mode Position  */
#define TAMPER_LEVELB_LEVEL15_ERSTKEY         (TAMPER_LEVELB_LEVEL15_ERSTKEY_Val << TAMPER_LEVELB_LEVEL15_Pos) /* (TAMPER_LEVELB) Erase Tamper Key Position  */
#define TAMPER_LEVELB_LEVEL15_ERSFKEY         (TAMPER_LEVELB_LEVEL15_ERSFKEY_Val << TAMPER_LEVELB_LEVEL15_Pos) /* (TAMPER_LEVELB) Erase Flash Key Position  */
#define TAMPER_LEVELB_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (TAMPER_LEVELB) Register Mask  */


/* -------- TAMPER_LEVELC : (TAMPER Offset: 0x08) ( R/ 32) Level C -------- */
#define TAMPER_LEVELC_RESETVALUE              _UINT32_(0x11111111)                                 /*  (TAMPER_LEVELC) Level C  Reset Value */

#define TAMPER_LEVELC_LEVEL16_Pos             _UINT32_(0)                                          /* (TAMPER_LEVELC) Level 16 Position */
#define TAMPER_LEVELC_LEVEL16_Msk             (_UINT32_(0xF) << TAMPER_LEVELC_LEVEL16_Pos)         /* (TAMPER_LEVELC) Level 16 Mask */
#define TAMPER_LEVELC_LEVEL16(value)          (TAMPER_LEVELC_LEVEL16_Msk & (_UINT32_(value) << TAMPER_LEVELC_LEVEL16_Pos)) /* Assigment of value for LEVEL16 in the TAMPER_LEVELC register */
#define   TAMPER_LEVELC_LEVEL16_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELC) No Action  */
#define   TAMPER_LEVELC_LEVEL16_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELC) Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL16_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELC) Log Event and Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL16_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELC) Enter Safe Mode  */
#define   TAMPER_LEVELC_LEVEL16_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELC) Erase Tamper Key  */
#define   TAMPER_LEVELC_LEVEL16_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELC) Erase Flash Key  */
#define TAMPER_LEVELC_LEVEL16_NONE            (TAMPER_LEVELC_LEVEL16_NONE_Val << TAMPER_LEVELC_LEVEL16_Pos) /* (TAMPER_LEVELC) No Action Position  */
#define TAMPER_LEVELC_LEVEL16_HOSTIRQ         (TAMPER_LEVELC_LEVEL16_HOSTIRQ_Val << TAMPER_LEVELC_LEVEL16_Pos) /* (TAMPER_LEVELC) Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL16_LEHIRQ          (TAMPER_LEVELC_LEVEL16_LEHIRQ_Val << TAMPER_LEVELC_LEVEL16_Pos) /* (TAMPER_LEVELC) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL16_SAFEMODE        (TAMPER_LEVELC_LEVEL16_SAFEMODE_Val << TAMPER_LEVELC_LEVEL16_Pos) /* (TAMPER_LEVELC) Enter Safe Mode Position  */
#define TAMPER_LEVELC_LEVEL16_ERSTKEY         (TAMPER_LEVELC_LEVEL16_ERSTKEY_Val << TAMPER_LEVELC_LEVEL16_Pos) /* (TAMPER_LEVELC) Erase Tamper Key Position  */
#define TAMPER_LEVELC_LEVEL16_ERSFKEY         (TAMPER_LEVELC_LEVEL16_ERSFKEY_Val << TAMPER_LEVELC_LEVEL16_Pos) /* (TAMPER_LEVELC) Erase Flash Key Position  */
#define TAMPER_LEVELC_LEVEL17_Pos             _UINT32_(4)                                          /* (TAMPER_LEVELC) Level 17 Position */
#define TAMPER_LEVELC_LEVEL17_Msk             (_UINT32_(0xF) << TAMPER_LEVELC_LEVEL17_Pos)         /* (TAMPER_LEVELC) Level 17 Mask */
#define TAMPER_LEVELC_LEVEL17(value)          (TAMPER_LEVELC_LEVEL17_Msk & (_UINT32_(value) << TAMPER_LEVELC_LEVEL17_Pos)) /* Assigment of value for LEVEL17 in the TAMPER_LEVELC register */
#define   TAMPER_LEVELC_LEVEL17_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELC) No Action  */
#define   TAMPER_LEVELC_LEVEL17_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELC) Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL17_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELC) Log Event and Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL17_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELC) Enter Safe Mode  */
#define   TAMPER_LEVELC_LEVEL17_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELC) Erase Tamper Key  */
#define   TAMPER_LEVELC_LEVEL17_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELC) Erase Flash Key  */
#define TAMPER_LEVELC_LEVEL17_NONE            (TAMPER_LEVELC_LEVEL17_NONE_Val << TAMPER_LEVELC_LEVEL17_Pos) /* (TAMPER_LEVELC) No Action Position  */
#define TAMPER_LEVELC_LEVEL17_HOSTIRQ         (TAMPER_LEVELC_LEVEL17_HOSTIRQ_Val << TAMPER_LEVELC_LEVEL17_Pos) /* (TAMPER_LEVELC) Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL17_LEHIRQ          (TAMPER_LEVELC_LEVEL17_LEHIRQ_Val << TAMPER_LEVELC_LEVEL17_Pos) /* (TAMPER_LEVELC) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL17_SAFEMODE        (TAMPER_LEVELC_LEVEL17_SAFEMODE_Val << TAMPER_LEVELC_LEVEL17_Pos) /* (TAMPER_LEVELC) Enter Safe Mode Position  */
#define TAMPER_LEVELC_LEVEL17_ERSTKEY         (TAMPER_LEVELC_LEVEL17_ERSTKEY_Val << TAMPER_LEVELC_LEVEL17_Pos) /* (TAMPER_LEVELC) Erase Tamper Key Position  */
#define TAMPER_LEVELC_LEVEL17_ERSFKEY         (TAMPER_LEVELC_LEVEL17_ERSFKEY_Val << TAMPER_LEVELC_LEVEL17_Pos) /* (TAMPER_LEVELC) Erase Flash Key Position  */
#define TAMPER_LEVELC_LEVEL18_Pos             _UINT32_(8)                                          /* (TAMPER_LEVELC) Level 18 Position */
#define TAMPER_LEVELC_LEVEL18_Msk             (_UINT32_(0xF) << TAMPER_LEVELC_LEVEL18_Pos)         /* (TAMPER_LEVELC) Level 18 Mask */
#define TAMPER_LEVELC_LEVEL18(value)          (TAMPER_LEVELC_LEVEL18_Msk & (_UINT32_(value) << TAMPER_LEVELC_LEVEL18_Pos)) /* Assigment of value for LEVEL18 in the TAMPER_LEVELC register */
#define   TAMPER_LEVELC_LEVEL18_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELC) No Action  */
#define   TAMPER_LEVELC_LEVEL18_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELC) Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL18_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELC) Log Event and Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL18_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELC) Enter Safe Mode  */
#define   TAMPER_LEVELC_LEVEL18_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELC) Erase Tamper Key  */
#define   TAMPER_LEVELC_LEVEL18_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELC) Erase Flash Key  */
#define TAMPER_LEVELC_LEVEL18_NONE            (TAMPER_LEVELC_LEVEL18_NONE_Val << TAMPER_LEVELC_LEVEL18_Pos) /* (TAMPER_LEVELC) No Action Position  */
#define TAMPER_LEVELC_LEVEL18_HOSTIRQ         (TAMPER_LEVELC_LEVEL18_HOSTIRQ_Val << TAMPER_LEVELC_LEVEL18_Pos) /* (TAMPER_LEVELC) Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL18_LEHIRQ          (TAMPER_LEVELC_LEVEL18_LEHIRQ_Val << TAMPER_LEVELC_LEVEL18_Pos) /* (TAMPER_LEVELC) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL18_SAFEMODE        (TAMPER_LEVELC_LEVEL18_SAFEMODE_Val << TAMPER_LEVELC_LEVEL18_Pos) /* (TAMPER_LEVELC) Enter Safe Mode Position  */
#define TAMPER_LEVELC_LEVEL18_ERSTKEY         (TAMPER_LEVELC_LEVEL18_ERSTKEY_Val << TAMPER_LEVELC_LEVEL18_Pos) /* (TAMPER_LEVELC) Erase Tamper Key Position  */
#define TAMPER_LEVELC_LEVEL18_ERSFKEY         (TAMPER_LEVELC_LEVEL18_ERSFKEY_Val << TAMPER_LEVELC_LEVEL18_Pos) /* (TAMPER_LEVELC) Erase Flash Key Position  */
#define TAMPER_LEVELC_LEVEL19_Pos             _UINT32_(12)                                         /* (TAMPER_LEVELC) Level 19 Position */
#define TAMPER_LEVELC_LEVEL19_Msk             (_UINT32_(0xF) << TAMPER_LEVELC_LEVEL19_Pos)         /* (TAMPER_LEVELC) Level 19 Mask */
#define TAMPER_LEVELC_LEVEL19(value)          (TAMPER_LEVELC_LEVEL19_Msk & (_UINT32_(value) << TAMPER_LEVELC_LEVEL19_Pos)) /* Assigment of value for LEVEL19 in the TAMPER_LEVELC register */
#define   TAMPER_LEVELC_LEVEL19_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELC) No Action  */
#define   TAMPER_LEVELC_LEVEL19_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELC) Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL19_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELC) Log Event and Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL19_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELC) Enter Safe Mode  */
#define   TAMPER_LEVELC_LEVEL19_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELC) Erase Tamper Key  */
#define   TAMPER_LEVELC_LEVEL19_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELC) Erase Flash Key  */
#define TAMPER_LEVELC_LEVEL19_NONE            (TAMPER_LEVELC_LEVEL19_NONE_Val << TAMPER_LEVELC_LEVEL19_Pos) /* (TAMPER_LEVELC) No Action Position  */
#define TAMPER_LEVELC_LEVEL19_HOSTIRQ         (TAMPER_LEVELC_LEVEL19_HOSTIRQ_Val << TAMPER_LEVELC_LEVEL19_Pos) /* (TAMPER_LEVELC) Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL19_LEHIRQ          (TAMPER_LEVELC_LEVEL19_LEHIRQ_Val << TAMPER_LEVELC_LEVEL19_Pos) /* (TAMPER_LEVELC) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL19_SAFEMODE        (TAMPER_LEVELC_LEVEL19_SAFEMODE_Val << TAMPER_LEVELC_LEVEL19_Pos) /* (TAMPER_LEVELC) Enter Safe Mode Position  */
#define TAMPER_LEVELC_LEVEL19_ERSTKEY         (TAMPER_LEVELC_LEVEL19_ERSTKEY_Val << TAMPER_LEVELC_LEVEL19_Pos) /* (TAMPER_LEVELC) Erase Tamper Key Position  */
#define TAMPER_LEVELC_LEVEL19_ERSFKEY         (TAMPER_LEVELC_LEVEL19_ERSFKEY_Val << TAMPER_LEVELC_LEVEL19_Pos) /* (TAMPER_LEVELC) Erase Flash Key Position  */
#define TAMPER_LEVELC_LEVEL20_Pos             _UINT32_(16)                                         /* (TAMPER_LEVELC) Level 20 Position */
#define TAMPER_LEVELC_LEVEL20_Msk             (_UINT32_(0xF) << TAMPER_LEVELC_LEVEL20_Pos)         /* (TAMPER_LEVELC) Level 20 Mask */
#define TAMPER_LEVELC_LEVEL20(value)          (TAMPER_LEVELC_LEVEL20_Msk & (_UINT32_(value) << TAMPER_LEVELC_LEVEL20_Pos)) /* Assigment of value for LEVEL20 in the TAMPER_LEVELC register */
#define   TAMPER_LEVELC_LEVEL20_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELC) No Action  */
#define   TAMPER_LEVELC_LEVEL20_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELC) Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL20_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELC) Log Event and Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL20_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELC) Enter Safe Mode  */
#define   TAMPER_LEVELC_LEVEL20_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELC) Erase Tamper Key  */
#define   TAMPER_LEVELC_LEVEL20_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELC) Erase Flash Key  */
#define TAMPER_LEVELC_LEVEL20_NONE            (TAMPER_LEVELC_LEVEL20_NONE_Val << TAMPER_LEVELC_LEVEL20_Pos) /* (TAMPER_LEVELC) No Action Position  */
#define TAMPER_LEVELC_LEVEL20_HOSTIRQ         (TAMPER_LEVELC_LEVEL20_HOSTIRQ_Val << TAMPER_LEVELC_LEVEL20_Pos) /* (TAMPER_LEVELC) Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL20_LEHIRQ          (TAMPER_LEVELC_LEVEL20_LEHIRQ_Val << TAMPER_LEVELC_LEVEL20_Pos) /* (TAMPER_LEVELC) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL20_SAFEMODE        (TAMPER_LEVELC_LEVEL20_SAFEMODE_Val << TAMPER_LEVELC_LEVEL20_Pos) /* (TAMPER_LEVELC) Enter Safe Mode Position  */
#define TAMPER_LEVELC_LEVEL20_ERSTKEY         (TAMPER_LEVELC_LEVEL20_ERSTKEY_Val << TAMPER_LEVELC_LEVEL20_Pos) /* (TAMPER_LEVELC) Erase Tamper Key Position  */
#define TAMPER_LEVELC_LEVEL20_ERSFKEY         (TAMPER_LEVELC_LEVEL20_ERSFKEY_Val << TAMPER_LEVELC_LEVEL20_Pos) /* (TAMPER_LEVELC) Erase Flash Key Position  */
#define TAMPER_LEVELC_LEVEL21_Pos             _UINT32_(20)                                         /* (TAMPER_LEVELC) Level 21 Position */
#define TAMPER_LEVELC_LEVEL21_Msk             (_UINT32_(0xF) << TAMPER_LEVELC_LEVEL21_Pos)         /* (TAMPER_LEVELC) Level 21 Mask */
#define TAMPER_LEVELC_LEVEL21(value)          (TAMPER_LEVELC_LEVEL21_Msk & (_UINT32_(value) << TAMPER_LEVELC_LEVEL21_Pos)) /* Assigment of value for LEVEL21 in the TAMPER_LEVELC register */
#define   TAMPER_LEVELC_LEVEL21_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELC) No Action  */
#define   TAMPER_LEVELC_LEVEL21_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELC) Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL21_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELC) Log Event and Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL21_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELC) Enter Safe Mode  */
#define   TAMPER_LEVELC_LEVEL21_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELC) Erase Tamper Key  */
#define   TAMPER_LEVELC_LEVEL21_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELC) Erase Flash Key  */
#define TAMPER_LEVELC_LEVEL21_NONE            (TAMPER_LEVELC_LEVEL21_NONE_Val << TAMPER_LEVELC_LEVEL21_Pos) /* (TAMPER_LEVELC) No Action Position  */
#define TAMPER_LEVELC_LEVEL21_HOSTIRQ         (TAMPER_LEVELC_LEVEL21_HOSTIRQ_Val << TAMPER_LEVELC_LEVEL21_Pos) /* (TAMPER_LEVELC) Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL21_LEHIRQ          (TAMPER_LEVELC_LEVEL21_LEHIRQ_Val << TAMPER_LEVELC_LEVEL21_Pos) /* (TAMPER_LEVELC) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL21_SAFEMODE        (TAMPER_LEVELC_LEVEL21_SAFEMODE_Val << TAMPER_LEVELC_LEVEL21_Pos) /* (TAMPER_LEVELC) Enter Safe Mode Position  */
#define TAMPER_LEVELC_LEVEL21_ERSTKEY         (TAMPER_LEVELC_LEVEL21_ERSTKEY_Val << TAMPER_LEVELC_LEVEL21_Pos) /* (TAMPER_LEVELC) Erase Tamper Key Position  */
#define TAMPER_LEVELC_LEVEL21_ERSFKEY         (TAMPER_LEVELC_LEVEL21_ERSFKEY_Val << TAMPER_LEVELC_LEVEL21_Pos) /* (TAMPER_LEVELC) Erase Flash Key Position  */
#define TAMPER_LEVELC_LEVEL22_Pos             _UINT32_(24)                                         /* (TAMPER_LEVELC) Level 22 Position */
#define TAMPER_LEVELC_LEVEL22_Msk             (_UINT32_(0xF) << TAMPER_LEVELC_LEVEL22_Pos)         /* (TAMPER_LEVELC) Level 22 Mask */
#define TAMPER_LEVELC_LEVEL22(value)          (TAMPER_LEVELC_LEVEL22_Msk & (_UINT32_(value) << TAMPER_LEVELC_LEVEL22_Pos)) /* Assigment of value for LEVEL22 in the TAMPER_LEVELC register */
#define   TAMPER_LEVELC_LEVEL22_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELC) No Action  */
#define   TAMPER_LEVELC_LEVEL22_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELC) Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL22_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELC) Log Event and Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL22_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELC) Enter Safe Mode  */
#define   TAMPER_LEVELC_LEVEL22_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELC) Erase Tamper Key  */
#define   TAMPER_LEVELC_LEVEL22_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELC) Erase Flash Key  */
#define TAMPER_LEVELC_LEVEL22_NONE            (TAMPER_LEVELC_LEVEL22_NONE_Val << TAMPER_LEVELC_LEVEL22_Pos) /* (TAMPER_LEVELC) No Action Position  */
#define TAMPER_LEVELC_LEVEL22_HOSTIRQ         (TAMPER_LEVELC_LEVEL22_HOSTIRQ_Val << TAMPER_LEVELC_LEVEL22_Pos) /* (TAMPER_LEVELC) Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL22_LEHIRQ          (TAMPER_LEVELC_LEVEL22_LEHIRQ_Val << TAMPER_LEVELC_LEVEL22_Pos) /* (TAMPER_LEVELC) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL22_SAFEMODE        (TAMPER_LEVELC_LEVEL22_SAFEMODE_Val << TAMPER_LEVELC_LEVEL22_Pos) /* (TAMPER_LEVELC) Enter Safe Mode Position  */
#define TAMPER_LEVELC_LEVEL22_ERSTKEY         (TAMPER_LEVELC_LEVEL22_ERSTKEY_Val << TAMPER_LEVELC_LEVEL22_Pos) /* (TAMPER_LEVELC) Erase Tamper Key Position  */
#define TAMPER_LEVELC_LEVEL22_ERSFKEY         (TAMPER_LEVELC_LEVEL22_ERSFKEY_Val << TAMPER_LEVELC_LEVEL22_Pos) /* (TAMPER_LEVELC) Erase Flash Key Position  */
#define TAMPER_LEVELC_LEVEL23_Pos             _UINT32_(28)                                         /* (TAMPER_LEVELC) Level 23 Position */
#define TAMPER_LEVELC_LEVEL23_Msk             (_UINT32_(0xF) << TAMPER_LEVELC_LEVEL23_Pos)         /* (TAMPER_LEVELC) Level 23 Mask */
#define TAMPER_LEVELC_LEVEL23(value)          (TAMPER_LEVELC_LEVEL23_Msk & (_UINT32_(value) << TAMPER_LEVELC_LEVEL23_Pos)) /* Assigment of value for LEVEL23 in the TAMPER_LEVELC register */
#define   TAMPER_LEVELC_LEVEL23_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELC) No Action  */
#define   TAMPER_LEVELC_LEVEL23_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELC) Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL23_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELC) Log Event and Host Interrupt  */
#define   TAMPER_LEVELC_LEVEL23_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELC) Enter Safe Mode  */
#define   TAMPER_LEVELC_LEVEL23_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELC) Erase Tamper Key  */
#define   TAMPER_LEVELC_LEVEL23_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELC) Erase Flash Key  */
#define TAMPER_LEVELC_LEVEL23_NONE            (TAMPER_LEVELC_LEVEL23_NONE_Val << TAMPER_LEVELC_LEVEL23_Pos) /* (TAMPER_LEVELC) No Action Position  */
#define TAMPER_LEVELC_LEVEL23_HOSTIRQ         (TAMPER_LEVELC_LEVEL23_HOSTIRQ_Val << TAMPER_LEVELC_LEVEL23_Pos) /* (TAMPER_LEVELC) Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL23_LEHIRQ          (TAMPER_LEVELC_LEVEL23_LEHIRQ_Val << TAMPER_LEVELC_LEVEL23_Pos) /* (TAMPER_LEVELC) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELC_LEVEL23_SAFEMODE        (TAMPER_LEVELC_LEVEL23_SAFEMODE_Val << TAMPER_LEVELC_LEVEL23_Pos) /* (TAMPER_LEVELC) Enter Safe Mode Position  */
#define TAMPER_LEVELC_LEVEL23_ERSTKEY         (TAMPER_LEVELC_LEVEL23_ERSTKEY_Val << TAMPER_LEVELC_LEVEL23_Pos) /* (TAMPER_LEVELC) Erase Tamper Key Position  */
#define TAMPER_LEVELC_LEVEL23_ERSFKEY         (TAMPER_LEVELC_LEVEL23_ERSFKEY_Val << TAMPER_LEVELC_LEVEL23_Pos) /* (TAMPER_LEVELC) Erase Flash Key Position  */
#define TAMPER_LEVELC_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (TAMPER_LEVELC) Register Mask  */


/* -------- TAMPER_LEVELD : (TAMPER Offset: 0x0C) ( R/ 32) Level D -------- */
#define TAMPER_LEVELD_RESETVALUE              _UINT32_(0x11111111)                                 /*  (TAMPER_LEVELD) Level D  Reset Value */

#define TAMPER_LEVELD_LEVEL24_Pos             _UINT32_(0)                                          /* (TAMPER_LEVELD) Level 24 Position */
#define TAMPER_LEVELD_LEVEL24_Msk             (_UINT32_(0xF) << TAMPER_LEVELD_LEVEL24_Pos)         /* (TAMPER_LEVELD) Level 24 Mask */
#define TAMPER_LEVELD_LEVEL24(value)          (TAMPER_LEVELD_LEVEL24_Msk & (_UINT32_(value) << TAMPER_LEVELD_LEVEL24_Pos)) /* Assigment of value for LEVEL24 in the TAMPER_LEVELD register */
#define   TAMPER_LEVELD_LEVEL24_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELD) No Action  */
#define   TAMPER_LEVELD_LEVEL24_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELD) Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL24_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELD) Log Event and Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL24_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELD) Enter Safe Mode  */
#define   TAMPER_LEVELD_LEVEL24_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELD) Erase Tamper Key  */
#define   TAMPER_LEVELD_LEVEL24_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELD) Erase Flash Key  */
#define TAMPER_LEVELD_LEVEL24_NONE            (TAMPER_LEVELD_LEVEL24_NONE_Val << TAMPER_LEVELD_LEVEL24_Pos) /* (TAMPER_LEVELD) No Action Position  */
#define TAMPER_LEVELD_LEVEL24_HOSTIRQ         (TAMPER_LEVELD_LEVEL24_HOSTIRQ_Val << TAMPER_LEVELD_LEVEL24_Pos) /* (TAMPER_LEVELD) Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL24_LEHIRQ          (TAMPER_LEVELD_LEVEL24_LEHIRQ_Val << TAMPER_LEVELD_LEVEL24_Pos) /* (TAMPER_LEVELD) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL24_SAFEMODE        (TAMPER_LEVELD_LEVEL24_SAFEMODE_Val << TAMPER_LEVELD_LEVEL24_Pos) /* (TAMPER_LEVELD) Enter Safe Mode Position  */
#define TAMPER_LEVELD_LEVEL24_ERSTKEY         (TAMPER_LEVELD_LEVEL24_ERSTKEY_Val << TAMPER_LEVELD_LEVEL24_Pos) /* (TAMPER_LEVELD) Erase Tamper Key Position  */
#define TAMPER_LEVELD_LEVEL24_ERSFKEY         (TAMPER_LEVELD_LEVEL24_ERSFKEY_Val << TAMPER_LEVELD_LEVEL24_Pos) /* (TAMPER_LEVELD) Erase Flash Key Position  */
#define TAMPER_LEVELD_LEVEL25_Pos             _UINT32_(4)                                          /* (TAMPER_LEVELD) Level 25 Position */
#define TAMPER_LEVELD_LEVEL25_Msk             (_UINT32_(0xF) << TAMPER_LEVELD_LEVEL25_Pos)         /* (TAMPER_LEVELD) Level 25 Mask */
#define TAMPER_LEVELD_LEVEL25(value)          (TAMPER_LEVELD_LEVEL25_Msk & (_UINT32_(value) << TAMPER_LEVELD_LEVEL25_Pos)) /* Assigment of value for LEVEL25 in the TAMPER_LEVELD register */
#define   TAMPER_LEVELD_LEVEL25_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELD) No Action  */
#define   TAMPER_LEVELD_LEVEL25_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELD) Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL25_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELD) Log Event and Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL25_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELD) Enter Safe Mode  */
#define   TAMPER_LEVELD_LEVEL25_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELD) Erase Tamper Key  */
#define   TAMPER_LEVELD_LEVEL25_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELD) Erase Flash Key  */
#define TAMPER_LEVELD_LEVEL25_NONE            (TAMPER_LEVELD_LEVEL25_NONE_Val << TAMPER_LEVELD_LEVEL25_Pos) /* (TAMPER_LEVELD) No Action Position  */
#define TAMPER_LEVELD_LEVEL25_HOSTIRQ         (TAMPER_LEVELD_LEVEL25_HOSTIRQ_Val << TAMPER_LEVELD_LEVEL25_Pos) /* (TAMPER_LEVELD) Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL25_LEHIRQ          (TAMPER_LEVELD_LEVEL25_LEHIRQ_Val << TAMPER_LEVELD_LEVEL25_Pos) /* (TAMPER_LEVELD) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL25_SAFEMODE        (TAMPER_LEVELD_LEVEL25_SAFEMODE_Val << TAMPER_LEVELD_LEVEL25_Pos) /* (TAMPER_LEVELD) Enter Safe Mode Position  */
#define TAMPER_LEVELD_LEVEL25_ERSTKEY         (TAMPER_LEVELD_LEVEL25_ERSTKEY_Val << TAMPER_LEVELD_LEVEL25_Pos) /* (TAMPER_LEVELD) Erase Tamper Key Position  */
#define TAMPER_LEVELD_LEVEL25_ERSFKEY         (TAMPER_LEVELD_LEVEL25_ERSFKEY_Val << TAMPER_LEVELD_LEVEL25_Pos) /* (TAMPER_LEVELD) Erase Flash Key Position  */
#define TAMPER_LEVELD_LEVEL26_Pos             _UINT32_(8)                                          /* (TAMPER_LEVELD) Level 26 Position */
#define TAMPER_LEVELD_LEVEL26_Msk             (_UINT32_(0xF) << TAMPER_LEVELD_LEVEL26_Pos)         /* (TAMPER_LEVELD) Level 26 Mask */
#define TAMPER_LEVELD_LEVEL26(value)          (TAMPER_LEVELD_LEVEL26_Msk & (_UINT32_(value) << TAMPER_LEVELD_LEVEL26_Pos)) /* Assigment of value for LEVEL26 in the TAMPER_LEVELD register */
#define   TAMPER_LEVELD_LEVEL26_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELD) No Action  */
#define   TAMPER_LEVELD_LEVEL26_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELD) Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL26_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELD) Log Event and Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL26_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELD) Enter Safe Mode  */
#define   TAMPER_LEVELD_LEVEL26_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELD) Erase Tamper Key  */
#define   TAMPER_LEVELD_LEVEL26_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELD) Erase Flash Key  */
#define TAMPER_LEVELD_LEVEL26_NONE            (TAMPER_LEVELD_LEVEL26_NONE_Val << TAMPER_LEVELD_LEVEL26_Pos) /* (TAMPER_LEVELD) No Action Position  */
#define TAMPER_LEVELD_LEVEL26_HOSTIRQ         (TAMPER_LEVELD_LEVEL26_HOSTIRQ_Val << TAMPER_LEVELD_LEVEL26_Pos) /* (TAMPER_LEVELD) Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL26_LEHIRQ          (TAMPER_LEVELD_LEVEL26_LEHIRQ_Val << TAMPER_LEVELD_LEVEL26_Pos) /* (TAMPER_LEVELD) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL26_SAFEMODE        (TAMPER_LEVELD_LEVEL26_SAFEMODE_Val << TAMPER_LEVELD_LEVEL26_Pos) /* (TAMPER_LEVELD) Enter Safe Mode Position  */
#define TAMPER_LEVELD_LEVEL26_ERSTKEY         (TAMPER_LEVELD_LEVEL26_ERSTKEY_Val << TAMPER_LEVELD_LEVEL26_Pos) /* (TAMPER_LEVELD) Erase Tamper Key Position  */
#define TAMPER_LEVELD_LEVEL26_ERSFKEY         (TAMPER_LEVELD_LEVEL26_ERSFKEY_Val << TAMPER_LEVELD_LEVEL26_Pos) /* (TAMPER_LEVELD) Erase Flash Key Position  */
#define TAMPER_LEVELD_LEVEL27_Pos             _UINT32_(12)                                         /* (TAMPER_LEVELD) Level 27 Position */
#define TAMPER_LEVELD_LEVEL27_Msk             (_UINT32_(0xF) << TAMPER_LEVELD_LEVEL27_Pos)         /* (TAMPER_LEVELD) Level 27 Mask */
#define TAMPER_LEVELD_LEVEL27(value)          (TAMPER_LEVELD_LEVEL27_Msk & (_UINT32_(value) << TAMPER_LEVELD_LEVEL27_Pos)) /* Assigment of value for LEVEL27 in the TAMPER_LEVELD register */
#define   TAMPER_LEVELD_LEVEL27_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELD) No Action  */
#define   TAMPER_LEVELD_LEVEL27_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELD) Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL27_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELD) Log Event and Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL27_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELD) Enter Safe Mode  */
#define   TAMPER_LEVELD_LEVEL27_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELD) Erase Tamper Key  */
#define   TAMPER_LEVELD_LEVEL27_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELD) Erase Flash Key  */
#define TAMPER_LEVELD_LEVEL27_NONE            (TAMPER_LEVELD_LEVEL27_NONE_Val << TAMPER_LEVELD_LEVEL27_Pos) /* (TAMPER_LEVELD) No Action Position  */
#define TAMPER_LEVELD_LEVEL27_HOSTIRQ         (TAMPER_LEVELD_LEVEL27_HOSTIRQ_Val << TAMPER_LEVELD_LEVEL27_Pos) /* (TAMPER_LEVELD) Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL27_LEHIRQ          (TAMPER_LEVELD_LEVEL27_LEHIRQ_Val << TAMPER_LEVELD_LEVEL27_Pos) /* (TAMPER_LEVELD) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL27_SAFEMODE        (TAMPER_LEVELD_LEVEL27_SAFEMODE_Val << TAMPER_LEVELD_LEVEL27_Pos) /* (TAMPER_LEVELD) Enter Safe Mode Position  */
#define TAMPER_LEVELD_LEVEL27_ERSTKEY         (TAMPER_LEVELD_LEVEL27_ERSTKEY_Val << TAMPER_LEVELD_LEVEL27_Pos) /* (TAMPER_LEVELD) Erase Tamper Key Position  */
#define TAMPER_LEVELD_LEVEL27_ERSFKEY         (TAMPER_LEVELD_LEVEL27_ERSFKEY_Val << TAMPER_LEVELD_LEVEL27_Pos) /* (TAMPER_LEVELD) Erase Flash Key Position  */
#define TAMPER_LEVELD_LEVEL28_Pos             _UINT32_(16)                                         /* (TAMPER_LEVELD) Level 28 Position */
#define TAMPER_LEVELD_LEVEL28_Msk             (_UINT32_(0xF) << TAMPER_LEVELD_LEVEL28_Pos)         /* (TAMPER_LEVELD) Level 28 Mask */
#define TAMPER_LEVELD_LEVEL28(value)          (TAMPER_LEVELD_LEVEL28_Msk & (_UINT32_(value) << TAMPER_LEVELD_LEVEL28_Pos)) /* Assigment of value for LEVEL28 in the TAMPER_LEVELD register */
#define   TAMPER_LEVELD_LEVEL28_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELD) No Action  */
#define   TAMPER_LEVELD_LEVEL28_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELD) Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL28_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELD) Log Event and Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL28_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELD) Enter Safe Mode  */
#define   TAMPER_LEVELD_LEVEL28_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELD) Erase Tamper Key  */
#define   TAMPER_LEVELD_LEVEL28_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELD) Erase Flash Key  */
#define TAMPER_LEVELD_LEVEL28_NONE            (TAMPER_LEVELD_LEVEL28_NONE_Val << TAMPER_LEVELD_LEVEL28_Pos) /* (TAMPER_LEVELD) No Action Position  */
#define TAMPER_LEVELD_LEVEL28_HOSTIRQ         (TAMPER_LEVELD_LEVEL28_HOSTIRQ_Val << TAMPER_LEVELD_LEVEL28_Pos) /* (TAMPER_LEVELD) Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL28_LEHIRQ          (TAMPER_LEVELD_LEVEL28_LEHIRQ_Val << TAMPER_LEVELD_LEVEL28_Pos) /* (TAMPER_LEVELD) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL28_SAFEMODE        (TAMPER_LEVELD_LEVEL28_SAFEMODE_Val << TAMPER_LEVELD_LEVEL28_Pos) /* (TAMPER_LEVELD) Enter Safe Mode Position  */
#define TAMPER_LEVELD_LEVEL28_ERSTKEY         (TAMPER_LEVELD_LEVEL28_ERSTKEY_Val << TAMPER_LEVELD_LEVEL28_Pos) /* (TAMPER_LEVELD) Erase Tamper Key Position  */
#define TAMPER_LEVELD_LEVEL28_ERSFKEY         (TAMPER_LEVELD_LEVEL28_ERSFKEY_Val << TAMPER_LEVELD_LEVEL28_Pos) /* (TAMPER_LEVELD) Erase Flash Key Position  */
#define TAMPER_LEVELD_LEVEL29_Pos             _UINT32_(20)                                         /* (TAMPER_LEVELD) Level 29 Position */
#define TAMPER_LEVELD_LEVEL29_Msk             (_UINT32_(0xF) << TAMPER_LEVELD_LEVEL29_Pos)         /* (TAMPER_LEVELD) Level 29 Mask */
#define TAMPER_LEVELD_LEVEL29(value)          (TAMPER_LEVELD_LEVEL29_Msk & (_UINT32_(value) << TAMPER_LEVELD_LEVEL29_Pos)) /* Assigment of value for LEVEL29 in the TAMPER_LEVELD register */
#define   TAMPER_LEVELD_LEVEL29_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELD) No Action  */
#define   TAMPER_LEVELD_LEVEL29_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELD) Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL29_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELD) Log Event and Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL29_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELD) Enter Safe Mode  */
#define   TAMPER_LEVELD_LEVEL29_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELD) Erase Tamper Key  */
#define   TAMPER_LEVELD_LEVEL29_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELD) Erase Flash Key  */
#define TAMPER_LEVELD_LEVEL29_NONE            (TAMPER_LEVELD_LEVEL29_NONE_Val << TAMPER_LEVELD_LEVEL29_Pos) /* (TAMPER_LEVELD) No Action Position  */
#define TAMPER_LEVELD_LEVEL29_HOSTIRQ         (TAMPER_LEVELD_LEVEL29_HOSTIRQ_Val << TAMPER_LEVELD_LEVEL29_Pos) /* (TAMPER_LEVELD) Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL29_LEHIRQ          (TAMPER_LEVELD_LEVEL29_LEHIRQ_Val << TAMPER_LEVELD_LEVEL29_Pos) /* (TAMPER_LEVELD) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL29_SAFEMODE        (TAMPER_LEVELD_LEVEL29_SAFEMODE_Val << TAMPER_LEVELD_LEVEL29_Pos) /* (TAMPER_LEVELD) Enter Safe Mode Position  */
#define TAMPER_LEVELD_LEVEL29_ERSTKEY         (TAMPER_LEVELD_LEVEL29_ERSTKEY_Val << TAMPER_LEVELD_LEVEL29_Pos) /* (TAMPER_LEVELD) Erase Tamper Key Position  */
#define TAMPER_LEVELD_LEVEL29_ERSFKEY         (TAMPER_LEVELD_LEVEL29_ERSFKEY_Val << TAMPER_LEVELD_LEVEL29_Pos) /* (TAMPER_LEVELD) Erase Flash Key Position  */
#define TAMPER_LEVELD_LEVEL30_Pos             _UINT32_(24)                                         /* (TAMPER_LEVELD) Level 30 Position */
#define TAMPER_LEVELD_LEVEL30_Msk             (_UINT32_(0xF) << TAMPER_LEVELD_LEVEL30_Pos)         /* (TAMPER_LEVELD) Level 30 Mask */
#define TAMPER_LEVELD_LEVEL30(value)          (TAMPER_LEVELD_LEVEL30_Msk & (_UINT32_(value) << TAMPER_LEVELD_LEVEL30_Pos)) /* Assigment of value for LEVEL30 in the TAMPER_LEVELD register */
#define   TAMPER_LEVELD_LEVEL30_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELD) No Action  */
#define   TAMPER_LEVELD_LEVEL30_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELD) Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL30_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELD) Log Event and Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL30_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELD) Enter Safe Mode  */
#define   TAMPER_LEVELD_LEVEL30_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELD) Erase Tamper Key  */
#define   TAMPER_LEVELD_LEVEL30_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELD) Erase Flash Key  */
#define TAMPER_LEVELD_LEVEL30_NONE            (TAMPER_LEVELD_LEVEL30_NONE_Val << TAMPER_LEVELD_LEVEL30_Pos) /* (TAMPER_LEVELD) No Action Position  */
#define TAMPER_LEVELD_LEVEL30_HOSTIRQ         (TAMPER_LEVELD_LEVEL30_HOSTIRQ_Val << TAMPER_LEVELD_LEVEL30_Pos) /* (TAMPER_LEVELD) Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL30_LEHIRQ          (TAMPER_LEVELD_LEVEL30_LEHIRQ_Val << TAMPER_LEVELD_LEVEL30_Pos) /* (TAMPER_LEVELD) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL30_SAFEMODE        (TAMPER_LEVELD_LEVEL30_SAFEMODE_Val << TAMPER_LEVELD_LEVEL30_Pos) /* (TAMPER_LEVELD) Enter Safe Mode Position  */
#define TAMPER_LEVELD_LEVEL30_ERSTKEY         (TAMPER_LEVELD_LEVEL30_ERSTKEY_Val << TAMPER_LEVELD_LEVEL30_Pos) /* (TAMPER_LEVELD) Erase Tamper Key Position  */
#define TAMPER_LEVELD_LEVEL30_ERSFKEY         (TAMPER_LEVELD_LEVEL30_ERSFKEY_Val << TAMPER_LEVELD_LEVEL30_Pos) /* (TAMPER_LEVELD) Erase Flash Key Position  */
#define TAMPER_LEVELD_LEVEL31_Pos             _UINT32_(28)                                         /* (TAMPER_LEVELD) Level 31 Position */
#define TAMPER_LEVELD_LEVEL31_Msk             (_UINT32_(0xF) << TAMPER_LEVELD_LEVEL31_Pos)         /* (TAMPER_LEVELD) Level 31 Mask */
#define TAMPER_LEVELD_LEVEL31(value)          (TAMPER_LEVELD_LEVEL31_Msk & (_UINT32_(value) << TAMPER_LEVELD_LEVEL31_Pos)) /* Assigment of value for LEVEL31 in the TAMPER_LEVELD register */
#define   TAMPER_LEVELD_LEVEL31_NONE_Val      _UINT32_(0x0)                                        /* (TAMPER_LEVELD) No Action  */
#define   TAMPER_LEVELD_LEVEL31_HOSTIRQ_Val   _UINT32_(0x1)                                        /* (TAMPER_LEVELD) Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL31_LEHIRQ_Val    _UINT32_(0x2)                                        /* (TAMPER_LEVELD) Log Event and Host Interrupt  */
#define   TAMPER_LEVELD_LEVEL31_SAFEMODE_Val  _UINT32_(0x4)                                        /* (TAMPER_LEVELD) Enter Safe Mode  */
#define   TAMPER_LEVELD_LEVEL31_ERSTKEY_Val   _UINT32_(0x5)                                        /* (TAMPER_LEVELD) Erase Tamper Key  */
#define   TAMPER_LEVELD_LEVEL31_ERSFKEY_Val   _UINT32_(0x6)                                        /* (TAMPER_LEVELD) Erase Flash Key  */
#define TAMPER_LEVELD_LEVEL31_NONE            (TAMPER_LEVELD_LEVEL31_NONE_Val << TAMPER_LEVELD_LEVEL31_Pos) /* (TAMPER_LEVELD) No Action Position  */
#define TAMPER_LEVELD_LEVEL31_HOSTIRQ         (TAMPER_LEVELD_LEVEL31_HOSTIRQ_Val << TAMPER_LEVELD_LEVEL31_Pos) /* (TAMPER_LEVELD) Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL31_LEHIRQ          (TAMPER_LEVELD_LEVEL31_LEHIRQ_Val << TAMPER_LEVELD_LEVEL31_Pos) /* (TAMPER_LEVELD) Log Event and Host Interrupt Position  */
#define TAMPER_LEVELD_LEVEL31_SAFEMODE        (TAMPER_LEVELD_LEVEL31_SAFEMODE_Val << TAMPER_LEVELD_LEVEL31_Pos) /* (TAMPER_LEVELD) Enter Safe Mode Position  */
#define TAMPER_LEVELD_LEVEL31_ERSTKEY         (TAMPER_LEVELD_LEVEL31_ERSTKEY_Val << TAMPER_LEVELD_LEVEL31_Pos) /* (TAMPER_LEVELD) Erase Tamper Key Position  */
#define TAMPER_LEVELD_LEVEL31_ERSFKEY         (TAMPER_LEVELD_LEVEL31_ERSFKEY_Val << TAMPER_LEVELD_LEVEL31_Pos) /* (TAMPER_LEVELD) Erase Flash Key Position  */
#define TAMPER_LEVELD_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (TAMPER_LEVELD) Register Mask  */


/* -------- TAMPER_SETLEVEL : (TAMPER Offset: 0x10) ( /W 32) Set Level -------- */
#define TAMPER_SETLEVEL_RESETVALUE            _UINT32_(0x00)                                       /*  (TAMPER_SETLEVEL) Set Level  Reset Value */

#define TAMPER_SETLEVEL_TamperLevel_Pos       _UINT32_(0)                                          /* (TAMPER_SETLEVEL) Tamper Level Position */
#define TAMPER_SETLEVEL_TamperLevel_Msk       (_UINT32_(0x7) << TAMPER_SETLEVEL_TamperLevel_Pos)   /* (TAMPER_SETLEVEL) Tamper Level Mask */
#define TAMPER_SETLEVEL_TamperLevel(value)    (TAMPER_SETLEVEL_TamperLevel_Msk & (_UINT32_(value) << TAMPER_SETLEVEL_TamperLevel_Pos)) /* Assigment of value for TamperLevel in the TAMPER_SETLEVEL register */
#define TAMPER_SETLEVEL_TamperID_Pos          _UINT32_(8)                                          /* (TAMPER_SETLEVEL) Tamper ID Position */
#define TAMPER_SETLEVEL_TamperID_Msk          (_UINT32_(0x1F) << TAMPER_SETLEVEL_TamperID_Pos)     /* (TAMPER_SETLEVEL) Tamper ID Mask */
#define TAMPER_SETLEVEL_TamperID(value)       (TAMPER_SETLEVEL_TamperID_Msk & (_UINT32_(value) << TAMPER_SETLEVEL_TamperID_Pos)) /* Assigment of value for TamperID in the TAMPER_SETLEVEL register */
#define TAMPER_SETLEVEL_ProtectionKey_Pos     _UINT32_(16)                                         /* (TAMPER_SETLEVEL) Protection Key Position */
#define TAMPER_SETLEVEL_ProtectionKey_Msk     (_UINT32_(0xFFFF) << TAMPER_SETLEVEL_ProtectionKey_Pos) /* (TAMPER_SETLEVEL) Protection Key Mask */
#define TAMPER_SETLEVEL_ProtectionKey(value)  (TAMPER_SETLEVEL_ProtectionKey_Msk & (_UINT32_(value) << TAMPER_SETLEVEL_ProtectionKey_Pos)) /* Assigment of value for ProtectionKey in the TAMPER_SETLEVEL register */
#define TAMPER_SETLEVEL_Msk                   _UINT32_(0xFFFF1F07)                                 /* (TAMPER_SETLEVEL) Register Mask  */


/* -------- TAMPER_FILTERCFG : (TAMPER Offset: 0x14) (R/W 32) Filter Configuraiton -------- */
#define TAMPER_FILTERCFG_RESETVALUE           _UINT32_(0x00)                                       /*  (TAMPER_FILTERCFG) Filter Configuraiton  Reset Value */

#define TAMPER_FILTERCFG_Threshold_Pos        _UINT32_(0)                                          /* (TAMPER_FILTERCFG) Filter Threshold Position */
#define TAMPER_FILTERCFG_Threshold_Msk        (_UINT32_(0x7) << TAMPER_FILTERCFG_Threshold_Pos)    /* (TAMPER_FILTERCFG) Filter Threshold Mask */
#define TAMPER_FILTERCFG_Threshold(value)     (TAMPER_FILTERCFG_Threshold_Msk & (_UINT32_(value) << TAMPER_FILTERCFG_Threshold_Pos)) /* Assigment of value for Threshold in the TAMPER_FILTERCFG register */
#define TAMPER_FILTERCFG_Period_Pos           _UINT32_(8)                                          /* (TAMPER_FILTERCFG) Filter Period Position */
#define TAMPER_FILTERCFG_Period_Msk           (_UINT32_(0x1F) << TAMPER_FILTERCFG_Period_Pos)      /* (TAMPER_FILTERCFG) Filter Period Mask */
#define TAMPER_FILTERCFG_Period(value)        (TAMPER_FILTERCFG_Period_Msk & (_UINT32_(value) << TAMPER_FILTERCFG_Period_Pos)) /* Assigment of value for Period in the TAMPER_FILTERCFG register */
#define TAMPER_FILTERCFG_ProtectionKey_Pos    _UINT32_(16)                                         /* (TAMPER_FILTERCFG) Filter Protection Key Position */
#define TAMPER_FILTERCFG_ProtectionKey_Msk    (_UINT32_(0xFFFF) << TAMPER_FILTERCFG_ProtectionKey_Pos) /* (TAMPER_FILTERCFG) Filter Protection Key Mask */
#define TAMPER_FILTERCFG_ProtectionKey(value) (TAMPER_FILTERCFG_ProtectionKey_Msk & (_UINT32_(value) << TAMPER_FILTERCFG_ProtectionKey_Pos)) /* Assigment of value for ProtectionKey in the TAMPER_FILTERCFG register */
#define TAMPER_FILTERCFG_Msk                  _UINT32_(0xFFFF1F07)                                 /* (TAMPER_FILTERCFG) Register Mask  */


/* -------- TAMPER_SOFTTAMP : (TAMPER Offset: 0x18) (R/W 32) Soft Tamper -------- */
#define TAMPER_SOFTTAMP_RESETVALUE            _UINT32_(0x00)                                       /*  (TAMPER_SOFTTAMP) Soft Tamper  Reset Value */

#define TAMPER_SOFTTAMP_TamperActive_Pos      _UINT32_(0)                                          /* (TAMPER_SOFTTAMP) Tamper Active Position */
#define TAMPER_SOFTTAMP_TamperActive_Msk      (_UINT32_(0x1) << TAMPER_SOFTTAMP_TamperActive_Pos)  /* (TAMPER_SOFTTAMP) Tamper Active Mask */
#define TAMPER_SOFTTAMP_TamperActive(value)   (TAMPER_SOFTTAMP_TamperActive_Msk & (_UINT32_(value) << TAMPER_SOFTTAMP_TamperActive_Pos)) /* Assigment of value for TamperActive in the TAMPER_SOFTTAMP register */
#define TAMPER_SOFTTAMP_TamperID_Pos          _UINT32_(8)                                          /* (TAMPER_SOFTTAMP) Tamper ID Position */
#define TAMPER_SOFTTAMP_TamperID_Msk          (_UINT32_(0x1F) << TAMPER_SOFTTAMP_TamperID_Pos)     /* (TAMPER_SOFTTAMP) Tamper ID Mask */
#define TAMPER_SOFTTAMP_TamperID(value)       (TAMPER_SOFTTAMP_TamperID_Msk & (_UINT32_(value) << TAMPER_SOFTTAMP_TamperID_Pos)) /* Assigment of value for TamperID in the TAMPER_SOFTTAMP register */
#define TAMPER_SOFTTAMP_ProtectionKey_Pos     _UINT32_(16)                                         /* (TAMPER_SOFTTAMP) Protection Key Position */
#define TAMPER_SOFTTAMP_ProtectionKey_Msk     (_UINT32_(0xFFFF) << TAMPER_SOFTTAMP_ProtectionKey_Pos) /* (TAMPER_SOFTTAMP) Protection Key Mask */
#define TAMPER_SOFTTAMP_ProtectionKey(value)  (TAMPER_SOFTTAMP_ProtectionKey_Msk & (_UINT32_(value) << TAMPER_SOFTTAMP_ProtectionKey_Pos)) /* Assigment of value for ProtectionKey in the TAMPER_SOFTTAMP register */
#define TAMPER_SOFTTAMP_Msk                   _UINT32_(0xFFFF1F01)                                 /* (TAMPER_SOFTTAMP) Register Mask  */


/* -------- TAMPER_RAWSTAT : (TAMPER Offset: 0x1C) ( R/ 32) Raw Status -------- */
#define TAMPER_RAWSTAT_RESETVALUE             _UINT32_(0x00)                                       /*  (TAMPER_RAWSTAT) Raw Status  Reset Value */

#define TAMPER_RAWSTAT_Msk                    _UINT32_(0x00000000)                                 /* (TAMPER_RAWSTAT) Register Mask  */


/* -------- TAMPER_STAT : (TAMPER Offset: 0x20) (R/W 32) Status -------- */
#define TAMPER_STAT_RESETVALUE                _UINT32_(0x01)                                       /*  (TAMPER_STAT) Status  Reset Value */

#define TAMPER_STAT_Msk                       _UINT32_(0x00000000)                                 /* (TAMPER_STAT) Register Mask  */


/* -------- TAMPER_TIMESTAMP : (TAMPER Offset: 0x24) ( R/ 32) Time Stamp -------- */
#define TAMPER_TIMESTAMP_RESETVALUE           _UINT32_(0x00)                                       /*  (TAMPER_TIMESTAMP) Time Stamp  Reset Value */

#define TAMPER_TIMESTAMP_Msk                  _UINT32_(0x00000000)                                 /* (TAMPER_TIMESTAMP) Register Mask  */


/* -------- TAMPER_FILTERCNT : (TAMPER Offset: 0x28) ( R/ 32) Filter Count -------- */
#define TAMPER_FILTERCNT_RESETVALUE           _UINT32_(0x00)                                       /*  (TAMPER_FILTERCNT) Filter Count  Reset Value */

#define TAMPER_FILTERCNT_Msk                  _UINT32_(0x00000000)                                 /* (TAMPER_FILTERCNT) Register Mask  */


/* -------- TAMPER_SOFTINFO : (TAMPER Offset: 0x2C) (R/W 32) Soft Information -------- */
#define TAMPER_SOFTINFO_RESETVALUE            _UINT32_(0x00)                                       /*  (TAMPER_SOFTINFO) Soft Information  Reset Value */

#define TAMPER_SOFTINFO_Msk                   _UINT32_(0x00000000)                                 /* (TAMPER_SOFTINFO) Register Mask  */


/* -------- TAMPER_HOSTIRQ : (TAMPER Offset: 0x30) (R/W 32) Host Interrupt -------- */
#define TAMPER_HOSTIRQ_RESETVALUE             _UINT32_(0x00)                                       /*  (TAMPER_HOSTIRQ) Host Interrupt  Reset Value */

#define TAMPER_HOSTIRQ_Msk                    _UINT32_(0x00000000)                                 /* (TAMPER_HOSTIRQ) Register Mask  */


/* -------- TAMPER_SOFTRESET : (TAMPER Offset: 0x34) ( R/ 32) Soft Reset -------- */
#define TAMPER_SOFTRESET_RESETVALUE           _UINT32_(0x00)                                       /*  (TAMPER_SOFTRESET) Soft Reset  Reset Value */

#define TAMPER_SOFTRESET_Msk                  _UINT32_(0x00000000)                                 /* (TAMPER_SOFTRESET) Register Mask  */


/** \brief TAMPER register offsets definitions */
#define TAMPER_LEVELA_REG_OFST         _UINT32_(0x00)      /* (TAMPER_LEVELA) Level A Offset */
#define TAMPER_LEVELB_REG_OFST         _UINT32_(0x04)      /* (TAMPER_LEVELB) Level B Offset */
#define TAMPER_LEVELC_REG_OFST         _UINT32_(0x08)      /* (TAMPER_LEVELC) Level C Offset */
#define TAMPER_LEVELD_REG_OFST         _UINT32_(0x0C)      /* (TAMPER_LEVELD) Level D Offset */
#define TAMPER_SETLEVEL_REG_OFST       _UINT32_(0x10)      /* (TAMPER_SETLEVEL) Set Level Offset */
#define TAMPER_FILTERCFG_REG_OFST      _UINT32_(0x14)      /* (TAMPER_FILTERCFG) Filter Configuraiton Offset */
#define TAMPER_SOFTTAMP_REG_OFST       _UINT32_(0x18)      /* (TAMPER_SOFTTAMP) Soft Tamper Offset */
#define TAMPER_RAWSTAT_REG_OFST        _UINT32_(0x1C)      /* (TAMPER_RAWSTAT) Raw Status Offset */
#define TAMPER_STAT_REG_OFST           _UINT32_(0x20)      /* (TAMPER_STAT) Status Offset */
#define TAMPER_TIMESTAMP_REG_OFST      _UINT32_(0x24)      /* (TAMPER_TIMESTAMP) Time Stamp Offset */
#define TAMPER_FILTERCNT_REG_OFST      _UINT32_(0x28)      /* (TAMPER_FILTERCNT) Filter Count Offset */
#define TAMPER_SOFTINFO_REG_OFST       _UINT32_(0x2C)      /* (TAMPER_SOFTINFO) Soft Information Offset */
#define TAMPER_HOSTIRQ_REG_OFST        _UINT32_(0x30)      /* (TAMPER_HOSTIRQ) Host Interrupt Offset */
#define TAMPER_SOFTRESET_REG_OFST      _UINT32_(0x34)      /* (TAMPER_SOFTRESET) Soft Reset Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TAMPER register API structure */
typedef struct
{  /* eSecure IP Core Anti-tampering */
  __I   uint32_t                       TAMPER_LEVELA;      /**< Offset: 0x00 (R/   32) Level A */
  __I   uint32_t                       TAMPER_LEVELB;      /**< Offset: 0x04 (R/   32) Level B */
  __I   uint32_t                       TAMPER_LEVELC;      /**< Offset: 0x08 (R/   32) Level C */
  __I   uint32_t                       TAMPER_LEVELD;      /**< Offset: 0x0C (R/   32) Level D */
  __O   uint32_t                       TAMPER_SETLEVEL;    /**< Offset: 0x10 ( /W  32) Set Level */
  __IO  uint32_t                       TAMPER_FILTERCFG;   /**< Offset: 0x14 (R/W  32) Filter Configuraiton */
  __IO  uint32_t                       TAMPER_SOFTTAMP;    /**< Offset: 0x18 (R/W  32) Soft Tamper */
  __I   uint32_t                       TAMPER_RAWSTAT;     /**< Offset: 0x1C (R/   32) Raw Status */
  __IO  uint32_t                       TAMPER_STAT;        /**< Offset: 0x20 (R/W  32) Status */
  __I   uint32_t                       TAMPER_TIMESTAMP;   /**< Offset: 0x24 (R/   32) Time Stamp */
  __I   uint32_t                       TAMPER_FILTERCNT;   /**< Offset: 0x28 (R/   32) Filter Count */
  __IO  uint32_t                       TAMPER_SOFTINFO;    /**< Offset: 0x2C (R/W  32) Soft Information */
  __IO  uint32_t                       TAMPER_HOSTIRQ;     /**< Offset: 0x30 (R/W  32) Host Interrupt */
  __I   uint32_t                       TAMPER_SOFTRESET;   /**< Offset: 0x34 (R/   32) Soft Reset */
} tamper_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CKSG01_TAMPER_COMPONENT_H_ */
