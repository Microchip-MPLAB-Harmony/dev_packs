/*
 * Component description for VBAT
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

/* file generated from device description version 2018-10-01T10:50:03Z */
#ifndef _CEC1702Q_VBAT_COMPONENT_H_
#define _CEC1702Q_VBAT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR VBAT                                         */
/* ************************************************************************** */

/* -------- VBAT_PFRS : (VBAT Offset: 0x00) (R/W 8) The Power-Fail and Reset Status Register collects and retains \n       the VBAT RST and WDT event status when VCC1 is unpowered. -------- */
#define VBAT_PFRS_RESETVALUE                  _UINT8_(0x80)                                        /*  (VBAT_PFRS) The Power-Fail and Reset Status Register collects and retains \n       the VBAT RST and WDT event status when VCC1 is unpowered.  Reset Value */

#define VBAT_PFRS_SOFT_Pos                    _UINT8_(2)                                           /* (VBAT_PFRS) This bit is set to '1b' if a was triggered by an assertion of the SOFT_SYS_RESET bit in the System Reset Register.\n            This bit is cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VBAT_PFRS_SOFT_Msk                    (_UINT8_(0x1) << VBAT_PFRS_SOFT_Pos)                 /* (VBAT_PFRS) This bit is set to '1b' if a was triggered by an assertion of the SOFT_SYS_RESET bit in the System Reset Register.\n            This bit is cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VBAT_PFRS_SOFT(value)                 (VBAT_PFRS_SOFT_Msk & (_UINT8_(value) << VBAT_PFRS_SOFT_Pos)) /* Assigment of value for SOFT in the VBAT_PFRS register */
#define VBAT_PFRS_TEST_Pos                    _UINT8_(3)                                           /* (VBAT_PFRS) Test Position */
#define VBAT_PFRS_TEST_Msk                    (_UINT8_(0x1) << VBAT_PFRS_TEST_Pos)                 /* (VBAT_PFRS) Test Mask */
#define VBAT_PFRS_TEST(value)                 (VBAT_PFRS_TEST_Msk & (_UINT8_(value) << VBAT_PFRS_TEST_Pos)) /* Assigment of value for TEST in the VBAT_PFRS register */
#define VBAT_PFRS_RSTI_Pos                    _UINT8_(4)                                           /* (VBAT_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by a low signal on the RSTI# input pin. This bit is\n             cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VBAT_PFRS_RSTI_Msk                    (_UINT8_(0x1) << VBAT_PFRS_RSTI_Pos)                 /* (VBAT_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by a low signal on the RSTI# input pin. This bit is\n             cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VBAT_PFRS_RSTI(value)                 (VBAT_PFRS_RSTI_Msk & (_UINT8_(value) << VBAT_PFRS_RSTI_Pos)) /* Assigment of value for RSTI in the VBAT_PFRS register */
#define VBAT_PFRS_WDT_EVT_Pos                 _UINT8_(5)                                           /* (VBAT_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by a Watchdog Timer event. This bit is cleared to '0b' when\n            written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VBAT_PFRS_WDT_EVT_Msk                 (_UINT8_(0x1) << VBAT_PFRS_WDT_EVT_Pos)              /* (VBAT_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by a Watchdog Timer event. This bit is cleared to '0b' when\n            written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VBAT_PFRS_WDT_EVT(value)              (VBAT_PFRS_WDT_EVT_Msk & (_UINT8_(value) << VBAT_PFRS_WDT_EVT_Pos)) /* Assigment of value for WDT_EVT in the VBAT_PFRS register */
#define VBAT_PFRS_SYS_RSTREQ_Pos              _UINT8_(6)                                           /* (VBAT_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by an ARM SYS_RSTREQ event. This bit is cleared to '0b' when\n         written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VBAT_PFRS_SYS_RSTREQ_Msk              (_UINT8_(0x1) << VBAT_PFRS_SYS_RSTREQ_Pos)           /* (VBAT_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by an ARM SYS_RSTREQ event. This bit is cleared to '0b' when\n         written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VBAT_PFRS_SYS_RSTREQ(value)           (VBAT_PFRS_SYS_RSTREQ_Msk & (_UINT8_(value) << VBAT_PFRS_SYS_RSTREQ_Pos)) /* Assigment of value for SYS_RSTREQ in the VBAT_PFRS register */
#define VBAT_PFRS_VBAT_RST_Pos                _UINT8_(7)                                           /* (VBAT_PFRS) The VBAT RST bit is set to '1' by hardware when a RESET_VBAT is detected. This is the register default value.\n          To clear VBAT RST EC firmware must write a '1' to this bit; writing a '0' to VBAT RST has no affect.(R/WC) Position */
#define VBAT_PFRS_VBAT_RST_Msk                (_UINT8_(0x1) << VBAT_PFRS_VBAT_RST_Pos)             /* (VBAT_PFRS) The VBAT RST bit is set to '1' by hardware when a RESET_VBAT is detected. This is the register default value.\n          To clear VBAT RST EC firmware must write a '1' to this bit; writing a '0' to VBAT RST has no affect.(R/WC) Mask */
#define VBAT_PFRS_VBAT_RST(value)             (VBAT_PFRS_VBAT_RST_Msk & (_UINT8_(value) << VBAT_PFRS_VBAT_RST_Pos)) /* Assigment of value for VBAT_RST in the VBAT_PFRS register */
#define VBAT_PFRS_Msk                         _UINT8_(0xFC)                                        /* (VBAT_PFRS) Register Mask  */


/* -------- VBAT_CLK32_EN : (VBAT Offset: 0x08) (R/W 32) CLOCK ENABLE -------- */
#define VBAT_CLK32_EN_RESETVALUE              _UINT32_(0x00)                                       /*  (VBAT_CLK32_EN) CLOCK ENABLE  Reset Value */

#define VBAT_CLK32_EN_C32K_SUPPRESS_Pos       _UINT32_(0)                                          /* (VBAT_CLK32_EN) 1=32KHz clock domain is off while VTR is off (i.e., while on VBAT only). The 32KHz domain is always on\n          while VTR is on, so the PLL always has a reference.\n         0=32KHz clock domain is enabled while VTR is off (i.e., while on VBAT only). The clock source for the 32KHz domain is\n         determined by the other bits in this register Position */
#define VBAT_CLK32_EN_C32K_SUPPRESS_Msk       (_UINT32_(0x1) << VBAT_CLK32_EN_C32K_SUPPRESS_Pos)   /* (VBAT_CLK32_EN) 1=32KHz clock domain is off while VTR is off (i.e., while on VBAT only). The 32KHz domain is always on\n          while VTR is on, so the PLL always has a reference.\n         0=32KHz clock domain is enabled while VTR is off (i.e., while on VBAT only). The clock source for the 32KHz domain is\n         determined by the other bits in this register Mask */
#define VBAT_CLK32_EN_C32K_SUPPRESS(value)    (VBAT_CLK32_EN_C32K_SUPPRESS_Msk & (_UINT32_(value) << VBAT_CLK32_EN_C32K_SUPPRESS_Pos)) /* Assigment of value for C32K_SUPPRESS in the VBAT_CLK32_EN register */
#define VBAT_CLK32_EN_EXT_32K_Pos             _UINT32_(1)                                          /* (VBAT_CLK32_EN) This bit selects the source for the 32KHz clock domain.\n             1=The 32KHZ_IN VTR-powered pin is used as a source for the 32KHz clock domain. If an activity detector does not detect a\n           clock on the selected source, the always-on 32KHz internal clock source is automatically selected\n                0=The always-on32Khz clock source is used as the source for the 32KHz clock domain. Position */
#define VBAT_CLK32_EN_EXT_32K_Msk             (_UINT32_(0x1) << VBAT_CLK32_EN_EXT_32K_Pos)         /* (VBAT_CLK32_EN) This bit selects the source for the 32KHz clock domain.\n             1=The 32KHZ_IN VTR-powered pin is used as a source for the 32KHz clock domain. If an activity detector does not detect a\n           clock on the selected source, the always-on 32KHz internal clock source is automatically selected\n                0=The always-on32Khz clock source is used as the source for the 32KHz clock domain. Mask */
#define VBAT_CLK32_EN_EXT_32K(value)          (VBAT_CLK32_EN_EXT_32K_Msk & (_UINT32_(value) << VBAT_CLK32_EN_EXT_32K_Pos)) /* Assigment of value for EXT_32K in the VBAT_CLK32_EN register */
#define VBAT_CLK32_EN_C32KHZ_SRC_Pos          _UINT32_(2)                                          /* (VBAT_CLK32_EN) This field determines the source for the always-on 32KHz internal clock source. If set to '1b', this bit\n       will only take effect if an active clock has been detected on the crystal pins. Once the 32KHz source has been switched,\n          activity detection on the crystal no longer functions. Therefore, if the crystal oscillator uses a single-ended\n                 input, once started that input must not stop while this bit is '1b'.\n                  1=Crystal Oscillator. The selection between a singled-ended input or a resonant crystal is determined by XOSEL in this register\n         0=Silicon Oscillator. Position */
#define VBAT_CLK32_EN_C32KHZ_SRC_Msk          (_UINT32_(0x1) << VBAT_CLK32_EN_C32KHZ_SRC_Pos)      /* (VBAT_CLK32_EN) This field determines the source for the always-on 32KHz internal clock source. If set to '1b', this bit\n       will only take effect if an active clock has been detected on the crystal pins. Once the 32KHz source has been switched,\n          activity detection on the crystal no longer functions. Therefore, if the crystal oscillator uses a single-ended\n                 input, once started that input must not stop while this bit is '1b'.\n                  1=Crystal Oscillator. The selection between a singled-ended input or a resonant crystal is determined by XOSEL in this register\n         0=Silicon Oscillator. Mask */
#define VBAT_CLK32_EN_C32KHZ_SRC(value)       (VBAT_CLK32_EN_C32KHZ_SRC_Msk & (_UINT32_(value) << VBAT_CLK32_EN_C32KHZ_SRC_Pos)) /* Assigment of value for C32KHZ_SRC in the VBAT_CLK32_EN register */
#define VBAT_CLK32_EN_XOSEL_Pos               _UINT32_(3)                                          /* (VBAT_CLK32_EN) This bit selects between a single-ended clock source for the crystal oscillator or an external parallel crystal.\n             1= the Crystal Oscillator is driven by a single-ended 32KHz clock source connected to the XTAL2 pin. \n                 0= the Crystal Oscillator requires a 32KHz parallel resonant crystal connected between the XTAL1 and XTAL2 pins (default). Position */
#define VBAT_CLK32_EN_XOSEL_Msk               (_UINT32_(0x1) << VBAT_CLK32_EN_XOSEL_Pos)           /* (VBAT_CLK32_EN) This bit selects between a single-ended clock source for the crystal oscillator or an external parallel crystal.\n             1= the Crystal Oscillator is driven by a single-ended 32KHz clock source connected to the XTAL2 pin. \n                 0= the Crystal Oscillator requires a 32KHz parallel resonant crystal connected between the XTAL1 and XTAL2 pins (default). Mask */
#define VBAT_CLK32_EN_XOSEL(value)            (VBAT_CLK32_EN_XOSEL_Msk & (_UINT32_(value) << VBAT_CLK32_EN_XOSEL_Pos)) /* Assigment of value for XOSEL in the VBAT_CLK32_EN register */
#define VBAT_CLK32_EN_Msk                     _UINT32_(0x0000000F)                                 /* (VBAT_CLK32_EN) Register Mask  */


/* -------- VBAT_MCNT_LO : (VBAT Offset: 0x20) (R/W 32) MONOTONIC COUNTER -------- */
#define VBAT_MCNT_LO_RESETVALUE               _UINT32_(0x00)                                       /*  (VBAT_MCNT_LO) MONOTONIC COUNTER  Reset Value */

#define VBAT_MCNT_LO_MON_CNT_Pos              _UINT32_(0)                                          /* (VBAT_MCNT_LO) Read-only register that increments by 1 every time it is read. It is reset to 0 on a VBAT Power On Reset. Position */
#define VBAT_MCNT_LO_MON_CNT_Msk              (_UINT32_(0xFFFFFFFF) << VBAT_MCNT_LO_MON_CNT_Pos)   /* (VBAT_MCNT_LO) Read-only register that increments by 1 every time it is read. It is reset to 0 on a VBAT Power On Reset. Mask */
#define VBAT_MCNT_LO_MON_CNT(value)           (VBAT_MCNT_LO_MON_CNT_Msk & (_UINT32_(value) << VBAT_MCNT_LO_MON_CNT_Pos)) /* Assigment of value for MON_CNT in the VBAT_MCNT_LO register */
#define VBAT_MCNT_LO_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (VBAT_MCNT_LO) Register Mask  */


/* -------- VBAT_MCNT_HI : (VBAT Offset: 0x24) (R/W 32) COUNTER HIWORD -------- */
#define VBAT_MCNT_HI_RESETVALUE               _UINT32_(0x00)                                       /*  (VBAT_MCNT_HI) COUNTER HIWORD  Reset Value */

#define VBAT_MCNT_HI_CNT_HWRD_Pos             _UINT32_(0)                                          /* (VBAT_MCNT_HI) Thirty-two bit read/write register. If software sets this register to an incrementing value, based on an external\n         non-volatile store, this register may be combined with the Monotonic Counter Register to form a 64-bit monotonic counter. Position */
#define VBAT_MCNT_HI_CNT_HWRD_Msk             (_UINT32_(0xFFFFFFFF) << VBAT_MCNT_HI_CNT_HWRD_Pos)  /* (VBAT_MCNT_HI) Thirty-two bit read/write register. If software sets this register to an incrementing value, based on an external\n         non-volatile store, this register may be combined with the Monotonic Counter Register to form a 64-bit monotonic counter. Mask */
#define VBAT_MCNT_HI_CNT_HWRD(value)          (VBAT_MCNT_HI_CNT_HWRD_Msk & (_UINT32_(value) << VBAT_MCNT_HI_CNT_HWRD_Pos)) /* Assigment of value for CNT_HWRD in the VBAT_MCNT_HI register */
#define VBAT_MCNT_HI_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (VBAT_MCNT_HI) Register Mask  */


/* -------- VBAT_VWR_BCKP : (VBAT Offset: 0x28) (R/W 32) VWR_BCKP -------- */
#define VBAT_VWR_BCKP_RESETVALUE              _UINT32_(0x00)                                       /*  (VBAT_VWR_BCKP) VWR_BCKP  Reset Value */

#define VBAT_VWR_BCKP_M2S_2H_BACKUP_Pos       _UINT32_(0)                                          /* (VBAT_VWR_BCKP) The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n        that corresponds to Virtual Wire Index 2h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n               edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. Position */
#define VBAT_VWR_BCKP_M2S_2H_BACKUP_Msk       (_UINT32_(0xF) << VBAT_VWR_BCKP_M2S_2H_BACKUP_Pos)   /* (VBAT_VWR_BCKP) The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n        that corresponds to Virtual Wire Index 2h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n               edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. Mask */
#define VBAT_VWR_BCKP_M2S_2H_BACKUP(value)    (VBAT_VWR_BCKP_M2S_2H_BACKUP_Msk & (_UINT32_(value) << VBAT_VWR_BCKP_M2S_2H_BACKUP_Pos)) /* Assigment of value for M2S_2H_BACKUP in the VBAT_VWR_BCKP register */
#define VBAT_VWR_BCKP_M2S_42H_BACKUP_Pos      _UINT32_(4)                                          /* (VBAT_VWR_BCKP) The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n        that corresponds to Virtual Wire Index 42h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n                  edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. Position */
#define VBAT_VWR_BCKP_M2S_42H_BACKUP_Msk      (_UINT32_(0xF) << VBAT_VWR_BCKP_M2S_42H_BACKUP_Pos)  /* (VBAT_VWR_BCKP) The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n        that corresponds to Virtual Wire Index 42h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n                  edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. Mask */
#define VBAT_VWR_BCKP_M2S_42H_BACKUP(value)   (VBAT_VWR_BCKP_M2S_42H_BACKUP_Msk & (_UINT32_(value) << VBAT_VWR_BCKP_M2S_42H_BACKUP_Pos)) /* Assigment of value for M2S_42H_BACKUP in the VBAT_VWR_BCKP register */
#define VBAT_VWR_BCKP_Msk                     _UINT32_(0x000000FF)                                 /* (VBAT_VWR_BCKP) Register Mask  */


/** \brief VBAT register offsets definitions */
#define VBAT_PFRS_REG_OFST             _UINT32_(0x00)      /* (VBAT_PFRS) The Power-Fail and Reset Status Register collects and retains \n       the VBAT RST and WDT event status when VCC1 is unpowered. Offset */
#define VBAT_CLK32_EN_REG_OFST         _UINT32_(0x08)      /* (VBAT_CLK32_EN) CLOCK ENABLE Offset */
#define VBAT_MCNT_LO_REG_OFST          _UINT32_(0x20)      /* (VBAT_MCNT_LO) MONOTONIC COUNTER Offset */
#define VBAT_MCNT_HI_REG_OFST          _UINT32_(0x24)      /* (VBAT_MCNT_HI) COUNTER HIWORD Offset */
#define VBAT_VWR_BCKP_REG_OFST         _UINT32_(0x28)      /* (VBAT_VWR_BCKP) VWR_BCKP Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief VBAT register API structure */
typedef struct
{  /* The VBAT Register Bank block is a block implemented for aggregating miscellaneous\n      battery-backed registers required the host and by the Embedded Controller (EC) Subsystem that are\n             not unique to a block implemented in the EC subsystem. */
  __IO  uint8_t                        VBAT_PFRS;          /**< Offset: 0x00 (R/W  8) The Power-Fail and Reset Status Register collects and retains \n       the VBAT RST and WDT event status when VCC1 is unpowered. */
  __I   uint8_t                        Reserved1[0x07];
  __IO  uint32_t                       VBAT_CLK32_EN;      /**< Offset: 0x08 (R/W  32) CLOCK ENABLE */
  __I   uint8_t                        Reserved2[0x14];
  __IO  uint32_t                       VBAT_MCNT_LO;       /**< Offset: 0x20 (R/W  32) MONOTONIC COUNTER */
  __IO  uint32_t                       VBAT_MCNT_HI;       /**< Offset: 0x24 (R/W  32) COUNTER HIWORD */
  __IO  uint32_t                       VBAT_VWR_BCKP;      /**< Offset: 0x28 (R/W  32) VWR_BCKP */
} vbat_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_VBAT_COMPONENT_H_ */
