/*
 * Component description for SPI_MON
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
#ifndef _CEC_SPI_MON_COMPONENT_H_
#define _CEC_SPI_MON_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SPI_MON                                      */
/* ************************************************************************** */

/* -------- SPI_MON_OP_PRMT : (SPI_MON Offset: 0x00) (R/W 32) Permit Address Register -------- */
#define SPI_MON_OP_PRMT_RESETVALUE            _UINT32_(0x00)                                       /*  (SPI_MON_OP_PRMT) Permit Address Register  Reset Value */

#define SPI_MON_OP_PRMT_PRMT_Pos              _UINT32_(0)                                          /* (SPI_MON_OP_PRMT) Permit. Each array organized into 8 32-bit registers set per Flash device.    1 = Permit, and if not recognized then ignore.     0 = Kill immediately upon seeing this opcode. Position */
#define SPI_MON_OP_PRMT_PRMT_Msk              (_UINT32_(0xFFFFFFFF) << SPI_MON_OP_PRMT_PRMT_Pos)   /* (SPI_MON_OP_PRMT) Permit. Each array organized into 8 32-bit registers set per Flash device.    1 = Permit, and if not recognized then ignore.     0 = Kill immediately upon seeing this opcode. Mask */
#define SPI_MON_OP_PRMT_PRMT(value)           (SPI_MON_OP_PRMT_PRMT_Msk & (_UINT32_(value) << SPI_MON_OP_PRMT_PRMT_Pos)) /* Assigment of value for PRMT in the SPI_MON_OP_PRMT register */
#define SPI_MON_OP_PRMT_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (SPI_MON_OP_PRMT) Register Mask  */


/* -------- SPI_MON_OP_KILLMD : (SPI_MON Offset: 0x20) (R/W 32) Kill Address Register -------- */
#define SPI_MON_OP_KILLMD_RESETVALUE          _UINT32_(0x00)                                       /*  (SPI_MON_OP_KILLMD) Kill Address Register  Reset Value */

#define SPI_MON_OP_KILLMD_KILL_Pos            _UINT32_(0)                                          /* (SPI_MON_OP_KILLMD) Kill. Each array organized into 8 32-bit registers set per Flash device.    1 = If Killed, then kill as a Write: Holding CS# low.    0 = If Killed, then kill as a Read: Force CS# high first. Position */
#define SPI_MON_OP_KILLMD_KILL_Msk            (_UINT32_(0xFFFFFFFF) << SPI_MON_OP_KILLMD_KILL_Pos) /* (SPI_MON_OP_KILLMD) Kill. Each array organized into 8 32-bit registers set per Flash device.    1 = If Killed, then kill as a Write: Holding CS# low.    0 = If Killed, then kill as a Read: Force CS# high first. Mask */
#define SPI_MON_OP_KILLMD_KILL(value)         (SPI_MON_OP_KILLMD_KILL_Msk & (_UINT32_(value) << SPI_MON_OP_KILLMD_KILL_Pos)) /* Assigment of value for KILL in the SPI_MON_OP_KILLMD register */
#define SPI_MON_OP_KILLMD_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (SPI_MON_OP_KILLMD) Register Mask  */


/* -------- SPI_MON_OP_WPROT : (SPI_MON Offset: 0x40) (R/W 32) Write Protect Address Register -------- */
#define SPI_MON_OP_WPROT_RESETVALUE           _UINT32_(0x00)                                       /*  (SPI_MON_OP_WPROT) Write Protect Address Register  Reset Value */

#define SPI_MON_OP_WPROT_WPROT_Pos            _UINT32_(0)                                          /* (SPI_MON_OP_WPROT) Write Protect. Each array organized into 8 32-bit registers set per Flash device.    1 = Make the corresponding bits RO in Permit and Killmd regs.    0 = Corresponding bits are R/W. Position */
#define SPI_MON_OP_WPROT_WPROT_Msk            (_UINT32_(0xFFFFFFFF) << SPI_MON_OP_WPROT_WPROT_Pos) /* (SPI_MON_OP_WPROT) Write Protect. Each array organized into 8 32-bit registers set per Flash device.    1 = Make the corresponding bits RO in Permit and Killmd regs.    0 = Corresponding bits are R/W. Mask */
#define SPI_MON_OP_WPROT_WPROT(value)         (SPI_MON_OP_WPROT_WPROT_Msk & (_UINT32_(value) << SPI_MON_OP_WPROT_WPROT_Pos)) /* Assigment of value for WPROT in the SPI_MON_OP_WPROT register */
#define SPI_MON_OP_WPROT_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SPI_MON_OP_WPROT) Register Mask  */


/* -------- SPI_MON_OP_LOCK : (SPI_MON Offset: 0x60) (R/W 32) Lock Address Register -------- */
#define SPI_MON_OP_LOCK_RESETVALUE            _UINT32_(0x00)                                       /*  (SPI_MON_OP_LOCK) Lock Address Register  Reset Value */

#define SPI_MON_OP_LOCK_LOCK_Pos              _UINT32_(0)                                          /* (SPI_MON_OP_LOCK) Lock. Each array organized into 8 32-bit registers set per Flash device.    1 = Make the corresponding bits RO in Permit and Killmd regs, overriding the Wprot register. Any 1 bit in this register is locked.    0 = Corresponding bits are R/W or RO, as determined by the Wprot register. Position */
#define SPI_MON_OP_LOCK_LOCK_Msk              (_UINT32_(0xFFFFFFFF) << SPI_MON_OP_LOCK_LOCK_Pos)   /* (SPI_MON_OP_LOCK) Lock. Each array organized into 8 32-bit registers set per Flash device.    1 = Make the corresponding bits RO in Permit and Killmd regs, overriding the Wprot register. Any 1 bit in this register is locked.    0 = Corresponding bits are R/W or RO, as determined by the Wprot register. Mask */
#define SPI_MON_OP_LOCK_LOCK(value)           (SPI_MON_OP_LOCK_LOCK_Msk & (_UINT32_(value) << SPI_MON_OP_LOCK_LOCK_Pos)) /* Assigment of value for LOCK in the SPI_MON_OP_LOCK register */
#define SPI_MON_OP_LOCK_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (SPI_MON_OP_LOCK) Register Mask  */


/* -------- SPI_MON_RT_START : (SPI_MON Offset: 0x00) (R/W 32) Runtime Monitoring Start Register -------- */
#define SPI_MON_RT_START_RESETVALUE           _UINT32_(0x00)                                       /*  (SPI_MON_RT_START) Runtime Monitoring Start Register  Reset Value */

#define SPI_MON_RT_START_STRT_Pos             _UINT32_(0)                                          /* (SPI_MON_RT_START) A Flash address shifted by 12 (4K byte units). Bottom 12 address bits are 000h Position */
#define SPI_MON_RT_START_STRT_Msk             (_UINT32_(0xFFFFF) << SPI_MON_RT_START_STRT_Pos)     /* (SPI_MON_RT_START) A Flash address shifted by 12 (4K byte units). Bottom 12 address bits are 000h Mask */
#define SPI_MON_RT_START_STRT(value)          (SPI_MON_RT_START_STRT_Msk & (_UINT32_(value) << SPI_MON_RT_START_STRT_Pos)) /* Assigment of value for STRT in the SPI_MON_RT_START register */
#define SPI_MON_RT_START_E32_Pos              _UINT32_(24)                                         /* (SPI_MON_RT_START) Enable 32KByte Erase opcode for this region. 0 = Disable, 1 = Enable Position */
#define SPI_MON_RT_START_E32_Msk              (_UINT32_(0x1) << SPI_MON_RT_START_E32_Pos)          /* (SPI_MON_RT_START) Enable 32KByte Erase opcode for this region. 0 = Disable, 1 = Enable Mask */
#define SPI_MON_RT_START_E32(value)           (SPI_MON_RT_START_E32_Msk & (_UINT32_(value) << SPI_MON_RT_START_E32_Pos)) /* Assigment of value for E32 in the SPI_MON_RT_START register */
#define SPI_MON_RT_START_E64_Pos              _UINT32_(25)                                         /* (SPI_MON_RT_START) Enable 64KByte Erase opcode for this region. 0 = Disable, 1 = Enable Position */
#define SPI_MON_RT_START_E64_Msk              (_UINT32_(0x1) << SPI_MON_RT_START_E64_Pos)          /* (SPI_MON_RT_START) Enable 64KByte Erase opcode for this region. 0 = Disable, 1 = Enable Mask */
#define SPI_MON_RT_START_E64(value)           (SPI_MON_RT_START_E64_Msk & (_UINT32_(value) << SPI_MON_RT_START_E64_Pos)) /* Assigment of value for E64 in the SPI_MON_RT_START register */
#define SPI_MON_RT_START_DV_Pos               _UINT32_(27)                                         /* (SPI_MON_RT_START) Flash Device 0 = CS0#, 1 = CS1#. Position */
#define SPI_MON_RT_START_DV_Msk               (_UINT32_(0x1) << SPI_MON_RT_START_DV_Pos)           /* (SPI_MON_RT_START) Flash Device 0 = CS0#, 1 = CS1#. Mask */
#define SPI_MON_RT_START_DV(value)            (SPI_MON_RT_START_DV_Msk & (_UINT32_(value) << SPI_MON_RT_START_DV_Pos)) /* Assigment of value for DV in the SPI_MON_RT_START register */
#define SPI_MON_RT_START_RD_Pos               _UINT32_(28)                                         /* (SPI_MON_RT_START) Read Allowed for Region. 0 = No, 1 = Yes Position */
#define SPI_MON_RT_START_RD_Msk               (_UINT32_(0x1) << SPI_MON_RT_START_RD_Pos)           /* (SPI_MON_RT_START) Read Allowed for Region. 0 = No, 1 = Yes Mask */
#define SPI_MON_RT_START_RD(value)            (SPI_MON_RT_START_RD_Msk & (_UINT32_(value) << SPI_MON_RT_START_RD_Pos)) /* Assigment of value for RD in the SPI_MON_RT_START register */
#define SPI_MON_RT_START_WR_Pos               _UINT32_(29)                                         /* (SPI_MON_RT_START) Write Allowed for Region. 0 = No, 1 = Yes Position */
#define SPI_MON_RT_START_WR_Msk               (_UINT32_(0x1) << SPI_MON_RT_START_WR_Pos)           /* (SPI_MON_RT_START) Write Allowed for Region. 0 = No, 1 = Yes Mask */
#define SPI_MON_RT_START_WR(value)            (SPI_MON_RT_START_WR_Msk & (_UINT32_(value) << SPI_MON_RT_START_WR_Pos)) /* Assigment of value for WR in the SPI_MON_RT_START register */
#define SPI_MON_RT_START_EN_Pos               _UINT32_(31)                                         /* (SPI_MON_RT_START) Enable Register Pair for Monitoring. 0 = No, 1 = Yes Position */
#define SPI_MON_RT_START_EN_Msk               (_UINT32_(0x1) << SPI_MON_RT_START_EN_Pos)           /* (SPI_MON_RT_START) Enable Register Pair for Monitoring. 0 = No, 1 = Yes Mask */
#define SPI_MON_RT_START_EN(value)            (SPI_MON_RT_START_EN_Msk & (_UINT32_(value) << SPI_MON_RT_START_EN_Pos)) /* Assigment of value for EN in the SPI_MON_RT_START register */
#define SPI_MON_RT_START_Msk                  _UINT32_(0xBB0FFFFF)                                 /* (SPI_MON_RT_START) Register Mask  */

#define SPI_MON_RT_START_E_Pos                _UINT32_(24)                                         /* (SPI_MON_RT_START Position) Enable 32KByte Erase opcode for this region. x = Disable, x = Enable */
#define SPI_MON_RT_START_E_Msk                (_UINT32_(0x3) << SPI_MON_RT_START_E_Pos)            /* (SPI_MON_RT_START Mask) E */
#define SPI_MON_RT_START_E(value)             (SPI_MON_RT_START_E_Msk & (_UINT32_(value) << SPI_MON_RT_START_E_Pos)) 

/* -------- SPI_MON_RT_LIMIT : (SPI_MON Offset: 0x04) (R/W 32) Runtime Monitoring Limit Register -------- */
#define SPI_MON_RT_LIMIT_RESETVALUE           _UINT32_(0x00)                                       /*  (SPI_MON_RT_LIMIT) Runtime Monitoring Limit Register  Reset Value */

#define SPI_MON_RT_LIMIT_LMT_Pos              _UINT32_(0)                                          /* (SPI_MON_RT_LIMIT) Limit Register Position */
#define SPI_MON_RT_LIMIT_LMT_Msk              (_UINT32_(0xFFFFF) << SPI_MON_RT_LIMIT_LMT_Pos)      /* (SPI_MON_RT_LIMIT) Limit Register Mask */
#define SPI_MON_RT_LIMIT_LMT(value)           (SPI_MON_RT_LIMIT_LMT_Msk & (_UINT32_(value) << SPI_MON_RT_LIMIT_LMT_Pos)) /* Assigment of value for LMT in the SPI_MON_RT_LIMIT register */
#define SPI_MON_RT_LIMIT_Msk                  _UINT32_(0x000FFFFF)                                 /* (SPI_MON_RT_LIMIT) Register Mask  */


/* -------- SPI_MON_MTMON_BEGIN : (SPI_MON Offset: 0x00) (R/W 32) Match Monitor Region Begin Register -------- */
#define SPI_MON_MTMON_BEGIN_RESETVALUE        _UINT32_(0x00)                                       /*  (SPI_MON_MTMON_BEGIN) Match Monitor Region Begin Register  Reset Value */

#define SPI_MON_MTMON_BEGIN_BGN_Pos           _UINT32_(0)                                          /* (SPI_MON_MTMON_BEGIN) The 19 bits of base address within the designated SPI Flash, specifying the last aligned 8K block. Position */
#define SPI_MON_MTMON_BEGIN_BGN_Msk           (_UINT32_(0x7FFFF) << SPI_MON_MTMON_BEGIN_BGN_Pos)   /* (SPI_MON_MTMON_BEGIN) The 19 bits of base address within the designated SPI Flash, specifying the last aligned 8K block. Mask */
#define SPI_MON_MTMON_BEGIN_BGN(value)        (SPI_MON_MTMON_BEGIN_BGN_Msk & (_UINT32_(value) << SPI_MON_MTMON_BEGIN_BGN_Pos)) /* Assigment of value for BGN in the SPI_MON_MTMON_BEGIN register */
#define SPI_MON_MTMON_BEGIN_DV_Pos            _UINT32_(31)                                         /* (SPI_MON_MTMON_BEGIN) Flash Device number, applying to both Begin and End fields 0 = CS0#, 1 = CS1# Position */
#define SPI_MON_MTMON_BEGIN_DV_Msk            (_UINT32_(0x1) << SPI_MON_MTMON_BEGIN_DV_Pos)        /* (SPI_MON_MTMON_BEGIN) Flash Device number, applying to both Begin and End fields 0 = CS0#, 1 = CS1# Mask */
#define SPI_MON_MTMON_BEGIN_DV(value)         (SPI_MON_MTMON_BEGIN_DV_Msk & (_UINT32_(value) << SPI_MON_MTMON_BEGIN_DV_Pos)) /* Assigment of value for DV in the SPI_MON_MTMON_BEGIN register */
#define SPI_MON_MTMON_BEGIN_Msk               _UINT32_(0x8007FFFF)                                 /* (SPI_MON_MTMON_BEGIN) Register Mask  */


/* -------- SPI_MON_MTMON_END : (SPI_MON Offset: 0x04) (R/W 32) Match Monitor Region End Register -------- */
#define SPI_MON_MTMON_END_RESETVALUE          _UINT32_(0x00)                                       /*  (SPI_MON_MTMON_END) Match Monitor Region End Register  Reset Value */

#define SPI_MON_MTMON_END_END_Pos             _UINT32_(0)                                          /* (SPI_MON_MTMON_END) The 19 bits of base address within the designated SPI Flash, specifying the last aligned 8K block. Position */
#define SPI_MON_MTMON_END_END_Msk             (_UINT32_(0x7FFFF) << SPI_MON_MTMON_END_END_Pos)     /* (SPI_MON_MTMON_END) The 19 bits of base address within the designated SPI Flash, specifying the last aligned 8K block. Mask */
#define SPI_MON_MTMON_END_END(value)          (SPI_MON_MTMON_END_END_Msk & (_UINT32_(value) << SPI_MON_MTMON_END_END_Pos)) /* Assigment of value for END in the SPI_MON_MTMON_END register */
#define SPI_MON_MTMON_END_Msk                 _UINT32_(0x0007FFFF)                                 /* (SPI_MON_MTMON_END) Register Mask  */


/* -------- SPI_MON_MAP : (SPI_MON Offset: 0x08) (R/W 32) Match Monitor Region Map Register -------- */
#define SPI_MON_MAP_RESETVALUE                _UINT32_(0x00)                                       /*  (SPI_MON_MAP) Match Monitor Region Map Register  Reset Value */

#define SPI_MON_MAP_MAP_Pos                   _UINT32_(0)                                          /* (SPI_MON_MAP) The 19 bits of base address within the designated SPI Flash, specifying the last aligned 8K block. Position */
#define SPI_MON_MAP_MAP_Msk                   (_UINT32_(0x7FFFF) << SPI_MON_MAP_MAP_Pos)           /* (SPI_MON_MAP) The 19 bits of base address within the designated SPI Flash, specifying the last aligned 8K block. Mask */
#define SPI_MON_MAP_MAP(value)                (SPI_MON_MAP_MAP_Msk & (_UINT32_(value) << SPI_MON_MAP_MAP_Pos)) /* Assigment of value for MAP in the SPI_MON_MAP register */
#define SPI_MON_MAP_ME_Pos                    _UINT32_(31)                                         /* (SPI_MON_MAP) Match Enable for individual Region R Position */
#define SPI_MON_MAP_ME_Msk                    (_UINT32_(0x1) << SPI_MON_MAP_ME_Pos)                /* (SPI_MON_MAP) Match Enable for individual Region R Mask */
#define SPI_MON_MAP_ME(value)                 (SPI_MON_MAP_ME_Msk & (_UINT32_(value) << SPI_MON_MAP_ME_Pos)) /* Assigment of value for ME in the SPI_MON_MAP register */
#define SPI_MON_MAP_Msk                       _UINT32_(0x8007FFFF)                                 /* (SPI_MON_MAP) Register Mask  */


/* -------- SPI_MON_LM_CTRLSTS : (SPI_MON Offset: 0x00) (R/W 32) Loadtime Monitor Control/Status Register -------- */
#define SPI_MON_LM_CTRLSTS_RESETVALUE         _UINT32_(0x00)                                       /*  (SPI_MON_LM_CTRLSTS) Loadtime Monitor Control/Status Register  Reset Value */

#define SPI_MON_LM_CTRLSTS_W_Pos              _UINT32_(0)                                          /* (SPI_MON_LM_CTRLSTS) Waiting Position */
#define SPI_MON_LM_CTRLSTS_W_Msk              (_UINT32_(0x1) << SPI_MON_LM_CTRLSTS_W_Pos)          /* (SPI_MON_LM_CTRLSTS) Waiting Mask */
#define SPI_MON_LM_CTRLSTS_W(value)           (SPI_MON_LM_CTRLSTS_W_Msk & (_UINT32_(value) << SPI_MON_LM_CTRLSTS_W_Pos)) /* Assigment of value for W in the SPI_MON_LM_CTRLSTS register */
#define SPI_MON_LM_CTRLSTS_B_Pos              _UINT32_(1)                                          /* (SPI_MON_LM_CTRLSTS) Begin Byte seen Position */
#define SPI_MON_LM_CTRLSTS_B_Msk              (_UINT32_(0x1) << SPI_MON_LM_CTRLSTS_B_Pos)          /* (SPI_MON_LM_CTRLSTS) Begin Byte seen Mask */
#define SPI_MON_LM_CTRLSTS_B(value)           (SPI_MON_LM_CTRLSTS_B_Msk & (_UINT32_(value) << SPI_MON_LM_CTRLSTS_B_Pos)) /* Assigment of value for B in the SPI_MON_LM_CTRLSTS register */
#define SPI_MON_LM_CTRLSTS_E_Pos              _UINT32_(2)                                          /* (SPI_MON_LM_CTRLSTS) End Byte seen Position */
#define SPI_MON_LM_CTRLSTS_E_Msk              (_UINT32_(0x1) << SPI_MON_LM_CTRLSTS_E_Pos)          /* (SPI_MON_LM_CTRLSTS) End Byte seen Mask */
#define SPI_MON_LM_CTRLSTS_E(value)           (SPI_MON_LM_CTRLSTS_E_Msk & (_UINT32_(value) << SPI_MON_LM_CTRLSTS_E_Pos)) /* Assigment of value for E in the SPI_MON_LM_CTRLSTS register */
#define SPI_MON_LM_CTRLSTS_F_Pos              _UINT32_(3)                                          /* (SPI_MON_LM_CTRLSTS) Finalized and result ready Position */
#define SPI_MON_LM_CTRLSTS_F_Msk              (_UINT32_(0x1) << SPI_MON_LM_CTRLSTS_F_Pos)          /* (SPI_MON_LM_CTRLSTS) Finalized and result ready Mask */
#define SPI_MON_LM_CTRLSTS_F(value)           (SPI_MON_LM_CTRLSTS_F_Msk & (_UINT32_(value) << SPI_MON_LM_CTRLSTS_F_Pos)) /* Assigment of value for F in the SPI_MON_LM_CTRLSTS register */
#define SPI_MON_LM_CTRLSTS_W_INTEN_Pos        _UINT32_(8)                                          /* (SPI_MON_LM_CTRLSTS) Enable Waiting Interrupt Position */
#define SPI_MON_LM_CTRLSTS_W_INTEN_Msk        (_UINT32_(0x1) << SPI_MON_LM_CTRLSTS_W_INTEN_Pos)    /* (SPI_MON_LM_CTRLSTS) Enable Waiting Interrupt Mask */
#define SPI_MON_LM_CTRLSTS_W_INTEN(value)     (SPI_MON_LM_CTRLSTS_W_INTEN_Msk & (_UINT32_(value) << SPI_MON_LM_CTRLSTS_W_INTEN_Pos)) /* Assigment of value for W_INTEN in the SPI_MON_LM_CTRLSTS register */
#define SPI_MON_LM_CTRLSTS_B_INTEN_Pos        _UINT32_(9)                                          /* (SPI_MON_LM_CTRLSTS) Enable Begin Byte seen Interrupt Position */
#define SPI_MON_LM_CTRLSTS_B_INTEN_Msk        (_UINT32_(0x1) << SPI_MON_LM_CTRLSTS_B_INTEN_Pos)    /* (SPI_MON_LM_CTRLSTS) Enable Begin Byte seen Interrupt Mask */
#define SPI_MON_LM_CTRLSTS_B_INTEN(value)     (SPI_MON_LM_CTRLSTS_B_INTEN_Msk & (_UINT32_(value) << SPI_MON_LM_CTRLSTS_B_INTEN_Pos)) /* Assigment of value for B_INTEN in the SPI_MON_LM_CTRLSTS register */
#define SPI_MON_LM_CTRLSTS_E_INTEN_Pos        _UINT32_(10)                                         /* (SPI_MON_LM_CTRLSTS) Enable End Byte seen Interrupt Position */
#define SPI_MON_LM_CTRLSTS_E_INTEN_Msk        (_UINT32_(0x1) << SPI_MON_LM_CTRLSTS_E_INTEN_Pos)    /* (SPI_MON_LM_CTRLSTS) Enable End Byte seen Interrupt Mask */
#define SPI_MON_LM_CTRLSTS_E_INTEN(value)     (SPI_MON_LM_CTRLSTS_E_INTEN_Msk & (_UINT32_(value) << SPI_MON_LM_CTRLSTS_E_INTEN_Pos)) /* Assigment of value for E_INTEN in the SPI_MON_LM_CTRLSTS register */
#define SPI_MON_LM_CTRLSTS_F_INTEN_Pos        _UINT32_(11)                                         /* (SPI_MON_LM_CTRLSTS) Enable Finalized and result ready Interrupt Position */
#define SPI_MON_LM_CTRLSTS_F_INTEN_Msk        (_UINT32_(0x1) << SPI_MON_LM_CTRLSTS_F_INTEN_Pos)    /* (SPI_MON_LM_CTRLSTS) Enable Finalized and result ready Interrupt Mask */
#define SPI_MON_LM_CTRLSTS_F_INTEN(value)     (SPI_MON_LM_CTRLSTS_F_INTEN_Msk & (_UINT32_(value) << SPI_MON_LM_CTRLSTS_F_INTEN_Pos)) /* Assigment of value for F_INTEN in the SPI_MON_LM_CTRLSTS register */
#define SPI_MON_LM_CTRLSTS_Msk                _UINT32_(0x00000F0F)                                 /* (SPI_MON_LM_CTRLSTS) Register Mask  */


/* -------- SPI_MON_LM_CHN_CTRL : (SPI_MON Offset: 0x04) (R/W 32) Loadtime Monitor Channel Control Register -------- */
#define SPI_MON_LM_CHN_CTRL_RESETVALUE        _UINT32_(0x00)                                       /*  (SPI_MON_LM_CHN_CTRL) Loadtime Monitor Channel Control Register  Reset Value */

#define SPI_MON_LM_CHN_CTRL_GO_Pos            _UINT32_(0)                                          /* (SPI_MON_LM_CHN_CTRL) GO: Run the Load Monitor for this channel Position */
#define SPI_MON_LM_CHN_CTRL_GO_Msk            (_UINT32_(0x1) << SPI_MON_LM_CHN_CTRL_GO_Pos)        /* (SPI_MON_LM_CHN_CTRL) GO: Run the Load Monitor for this channel Mask */
#define SPI_MON_LM_CHN_CTRL_GO(value)         (SPI_MON_LM_CHN_CTRL_GO_Msk & (_UINT32_(value) << SPI_MON_LM_CHN_CTRL_GO_Pos)) /* Assigment of value for GO in the SPI_MON_LM_CHN_CTRL register */
#define SPI_MON_LM_CHN_CTRL_RST_Pos           _UINT32_(1)                                          /* (SPI_MON_LM_CHN_CTRL) RST: Stop and Reset calculation for this channel when set to 1 Position */
#define SPI_MON_LM_CHN_CTRL_RST_Msk           (_UINT32_(0x1) << SPI_MON_LM_CHN_CTRL_RST_Pos)       /* (SPI_MON_LM_CHN_CTRL) RST: Stop and Reset calculation for this channel when set to 1 Mask */
#define SPI_MON_LM_CHN_CTRL_RST(value)        (SPI_MON_LM_CHN_CTRL_RST_Msk & (_UINT32_(value) << SPI_MON_LM_CHN_CTRL_RST_Pos)) /* Assigment of value for RST in the SPI_MON_LM_CHN_CTRL register */
#define SPI_MON_LM_CHN_CTRL_RSF_Pos           _UINT32_(2)                                          /* (SPI_MON_LM_CHN_CTRL) RSF: Reset just Result FIFO pointer when this bit is set to 1 Position */
#define SPI_MON_LM_CHN_CTRL_RSF_Msk           (_UINT32_(0x1) << SPI_MON_LM_CHN_CTRL_RSF_Pos)       /* (SPI_MON_LM_CHN_CTRL) RSF: Reset just Result FIFO pointer when this bit is set to 1 Mask */
#define SPI_MON_LM_CHN_CTRL_RSF(value)        (SPI_MON_LM_CHN_CTRL_RSF_Msk & (_UINT32_(value) << SPI_MON_LM_CHN_CTRL_RSF_Pos)) /* Assigment of value for RSF in the SPI_MON_LM_CHN_CTRL register */
#define SPI_MON_LM_CHN_CTRL_FPTR_Pos          _UINT32_(8)                                          /* (SPI_MON_LM_CHN_CTRL) FPTR: Result FIFO pointer. In 32Bit. Ranges: 0 to 11 for SHA-384 result 0 to 7 for SHA-256 result Position */
#define SPI_MON_LM_CHN_CTRL_FPTR_Msk          (_UINT32_(0xF) << SPI_MON_LM_CHN_CTRL_FPTR_Pos)      /* (SPI_MON_LM_CHN_CTRL) FPTR: Result FIFO pointer. In 32Bit. Ranges: 0 to 11 for SHA-384 result 0 to 7 for SHA-256 result Mask */
#define SPI_MON_LM_CHN_CTRL_FPTR(value)       (SPI_MON_LM_CHN_CTRL_FPTR_Msk & (_UINT32_(value) << SPI_MON_LM_CHN_CTRL_FPTR_Pos)) /* Assigment of value for FPTR in the SPI_MON_LM_CHN_CTRL register */
#define SPI_MON_LM_CHN_CTRL_Msk               _UINT32_(0x00000F07)                                 /* (SPI_MON_LM_CHN_CTRL) Register Mask  */


/* -------- SPI_MON_LM_BEGIN : (SPI_MON Offset: 0x08) (R/W 32) Loadtime Monitor Channel Begin Register -------- */
#define SPI_MON_LM_BEGIN_RESETVALUE           _UINT32_(0x00)                                       /*  (SPI_MON_LM_BEGIN) Loadtime Monitor Channel Begin Register  Reset Value */

#define SPI_MON_LM_BEGIN_BADDR_Pos            _UINT32_(0)                                          /* (SPI_MON_LM_BEGIN) A byte address within the designated Flash, specifying the first byte of the load image. Position */
#define SPI_MON_LM_BEGIN_BADDR_Msk            (_UINT32_(0x7FFFFFFF) << SPI_MON_LM_BEGIN_BADDR_Pos) /* (SPI_MON_LM_BEGIN) A byte address within the designated Flash, specifying the first byte of the load image. Mask */
#define SPI_MON_LM_BEGIN_BADDR(value)         (SPI_MON_LM_BEGIN_BADDR_Msk & (_UINT32_(value) << SPI_MON_LM_BEGIN_BADDR_Pos)) /* Assigment of value for BADDR in the SPI_MON_LM_BEGIN register */
#define SPI_MON_LM_BEGIN_DV_Pos               _UINT32_(31)                                         /* (SPI_MON_LM_BEGIN) Flash Device number, applying to both Begin and End fields. 0 = CS0#, 1 = CS1# Position */
#define SPI_MON_LM_BEGIN_DV_Msk               (_UINT32_(0x1) << SPI_MON_LM_BEGIN_DV_Pos)           /* (SPI_MON_LM_BEGIN) Flash Device number, applying to both Begin and End fields. 0 = CS0#, 1 = CS1# Mask */
#define SPI_MON_LM_BEGIN_DV(value)            (SPI_MON_LM_BEGIN_DV_Msk & (_UINT32_(value) << SPI_MON_LM_BEGIN_DV_Pos)) /* Assigment of value for DV in the SPI_MON_LM_BEGIN register */
#define SPI_MON_LM_BEGIN_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SPI_MON_LM_BEGIN) Register Mask  */


/* -------- SPI_MON_LM_END : (SPI_MON Offset: 0x0C) (R/W 32) Loadtime Monitor Channel End Register -------- */
#define SPI_MON_LM_END_RESETVALUE             _UINT32_(0x00)                                       /*  (SPI_MON_LM_END) Loadtime Monitor Channel End Register  Reset Value */

#define SPI_MON_LM_END_EADDR_Pos              _UINT32_(0)                                          /* (SPI_MON_LM_END) A byte address within the designated Flash, specifying the last byte of the load image. Position */
#define SPI_MON_LM_END_EADDR_Msk              (_UINT32_(0xFFFFFFFF) << SPI_MON_LM_END_EADDR_Pos)   /* (SPI_MON_LM_END) A byte address within the designated Flash, specifying the last byte of the load image. Mask */
#define SPI_MON_LM_END_EADDR(value)           (SPI_MON_LM_END_EADDR_Msk & (_UINT32_(value) << SPI_MON_LM_END_EADDR_Pos)) /* Assigment of value for EADDR in the SPI_MON_LM_END register */
#define SPI_MON_LM_END_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (SPI_MON_LM_END) Register Mask  */


/* -------- SPI_MON_LM_COUNT : (SPI_MON Offset: 0x10) ( R/ 32) Loadtime Monitor Channel Count Register -------- */
#define SPI_MON_LM_COUNT_RESETVALUE           _UINT32_(0x00)                                       /*  (SPI_MON_LM_COUNT) Loadtime Monitor Channel Count Register  Reset Value */

#define SPI_MON_LM_COUNT_CNT_Pos              _UINT32_(0)                                          /* (SPI_MON_LM_COUNT) A Read-Only count of bytes processed. Position */
#define SPI_MON_LM_COUNT_CNT_Msk              (_UINT32_(0xFFFFFFFF) << SPI_MON_LM_COUNT_CNT_Pos)   /* (SPI_MON_LM_COUNT) A Read-Only count of bytes processed. Mask */
#define SPI_MON_LM_COUNT_CNT(value)           (SPI_MON_LM_COUNT_CNT_Msk & (_UINT32_(value) << SPI_MON_LM_COUNT_CNT_Pos)) /* Assigment of value for CNT in the SPI_MON_LM_COUNT register */
#define SPI_MON_LM_COUNT_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SPI_MON_LM_COUNT) Register Mask  */


/* -------- SPI_MON_LM_DIGEST : (SPI_MON Offset: 0x14) ( R/ 32) Loadtime Monitor Channel Digest Register -------- */
#define SPI_MON_LM_DIGEST_RESETVALUE          _UINT32_(0x00)                                       /*  (SPI_MON_LM_DIGEST) Loadtime Monitor Channel Digest Register  Reset Value */

#define SPI_MON_LM_DIGEST_DGST_Pos            _UINT32_(0)                                          /* (SPI_MON_LM_DIGEST) A Read-Only FIFO Portal to Hash digest result. 12 or 8 Dwords depending on algorithm. Position */
#define SPI_MON_LM_DIGEST_DGST_Msk            (_UINT32_(0xFFFFFFFF) << SPI_MON_LM_DIGEST_DGST_Pos) /* (SPI_MON_LM_DIGEST) A Read-Only FIFO Portal to Hash digest result. 12 or 8 Dwords depending on algorithm. Mask */
#define SPI_MON_LM_DIGEST_DGST(value)         (SPI_MON_LM_DIGEST_DGST_Msk & (_UINT32_(value) << SPI_MON_LM_DIGEST_DGST_Pos)) /* Assigment of value for DGST in the SPI_MON_LM_DIGEST register */
#define SPI_MON_LM_DIGEST_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (SPI_MON_LM_DIGEST) Register Mask  */


/* -------- SPI_MON_MNTR_CTRL : (SPI_MON Offset: 0x00) (R/W 32) SPI Monitor Control Register -------- */
#define SPI_MON_MNTR_CTRL_RESETVALUE          _UINT32_(0x00)                                       /*  (SPI_MON_MNTR_CTRL) SPI Monitor Control Register  Reset Value */

#define SPI_MON_MNTR_CTRL_ACT_Pos             _UINT32_(0)                                          /* (SPI_MON_MNTR_CTRL) Activate 1= Activate, 0= De-activate Position */
#define SPI_MON_MNTR_CTRL_ACT_Msk             (_UINT32_(0x1) << SPI_MON_MNTR_CTRL_ACT_Pos)         /* (SPI_MON_MNTR_CTRL) Activate 1= Activate, 0= De-activate Mask */
#define SPI_MON_MNTR_CTRL_ACT(value)          (SPI_MON_MNTR_CTRL_ACT_Msk & (_UINT32_(value) << SPI_MON_MNTR_CTRL_ACT_Pos)) /* Assigment of value for ACT in the SPI_MON_MNTR_CTRL register */
#define SPI_MON_MNTR_CTRL_LCK_ACT_Pos         _UINT32_(1)                                          /* (SPI_MON_MNTR_CTRL) Lock Activate 1= Activate field Locked, 0= Activate field unlocked Position */
#define SPI_MON_MNTR_CTRL_LCK_ACT_Msk         (_UINT32_(0x1) << SPI_MON_MNTR_CTRL_LCK_ACT_Pos)     /* (SPI_MON_MNTR_CTRL) Lock Activate 1= Activate field Locked, 0= Activate field unlocked Mask */
#define SPI_MON_MNTR_CTRL_LCK_ACT(value)      (SPI_MON_MNTR_CTRL_LCK_ACT_Msk & (_UINT32_(value) << SPI_MON_MNTR_CTRL_LCK_ACT_Pos)) /* Assigment of value for LCK_ACT in the SPI_MON_MNTR_CTRL register */
#define SPI_MON_MNTR_CTRL_SFT_RST_Pos         _UINT32_(8)                                          /* (SPI_MON_MNTR_CTRL) Soft Reset. This field is auto cleared by hardware. 1= Soft Reset SPI Monitor, 0 = No Effect Position */
#define SPI_MON_MNTR_CTRL_SFT_RST_Msk         (_UINT32_(0x1) << SPI_MON_MNTR_CTRL_SFT_RST_Pos)     /* (SPI_MON_MNTR_CTRL) Soft Reset. This field is auto cleared by hardware. 1= Soft Reset SPI Monitor, 0 = No Effect Mask */
#define SPI_MON_MNTR_CTRL_SFT_RST(value)      (SPI_MON_MNTR_CTRL_SFT_RST_Msk & (_UINT32_(value) << SPI_MON_MNTR_CTRL_SFT_RST_Pos)) /* Assigment of value for SFT_RST in the SPI_MON_MNTR_CTRL register */
#define SPI_MON_MNTR_CTRL_TAP_SEL_Pos         _UINT32_(16)                                         /* (SPI_MON_MNTR_CTRL) CPTR_CLK_TAP_SEL selects which 0.5ns delay tap to have the capture clock on.      00h = 0 ns delay (or if TAP_EN = 0).     01h = 0.5ns nom delay; +/- 50%     02h = 1.0ns      03h = 1.5ns     04h = 2.0ns     etc.     1Fh = 15.5ns Position */
#define SPI_MON_MNTR_CTRL_TAP_SEL_Msk         (_UINT32_(0x1F) << SPI_MON_MNTR_CTRL_TAP_SEL_Pos)    /* (SPI_MON_MNTR_CTRL) CPTR_CLK_TAP_SEL selects which 0.5ns delay tap to have the capture clock on.      00h = 0 ns delay (or if TAP_EN = 0).     01h = 0.5ns nom delay; +/- 50%     02h = 1.0ns      03h = 1.5ns     04h = 2.0ns     etc.     1Fh = 15.5ns Mask */
#define SPI_MON_MNTR_CTRL_TAP_SEL(value)      (SPI_MON_MNTR_CTRL_TAP_SEL_Msk & (_UINT32_(value) << SPI_MON_MNTR_CTRL_TAP_SEL_Pos)) /* Assigment of value for TAP_SEL in the SPI_MON_MNTR_CTRL register */
#define SPI_MON_MNTR_CTRL_TAP_EN_Pos          _UINT32_(21)                                         /* (SPI_MON_MNTR_CTRL) CPTR_CLK_TAP_EN enable the delay taps. It is recommended that a customer set the TAP_EN bit to 1, and the TAP_SEL field to 04h. Position */
#define SPI_MON_MNTR_CTRL_TAP_EN_Msk          (_UINT32_(0x1) << SPI_MON_MNTR_CTRL_TAP_EN_Pos)      /* (SPI_MON_MNTR_CTRL) CPTR_CLK_TAP_EN enable the delay taps. It is recommended that a customer set the TAP_EN bit to 1, and the TAP_SEL field to 04h. Mask */
#define SPI_MON_MNTR_CTRL_TAP_EN(value)       (SPI_MON_MNTR_CTRL_TAP_EN_Msk & (_UINT32_(value) << SPI_MON_MNTR_CTRL_TAP_EN_Pos)) /* Assigment of value for TAP_EN in the SPI_MON_MNTR_CTRL register */
#define SPI_MON_MNTR_CTRL_Msk                 _UINT32_(0x003F0103)                                 /* (SPI_MON_MNTR_CTRL) Register Mask  */


/* -------- SPI_MON_CFG_STS : (SPI_MON Offset: 0x04) (R/W 32) SPI Configuration Status Register -------- */
#define SPI_MON_CFG_STS_RESETVALUE            _UINT32_(0x00)                                       /*  (SPI_MON_CFG_STS) SPI Configuration Status Register  Reset Value */

#define SPI_MON_CFG_STS_IMD_Pos               _UINT32_(0)                                          /* (SPI_MON_CFG_STS) Flash Intervention Mode. 0 = Power-Off (POR), 1 = RESET# Pulse  Position */
#define SPI_MON_CFG_STS_IMD_Msk               (_UINT32_(0x1) << SPI_MON_CFG_STS_IMD_Pos)           /* (SPI_MON_CFG_STS) Flash Intervention Mode. 0 = Power-Off (POR), 1 = RESET# Pulse  Mask */
#define SPI_MON_CFG_STS_IMD(value)            (SPI_MON_CFG_STS_IMD_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_IMD_Pos)) /* Assigment of value for IMD in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_RST2CSH_Pos           _UINT32_(1)                                          /* (SPI_MON_CFG_STS) RESET# to CS# High Delay. 2^n x 20us, 00h=20us, 1Fh= 1.3sec. IRQ triggers at this point also. Position */
#define SPI_MON_CFG_STS_RST2CSH_Msk           (_UINT32_(0x1F) << SPI_MON_CFG_STS_RST2CSH_Pos)      /* (SPI_MON_CFG_STS) RESET# to CS# High Delay. 2^n x 20us, 00h=20us, 1Fh= 1.3sec. IRQ triggers at this point also. Mask */
#define SPI_MON_CFG_STS_RST2CSH(value)        (SPI_MON_CFG_STS_RST2CSH_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_RST2CSH_Pos)) /* Assigment of value for RST2CSH in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_QBD_Pos               _UINT32_(6)                                          /* (SPI_MON_CFG_STS) Quad Bus Disable, 1 = Half Bus Mode,  0 = IO[3:0] are all controlled by EQS. Position */
#define SPI_MON_CFG_STS_QBD_Msk               (_UINT32_(0x1) << SPI_MON_CFG_STS_QBD_Pos)           /* (SPI_MON_CFG_STS) Quad Bus Disable, 1 = Half Bus Mode,  0 = IO[3:0] are all controlled by EQS. Mask */
#define SPI_MON_CFG_STS_QBD(value)            (SPI_MON_CFG_STS_QBD_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_QBD_Pos)) /* Assigment of value for QBD in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_XQS_Pos               _UINT32_(7)                                          /* (SPI_MON_CFG_STS) Cross-Over Q-Switch status. (BMC->CPU). RO image of Interbus bit which as 1 overrides EQS bit at both SPI buses without changing their states. Position */
#define SPI_MON_CFG_STS_XQS_Msk               (_UINT32_(0x1) << SPI_MON_CFG_STS_XQS_Pos)           /* (SPI_MON_CFG_STS) Cross-Over Q-Switch status. (BMC->CPU). RO image of Interbus bit which as 1 overrides EQS bit at both SPI buses without changing their states. Mask */
#define SPI_MON_CFG_STS_XQS(value)            (SPI_MON_CFG_STS_XQS_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_XQS_Pos)) /* Assigment of value for XQS in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_EQS_Pos               _UINT32_(8)                                          /* (SPI_MON_CFG_STS) Enable Q-Switch (Isolator) to Host. 0 = Disable, 1 = Enable. Position */
#define SPI_MON_CFG_STS_EQS_Msk               (_UINT32_(0x1) << SPI_MON_CFG_STS_EQS_Pos)           /* (SPI_MON_CFG_STS) Enable Q-Switch (Isolator) to Host. 0 = Disable, 1 = Enable. Mask */
#define SPI_MON_CFG_STS_EQS(value)            (SPI_MON_CFG_STS_EQS_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_EQS_Pos)) /* Assigment of value for EQS in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_CSRT_Pos              _UINT32_(9)                                          /* (SPI_MON_CFG_STS) Chip Select Routing.      000 = Both CSn#_In pass directly to CSn# Out, both enabled out.     001 = CS1n_In passes to CS1# Output, but CS0# Output is disabled (floats high).     010 = CS0n_In passes to CS0# Output, but CS1# Output is disabled (floats high).     100 = Swap CS1#/CS0#_In to CS0#/CS1# Out respectively, both enabled out.     101 = CS0n_In passes to CS1# Out, and CS0# Output is disabled (floats high).     110 = CS1n_In passes to CS0# Out, and CS1# Output is disabled (floats high).     x11 = CS0n/CS1n Outputs are both disabled (floating high) regardless of inputs. Position */
#define SPI_MON_CFG_STS_CSRT_Msk              (_UINT32_(0x7) << SPI_MON_CFG_STS_CSRT_Pos)          /* (SPI_MON_CFG_STS) Chip Select Routing.      000 = Both CSn#_In pass directly to CSn# Out, both enabled out.     001 = CS1n_In passes to CS1# Output, but CS0# Output is disabled (floats high).     010 = CS0n_In passes to CS0# Output, but CS1# Output is disabled (floats high).     100 = Swap CS1#/CS0#_In to CS0#/CS1# Out respectively, both enabled out.     101 = CS0n_In passes to CS1# Out, and CS0# Output is disabled (floats high).     110 = CS1n_In passes to CS0# Out, and CS1# Output is disabled (floats high).     x11 = CS0n/CS1n Outputs are both disabled (floating high) regardless of inputs. Mask */
#define SPI_MON_CFG_STS_CSRT(value)           (SPI_MON_CFG_STS_CSRT_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_CSRT_Pos)) /* Assigment of value for CSRT in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_F0F_Pos               _UINT32_(12)                                         /* (SPI_MON_CFG_STS) Enable following of Address Mode. (SPI Snooping) for each Flash. 0=Disable, 1=Enable Position */
#define SPI_MON_CFG_STS_F0F_Msk               (_UINT32_(0x1) << SPI_MON_CFG_STS_F0F_Pos)           /* (SPI_MON_CFG_STS) Enable following of Address Mode. (SPI Snooping) for each Flash. 0=Disable, 1=Enable Mask */
#define SPI_MON_CFG_STS_F0F(value)            (SPI_MON_CFG_STS_F0F_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_F0F_Pos)) /* Assigment of value for F0F in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_F1F_Pos               _UINT32_(13)                                         /* (SPI_MON_CFG_STS) Enable following of Address Mode. (SPI Snooping) for each Flash. 0=Disable, 1=Enable Position */
#define SPI_MON_CFG_STS_F1F_Msk               (_UINT32_(0x1) << SPI_MON_CFG_STS_F1F_Pos)           /* (SPI_MON_CFG_STS) Enable following of Address Mode. (SPI Snooping) for each Flash. 0=Disable, 1=Enable Mask */
#define SPI_MON_CFG_STS_F1F(value)            (SPI_MON_CFG_STS_F1F_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_F1F_Pos)) /* Assigment of value for F1F in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_F0A_Pos               _UINT32_(14)                                         /* (SPI_MON_CFG_STS) Set 3B/4B Address Mode for Flash 0. 0=3B Address Mode, 1=4B Address Mode Position */
#define SPI_MON_CFG_STS_F0A_Msk               (_UINT32_(0x1) << SPI_MON_CFG_STS_F0A_Pos)           /* (SPI_MON_CFG_STS) Set 3B/4B Address Mode for Flash 0. 0=3B Address Mode, 1=4B Address Mode Mask */
#define SPI_MON_CFG_STS_F0A(value)            (SPI_MON_CFG_STS_F0A_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_F0A_Pos)) /* Assigment of value for F0A in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_F1A_Pos               _UINT32_(15)                                         /* (SPI_MON_CFG_STS) Set 3B/4B Address Mode for Flash 1. 0=3B Address Mode, 1=4B Address Mode Position */
#define SPI_MON_CFG_STS_F1A_Msk               (_UINT32_(0x1) << SPI_MON_CFG_STS_F1A_Pos)           /* (SPI_MON_CFG_STS) Set 3B/4B Address Mode for Flash 1. 0=3B Address Mode, 1=4B Address Mode Mask */
#define SPI_MON_CFG_STS_F1A(value)            (SPI_MON_CFG_STS_F1A_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_F1A_Pos)) /* Assigment of value for F1A in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_F0SIZE_Pos            _UINT32_(16)                                         /* (SPI_MON_CFG_STS) Flash 0 Size. Flash sizes are expressed in bytes as a power of 2, matching a Flash Get-ID convention.     For the most common cases:      17h = 23d => 2^23 = 8MByte     18h = 24d => 2^24 = 16MByte     19h = 25d => 2^25 = 32MByte     1Ah = 26d => 2^26 = 64MByte Position */
#define SPI_MON_CFG_STS_F0SIZE_Msk            (_UINT32_(0x1F) << SPI_MON_CFG_STS_F0SIZE_Pos)       /* (SPI_MON_CFG_STS) Flash 0 Size. Flash sizes are expressed in bytes as a power of 2, matching a Flash Get-ID convention.     For the most common cases:      17h = 23d => 2^23 = 8MByte     18h = 24d => 2^24 = 16MByte     19h = 25d => 2^25 = 32MByte     1Ah = 26d => 2^26 = 64MByte Mask */
#define SPI_MON_CFG_STS_F0SIZE(value)         (SPI_MON_CFG_STS_F0SIZE_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_F0SIZE_Pos)) /* Assigment of value for F0SIZE in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_E0W_Pos               _UINT32_(21)                                         /* (SPI_MON_CFG_STS) Enable Wrap Detection. 0=Disable, 1=Enable. Position */
#define SPI_MON_CFG_STS_E0W_Msk               (_UINT32_(0x1) << SPI_MON_CFG_STS_E0W_Pos)           /* (SPI_MON_CFG_STS) Enable Wrap Detection. 0=Disable, 1=Enable. Mask */
#define SPI_MON_CFG_STS_E0W(value)            (SPI_MON_CFG_STS_E0W_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_E0W_Pos)) /* Assigment of value for E0W in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_F0P_Pos               _UINT32_(23)                                         /* (SPI_MON_CFG_STS) Flash 0 Present. 0=Not Present, 1=Present Position */
#define SPI_MON_CFG_STS_F0P_Msk               (_UINT32_(0x1) << SPI_MON_CFG_STS_F0P_Pos)           /* (SPI_MON_CFG_STS) Flash 0 Present. 0=Not Present, 1=Present Mask */
#define SPI_MON_CFG_STS_F0P(value)            (SPI_MON_CFG_STS_F0P_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_F0P_Pos)) /* Assigment of value for F0P in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_F1SIZE_Pos            _UINT32_(24)                                         /* (SPI_MON_CFG_STS) Flash 1 Size. Flash sizes are expressed in bytes as a power of 2, matching a Flash Get-ID convention.     For the most common cases:      17h = 23d => 2^23 = 8MByte     18h = 24d => 2^24 = 16MByte     19h = 25d => 2^25 = 32MByte     1Ah = 26d => 2^26 = 64MByte Position */
#define SPI_MON_CFG_STS_F1SIZE_Msk            (_UINT32_(0x1F) << SPI_MON_CFG_STS_F1SIZE_Pos)       /* (SPI_MON_CFG_STS) Flash 1 Size. Flash sizes are expressed in bytes as a power of 2, matching a Flash Get-ID convention.     For the most common cases:      17h = 23d => 2^23 = 8MByte     18h = 24d => 2^24 = 16MByte     19h = 25d => 2^25 = 32MByte     1Ah = 26d => 2^26 = 64MByte Mask */
#define SPI_MON_CFG_STS_F1SIZE(value)         (SPI_MON_CFG_STS_F1SIZE_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_F1SIZE_Pos)) /* Assigment of value for F1SIZE in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_E1W_Pos               _UINT32_(29)                                         /* (SPI_MON_CFG_STS) Enable Wrap Detection. 0=Disable, 1=Enable Position */
#define SPI_MON_CFG_STS_E1W_Msk               (_UINT32_(0x1) << SPI_MON_CFG_STS_E1W_Pos)           /* (SPI_MON_CFG_STS) Enable Wrap Detection. 0=Disable, 1=Enable Mask */
#define SPI_MON_CFG_STS_E1W(value)            (SPI_MON_CFG_STS_E1W_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_E1W_Pos)) /* Assigment of value for E1W in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_F1P_Pos               _UINT32_(31)                                         /* (SPI_MON_CFG_STS) Flash 1 Present. 0=Not Present, 1=Present Position */
#define SPI_MON_CFG_STS_F1P_Msk               (_UINT32_(0x1) << SPI_MON_CFG_STS_F1P_Pos)           /* (SPI_MON_CFG_STS) Flash 1 Present. 0=Not Present, 1=Present Mask */
#define SPI_MON_CFG_STS_F1P(value)            (SPI_MON_CFG_STS_F1P_Msk & (_UINT32_(value) << SPI_MON_CFG_STS_F1P_Pos)) /* Assigment of value for F1P in the SPI_MON_CFG_STS register */
#define SPI_MON_CFG_STS_Msk                   _UINT32_(0xBFBFFFFF)                                 /* (SPI_MON_CFG_STS) Register Mask  */


/* -------- SPI_MON_SPICFG2 : (SPI_MON Offset: 0x08) (R/W 32) SPI Monitor Configuration 2 Register -------- */
#define SPI_MON_SPICFG2_RESETVALUE            _UINT32_(0x00)                                       /*  (SPI_MON_SPICFG2) SPI Monitor Configuration 2 Register  Reset Value */

#define SPI_MON_SPICFG2_HRM_Pos               _UINT32_(0)                                          /* (SPI_MON_SPICFG2) Host Reset Mode. 0 = APn_RESET#, 1 = Pin. Position */
#define SPI_MON_SPICFG2_HRM_Msk               (_UINT32_(0x1) << SPI_MON_SPICFG2_HRM_Pos)           /* (SPI_MON_SPICFG2) Host Reset Mode. 0 = APn_RESET#, 1 = Pin. Mask */
#define SPI_MON_SPICFG2_HRM(value)            (SPI_MON_SPICFG2_HRM_Msk & (_UINT32_(value) << SPI_MON_SPICFG2_HRM_Pos)) /* Assigment of value for HRM in the SPI_MON_SPICFG2 register */
#define SPI_MON_SPICFG2_HRL_Pos               _UINT32_(1)                                          /* (SPI_MON_SPICFG2) HRM Bit Lock. 0 = Unlocked, 1 = Locked. Position */
#define SPI_MON_SPICFG2_HRL_Msk               (_UINT32_(0x1) << SPI_MON_SPICFG2_HRL_Pos)           /* (SPI_MON_SPICFG2) HRM Bit Lock. 0 = Unlocked, 1 = Locked. Mask */
#define SPI_MON_SPICFG2_HRL(value)            (SPI_MON_SPICFG2_HRL_Msk & (_UINT32_(value) << SPI_MON_SPICFG2_HRL_Pos)) /* Assigment of value for HRL in the SPI_MON_SPICFG2 register */
#define SPI_MON_SPICFG2_DIV_Pos               _UINT32_(8)                                          /* (SPI_MON_SPICFG2) Disable Inter Vention. 1 = IRQ-only Mode. Position */
#define SPI_MON_SPICFG2_DIV_Msk               (_UINT32_(0x1) << SPI_MON_SPICFG2_DIV_Pos)           /* (SPI_MON_SPICFG2) Disable Inter Vention. 1 = IRQ-only Mode. Mask */
#define SPI_MON_SPICFG2_DIV(value)            (SPI_MON_SPICFG2_DIV_Msk & (_UINT32_(value) << SPI_MON_SPICFG2_DIV_Pos)) /* Assigment of value for DIV in the SPI_MON_SPICFG2 register */
#define SPI_MON_SPICFG2_DIL_Pos               _UINT32_(9)                                          /* (SPI_MON_SPICFG2) DIV Bit Lock. 0 = Unlocked, 1 = Locked. Position */
#define SPI_MON_SPICFG2_DIL_Msk               (_UINT32_(0x1) << SPI_MON_SPICFG2_DIL_Pos)           /* (SPI_MON_SPICFG2) DIV Bit Lock. 0 = Unlocked, 1 = Locked. Mask */
#define SPI_MON_SPICFG2_DIL(value)            (SPI_MON_SPICFG2_DIL_Msk & (_UINT32_(value) << SPI_MON_SPICFG2_DIL_Pos)) /* Assigment of value for DIL in the SPI_MON_SPICFG2 register */
#define SPI_MON_SPICFG2_RIV_Pos               _UINT32_(12)                                         /* (SPI_MON_SPICFG2) Special Region InterVention Mode. If DIV=1 then RIV is ignored.     If DIV=0 and RIV=1 then: Reads that are forbidden by the Runtime Region register set     are only cancelled by gating off CSn# for that SPI command, and setting the IRQ.     No system shutdown results, and subsequent legal Reads are allowed. Position */
#define SPI_MON_SPICFG2_RIV_Msk               (_UINT32_(0x1) << SPI_MON_SPICFG2_RIV_Pos)           /* (SPI_MON_SPICFG2) Special Region InterVention Mode. If DIV=1 then RIV is ignored.     If DIV=0 and RIV=1 then: Reads that are forbidden by the Runtime Region register set     are only cancelled by gating off CSn# for that SPI command, and setting the IRQ.     No system shutdown results, and subsequent legal Reads are allowed. Mask */
#define SPI_MON_SPICFG2_RIV(value)            (SPI_MON_SPICFG2_RIV_Msk & (_UINT32_(value) << SPI_MON_SPICFG2_RIV_Pos)) /* Assigment of value for RIV in the SPI_MON_SPICFG2 register */
#define SPI_MON_SPICFG2_RIL_Pos               _UINT32_(13)                                         /* (SPI_MON_SPICFG2) RIV Bit Lock. 0 = Unlocked, 1 = Locked. Position */
#define SPI_MON_SPICFG2_RIL_Msk               (_UINT32_(0x1) << SPI_MON_SPICFG2_RIL_Pos)           /* (SPI_MON_SPICFG2) RIV Bit Lock. 0 = Unlocked, 1 = Locked. Mask */
#define SPI_MON_SPICFG2_RIL(value)            (SPI_MON_SPICFG2_RIL_Msk & (_UINT32_(value) << SPI_MON_SPICFG2_RIL_Pos)) /* Assigment of value for RIL in the SPI_MON_SPICFG2 register */
#define SPI_MON_SPICFG2_ALG_Pos               _UINT32_(16)                                         /* (SPI_MON_SPICFG2) Hash Algorithm Mode. 0 = SHA-384, 1 = Reserved  Position */
#define SPI_MON_SPICFG2_ALG_Msk               (_UINT32_(0x1) << SPI_MON_SPICFG2_ALG_Pos)           /* (SPI_MON_SPICFG2) Hash Algorithm Mode. 0 = SHA-384, 1 = Reserved  Mask */
#define SPI_MON_SPICFG2_ALG(value)            (SPI_MON_SPICFG2_ALG_Msk & (_UINT32_(value) << SPI_MON_SPICFG2_ALG_Pos)) /* Assigment of value for ALG in the SPI_MON_SPICFG2 register */
#define SPI_MON_SPICFG2_ALL_Pos               _UINT32_(17)                                         /* (SPI_MON_SPICFG2) ALG Bit Lock. 0 = Unlocked, 1 = Locked. Position */
#define SPI_MON_SPICFG2_ALL_Msk               (_UINT32_(0x1) << SPI_MON_SPICFG2_ALL_Pos)           /* (SPI_MON_SPICFG2) ALG Bit Lock. 0 = Unlocked, 1 = Locked. Mask */
#define SPI_MON_SPICFG2_ALL(value)            (SPI_MON_SPICFG2_ALL_Msk & (_UINT32_(value) << SPI_MON_SPICFG2_ALL_Pos)) /* Assigment of value for ALL in the SPI_MON_SPICFG2 register */
#define SPI_MON_SPICFG2_Msk                   _UINT32_(0x00033303)                                 /* (SPI_MON_SPICFG2) Register Mask  */


/* -------- SPI_MON_VIOCTRLSTS : (SPI_MON Offset: 0x0C) (R/W 32) Violation IRQ Control/Status Register -------- */
#define SPI_MON_VIOCTRLSTS_RESETVALUE         _UINT32_(0x00)                                       /*  (SPI_MON_VIOCTRLSTS) Violation IRQ Control/Status Register  Reset Value */

#define SPI_MON_VIOCTRLSTS_OP_Pos             _UINT32_(0)                                          /* (SPI_MON_VIOCTRLSTS) Opcode Violation Position */
#define SPI_MON_VIOCTRLSTS_OP_Msk             (_UINT32_(0x1) << SPI_MON_VIOCTRLSTS_OP_Pos)         /* (SPI_MON_VIOCTRLSTS) Opcode Violation Mask */
#define SPI_MON_VIOCTRLSTS_OP(value)          (SPI_MON_VIOCTRLSTS_OP_Msk & (_UINT32_(value) << SPI_MON_VIOCTRLSTS_OP_Pos)) /* Assigment of value for OP in the SPI_MON_VIOCTRLSTS register */
#define SPI_MON_VIOCTRLSTS_MC_Pos             _UINT32_(1)                                          /* (SPI_MON_VIOCTRLSTS) Data Mismatch Violation Position */
#define SPI_MON_VIOCTRLSTS_MC_Msk             (_UINT32_(0x1) << SPI_MON_VIOCTRLSTS_MC_Pos)         /* (SPI_MON_VIOCTRLSTS) Data Mismatch Violation Mask */
#define SPI_MON_VIOCTRLSTS_MC(value)          (SPI_MON_VIOCTRLSTS_MC_Msk & (_UINT32_(value) << SPI_MON_VIOCTRLSTS_MC_Pos)) /* Assigment of value for MC in the SPI_MON_VIOCTRLSTS register */
#define SPI_MON_VIOCTRLSTS_OB_Pos             _UINT32_(2)                                          /* (SPI_MON_VIOCTRLSTS) Out of Bounds. Outside all Runtime Regions Position */
#define SPI_MON_VIOCTRLSTS_OB_Msk             (_UINT32_(0x1) << SPI_MON_VIOCTRLSTS_OB_Pos)         /* (SPI_MON_VIOCTRLSTS) Out of Bounds. Outside all Runtime Regions Mask */
#define SPI_MON_VIOCTRLSTS_OB(value)          (SPI_MON_VIOCTRLSTS_OB_Msk & (_UINT32_(value) << SPI_MON_VIOCTRLSTS_OB_Pos)) /* Assigment of value for OB in the SPI_MON_VIOCTRLSTS register */
#define SPI_MON_VIOCTRLSTS_RG_Pos             _UINT32_(3)                                          /* (SPI_MON_VIOCTRLSTS) Runtime Region R/W Permission Violation Position */
#define SPI_MON_VIOCTRLSTS_RG_Msk             (_UINT32_(0x1) << SPI_MON_VIOCTRLSTS_RG_Pos)         /* (SPI_MON_VIOCTRLSTS) Runtime Region R/W Permission Violation Mask */
#define SPI_MON_VIOCTRLSTS_RG(value)          (SPI_MON_VIOCTRLSTS_RG_Msk & (_UINT32_(value) << SPI_MON_VIOCTRLSTS_RG_Pos)) /* Assigment of value for RG in the SPI_MON_VIOCTRLSTS register */
#define SPI_MON_VIOCTRLSTS_MT_Pos             _UINT32_(4)                                          /* (SPI_MON_VIOCTRLSTS) Timeout in Match Phase Position */
#define SPI_MON_VIOCTRLSTS_MT_Msk             (_UINT32_(0x1) << SPI_MON_VIOCTRLSTS_MT_Pos)         /* (SPI_MON_VIOCTRLSTS) Timeout in Match Phase Mask */
#define SPI_MON_VIOCTRLSTS_MT(value)          (SPI_MON_VIOCTRLSTS_MT_Msk & (_UINT32_(value) << SPI_MON_VIOCTRLSTS_MT_Pos)) /* Assigment of value for MT in the SPI_MON_VIOCTRLSTS register */
#define SPI_MON_VIOCTRLSTS_AW_Pos             _UINT32_(5)                                          /* (SPI_MON_VIOCTRLSTS) Address Wrap within a Flash device. Position */
#define SPI_MON_VIOCTRLSTS_AW_Msk             (_UINT32_(0x1) << SPI_MON_VIOCTRLSTS_AW_Pos)         /* (SPI_MON_VIOCTRLSTS) Address Wrap within a Flash device. Mask */
#define SPI_MON_VIOCTRLSTS_AW(value)          (SPI_MON_VIOCTRLSTS_AW_Msk & (_UINT32_(value) << SPI_MON_VIOCTRLSTS_AW_Pos)) /* Assigment of value for AW in the SPI_MON_VIOCTRLSTS register */
#define SPI_MON_VIOCTRLSTS_EOP_Pos            _UINT32_(8)                                          /* (SPI_MON_VIOCTRLSTS) Enable Opcode Violation Interrupt. 0 = Disable, 1 = Enable Position */
#define SPI_MON_VIOCTRLSTS_EOP_Msk            (_UINT32_(0x1) << SPI_MON_VIOCTRLSTS_EOP_Pos)        /* (SPI_MON_VIOCTRLSTS) Enable Opcode Violation Interrupt. 0 = Disable, 1 = Enable Mask */
#define SPI_MON_VIOCTRLSTS_EOP(value)         (SPI_MON_VIOCTRLSTS_EOP_Msk & (_UINT32_(value) << SPI_MON_VIOCTRLSTS_EOP_Pos)) /* Assigment of value for EOP in the SPI_MON_VIOCTRLSTS register */
#define SPI_MON_VIOCTRLSTS_EMC_Pos            _UINT32_(9)                                          /* (SPI_MON_VIOCTRLSTS) Enable Data Mismatch Violation Interrupt. 0 = Disable, 1 = Enable Position */
#define SPI_MON_VIOCTRLSTS_EMC_Msk            (_UINT32_(0x1) << SPI_MON_VIOCTRLSTS_EMC_Pos)        /* (SPI_MON_VIOCTRLSTS) Enable Data Mismatch Violation Interrupt. 0 = Disable, 1 = Enable Mask */
#define SPI_MON_VIOCTRLSTS_EMC(value)         (SPI_MON_VIOCTRLSTS_EMC_Msk & (_UINT32_(value) << SPI_MON_VIOCTRLSTS_EMC_Pos)) /* Assigment of value for EMC in the SPI_MON_VIOCTRLSTS register */
#define SPI_MON_VIOCTRLSTS_EOB_Pos            _UINT32_(10)                                         /* (SPI_MON_VIOCTRLSTS) Enable Out of Bounds Interrupt. 0 = Disable, 1 = Enable Position */
#define SPI_MON_VIOCTRLSTS_EOB_Msk            (_UINT32_(0x1) << SPI_MON_VIOCTRLSTS_EOB_Pos)        /* (SPI_MON_VIOCTRLSTS) Enable Out of Bounds Interrupt. 0 = Disable, 1 = Enable Mask */
#define SPI_MON_VIOCTRLSTS_EOB(value)         (SPI_MON_VIOCTRLSTS_EOB_Msk & (_UINT32_(value) << SPI_MON_VIOCTRLSTS_EOB_Pos)) /* Assigment of value for EOB in the SPI_MON_VIOCTRLSTS register */
#define SPI_MON_VIOCTRLSTS_ERG_Pos            _UINT32_(11)                                         /* (SPI_MON_VIOCTRLSTS) Enable Runtime Region R/W Permission Violation Interrupt. 0 = Disable, 1 = Enable Position */
#define SPI_MON_VIOCTRLSTS_ERG_Msk            (_UINT32_(0x1) << SPI_MON_VIOCTRLSTS_ERG_Pos)        /* (SPI_MON_VIOCTRLSTS) Enable Runtime Region R/W Permission Violation Interrupt. 0 = Disable, 1 = Enable Mask */
#define SPI_MON_VIOCTRLSTS_ERG(value)         (SPI_MON_VIOCTRLSTS_ERG_Msk & (_UINT32_(value) << SPI_MON_VIOCTRLSTS_ERG_Pos)) /* Assigment of value for ERG in the SPI_MON_VIOCTRLSTS register */
#define SPI_MON_VIOCTRLSTS_EMT_Pos            _UINT32_(12)                                         /* (SPI_MON_VIOCTRLSTS) Enable Timeout in Match Phase Interrupt. 0 = Disable, 1 = Enable Position */
#define SPI_MON_VIOCTRLSTS_EMT_Msk            (_UINT32_(0x1) << SPI_MON_VIOCTRLSTS_EMT_Pos)        /* (SPI_MON_VIOCTRLSTS) Enable Timeout in Match Phase Interrupt. 0 = Disable, 1 = Enable Mask */
#define SPI_MON_VIOCTRLSTS_EMT(value)         (SPI_MON_VIOCTRLSTS_EMT_Msk & (_UINT32_(value) << SPI_MON_VIOCTRLSTS_EMT_Pos)) /* Assigment of value for EMT in the SPI_MON_VIOCTRLSTS register */
#define SPI_MON_VIOCTRLSTS_EAW_Pos            _UINT32_(13)                                         /* (SPI_MON_VIOCTRLSTS) Enable Address Wrap within a Flash device Interrupt. 0 = Disable, 1 = Enable Position */
#define SPI_MON_VIOCTRLSTS_EAW_Msk            (_UINT32_(0x1) << SPI_MON_VIOCTRLSTS_EAW_Pos)        /* (SPI_MON_VIOCTRLSTS) Enable Address Wrap within a Flash device Interrupt. 0 = Disable, 1 = Enable Mask */
#define SPI_MON_VIOCTRLSTS_EAW(value)         (SPI_MON_VIOCTRLSTS_EAW_Msk & (_UINT32_(value) << SPI_MON_VIOCTRLSTS_EAW_Pos)) /* Assigment of value for EAW in the SPI_MON_VIOCTRLSTS register */
#define SPI_MON_VIOCTRLSTS_Msk                _UINT32_(0x00003F3F)                                 /* (SPI_MON_VIOCTRLSTS) Register Mask  */


/* -------- SPI_MON_IVN_STS : (SPI_MON Offset: 0x10) ( R/ 8) SPI Intervention Status Register -------- */
#define SPI_MON_IVN_STS_RESETVALUE            _UINT8_(0x00)                                        /*  (SPI_MON_IVN_STS) SPI Intervention Status Register  Reset Value */

#define SPI_MON_IVN_STS_FCS_Pos               _UINT8_(0)                                           /* (SPI_MON_IVN_STS) Flash Chip Selects forced high and bus forced low. Position */
#define SPI_MON_IVN_STS_FCS_Msk               (_UINT8_(0x1) << SPI_MON_IVN_STS_FCS_Pos)            /* (SPI_MON_IVN_STS) Flash Chip Selects forced high and bus forced low. Mask */
#define SPI_MON_IVN_STS_FCS(value)            (SPI_MON_IVN_STS_FCS_Msk & (_UINT8_(value) << SPI_MON_IVN_STS_FCS_Pos)) /* Assigment of value for FCS in the SPI_MON_IVN_STS register */
#define SPI_MON_IVN_STS_FPO_Pos               _UINT8_(1)                                           /* (SPI_MON_IVN_STS) Flash Power or RESET# Activated. Position */
#define SPI_MON_IVN_STS_FPO_Msk               (_UINT8_(0x1) << SPI_MON_IVN_STS_FPO_Pos)            /* (SPI_MON_IVN_STS) Flash Power or RESET# Activated. Mask */
#define SPI_MON_IVN_STS_FPO(value)            (SPI_MON_IVN_STS_FPO_Msk & (_UINT8_(value) << SPI_MON_IVN_STS_FPO_Pos)) /* Assigment of value for FPO in the SPI_MON_IVN_STS register */
#define SPI_MON_IVN_STS_HRS_Pos               _UINT8_(2)                                           /* (SPI_MON_IVN_STS) Host held in Reset Position */
#define SPI_MON_IVN_STS_HRS_Msk               (_UINT8_(0x1) << SPI_MON_IVN_STS_HRS_Pos)            /* (SPI_MON_IVN_STS) Host held in Reset Mask */
#define SPI_MON_IVN_STS_HRS(value)            (SPI_MON_IVN_STS_HRS_Msk & (_UINT8_(value) << SPI_MON_IVN_STS_HRS_Pos)) /* Assigment of value for HRS in the SPI_MON_IVN_STS register */
#define SPI_MON_IVN_STS_HIS_Pos               _UINT8_(3)                                           /* (SPI_MON_IVN_STS) Host held Isolated Position */
#define SPI_MON_IVN_STS_HIS_Msk               (_UINT8_(0x1) << SPI_MON_IVN_STS_HIS_Pos)            /* (SPI_MON_IVN_STS) Host held Isolated Mask */
#define SPI_MON_IVN_STS_HIS(value)            (SPI_MON_IVN_STS_HIS_Msk & (_UINT8_(value) << SPI_MON_IVN_STS_HIS_Pos)) /* Assigment of value for HIS in the SPI_MON_IVN_STS register */
#define SPI_MON_IVN_STS_Msk                   _UINT8_(0x0F)                                        /* (SPI_MON_IVN_STS) Register Mask  */


/* -------- SPI_MON_IVN_REC : (SPI_MON Offset: 0x11) ( /W 8) SPI Intervention Recovery Register -------- */
#define SPI_MON_IVN_REC_RESETVALUE            _UINT8_(0x00)                                        /*  (SPI_MON_IVN_REC) SPI Intervention Recovery Register  Reset Value */

#define SPI_MON_IVN_REC_FCC_Pos               _UINT8_(0)                                           /* (SPI_MON_IVN_REC) Write 1 to clear FCS Flash Chip Selects forced high and bus forced low. Position */
#define SPI_MON_IVN_REC_FCC_Msk               (_UINT8_(0x1) << SPI_MON_IVN_REC_FCC_Pos)            /* (SPI_MON_IVN_REC) Write 1 to clear FCS Flash Chip Selects forced high and bus forced low. Mask */
#define SPI_MON_IVN_REC_FCC(value)            (SPI_MON_IVN_REC_FCC_Msk & (_UINT8_(value) << SPI_MON_IVN_REC_FCC_Pos)) /* Assigment of value for FCC in the SPI_MON_IVN_REC register */
#define SPI_MON_IVN_REC_FPC_Pos               _UINT8_(1)                                           /* (SPI_MON_IVN_REC) Write 1 to clear FPO Flash Power or RESET# Activated. Position */
#define SPI_MON_IVN_REC_FPC_Msk               (_UINT8_(0x1) << SPI_MON_IVN_REC_FPC_Pos)            /* (SPI_MON_IVN_REC) Write 1 to clear FPO Flash Power or RESET# Activated. Mask */
#define SPI_MON_IVN_REC_FPC(value)            (SPI_MON_IVN_REC_FPC_Msk & (_UINT8_(value) << SPI_MON_IVN_REC_FPC_Pos)) /* Assigment of value for FPC in the SPI_MON_IVN_REC register */
#define SPI_MON_IVN_REC_HRC_Pos               _UINT8_(2)                                           /* (SPI_MON_IVN_REC) Write 1 to clear HRS Host held in Reset Position */
#define SPI_MON_IVN_REC_HRC_Msk               (_UINT8_(0x1) << SPI_MON_IVN_REC_HRC_Pos)            /* (SPI_MON_IVN_REC) Write 1 to clear HRS Host held in Reset Mask */
#define SPI_MON_IVN_REC_HRC(value)            (SPI_MON_IVN_REC_HRC_Msk & (_UINT8_(value) << SPI_MON_IVN_REC_HRC_Pos)) /* Assigment of value for HRC in the SPI_MON_IVN_REC register */
#define SPI_MON_IVN_REC_HIC_Pos               _UINT8_(3)                                           /* (SPI_MON_IVN_REC) Write 1 to clear HIS Host held Isolated Position */
#define SPI_MON_IVN_REC_HIC_Msk               (_UINT8_(0x1) << SPI_MON_IVN_REC_HIC_Pos)            /* (SPI_MON_IVN_REC) Write 1 to clear HIS Host held Isolated Mask */
#define SPI_MON_IVN_REC_HIC(value)            (SPI_MON_IVN_REC_HIC_Msk & (_UINT8_(value) << SPI_MON_IVN_REC_HIC_Pos)) /* Assigment of value for HIC in the SPI_MON_IVN_REC register */
#define SPI_MON_IVN_REC_Msk                   _UINT8_(0x0F)                                        /* (SPI_MON_IVN_REC) Register Mask  */


/* -------- SPI_MON_VIO_STS : (SPI_MON Offset: 0x14) (R/W 32) Violation Log Register -------- */
#define SPI_MON_VIO_STS_RESETVALUE            _UINT32_(0x00)                                       /*  (SPI_MON_VIO_STS) Violation Log Register  Reset Value */

#define SPI_MON_VIO_STS_OP_Pos                _UINT32_(0)                                          /* (SPI_MON_VIO_STS) Opcode Violation Position */
#define SPI_MON_VIO_STS_OP_Msk                (_UINT32_(0x1) << SPI_MON_VIO_STS_OP_Pos)            /* (SPI_MON_VIO_STS) Opcode Violation Mask */
#define SPI_MON_VIO_STS_OP(value)             (SPI_MON_VIO_STS_OP_Msk & (_UINT32_(value) << SPI_MON_VIO_STS_OP_Pos)) /* Assigment of value for OP in the SPI_MON_VIO_STS register */
#define SPI_MON_VIO_STS_ROB_Pos               _UINT32_(2)                                          /* (SPI_MON_VIO_STS) Region Failure, Out of Bounds Position */
#define SPI_MON_VIO_STS_ROB_Msk               (_UINT32_(0x1) << SPI_MON_VIO_STS_ROB_Pos)           /* (SPI_MON_VIO_STS) Region Failure, Out of Bounds Mask */
#define SPI_MON_VIO_STS_ROB(value)            (SPI_MON_VIO_STS_ROB_Msk & (_UINT32_(value) << SPI_MON_VIO_STS_ROB_Pos)) /* Assigment of value for ROB in the SPI_MON_VIO_STS register */
#define SPI_MON_VIO_STS_REG_Pos               _UINT32_(3)                                          /* (SPI_MON_VIO_STS) Runtime Region Violation Position */
#define SPI_MON_VIO_STS_REG_Msk               (_UINT32_(0x1) << SPI_MON_VIO_STS_REG_Pos)           /* (SPI_MON_VIO_STS) Runtime Region Violation Mask */
#define SPI_MON_VIO_STS_REG(value)            (SPI_MON_VIO_STS_REG_Msk & (_UINT32_(value) << SPI_MON_VIO_STS_REG_Pos)) /* Assigment of value for REG in the SPI_MON_VIO_STS register */
#define SPI_MON_VIO_STS_AWP_Pos               _UINT32_(5)                                          /* (SPI_MON_VIO_STS) Address Wrap Position */
#define SPI_MON_VIO_STS_AWP_Msk               (_UINT32_(0x1) << SPI_MON_VIO_STS_AWP_Pos)           /* (SPI_MON_VIO_STS) Address Wrap Mask */
#define SPI_MON_VIO_STS_AWP(value)            (SPI_MON_VIO_STS_AWP_Msk & (_UINT32_(value) << SPI_MON_VIO_STS_AWP_Pos)) /* Assigment of value for AWP in the SPI_MON_VIO_STS register */
#define SPI_MON_VIO_STS_DV_Pos                _UINT32_(6)                                          /* (SPI_MON_VIO_STS) Device Number Position */
#define SPI_MON_VIO_STS_DV_Msk                (_UINT32_(0x1) << SPI_MON_VIO_STS_DV_Pos)            /* (SPI_MON_VIO_STS) Device Number Mask */
#define SPI_MON_VIO_STS_DV(value)             (SPI_MON_VIO_STS_DV_Msk & (_UINT32_(value) << SPI_MON_VIO_STS_DV_Pos)) /* Assigment of value for DV in the SPI_MON_VIO_STS register */
#define SPI_MON_VIO_STS_REGION_Pos            _UINT32_(7)                                          /* (SPI_MON_VIO_STS) Region Number Position */
#define SPI_MON_VIO_STS_REGION_Msk            (_UINT32_(0x1F) << SPI_MON_VIO_STS_REGION_Pos)       /* (SPI_MON_VIO_STS) Region Number Mask */
#define SPI_MON_VIO_STS_REGION(value)         (SPI_MON_VIO_STS_REGION_Msk & (_UINT32_(value) << SPI_MON_VIO_STS_REGION_Pos)) /* Assigment of value for REGION in the SPI_MON_VIO_STS register */
#define SPI_MON_VIO_STS_RD_Pos                _UINT32_(12)                                         /* (SPI_MON_VIO_STS) Killed as a Read Position */
#define SPI_MON_VIO_STS_RD_Msk                (_UINT32_(0x1) << SPI_MON_VIO_STS_RD_Pos)            /* (SPI_MON_VIO_STS) Killed as a Read Mask */
#define SPI_MON_VIO_STS_RD(value)             (SPI_MON_VIO_STS_RD_Msk & (_UINT32_(value) << SPI_MON_VIO_STS_RD_Pos)) /* Assigment of value for RD in the SPI_MON_VIO_STS register */
#define SPI_MON_VIO_STS_PE_Pos                _UINT32_(13)                                         /* (SPI_MON_VIO_STS) Killed as a Program or Erase Position */
#define SPI_MON_VIO_STS_PE_Msk                (_UINT32_(0x1) << SPI_MON_VIO_STS_PE_Pos)            /* (SPI_MON_VIO_STS) Killed as a Program or Erase Mask */
#define SPI_MON_VIO_STS_PE(value)             (SPI_MON_VIO_STS_PE_Msk & (_UINT32_(value) << SPI_MON_VIO_STS_PE_Pos)) /* Assigment of value for PE in the SPI_MON_VIO_STS register */
#define SPI_MON_VIO_STS_AM_Pos                _UINT32_(14)                                         /* (SPI_MON_VIO_STS) Flash Address Mode Position */
#define SPI_MON_VIO_STS_AM_Msk                (_UINT32_(0x1) << SPI_MON_VIO_STS_AM_Pos)            /* (SPI_MON_VIO_STS) Flash Address Mode Mask */
#define SPI_MON_VIO_STS_AM(value)             (SPI_MON_VIO_STS_AM_Msk & (_UINT32_(value) << SPI_MON_VIO_STS_AM_Pos)) /* Assigment of value for AM in the SPI_MON_VIO_STS register */
#define SPI_MON_VIO_STS_CLR_Pos               _UINT32_(15)                                         /* (SPI_MON_VIO_STS) Clear Register RW1C. This bit is auto clearing Position */
#define SPI_MON_VIO_STS_CLR_Msk               (_UINT32_(0x1) << SPI_MON_VIO_STS_CLR_Pos)           /* (SPI_MON_VIO_STS) Clear Register RW1C. This bit is auto clearing Mask */
#define SPI_MON_VIO_STS_CLR(value)            (SPI_MON_VIO_STS_CLR_Msk & (_UINT32_(value) << SPI_MON_VIO_STS_CLR_Pos)) /* Assigment of value for CLR in the SPI_MON_VIO_STS register */
#define SPI_MON_VIO_STS_OPCOD_Pos             _UINT32_(16)                                         /* (SPI_MON_VIO_STS) Flash Opcode Position */
#define SPI_MON_VIO_STS_OPCOD_Msk             (_UINT32_(0xFF) << SPI_MON_VIO_STS_OPCOD_Pos)        /* (SPI_MON_VIO_STS) Flash Opcode Mask */
#define SPI_MON_VIO_STS_OPCOD(value)          (SPI_MON_VIO_STS_OPCOD_Msk & (_UINT32_(value) << SPI_MON_VIO_STS_OPCOD_Pos)) /* Assigment of value for OPCOD in the SPI_MON_VIO_STS register */
#define SPI_MON_VIO_STS_DAT_Pos               _UINT32_(24)                                         /* (SPI_MON_VIO_STS) SPI Data Byte Position */
#define SPI_MON_VIO_STS_DAT_Msk               (_UINT32_(0xFF) << SPI_MON_VIO_STS_DAT_Pos)          /* (SPI_MON_VIO_STS) SPI Data Byte Mask */
#define SPI_MON_VIO_STS_DAT(value)            (SPI_MON_VIO_STS_DAT_Msk & (_UINT32_(value) << SPI_MON_VIO_STS_DAT_Pos)) /* Assigment of value for DAT in the SPI_MON_VIO_STS register */
#define SPI_MON_VIO_STS_Msk                   _UINT32_(0xFFFFFFED)                                 /* (SPI_MON_VIO_STS) Register Mask  */


/* -------- SPI_MON_ERR_ADDR : (SPI_MON Offset: 0x18) ( R/ 32) Error Byte Address Register -------- */
#define SPI_MON_ERR_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (SPI_MON_ERR_ADDR) Error Byte Address Register  Reset Value */

#define SPI_MON_ERR_ADDR_ADDR_Pos             _UINT32_(0)                                          /* (SPI_MON_ERR_ADDR) Byte address at which the error occurred, within the designated Flash Position */
#define SPI_MON_ERR_ADDR_ADDR_Msk             (_UINT32_(0xFFFFFFFF) << SPI_MON_ERR_ADDR_ADDR_Pos)  /* (SPI_MON_ERR_ADDR) Byte address at which the error occurred, within the designated Flash Mask */
#define SPI_MON_ERR_ADDR_ADDR(value)          (SPI_MON_ERR_ADDR_ADDR_Msk & (_UINT32_(value) << SPI_MON_ERR_ADDR_ADDR_Pos)) /* Assigment of value for ADDR in the SPI_MON_ERR_ADDR register */
#define SPI_MON_ERR_ADDR_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SPI_MON_ERR_ADDR) Register Mask  */


/* -------- SPI_MON_MTMON_CTRLSTS : (SPI_MON Offset: 0x1D0) (R/W 32) Match Monitor Control/Status Register -------- */
#define SPI_MON_MTMON_CTRLSTS_RESETVALUE      _UINT32_(0x00)                                       /*  (SPI_MON_MTMON_CTRLSTS) Match Monitor Control/Status Register  Reset Value */

#define SPI_MON_MTMON_CTRLSTS_T_Pos           _UINT32_(0)                                          /* (SPI_MON_MTMON_CTRLSTS) Timeout Position */
#define SPI_MON_MTMON_CTRLSTS_T_Msk           (_UINT32_(0x1) << SPI_MON_MTMON_CTRLSTS_T_Pos)       /* (SPI_MON_MTMON_CTRLSTS) Timeout Mask */
#define SPI_MON_MTMON_CTRLSTS_T(value)        (SPI_MON_MTMON_CTRLSTS_T_Msk & (_UINT32_(value) << SPI_MON_MTMON_CTRLSTS_T_Pos)) /* Assigment of value for T in the SPI_MON_MTMON_CTRLSTS register */
#define SPI_MON_MTMON_CTRLSTS_F_Pos           _UINT32_(1)                                          /* (SPI_MON_MTMON_CTRLSTS) First Fetch in any Match region Position */
#define SPI_MON_MTMON_CTRLSTS_F_Msk           (_UINT32_(0x1) << SPI_MON_MTMON_CTRLSTS_F_Pos)       /* (SPI_MON_MTMON_CTRLSTS) First Fetch in any Match region Mask */
#define SPI_MON_MTMON_CTRLSTS_F(value)        (SPI_MON_MTMON_CTRLSTS_F_Msk & (_UINT32_(value) << SPI_MON_MTMON_CTRLSTS_F_Pos)) /* Assigment of value for F in the SPI_MON_MTMON_CTRLSTS register */
#define SPI_MON_MTMON_CTRLSTS_AM_Pos          _UINT32_(2)                                          /* (SPI_MON_MTMON_CTRLSTS) Set to 1 on a 3B/4B Address Mode switch on either Flash. Position */
#define SPI_MON_MTMON_CTRLSTS_AM_Msk          (_UINT32_(0x1) << SPI_MON_MTMON_CTRLSTS_AM_Pos)      /* (SPI_MON_MTMON_CTRLSTS) Set to 1 on a 3B/4B Address Mode switch on either Flash. Mask */
#define SPI_MON_MTMON_CTRLSTS_AM(value)       (SPI_MON_MTMON_CTRLSTS_AM_Msk & (_UINT32_(value) << SPI_MON_MTMON_CTRLSTS_AM_Pos)) /* Assigment of value for AM in the SPI_MON_MTMON_CTRLSTS register */
#define SPI_MON_MTMON_CTRLSTS_ET_IRQ_Pos      _UINT32_(8)                                          /* (SPI_MON_MTMON_CTRLSTS) Enable Timeout Interrupt Position */
#define SPI_MON_MTMON_CTRLSTS_ET_IRQ_Msk      (_UINT32_(0x1) << SPI_MON_MTMON_CTRLSTS_ET_IRQ_Pos)  /* (SPI_MON_MTMON_CTRLSTS) Enable Timeout Interrupt Mask */
#define SPI_MON_MTMON_CTRLSTS_ET_IRQ(value)   (SPI_MON_MTMON_CTRLSTS_ET_IRQ_Msk & (_UINT32_(value) << SPI_MON_MTMON_CTRLSTS_ET_IRQ_Pos)) /* Assigment of value for ET_IRQ in the SPI_MON_MTMON_CTRLSTS register */
#define SPI_MON_MTMON_CTRLSTS_EF_IRQ_Pos      _UINT32_(9)                                          /* (SPI_MON_MTMON_CTRLSTS) Enable First Fetch in any Match region Interrupt Position */
#define SPI_MON_MTMON_CTRLSTS_EF_IRQ_Msk      (_UINT32_(0x1) << SPI_MON_MTMON_CTRLSTS_EF_IRQ_Pos)  /* (SPI_MON_MTMON_CTRLSTS) Enable First Fetch in any Match region Interrupt Mask */
#define SPI_MON_MTMON_CTRLSTS_EF_IRQ(value)   (SPI_MON_MTMON_CTRLSTS_EF_IRQ_Msk & (_UINT32_(value) << SPI_MON_MTMON_CTRLSTS_EF_IRQ_Pos)) /* Assigment of value for EF_IRQ in the SPI_MON_MTMON_CTRLSTS register */
#define SPI_MON_MTMON_CTRLSTS_AM_IRQ_Pos      _UINT32_(10)                                         /* (SPI_MON_MTMON_CTRLSTS) Enable 3B/4B Address Mode switch on either Flash Interrupt Position */
#define SPI_MON_MTMON_CTRLSTS_AM_IRQ_Msk      (_UINT32_(0x1) << SPI_MON_MTMON_CTRLSTS_AM_IRQ_Pos)  /* (SPI_MON_MTMON_CTRLSTS) Enable 3B/4B Address Mode switch on either Flash Interrupt Mask */
#define SPI_MON_MTMON_CTRLSTS_AM_IRQ(value)   (SPI_MON_MTMON_CTRLSTS_AM_IRQ_Msk & (_UINT32_(value) << SPI_MON_MTMON_CTRLSTS_AM_IRQ_Pos)) /* Assigment of value for AM_IRQ in the SPI_MON_MTMON_CTRLSTS register */
#define SPI_MON_MTMON_CTRLSTS_FIFO_MTY_Pos    _UINT32_(16)                                         /* (SPI_MON_MTMON_CTRLSTS) FIFO Empty Position */
#define SPI_MON_MTMON_CTRLSTS_FIFO_MTY_Msk    (_UINT32_(0x1) << SPI_MON_MTMON_CTRLSTS_FIFO_MTY_Pos) /* (SPI_MON_MTMON_CTRLSTS) FIFO Empty Mask */
#define SPI_MON_MTMON_CTRLSTS_FIFO_MTY(value) (SPI_MON_MTMON_CTRLSTS_FIFO_MTY_Msk & (_UINT32_(value) << SPI_MON_MTMON_CTRLSTS_FIFO_MTY_Pos)) /* Assigment of value for FIFO_MTY in the SPI_MON_MTMON_CTRLSTS register */
#define SPI_MON_MTMON_CTRLSTS_FIFO_FUL_Pos    _UINT32_(17)                                         /* (SPI_MON_MTMON_CTRLSTS) FIFO Full Position */
#define SPI_MON_MTMON_CTRLSTS_FIFO_FUL_Msk    (_UINT32_(0x1) << SPI_MON_MTMON_CTRLSTS_FIFO_FUL_Pos) /* (SPI_MON_MTMON_CTRLSTS) FIFO Full Mask */
#define SPI_MON_MTMON_CTRLSTS_FIFO_FUL(value) (SPI_MON_MTMON_CTRLSTS_FIFO_FUL_Msk & (_UINT32_(value) << SPI_MON_MTMON_CTRLSTS_FIFO_FUL_Pos)) /* Assigment of value for FIFO_FUL in the SPI_MON_MTMON_CTRLSTS register */
#define SPI_MON_MTMON_CTRLSTS_FIFO_OVRF_Pos   _UINT32_(18)                                         /* (SPI_MON_MTMON_CTRLSTS) FIFO Overflow Position */
#define SPI_MON_MTMON_CTRLSTS_FIFO_OVRF_Msk   (_UINT32_(0x1) << SPI_MON_MTMON_CTRLSTS_FIFO_OVRF_Pos) /* (SPI_MON_MTMON_CTRLSTS) FIFO Overflow Mask */
#define SPI_MON_MTMON_CTRLSTS_FIFO_OVRF(value) (SPI_MON_MTMON_CTRLSTS_FIFO_OVRF_Msk & (_UINT32_(value) << SPI_MON_MTMON_CTRLSTS_FIFO_OVRF_Pos)) /* Assigment of value for FIFO_OVRF in the SPI_MON_MTMON_CTRLSTS register */
#define SPI_MON_MTMON_CTRLSTS_FIFO_UDRF_Pos   _UINT32_(19)                                         /* (SPI_MON_MTMON_CTRLSTS) FIFO Underflow Position */
#define SPI_MON_MTMON_CTRLSTS_FIFO_UDRF_Msk   (_UINT32_(0x1) << SPI_MON_MTMON_CTRLSTS_FIFO_UDRF_Pos) /* (SPI_MON_MTMON_CTRLSTS) FIFO Underflow Mask */
#define SPI_MON_MTMON_CTRLSTS_FIFO_UDRF(value) (SPI_MON_MTMON_CTRLSTS_FIFO_UDRF_Msk & (_UINT32_(value) << SPI_MON_MTMON_CTRLSTS_FIFO_UDRF_Pos)) /* Assigment of value for FIFO_UDRF in the SPI_MON_MTMON_CTRLSTS register */
#define SPI_MON_MTMON_CTRLSTS_CLR_FIFO_Pos    _UINT32_(24)                                         /* (SPI_MON_MTMON_CTRLSTS) Clear FIFO. This field is autocleared by hardware Position */
#define SPI_MON_MTMON_CTRLSTS_CLR_FIFO_Msk    (_UINT32_(0x1) << SPI_MON_MTMON_CTRLSTS_CLR_FIFO_Pos) /* (SPI_MON_MTMON_CTRLSTS) Clear FIFO. This field is autocleared by hardware Mask */
#define SPI_MON_MTMON_CTRLSTS_CLR_FIFO(value) (SPI_MON_MTMON_CTRLSTS_CLR_FIFO_Msk & (_UINT32_(value) << SPI_MON_MTMON_CTRLSTS_CLR_FIFO_Pos)) /* Assigment of value for CLR_FIFO in the SPI_MON_MTMON_CTRLSTS register */
#define SPI_MON_MTMON_CTRLSTS_Msk             _UINT32_(0x010F0707)                                 /* (SPI_MON_MTMON_CTRLSTS) Register Mask  */


/* -------- SPI_MON_MTMON_ENMD : (SPI_MON Offset: 0x1D4) (R/W 32) Match Monitor Enable/Mode Register -------- */
#define SPI_MON_MTMON_ENMD_RESETVALUE         _UINT32_(0x00)                                       /*  (SPI_MON_MTMON_ENMD) Match Monitor Enable/Mode Register  Reset Value */

#define SPI_MON_MTMON_ENMD_MON_EN_Pos         _UINT32_(0)                                          /* (SPI_MON_MTMON_ENMD) Enable Data Matching. 0 = Disabled, 1 = Enabled Position */
#define SPI_MON_MTMON_ENMD_MON_EN_Msk         (_UINT32_(0x1) << SPI_MON_MTMON_ENMD_MON_EN_Pos)     /* (SPI_MON_MTMON_ENMD) Enable Data Matching. 0 = Disabled, 1 = Enabled Mask */
#define SPI_MON_MTMON_ENMD_MON_EN(value)      (SPI_MON_MTMON_ENMD_MON_EN_Msk & (_UINT32_(value) << SPI_MON_MTMON_ENMD_MON_EN_Pos)) /* Assigment of value for MON_EN in the SPI_MON_MTMON_ENMD register */
#define SPI_MON_MTMON_ENMD_MON_MS_Pos         _UINT32_(8)                                          /* (SPI_MON_MTMON_ENMD) Match Pattern Source Mode: 0 = SRAM, 1 = Internal Flash. Position */
#define SPI_MON_MTMON_ENMD_MON_MS_Msk         (_UINT32_(0x1) << SPI_MON_MTMON_ENMD_MON_MS_Pos)     /* (SPI_MON_MTMON_ENMD) Match Pattern Source Mode: 0 = SRAM, 1 = Internal Flash. Mask */
#define SPI_MON_MTMON_ENMD_MON_MS(value)      (SPI_MON_MTMON_ENMD_MON_MS_Msk & (_UINT32_(value) << SPI_MON_MTMON_ENMD_MON_MS_Pos)) /* Assigment of value for MON_MS in the SPI_MON_MTMON_ENMD register */
#define SPI_MON_MTMON_ENMD_Msk                _UINT32_(0x00000101)                                 /* (SPI_MON_MTMON_ENMD) Register Mask  */


/* -------- SPI_MON_MTMON_TCTRL : (SPI_MON Offset: 0x1D8) (R/W 32) Match Fetch Timeout Control Register -------- */
#define SPI_MON_MTMON_TCTRL_RESETVALUE        _UINT32_(0x00)                                       /*  (SPI_MON_MTMON_TCTRL) Match Fetch Timeout Control Register  Reset Value */

#define SPI_MON_MTMON_TCTRL_ST_Pos            _UINT32_(0)                                          /* (SPI_MON_MTMON_TCTRL) Start Timeout Counter Position */
#define SPI_MON_MTMON_TCTRL_ST_Msk            (_UINT32_(0x1) << SPI_MON_MTMON_TCTRL_ST_Pos)        /* (SPI_MON_MTMON_TCTRL) Start Timeout Counter Mask */
#define SPI_MON_MTMON_TCTRL_ST(value)         (SPI_MON_MTMON_TCTRL_ST_Msk & (_UINT32_(value) << SPI_MON_MTMON_TCTRL_ST_Pos)) /* Assigment of value for ST in the SPI_MON_MTMON_TCTRL register */
#define SPI_MON_MTMON_TCTRL_TV_Pos            _UINT32_(16)                                         /* (SPI_MON_MTMON_TCTRL) Timeout Value 0 to 32 Position */
#define SPI_MON_MTMON_TCTRL_TV_Msk            (_UINT32_(0x1F) << SPI_MON_MTMON_TCTRL_TV_Pos)       /* (SPI_MON_MTMON_TCTRL) Timeout Value 0 to 32 Mask */
#define SPI_MON_MTMON_TCTRL_TV(value)         (SPI_MON_MTMON_TCTRL_TV_Msk & (_UINT32_(value) << SPI_MON_MTMON_TCTRL_TV_Pos)) /* Assigment of value for TV in the SPI_MON_MTMON_TCTRL register */
#define SPI_MON_MTMON_TCTRL_TU_Pos            _UINT32_(21)                                         /* (SPI_MON_MTMON_TCTRL) Timeout Unit 00 = none (off), 01 = 32ms, 10 = 128ms, 11 = 1sec Position */
#define SPI_MON_MTMON_TCTRL_TU_Msk            (_UINT32_(0x3) << SPI_MON_MTMON_TCTRL_TU_Pos)        /* (SPI_MON_MTMON_TCTRL) Timeout Unit 00 = none (off), 01 = 32ms, 10 = 128ms, 11 = 1sec Mask */
#define SPI_MON_MTMON_TCTRL_TU(value)         (SPI_MON_MTMON_TCTRL_TU_Msk & (_UINT32_(value) << SPI_MON_MTMON_TCTRL_TU_Pos)) /* Assigment of value for TU in the SPI_MON_MTMON_TCTRL register */
#define SPI_MON_MTMON_TCTRL_Msk               _UINT32_(0x007F0001)                                 /* (SPI_MON_MTMON_TCTRL) Register Mask  */


/* -------- SPI_MON_MTMON_VIOSTS : (SPI_MON Offset: 0x240) (R/W 32) Match Monitor Violation Log Register -------- */
#define SPI_MON_MTMON_VIOSTS_RESETVALUE       _UINT32_(0x00)                                       /*  (SPI_MON_MTMON_VIOSTS) Match Monitor Violation Log Register  Reset Value */

#define SPI_MON_MTMON_VIOSTS_MTO_Pos          _UINT32_(4)                                          /* (SPI_MON_MTMON_VIOSTS) Match Monitor Timeout. This is read-Only bit. Position */
#define SPI_MON_MTMON_VIOSTS_MTO_Msk          (_UINT32_(0x1) << SPI_MON_MTMON_VIOSTS_MTO_Pos)      /* (SPI_MON_MTMON_VIOSTS) Match Monitor Timeout. This is read-Only bit. Mask */
#define SPI_MON_MTMON_VIOSTS_MTO(value)       (SPI_MON_MTMON_VIOSTS_MTO_Msk & (_UINT32_(value) << SPI_MON_MTMON_VIOSTS_MTO_Pos)) /* Assigment of value for MTO in the SPI_MON_MTMON_VIOSTS register */
#define SPI_MON_MTMON_VIOSTS_DV_Pos           _UINT32_(6)                                          /* (SPI_MON_MTMON_VIOSTS) Device Number. This is read-Only bit. 0 = CS0, 1 = CS1. Position */
#define SPI_MON_MTMON_VIOSTS_DV_Msk           (_UINT32_(0x1) << SPI_MON_MTMON_VIOSTS_DV_Pos)       /* (SPI_MON_MTMON_VIOSTS) Device Number. This is read-Only bit. 0 = CS0, 1 = CS1. Mask */
#define SPI_MON_MTMON_VIOSTS_DV(value)        (SPI_MON_MTMON_VIOSTS_DV_Msk & (_UINT32_(value) << SPI_MON_MTMON_VIOSTS_DV_Pos)) /* Assigment of value for DV in the SPI_MON_MTMON_VIOSTS register */
#define SPI_MON_MTMON_VIOSTS_RGN_Pos          _UINT32_(7)                                          /* (SPI_MON_MTMON_VIOSTS) Region. This is read-Only bit. Shows which of 8 Match regions [7:0] got the mismatch. Position */
#define SPI_MON_MTMON_VIOSTS_RGN_Msk          (_UINT32_(0x1F) << SPI_MON_MTMON_VIOSTS_RGN_Pos)     /* (SPI_MON_MTMON_VIOSTS) Region. This is read-Only bit. Shows which of 8 Match regions [7:0] got the mismatch. Mask */
#define SPI_MON_MTMON_VIOSTS_RGN(value)       (SPI_MON_MTMON_VIOSTS_RGN_Msk & (_UINT32_(value) << SPI_MON_MTMON_VIOSTS_RGN_Pos)) /* Assigment of value for RGN in the SPI_MON_MTMON_VIOSTS register */
#define SPI_MON_MTMON_VIOSTS_AM_Pos           _UINT32_(14)                                         /* (SPI_MON_MTMON_VIOSTS) Flash Address Mode 0 = 3-byte, 1 = 4-byte Position */
#define SPI_MON_MTMON_VIOSTS_AM_Msk           (_UINT32_(0x1) << SPI_MON_MTMON_VIOSTS_AM_Pos)       /* (SPI_MON_MTMON_VIOSTS) Flash Address Mode 0 = 3-byte, 1 = 4-byte Mask */
#define SPI_MON_MTMON_VIOSTS_AM(value)        (SPI_MON_MTMON_VIOSTS_AM_Msk & (_UINT32_(value) << SPI_MON_MTMON_VIOSTS_AM_Pos)) /* Assigment of value for AM in the SPI_MON_MTMON_VIOSTS register */
#define SPI_MON_MTMON_VIOSTS_CLR_Pos          _UINT32_(15)                                         /* (SPI_MON_MTMON_VIOSTS) Clear Register RW1C. This bit is auto clearing Position */
#define SPI_MON_MTMON_VIOSTS_CLR_Msk          (_UINT32_(0x1) << SPI_MON_MTMON_VIOSTS_CLR_Pos)      /* (SPI_MON_MTMON_VIOSTS) Clear Register RW1C. This bit is auto clearing Mask */
#define SPI_MON_MTMON_VIOSTS_CLR(value)       (SPI_MON_MTMON_VIOSTS_CLR_Msk & (_UINT32_(value) << SPI_MON_MTMON_VIOSTS_CLR_Pos)) /* Assigment of value for CLR in the SPI_MON_MTMON_VIOSTS register */
#define SPI_MON_MTMON_VIOSTS_OPCOD_Pos        _UINT32_(16)                                         /* (SPI_MON_MTMON_VIOSTS) Flash Opcode Position */
#define SPI_MON_MTMON_VIOSTS_OPCOD_Msk        (_UINT32_(0xFF) << SPI_MON_MTMON_VIOSTS_OPCOD_Pos)   /* (SPI_MON_MTMON_VIOSTS) Flash Opcode Mask */
#define SPI_MON_MTMON_VIOSTS_OPCOD(value)     (SPI_MON_MTMON_VIOSTS_OPCOD_Msk & (_UINT32_(value) << SPI_MON_MTMON_VIOSTS_OPCOD_Pos)) /* Assigment of value for OPCOD in the SPI_MON_MTMON_VIOSTS register */
#define SPI_MON_MTMON_VIOSTS_DATA_Pos         _UINT32_(24)                                         /* (SPI_MON_MTMON_VIOSTS) SPI Data Byte Position */
#define SPI_MON_MTMON_VIOSTS_DATA_Msk         (_UINT32_(0xFF) << SPI_MON_MTMON_VIOSTS_DATA_Pos)    /* (SPI_MON_MTMON_VIOSTS) SPI Data Byte Mask */
#define SPI_MON_MTMON_VIOSTS_DATA(value)      (SPI_MON_MTMON_VIOSTS_DATA_Msk & (_UINT32_(value) << SPI_MON_MTMON_VIOSTS_DATA_Pos)) /* Assigment of value for DATA in the SPI_MON_MTMON_VIOSTS register */
#define SPI_MON_MTMON_VIOSTS_Msk              _UINT32_(0xFFFFCFD0)                                 /* (SPI_MON_MTMON_VIOSTS) Register Mask  */


/* -------- SPI_MON_MTMON_VIOADDR : (SPI_MON Offset: 0x244) ( R/ 32) Match Monitor Violation Address Register -------- */
#define SPI_MON_MTMON_VIOADDR_RESETVALUE      _UINT32_(0x00)                                       /*  (SPI_MON_MTMON_VIOADDR) Match Monitor Violation Address Register  Reset Value */

#define SPI_MON_MTMON_VIOADDR_ADDR_Pos        _UINT32_(0)                                          /* (SPI_MON_MTMON_VIOADDR) Byte address at which the error occurred, within the designated Flash Position */
#define SPI_MON_MTMON_VIOADDR_ADDR_Msk        (_UINT32_(0xFFFFFFFF) << SPI_MON_MTMON_VIOADDR_ADDR_Pos) /* (SPI_MON_MTMON_VIOADDR) Byte address at which the error occurred, within the designated Flash Mask */
#define SPI_MON_MTMON_VIOADDR_ADDR(value)     (SPI_MON_MTMON_VIOADDR_ADDR_Msk & (_UINT32_(value) << SPI_MON_MTMON_VIOADDR_ADDR_Pos)) /* Assigment of value for ADDR in the SPI_MON_MTMON_VIOADDR register */
#define SPI_MON_MTMON_VIOADDR_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPI_MON_MTMON_VIOADDR) Register Mask  */


/* -------- SPI_MON_LTMON_AGGR : (SPI_MON Offset: 0x250) (R/W 32) Loadtime (Hash) IRQ Aggregation Register -------- */
#define SPI_MON_LTMON_AGGR_RESETVALUE         _UINT32_(0x00)                                       /*  (SPI_MON_LTMON_AGGR) Loadtime (Hash) IRQ Aggregation Register  Reset Value */

#define SPI_MON_LTMON_AGGR_IRQ0_Pos           _UINT32_(0)                                          /* (SPI_MON_LTMON_AGGR) Load 0 Interrupt Position */
#define SPI_MON_LTMON_AGGR_IRQ0_Msk           (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_IRQ0_Pos)       /* (SPI_MON_LTMON_AGGR) Load 0 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_IRQ0(value)        (SPI_MON_LTMON_AGGR_IRQ0_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_IRQ0_Pos)) /* Assigment of value for IRQ0 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_IRQ1_Pos           _UINT32_(1)                                          /* (SPI_MON_LTMON_AGGR) Load 1 Interrupt Position */
#define SPI_MON_LTMON_AGGR_IRQ1_Msk           (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_IRQ1_Pos)       /* (SPI_MON_LTMON_AGGR) Load 1 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_IRQ1(value)        (SPI_MON_LTMON_AGGR_IRQ1_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_IRQ1_Pos)) /* Assigment of value for IRQ1 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_IRQ2_Pos           _UINT32_(2)                                          /* (SPI_MON_LTMON_AGGR) Load 2 Interrupt Position */
#define SPI_MON_LTMON_AGGR_IRQ2_Msk           (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_IRQ2_Pos)       /* (SPI_MON_LTMON_AGGR) Load 2 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_IRQ2(value)        (SPI_MON_LTMON_AGGR_IRQ2_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_IRQ2_Pos)) /* Assigment of value for IRQ2 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_IRQ3_Pos           _UINT32_(3)                                          /* (SPI_MON_LTMON_AGGR) Load 3 Interrupt Position */
#define SPI_MON_LTMON_AGGR_IRQ3_Msk           (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_IRQ3_Pos)       /* (SPI_MON_LTMON_AGGR) Load 3 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_IRQ3(value)        (SPI_MON_LTMON_AGGR_IRQ3_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_IRQ3_Pos)) /* Assigment of value for IRQ3 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_IRQ4_Pos           _UINT32_(4)                                          /* (SPI_MON_LTMON_AGGR) Load 4 Interrupt Position */
#define SPI_MON_LTMON_AGGR_IRQ4_Msk           (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_IRQ4_Pos)       /* (SPI_MON_LTMON_AGGR) Load 4 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_IRQ4(value)        (SPI_MON_LTMON_AGGR_IRQ4_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_IRQ4_Pos)) /* Assigment of value for IRQ4 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_IRQ5_Pos           _UINT32_(5)                                          /* (SPI_MON_LTMON_AGGR) Load 5 Interrupt Position */
#define SPI_MON_LTMON_AGGR_IRQ5_Msk           (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_IRQ5_Pos)       /* (SPI_MON_LTMON_AGGR) Load 5 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_IRQ5(value)        (SPI_MON_LTMON_AGGR_IRQ5_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_IRQ5_Pos)) /* Assigment of value for IRQ5 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_IRQ6_Pos           _UINT32_(6)                                          /* (SPI_MON_LTMON_AGGR) Load 6 Interrupt Position */
#define SPI_MON_LTMON_AGGR_IRQ6_Msk           (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_IRQ6_Pos)       /* (SPI_MON_LTMON_AGGR) Load 6 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_IRQ6(value)        (SPI_MON_LTMON_AGGR_IRQ6_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_IRQ6_Pos)) /* Assigment of value for IRQ6 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_IRQ7_Pos           _UINT32_(7)                                          /* (SPI_MON_LTMON_AGGR) Load 7 Interrupt Position */
#define SPI_MON_LTMON_AGGR_IRQ7_Msk           (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_IRQ7_Pos)       /* (SPI_MON_LTMON_AGGR) Load 7 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_IRQ7(value)        (SPI_MON_LTMON_AGGR_IRQ7_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_IRQ7_Pos)) /* Assigment of value for IRQ7 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_EN_IRQ0_Pos        _UINT32_(8)                                          /* (SPI_MON_LTMON_AGGR) Enable Load 0 Interrupt Position */
#define SPI_MON_LTMON_AGGR_EN_IRQ0_Msk        (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_EN_IRQ0_Pos)    /* (SPI_MON_LTMON_AGGR) Enable Load 0 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_EN_IRQ0(value)     (SPI_MON_LTMON_AGGR_EN_IRQ0_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_EN_IRQ0_Pos)) /* Assigment of value for EN_IRQ0 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_EN_IRQ1_Pos        _UINT32_(9)                                          /* (SPI_MON_LTMON_AGGR) Enable Load 1 Interrupt Position */
#define SPI_MON_LTMON_AGGR_EN_IRQ1_Msk        (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_EN_IRQ1_Pos)    /* (SPI_MON_LTMON_AGGR) Enable Load 1 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_EN_IRQ1(value)     (SPI_MON_LTMON_AGGR_EN_IRQ1_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_EN_IRQ1_Pos)) /* Assigment of value for EN_IRQ1 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_EN_IRQ2_Pos        _UINT32_(10)                                         /* (SPI_MON_LTMON_AGGR) Enable Load 2 Interrupt Position */
#define SPI_MON_LTMON_AGGR_EN_IRQ2_Msk        (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_EN_IRQ2_Pos)    /* (SPI_MON_LTMON_AGGR) Enable Load 2 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_EN_IRQ2(value)     (SPI_MON_LTMON_AGGR_EN_IRQ2_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_EN_IRQ2_Pos)) /* Assigment of value for EN_IRQ2 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_EN_IRQ3_Pos        _UINT32_(11)                                         /* (SPI_MON_LTMON_AGGR) Enable Load 3 Interrupt Position */
#define SPI_MON_LTMON_AGGR_EN_IRQ3_Msk        (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_EN_IRQ3_Pos)    /* (SPI_MON_LTMON_AGGR) Enable Load 3 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_EN_IRQ3(value)     (SPI_MON_LTMON_AGGR_EN_IRQ3_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_EN_IRQ3_Pos)) /* Assigment of value for EN_IRQ3 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_EN_IRQ4_Pos        _UINT32_(12)                                         /* (SPI_MON_LTMON_AGGR) Enable Load 4 Interrupt Position */
#define SPI_MON_LTMON_AGGR_EN_IRQ4_Msk        (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_EN_IRQ4_Pos)    /* (SPI_MON_LTMON_AGGR) Enable Load 4 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_EN_IRQ4(value)     (SPI_MON_LTMON_AGGR_EN_IRQ4_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_EN_IRQ4_Pos)) /* Assigment of value for EN_IRQ4 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_EN_IRQ5_Pos        _UINT32_(13)                                         /* (SPI_MON_LTMON_AGGR) Enable Load 5 Interrupt Position */
#define SPI_MON_LTMON_AGGR_EN_IRQ5_Msk        (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_EN_IRQ5_Pos)    /* (SPI_MON_LTMON_AGGR) Enable Load 5 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_EN_IRQ5(value)     (SPI_MON_LTMON_AGGR_EN_IRQ5_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_EN_IRQ5_Pos)) /* Assigment of value for EN_IRQ5 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_EN_IRQ6_Pos        _UINT32_(14)                                         /* (SPI_MON_LTMON_AGGR) Enable Load 6 Interrupt Position */
#define SPI_MON_LTMON_AGGR_EN_IRQ6_Msk        (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_EN_IRQ6_Pos)    /* (SPI_MON_LTMON_AGGR) Enable Load 6 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_EN_IRQ6(value)     (SPI_MON_LTMON_AGGR_EN_IRQ6_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_EN_IRQ6_Pos)) /* Assigment of value for EN_IRQ6 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_EN_IRQ7_Pos        _UINT32_(15)                                         /* (SPI_MON_LTMON_AGGR) Enable Load 7 Interrupt Position */
#define SPI_MON_LTMON_AGGR_EN_IRQ7_Msk        (_UINT32_(0x1) << SPI_MON_LTMON_AGGR_EN_IRQ7_Pos)    /* (SPI_MON_LTMON_AGGR) Enable Load 7 Interrupt Mask */
#define SPI_MON_LTMON_AGGR_EN_IRQ7(value)     (SPI_MON_LTMON_AGGR_EN_IRQ7_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_EN_IRQ7_Pos)) /* Assigment of value for EN_IRQ7 in the SPI_MON_LTMON_AGGR register */
#define SPI_MON_LTMON_AGGR_Msk                _UINT32_(0x0000FFFF)                                 /* (SPI_MON_LTMON_AGGR) Register Mask  */

#define SPI_MON_LTMON_AGGR_IRQ_Pos            _UINT32_(0)                                          /* (SPI_MON_LTMON_AGGR Position) Load x Interrupt */
#define SPI_MON_LTMON_AGGR_IRQ_Msk            (_UINT32_(0xFF) << SPI_MON_LTMON_AGGR_IRQ_Pos)       /* (SPI_MON_LTMON_AGGR Mask) IRQ */
#define SPI_MON_LTMON_AGGR_IRQ(value)         (SPI_MON_LTMON_AGGR_IRQ_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_IRQ_Pos)) 
#define SPI_MON_LTMON_AGGR_EN_IRQ_Pos         _UINT32_(8)                                          /* (SPI_MON_LTMON_AGGR Position) Enable Load 7 Interrupt */
#define SPI_MON_LTMON_AGGR_EN_IRQ_Msk         (_UINT32_(0xFF) << SPI_MON_LTMON_AGGR_EN_IRQ_Pos)    /* (SPI_MON_LTMON_AGGR Mask) EN_IRQ */
#define SPI_MON_LTMON_AGGR_EN_IRQ(value)      (SPI_MON_LTMON_AGGR_EN_IRQ_Msk & (_UINT32_(value) << SPI_MON_LTMON_AGGR_EN_IRQ_Pos)) 

/* -------- SPI_MON_LTMON_CTRLSTS : (SPI_MON Offset: 0x314) (R/W 32) Load Monitor Control/Status Register -------- */
#define SPI_MON_LTMON_CTRLSTS_RESETVALUE      _UINT32_(0x00)                                       /*  (SPI_MON_LTMON_CTRLSTS) Load Monitor Control/Status Register  Reset Value */

#define SPI_MON_LTMON_CTRLSTS_FIFO_MTY_Pos    _UINT32_(0)                                          /* (SPI_MON_LTMON_CTRLSTS) FIFO Empty Position */
#define SPI_MON_LTMON_CTRLSTS_FIFO_MTY_Msk    (_UINT32_(0x1) << SPI_MON_LTMON_CTRLSTS_FIFO_MTY_Pos) /* (SPI_MON_LTMON_CTRLSTS) FIFO Empty Mask */
#define SPI_MON_LTMON_CTRLSTS_FIFO_MTY(value) (SPI_MON_LTMON_CTRLSTS_FIFO_MTY_Msk & (_UINT32_(value) << SPI_MON_LTMON_CTRLSTS_FIFO_MTY_Pos)) /* Assigment of value for FIFO_MTY in the SPI_MON_LTMON_CTRLSTS register */
#define SPI_MON_LTMON_CTRLSTS_FIFO_FUL_Pos    _UINT32_(1)                                          /* (SPI_MON_LTMON_CTRLSTS) FIFO Full Position */
#define SPI_MON_LTMON_CTRLSTS_FIFO_FUL_Msk    (_UINT32_(0x1) << SPI_MON_LTMON_CTRLSTS_FIFO_FUL_Pos) /* (SPI_MON_LTMON_CTRLSTS) FIFO Full Mask */
#define SPI_MON_LTMON_CTRLSTS_FIFO_FUL(value) (SPI_MON_LTMON_CTRLSTS_FIFO_FUL_Msk & (_UINT32_(value) << SPI_MON_LTMON_CTRLSTS_FIFO_FUL_Pos)) /* Assigment of value for FIFO_FUL in the SPI_MON_LTMON_CTRLSTS register */
#define SPI_MON_LTMON_CTRLSTS_FIFO_OVRF_Pos   _UINT32_(2)                                          /* (SPI_MON_LTMON_CTRLSTS) FIFO Overflow Position */
#define SPI_MON_LTMON_CTRLSTS_FIFO_OVRF_Msk   (_UINT32_(0x1) << SPI_MON_LTMON_CTRLSTS_FIFO_OVRF_Pos) /* (SPI_MON_LTMON_CTRLSTS) FIFO Overflow Mask */
#define SPI_MON_LTMON_CTRLSTS_FIFO_OVRF(value) (SPI_MON_LTMON_CTRLSTS_FIFO_OVRF_Msk & (_UINT32_(value) << SPI_MON_LTMON_CTRLSTS_FIFO_OVRF_Pos)) /* Assigment of value for FIFO_OVRF in the SPI_MON_LTMON_CTRLSTS register */
#define SPI_MON_LTMON_CTRLSTS_FIFO_UDRF_Pos   _UINT32_(3)                                          /* (SPI_MON_LTMON_CTRLSTS) FIFO Underflow Position */
#define SPI_MON_LTMON_CTRLSTS_FIFO_UDRF_Msk   (_UINT32_(0x1) << SPI_MON_LTMON_CTRLSTS_FIFO_UDRF_Pos) /* (SPI_MON_LTMON_CTRLSTS) FIFO Underflow Mask */
#define SPI_MON_LTMON_CTRLSTS_FIFO_UDRF(value) (SPI_MON_LTMON_CTRLSTS_FIFO_UDRF_Msk & (_UINT32_(value) << SPI_MON_LTMON_CTRLSTS_FIFO_UDRF_Pos)) /* Assigment of value for FIFO_UDRF in the SPI_MON_LTMON_CTRLSTS register */
#define SPI_MON_LTMON_CTRLSTS_CLR_FIFO_Pos    _UINT32_(8)                                          /* (SPI_MON_LTMON_CTRLSTS) Clear FIFO  Position */
#define SPI_MON_LTMON_CTRLSTS_CLR_FIFO_Msk    (_UINT32_(0x1) << SPI_MON_LTMON_CTRLSTS_CLR_FIFO_Pos) /* (SPI_MON_LTMON_CTRLSTS) Clear FIFO  Mask */
#define SPI_MON_LTMON_CTRLSTS_CLR_FIFO(value) (SPI_MON_LTMON_CTRLSTS_CLR_FIFO_Msk & (_UINT32_(value) << SPI_MON_LTMON_CTRLSTS_CLR_FIFO_Pos)) /* Assigment of value for CLR_FIFO in the SPI_MON_LTMON_CTRLSTS register */
#define SPI_MON_LTMON_CTRLSTS_Msk             _UINT32_(0x0000010F)                                 /* (SPI_MON_LTMON_CTRLSTS) Register Mask  */


/** \brief SPI_MON register offsets definitions */
#define SPI_MON_OP_PRMT_REG_OFST       _UINT32_(0x00)      /* (SPI_MON_OP_PRMT) Permit Address Register Offset */
#define SPI_MON_OP_PRMT0_REG_OFST      _UINT32_(0x00)      /* (SPI_MON_OP_PRMT0) Permit Address Register Offset */
#define SPI_MON_OP_PRMT1_REG_OFST      _UINT32_(0x04)      /* (SPI_MON_OP_PRMT1) Permit Address Register Offset */
#define SPI_MON_OP_PRMT2_REG_OFST      _UINT32_(0x08)      /* (SPI_MON_OP_PRMT2) Permit Address Register Offset */
#define SPI_MON_OP_PRMT3_REG_OFST      _UINT32_(0x0C)      /* (SPI_MON_OP_PRMT3) Permit Address Register Offset */
#define SPI_MON_OP_PRMT4_REG_OFST      _UINT32_(0x10)      /* (SPI_MON_OP_PRMT4) Permit Address Register Offset */
#define SPI_MON_OP_PRMT5_REG_OFST      _UINT32_(0x14)      /* (SPI_MON_OP_PRMT5) Permit Address Register Offset */
#define SPI_MON_OP_PRMT6_REG_OFST      _UINT32_(0x18)      /* (SPI_MON_OP_PRMT6) Permit Address Register Offset */
#define SPI_MON_OP_PRMT7_REG_OFST      _UINT32_(0x1C)      /* (SPI_MON_OP_PRMT7) Permit Address Register Offset */
#define SPI_MON_OP_KILLMD_REG_OFST     _UINT32_(0x20)      /* (SPI_MON_OP_KILLMD) Kill Address Register Offset */
#define SPI_MON_OP_KILLMD0_REG_OFST    _UINT32_(0x20)      /* (SPI_MON_OP_KILLMD0) Kill Address Register Offset */
#define SPI_MON_OP_KILLMD1_REG_OFST    _UINT32_(0x24)      /* (SPI_MON_OP_KILLMD1) Kill Address Register Offset */
#define SPI_MON_OP_KILLMD2_REG_OFST    _UINT32_(0x28)      /* (SPI_MON_OP_KILLMD2) Kill Address Register Offset */
#define SPI_MON_OP_KILLMD3_REG_OFST    _UINT32_(0x2C)      /* (SPI_MON_OP_KILLMD3) Kill Address Register Offset */
#define SPI_MON_OP_KILLMD4_REG_OFST    _UINT32_(0x30)      /* (SPI_MON_OP_KILLMD4) Kill Address Register Offset */
#define SPI_MON_OP_KILLMD5_REG_OFST    _UINT32_(0x34)      /* (SPI_MON_OP_KILLMD5) Kill Address Register Offset */
#define SPI_MON_OP_KILLMD6_REG_OFST    _UINT32_(0x38)      /* (SPI_MON_OP_KILLMD6) Kill Address Register Offset */
#define SPI_MON_OP_KILLMD7_REG_OFST    _UINT32_(0x3C)      /* (SPI_MON_OP_KILLMD7) Kill Address Register Offset */
#define SPI_MON_OP_WPROT_REG_OFST      _UINT32_(0x40)      /* (SPI_MON_OP_WPROT) Write Protect Address Register Offset */
#define SPI_MON_OP_WPROT0_REG_OFST     _UINT32_(0x40)      /* (SPI_MON_OP_WPROT0) Write Protect Address Register Offset */
#define SPI_MON_OP_WPROT1_REG_OFST     _UINT32_(0x44)      /* (SPI_MON_OP_WPROT1) Write Protect Address Register Offset */
#define SPI_MON_OP_WPROT2_REG_OFST     _UINT32_(0x48)      /* (SPI_MON_OP_WPROT2) Write Protect Address Register Offset */
#define SPI_MON_OP_WPROT3_REG_OFST     _UINT32_(0x4C)      /* (SPI_MON_OP_WPROT3) Write Protect Address Register Offset */
#define SPI_MON_OP_WPROT4_REG_OFST     _UINT32_(0x50)      /* (SPI_MON_OP_WPROT4) Write Protect Address Register Offset */
#define SPI_MON_OP_WPROT5_REG_OFST     _UINT32_(0x54)      /* (SPI_MON_OP_WPROT5) Write Protect Address Register Offset */
#define SPI_MON_OP_WPROT6_REG_OFST     _UINT32_(0x58)      /* (SPI_MON_OP_WPROT6) Write Protect Address Register Offset */
#define SPI_MON_OP_WPROT7_REG_OFST     _UINT32_(0x5C)      /* (SPI_MON_OP_WPROT7) Write Protect Address Register Offset */
#define SPI_MON_OP_LOCK_REG_OFST       _UINT32_(0x60)      /* (SPI_MON_OP_LOCK) Lock Address Register Offset */
#define SPI_MON_OP_LOCK0_REG_OFST      _UINT32_(0x60)      /* (SPI_MON_OP_LOCK0) Lock Address Register Offset */
#define SPI_MON_OP_LOCK1_REG_OFST      _UINT32_(0x64)      /* (SPI_MON_OP_LOCK1) Lock Address Register Offset */
#define SPI_MON_OP_LOCK2_REG_OFST      _UINT32_(0x68)      /* (SPI_MON_OP_LOCK2) Lock Address Register Offset */
#define SPI_MON_OP_LOCK3_REG_OFST      _UINT32_(0x6C)      /* (SPI_MON_OP_LOCK3) Lock Address Register Offset */
#define SPI_MON_OP_LOCK4_REG_OFST      _UINT32_(0x70)      /* (SPI_MON_OP_LOCK4) Lock Address Register Offset */
#define SPI_MON_OP_LOCK5_REG_OFST      _UINT32_(0x74)      /* (SPI_MON_OP_LOCK5) Lock Address Register Offset */
#define SPI_MON_OP_LOCK6_REG_OFST      _UINT32_(0x78)      /* (SPI_MON_OP_LOCK6) Lock Address Register Offset */
#define SPI_MON_OP_LOCK7_REG_OFST      _UINT32_(0x7C)      /* (SPI_MON_OP_LOCK7) Lock Address Register Offset */
#define SPI_MON_RT_START_REG_OFST      _UINT32_(0x00)      /* (SPI_MON_RT_START) Runtime Monitoring Start Register Offset */
#define SPI_MON_RT_LIMIT_REG_OFST      _UINT32_(0x04)      /* (SPI_MON_RT_LIMIT) Runtime Monitoring Limit Register Offset */
#define SPI_MON_MTMON_BEGIN_REG_OFST   _UINT32_(0x00)      /* (SPI_MON_MTMON_BEGIN) Match Monitor Region Begin Register Offset */
#define SPI_MON_MTMON_END_REG_OFST     _UINT32_(0x04)      /* (SPI_MON_MTMON_END) Match Monitor Region End Register Offset */
#define SPI_MON_MAP_REG_OFST           _UINT32_(0x08)      /* (SPI_MON_MAP) Match Monitor Region Map Register Offset */
#define SPI_MON_LM_CTRLSTS_REG_OFST    _UINT32_(0x00)      /* (SPI_MON_LM_CTRLSTS) Loadtime Monitor Control/Status Register Offset */
#define SPI_MON_LM_CHN_CTRL_REG_OFST   _UINT32_(0x04)      /* (SPI_MON_LM_CHN_CTRL) Loadtime Monitor Channel Control Register Offset */
#define SPI_MON_LM_BEGIN_REG_OFST      _UINT32_(0x08)      /* (SPI_MON_LM_BEGIN) Loadtime Monitor Channel Begin Register Offset */
#define SPI_MON_LM_END_REG_OFST        _UINT32_(0x0C)      /* (SPI_MON_LM_END) Loadtime Monitor Channel End Register Offset */
#define SPI_MON_LM_COUNT_REG_OFST      _UINT32_(0x10)      /* (SPI_MON_LM_COUNT) Loadtime Monitor Channel Count Register Offset */
#define SPI_MON_LM_DIGEST_REG_OFST     _UINT32_(0x14)      /* (SPI_MON_LM_DIGEST) Loadtime Monitor Channel Digest Register Offset */
#define SPI_MON_MNTR_CTRL_REG_OFST     _UINT32_(0x00)      /* (SPI_MON_MNTR_CTRL) SPI Monitor Control Register Offset */
#define SPI_MON_CFG_STS_REG_OFST       _UINT32_(0x04)      /* (SPI_MON_CFG_STS) SPI Configuration Status Register Offset */
#define SPI_MON_SPICFG2_REG_OFST       _UINT32_(0x08)      /* (SPI_MON_SPICFG2) SPI Monitor Configuration 2 Register Offset */
#define SPI_MON_VIOCTRLSTS_REG_OFST    _UINT32_(0x0C)      /* (SPI_MON_VIOCTRLSTS) Violation IRQ Control/Status Register Offset */
#define SPI_MON_IVN_STS_REG_OFST       _UINT32_(0x10)      /* (SPI_MON_IVN_STS) SPI Intervention Status Register Offset */
#define SPI_MON_IVN_REC_REG_OFST       _UINT32_(0x11)      /* (SPI_MON_IVN_REC) SPI Intervention Recovery Register Offset */
#define SPI_MON_VIO_STS_REG_OFST       _UINT32_(0x14)      /* (SPI_MON_VIO_STS) Violation Log Register Offset */
#define SPI_MON_ERR_ADDR_REG_OFST      _UINT32_(0x18)      /* (SPI_MON_ERR_ADDR) Error Byte Address Register Offset */
#define SPI_MON_MTMON_CTRLSTS_REG_OFST _UINT32_(0x1D0)     /* (SPI_MON_MTMON_CTRLSTS) Match Monitor Control/Status Register Offset */
#define SPI_MON_MTMON_ENMD_REG_OFST    _UINT32_(0x1D4)     /* (SPI_MON_MTMON_ENMD) Match Monitor Enable/Mode Register Offset */
#define SPI_MON_MTMON_TCTRL_REG_OFST   _UINT32_(0x1D8)     /* (SPI_MON_MTMON_TCTRL) Match Fetch Timeout Control Register Offset */
#define SPI_MON_MTMON_VIOSTS_REG_OFST  _UINT32_(0x240)     /* (SPI_MON_MTMON_VIOSTS) Match Monitor Violation Log Register Offset */
#define SPI_MON_MTMON_VIOADDR_REG_OFST _UINT32_(0x244)     /* (SPI_MON_MTMON_VIOADDR) Match Monitor Violation Address Register Offset */
#define SPI_MON_LTMON_AGGR_REG_OFST    _UINT32_(0x250)     /* (SPI_MON_LTMON_AGGR) Loadtime (Hash) IRQ Aggregation Register Offset */
#define SPI_MON_LTMON_CTRLSTS_REG_OFST _UINT32_(0x314)     /* (SPI_MON_LTMON_CTRLSTS) Load Monitor Control/Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief FLASH_SET register API structure */
typedef struct
{  /* Per Flash Device Register Definition */
  __IO  uint32_t                       SPI_MON_OP_PRMT[8]; /**< Offset: 0x00 (R/W  32) Permit Address Register */
  __IO  uint32_t                       SPI_MON_OP_KILLMD[8]; /**< Offset: 0x20 (R/W  32) Kill Address Register */
  __IO  uint32_t                       SPI_MON_OP_WPROT[8]; /**< Offset: 0x40 (R/W  32) Write Protect Address Register */
  __IO  uint32_t                       SPI_MON_OP_LOCK[8]; /**< Offset: 0x60 (R/W  32) Lock Address Register */
} spi_mon_flash_set_registers_t;

/** \brief RN_TM register API structure */
typedef struct
{  /* Run Time Registers */
  __IO  uint32_t                       SPI_MON_RT_START;   /**< Offset: 0x00 (R/W  32) Runtime Monitoring Start Register */
  __IO  uint32_t                       SPI_MON_RT_LIMIT;   /**< Offset: 0x04 (R/W  32) Runtime Monitoring Limit Register */
} spi_mon_rn_tm_registers_t;

/** \brief MT_MON register API structure */
typedef struct
{  /* Match Monitor Region Registers */
  __IO  uint32_t                       SPI_MON_MTMON_BEGIN; /**< Offset: 0x00 (R/W  32) Match Monitor Region Begin Register */
  __IO  uint32_t                       SPI_MON_MTMON_END;  /**< Offset: 0x04 (R/W  32) Match Monitor Region End Register */
  __IO  uint32_t                       SPI_MON_MAP;        /**< Offset: 0x08 (R/W  32) Match Monitor Region Map Register */
} spi_mon_mt_mon_registers_t;

/** \brief LT_MON register API structure */
typedef struct
{  /* Load Monitor Region Registers */
  __IO  uint32_t                       SPI_MON_LM_CTRLSTS; /**< Offset: 0x00 (R/W  32) Loadtime Monitor Control/Status Register */
  __IO  uint32_t                       SPI_MON_LM_CHN_CTRL; /**< Offset: 0x04 (R/W  32) Loadtime Monitor Channel Control Register */
  __IO  uint32_t                       SPI_MON_LM_BEGIN;   /**< Offset: 0x08 (R/W  32) Loadtime Monitor Channel Begin Register */
  __IO  uint32_t                       SPI_MON_LM_END;     /**< Offset: 0x0C (R/W  32) Loadtime Monitor Channel End Register */
  __I   uint32_t                       SPI_MON_LM_COUNT;   /**< Offset: 0x10 (R/   32) Loadtime Monitor Channel Count Register */
  __I   uint32_t                       SPI_MON_LM_DIGEST;  /**< Offset: 0x14 (R/   32) Loadtime Monitor Channel Digest Register */
} spi_mon_lt_mon_registers_t;

#define SPI_MON_FLASH_SET_NUMBER 2

#define SPI_MON_RN_TM_NUMBER 16

#define SPI_MON_MT_MON_NUMBER 8

#define SPI_MON_LT_MON_NUMBER 8

/** \brief SPI_MON register API structure */
typedef struct
{  /* SPI Monitor Block */
  __IO  uint32_t                       SPI_MON_MNTR_CTRL;  /**< Offset: 0x00 (R/W  32) SPI Monitor Control Register */
  __IO  uint32_t                       SPI_MON_CFG_STS;    /**< Offset: 0x04 (R/W  32) SPI Configuration Status Register */
  __IO  uint32_t                       SPI_MON_SPICFG2;    /**< Offset: 0x08 (R/W  32) SPI Monitor Configuration 2 Register */
  __IO  uint32_t                       SPI_MON_VIOCTRLSTS; /**< Offset: 0x0C (R/W  32) Violation IRQ Control/Status Register */
  __I   uint8_t                        SPI_MON_IVN_STS;    /**< Offset: 0x10 (R/   8) SPI Intervention Status Register */
  __O   uint8_t                        SPI_MON_IVN_REC;    /**< Offset: 0x11 ( /W  8) SPI Intervention Recovery Register */
  __I   uint8_t                        Reserved1[0x02];
  __IO  uint32_t                       SPI_MON_VIO_STS;    /**< Offset: 0x14 (R/W  32) Violation Log Register */
  __I   uint32_t                       SPI_MON_ERR_ADDR;   /**< Offset: 0x18 (R/   32) Error Byte Address Register */
  __I   uint8_t                        Reserved2[0x04];
        spi_mon_flash_set_registers_t  FLASH_SET[SPI_MON_FLASH_SET_NUMBER]; /**< Offset: 0x20  */
        spi_mon_rn_tm_registers_t      RN_TM[SPI_MON_RN_TM_NUMBER]; /**< Offset: 0x120  */
  __I   uint8_t                        Reserved3[0x30];
  __IO  uint32_t                       SPI_MON_MTMON_CTRLSTS; /**< Offset: 0x1D0 (R/W  32) Match Monitor Control/Status Register */
  __IO  uint32_t                       SPI_MON_MTMON_ENMD; /**< Offset: 0x1D4 (R/W  32) Match Monitor Enable/Mode Register */
  __IO  uint32_t                       SPI_MON_MTMON_TCTRL; /**< Offset: 0x1D8 (R/W  32) Match Fetch Timeout Control Register */
  __I   uint8_t                        Reserved4[0x04];
        spi_mon_mt_mon_registers_t     MT_MON[SPI_MON_MT_MON_NUMBER]; /**< Offset: 0x1E0  */
  __IO  uint32_t                       SPI_MON_MTMON_VIOSTS; /**< Offset: 0x240 (R/W  32) Match Monitor Violation Log Register */
  __I   uint32_t                       SPI_MON_MTMON_VIOADDR; /**< Offset: 0x244 (R/   32) Match Monitor Violation Address Register */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint32_t                       SPI_MON_LTMON_AGGR; /**< Offset: 0x250 (R/W  32) Loadtime (Hash) IRQ Aggregation Register */
        spi_mon_lt_mon_registers_t     LT_MON[SPI_MON_LT_MON_NUMBER]; /**< Offset: 0x254  */
  __IO  uint32_t                       SPI_MON_LTMON_CTRLSTS; /**< Offset: 0x314 (R/W  32) Load Monitor Control/Status Register */
} spi_mon_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_SPI_MON_COMPONENT_H_ */
