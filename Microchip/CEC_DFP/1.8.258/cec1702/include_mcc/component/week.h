/*
 * Component description for WEEK
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

/* file generated from device description version 2018-10-01T10:50:03Z */
#ifndef _CEC1702Q_WEEK_COMPONENT_H_
#define _CEC1702Q_WEEK_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR WEEK                                         */
/* ************************************************************************** */

/* -------- WEEK_CTRL : (WEEK Offset: 0x00) (R/W 32) Control Register -------- */
#define WEEK_CTRL_RESETVALUE                  _UINT32_(0x01)                                       /*  (WEEK_CTRL) Control Register  Reset Value */

#define WEEK_CTRL_WT_EN_Pos                   _UINT32_(0)                                          /* (WEEK_CTRL) The WT_EN bit is used to start and stop the Week Alarm Counter Register and the Clock Divider Register.\n           The value in the Counter Register is held when the WT_ENABLE bit is not asserted (0) and the count is resumed from the last value when the bit is asserted (1).\n             The 15-Bit Clock Divider is reset to 00h and the Week Alarm Interface is in its lowest power consumption state when the WT_ENABLE bit is not asserted. Position */
#define WEEK_CTRL_WT_EN_Msk                   (_UINT32_(0x1) << WEEK_CTRL_WT_EN_Pos)               /* (WEEK_CTRL) The WT_EN bit is used to start and stop the Week Alarm Counter Register and the Clock Divider Register.\n           The value in the Counter Register is held when the WT_ENABLE bit is not asserted (0) and the count is resumed from the last value when the bit is asserted (1).\n             The 15-Bit Clock Divider is reset to 00h and the Week Alarm Interface is in its lowest power consumption state when the WT_ENABLE bit is not asserted. Mask */
#define WEEK_CTRL_WT_EN(value)                (WEEK_CTRL_WT_EN_Msk & (_UINT32_(value) << WEEK_CTRL_WT_EN_Pos)) /* Assigment of value for WT_EN in the WEEK_CTRL register */
#define WEEK_CTRL_PWRUP_EN_Pos                _UINT32_(6)                                          /* (WEEK_CTRL) This bit controls the state of the Power-Up Event Output and enables Week POWER-UP Event decoding in the VBAT-Powered Control Interface.\n        1=Power-Up Event Output Enabled\n       0=Power-Up Event Output Disabled and Reset Position */
#define WEEK_CTRL_PWRUP_EN_Msk                (_UINT32_(0x1) << WEEK_CTRL_PWRUP_EN_Pos)            /* (WEEK_CTRL) This bit controls the state of the Power-Up Event Output and enables Week POWER-UP Event decoding in the VBAT-Powered Control Interface.\n        1=Power-Up Event Output Enabled\n       0=Power-Up Event Output Disabled and Reset Mask */
#define WEEK_CTRL_PWRUP_EN(value)             (WEEK_CTRL_PWRUP_EN_Msk & (_UINT32_(value) << WEEK_CTRL_PWRUP_EN_Pos)) /* Assigment of value for PWRUP_EN in the WEEK_CTRL register */
#define WEEK_CTRL_Msk                         _UINT32_(0x00000041)                                 /* (WEEK_CTRL) Register Mask  */


/* -------- WEEK_ALARM_CNT : (WEEK Offset: 0x04) (R/W 32) Week Alarm Counter Register -------- */
#define WEEK_ALARM_CNT_RESETVALUE             _UINT32_(0x00)                                       /*  (WEEK_ALARM_CNT) Week Alarm Counter Register  Reset Value */

#define WEEK_ALARM_CNT_WK_CNTR_Pos            _UINT32_(0)                                          /* (WEEK_ALARM_CNT) While the WT_ENABLE bit is 1, this register is incremented at a 1 Hz rate. Writes of this register may require one second\n            to take effect. Reads return the current state of the register. Reads and writes complete independently of the state of WT_ENABLE. Position */
#define WEEK_ALARM_CNT_WK_CNTR_Msk            (_UINT32_(0xFFFFFFF) << WEEK_ALARM_CNT_WK_CNTR_Pos)  /* (WEEK_ALARM_CNT) While the WT_ENABLE bit is 1, this register is incremented at a 1 Hz rate. Writes of this register may require one second\n            to take effect. Reads return the current state of the register. Reads and writes complete independently of the state of WT_ENABLE. Mask */
#define WEEK_ALARM_CNT_WK_CNTR(value)         (WEEK_ALARM_CNT_WK_CNTR_Msk & (_UINT32_(value) << WEEK_ALARM_CNT_WK_CNTR_Pos)) /* Assigment of value for WK_CNTR in the WEEK_ALARM_CNT register */
#define WEEK_ALARM_CNT_Msk                    _UINT32_(0x0FFFFFFF)                                 /* (WEEK_ALARM_CNT) Register Mask  */


/* -------- WEEK_TMR_COMP : (WEEK Offset: 0x08) (R/W 32) Week Timer Compare Register -------- */
#define WEEK_TMR_COMP_RESETVALUE              _UINT32_(0xFFFFFFF)                                  /*  (WEEK_TMR_COMP) Week Timer Compare Register  Reset Value */

#define WEEK_TMR_COMP_WK_COMP_Pos             _UINT32_(0)                                          /* (WEEK_TMR_COMP) A Week Alarm Interrupt and a Week Alarm Power-Up Event are asserted when the Week Alarm Counter Register is greater than\n         or equal to the contents of this register. Reads and writes complete independently of the state of WT_ENABLE. Position */
#define WEEK_TMR_COMP_WK_COMP_Msk             (_UINT32_(0xFFFFFFF) << WEEK_TMR_COMP_WK_COMP_Pos)   /* (WEEK_TMR_COMP) A Week Alarm Interrupt and a Week Alarm Power-Up Event are asserted when the Week Alarm Counter Register is greater than\n         or equal to the contents of this register. Reads and writes complete independently of the state of WT_ENABLE. Mask */
#define WEEK_TMR_COMP_WK_COMP(value)          (WEEK_TMR_COMP_WK_COMP_Msk & (_UINT32_(value) << WEEK_TMR_COMP_WK_COMP_Pos)) /* Assigment of value for WK_COMP in the WEEK_TMR_COMP register */
#define WEEK_TMR_COMP_Msk                     _UINT32_(0x0FFFFFFF)                                 /* (WEEK_TMR_COMP) Register Mask  */


/* -------- WEEK_CLKDIV : (WEEK Offset: 0x0C) (R/W 32) Clock Divider Register -------- */
#define WEEK_CLKDIV_RESETVALUE                _UINT32_(0x00)                                       /*  (WEEK_CLKDIV) Clock Divider Register  Reset Value */

#define WEEK_CLKDIV_DIV_Pos                   _UINT32_(0)                                          /* (WEEK_CLKDIV) Reads of this register return the current state of the Week Timer 15- bit clock divider. Position */
#define WEEK_CLKDIV_DIV_Msk                   (_UINT32_(0x7FFF) << WEEK_CLKDIV_DIV_Pos)            /* (WEEK_CLKDIV) Reads of this register return the current state of the Week Timer 15- bit clock divider. Mask */
#define WEEK_CLKDIV_DIV(value)                (WEEK_CLKDIV_DIV_Msk & (_UINT32_(value) << WEEK_CLKDIV_DIV_Pos)) /* Assigment of value for DIV in the WEEK_CLKDIV register */
#define WEEK_CLKDIV_Msk                       _UINT32_(0x00007FFF)                                 /* (WEEK_CLKDIV) Register Mask  */


/* -------- WEEK_SS_INTR_SEL : (WEEK Offset: 0x10) (R/W 32) Sub-Second Programmable Interrupt Select Register -------- */
#define WEEK_SS_INTR_SEL_RESETVALUE           _UINT32_(0x00)                                       /*  (WEEK_SS_INTR_SEL) Sub-Second Programmable Interrupt Select Register  Reset Value */

#define WEEK_SS_INTR_SEL_SPISR_Pos            _UINT32_(0)                                          /* (WEEK_SS_INTR_SEL) This field determines the rate at which Sub-Second interrupt events are generated. Position */
#define WEEK_SS_INTR_SEL_SPISR_Msk            (_UINT32_(0xF) << WEEK_SS_INTR_SEL_SPISR_Pos)        /* (WEEK_SS_INTR_SEL) This field determines the rate at which Sub-Second interrupt events are generated. Mask */
#define WEEK_SS_INTR_SEL_SPISR(value)         (WEEK_SS_INTR_SEL_SPISR_Msk & (_UINT32_(value) << WEEK_SS_INTR_SEL_SPISR_Pos)) /* Assigment of value for SPISR in the WEEK_SS_INTR_SEL register */
#define WEEK_SS_INTR_SEL_Msk                  _UINT32_(0x0000000F)                                 /* (WEEK_SS_INTR_SEL) Register Mask  */


/* -------- WEEK_SWK_CTRL : (WEEK Offset: 0x14) ( R/ 32) Sub-Week Control Register -------- */
#define WEEK_SWK_CTRL_RESETVALUE              _UINT32_(0x00)                                       /*  (WEEK_SWK_CTRL) Sub-Week Control Register  Reset Value */

#define WEEK_SWK_CTRL_SWKTMR_PWRUP_EVT_STS_Pos _UINT32_(0)                                          /* (WEEK_SWK_CTRL) This bit is set to 1 when the Sub-Week Alarm Counter Register decrements from 1 to 0 and the POWERUP_EN is 1.\n          Writes of 1 clear this bit. Writes of 0 have no effect. Note: This bit MUST be cleared to remove a Sub-Week Timer Power-Up Event. Position */
#define WEEK_SWK_CTRL_SWKTMR_PWRUP_EVT_STS_Msk (_UINT32_(0x1) << WEEK_SWK_CTRL_SWKTMR_PWRUP_EVT_STS_Pos) /* (WEEK_SWK_CTRL) This bit is set to 1 when the Sub-Week Alarm Counter Register decrements from 1 to 0 and the POWERUP_EN is 1.\n          Writes of 1 clear this bit. Writes of 0 have no effect. Note: This bit MUST be cleared to remove a Sub-Week Timer Power-Up Event. Mask */
#define WEEK_SWK_CTRL_SWKTMR_PWRUP_EVT_STS(value) (WEEK_SWK_CTRL_SWKTMR_PWRUP_EVT_STS_Msk & (_UINT32_(value) << WEEK_SWK_CTRL_SWKTMR_PWRUP_EVT_STS_Pos)) /* Assigment of value for SWKTMR_PWRUP_EVT_STS in the WEEK_SWK_CTRL register */
#define WEEK_SWK_CTRL_WKTMR_PWRUP_EVT_STS_Pos _UINT32_(1)                                          /* (WEEK_SWK_CTRL) This bit is set to 1 when the Week Alarm Counter Register is greater than or equal the contents of the Week Timer Compare\n       Register and the POWERUP_EN is 1. Writes of 1 clear this bit. Writes of 0 have no effect.\n              Note: This bit does not have to be cleared to remove a Week Timer Power-Up Event. Position */
#define WEEK_SWK_CTRL_WKTMR_PWRUP_EVT_STS_Msk (_UINT32_(0x1) << WEEK_SWK_CTRL_WKTMR_PWRUP_EVT_STS_Pos) /* (WEEK_SWK_CTRL) This bit is set to 1 when the Week Alarm Counter Register is greater than or equal the contents of the Week Timer Compare\n       Register and the POWERUP_EN is 1. Writes of 1 clear this bit. Writes of 0 have no effect.\n              Note: This bit does not have to be cleared to remove a Week Timer Power-Up Event. Mask */
#define WEEK_SWK_CTRL_WKTMR_PWRUP_EVT_STS(value) (WEEK_SWK_CTRL_WKTMR_PWRUP_EVT_STS_Msk & (_UINT32_(value) << WEEK_SWK_CTRL_WKTMR_PWRUP_EVT_STS_Pos)) /* Assigment of value for WKTMR_PWRUP_EVT_STS in the WEEK_SWK_CTRL register */
#define WEEK_SWK_CTRL_TEST_Pos                _UINT32_(4)                                          /* (WEEK_SWK_CTRL) Test Position */
#define WEEK_SWK_CTRL_TEST_Msk                (_UINT32_(0x1) << WEEK_SWK_CTRL_TEST_Pos)            /* (WEEK_SWK_CTRL) Test Mask */
#define WEEK_SWK_CTRL_TEST(value)             (WEEK_SWK_CTRL_TEST_Msk & (_UINT32_(value) << WEEK_SWK_CTRL_TEST_Pos)) /* Assigment of value for TEST in the WEEK_SWK_CTRL register */
#define WEEK_SWK_CTRL_TEST0_Pos               _UINT32_(5)                                          /* (WEEK_SWK_CTRL) Test Position */
#define WEEK_SWK_CTRL_TEST0_Msk               (_UINT32_(0x1) << WEEK_SWK_CTRL_TEST0_Pos)           /* (WEEK_SWK_CTRL) Test Mask */
#define WEEK_SWK_CTRL_TEST0(value)            (WEEK_SWK_CTRL_TEST0_Msk & (_UINT32_(value) << WEEK_SWK_CTRL_TEST0_Pos)) /* Assigment of value for TEST0 in the WEEK_SWK_CTRL register */
#define WEEK_SWK_CTRL_AU_RLD_Pos              _UINT32_(6)                                          /* (WEEK_SWK_CTRL) 1= No reload occurs when the Sub-Week Counter expires\n       0= Reloads the SUBWEEK_COUNTER_LOAD field into the Sub- Week Counter when the counter expires. Position */
#define WEEK_SWK_CTRL_AU_RLD_Msk              (_UINT32_(0x1) << WEEK_SWK_CTRL_AU_RLD_Pos)          /* (WEEK_SWK_CTRL) 1= No reload occurs when the Sub-Week Counter expires\n       0= Reloads the SUBWEEK_COUNTER_LOAD field into the Sub- Week Counter when the counter expires. Mask */
#define WEEK_SWK_CTRL_AU_RLD(value)           (WEEK_SWK_CTRL_AU_RLD_Msk & (_UINT32_(value) << WEEK_SWK_CTRL_AU_RLD_Pos)) /* Assigment of value for AU_RLD in the WEEK_SWK_CTRL register */
#define WEEK_SWK_CTRL_SWK_TICK_Pos            _UINT32_(7)                                          /* (WEEK_SWK_CTRL) This field selects the clock source for the Sub-Week Counter. Position */
#define WEEK_SWK_CTRL_SWK_TICK_Msk            (_UINT32_(0x7) << WEEK_SWK_CTRL_SWK_TICK_Pos)        /* (WEEK_SWK_CTRL) This field selects the clock source for the Sub-Week Counter. Mask */
#define WEEK_SWK_CTRL_SWK_TICK(value)         (WEEK_SWK_CTRL_SWK_TICK_Msk & (_UINT32_(value) << WEEK_SWK_CTRL_SWK_TICK_Pos)) /* Assigment of value for SWK_TICK in the WEEK_SWK_CTRL register */
#define WEEK_SWK_CTRL_Msk                     _UINT32_(0x000003F3)                                 /* (WEEK_SWK_CTRL) Register Mask  */


/* -------- WEEK_SWK_ALARM : (WEEK Offset: 0x18) ( R/ 32) Sub-Week Alarm Counter Register -------- */
#define WEEK_SWK_ALARM_RESETVALUE             _UINT32_(0x00)                                       /*  (WEEK_SWK_ALARM) Sub-Week Alarm Counter Register  Reset Value */

#define WEEK_SWK_ALARM_CNTR_LOAD_Pos          _UINT32_(0)                                          /* (WEEK_SWK_ALARM) Writes with a non-zero value to this field reload the 9-bit Sub-Week Alarm counter. Writes of 0 disable the counter.\n       If the Sub-Week Alarm counter decrements to 0 and the AUTO_RELOAD bit is set, the value in this field is automatically loaded into the Sub-Week Alarm counter. Position */
#define WEEK_SWK_ALARM_CNTR_LOAD_Msk          (_UINT32_(0x1FF) << WEEK_SWK_ALARM_CNTR_LOAD_Pos)    /* (WEEK_SWK_ALARM) Writes with a non-zero value to this field reload the 9-bit Sub-Week Alarm counter. Writes of 0 disable the counter.\n       If the Sub-Week Alarm counter decrements to 0 and the AUTO_RELOAD bit is set, the value in this field is automatically loaded into the Sub-Week Alarm counter. Mask */
#define WEEK_SWK_ALARM_CNTR_LOAD(value)       (WEEK_SWK_ALARM_CNTR_LOAD_Msk & (_UINT32_(value) << WEEK_SWK_ALARM_CNTR_LOAD_Pos)) /* Assigment of value for CNTR_LOAD in the WEEK_SWK_ALARM register */
#define WEEK_SWK_ALARM_CNTR_STS_Pos           _UINT32_(16)                                         /* (WEEK_SWK_ALARM) Reads of this register return the current state of the 9-bit Sub-Week Alarm counter. Position */
#define WEEK_SWK_ALARM_CNTR_STS_Msk           (_UINT32_(0x1FF) << WEEK_SWK_ALARM_CNTR_STS_Pos)     /* (WEEK_SWK_ALARM) Reads of this register return the current state of the 9-bit Sub-Week Alarm counter. Mask */
#define WEEK_SWK_ALARM_CNTR_STS(value)        (WEEK_SWK_ALARM_CNTR_STS_Msk & (_UINT32_(value) << WEEK_SWK_ALARM_CNTR_STS_Pos)) /* Assigment of value for CNTR_STS in the WEEK_SWK_ALARM register */
#define WEEK_SWK_ALARM_Msk                    _UINT32_(0x01FF01FF)                                 /* (WEEK_SWK_ALARM) Register Mask  */


/* -------- WEEK_BGPO_DATA : (WEEK Offset: 0x1C) (R/W 32) BGPO Data Register -------- */
#define WEEK_BGPO_DATA_RESETVALUE             _UINT32_(0x00)                                       /*  (WEEK_BGPO_DATA) BGPO Data Register  Reset Value */

#define WEEK_BGPO_DATA_BGPO_Pos               _UINT32_(0)                                          /* (WEEK_BGPO_DATA) Battery powered General Purpose Output. Each output pin may be individually configured to be either a VBAT-power BGPO or a VTR\n          powered GPIO, based on the corresponding settings in the BGPO Power Register. Additionally, each output pin may be individually configured\n                 to reset to 0 on either RESET_VTR or RESET_SYS, based on the corresponding settings in the BGPO Reset Register.\n                  For each bit [i] in the field: 1=BGPO[i] output is high; 0=BGPO[i] output is low. Position */
#define WEEK_BGPO_DATA_BGPO_Msk               (_UINT32_(0x3FF) << WEEK_BGPO_DATA_BGPO_Pos)         /* (WEEK_BGPO_DATA) Battery powered General Purpose Output. Each output pin may be individually configured to be either a VBAT-power BGPO or a VTR\n          powered GPIO, based on the corresponding settings in the BGPO Power Register. Additionally, each output pin may be individually configured\n                 to reset to 0 on either RESET_VTR or RESET_SYS, based on the corresponding settings in the BGPO Reset Register.\n                  For each bit [i] in the field: 1=BGPO[i] output is high; 0=BGPO[i] output is low. Mask */
#define WEEK_BGPO_DATA_BGPO(value)            (WEEK_BGPO_DATA_BGPO_Msk & (_UINT32_(value) << WEEK_BGPO_DATA_BGPO_Pos)) /* Assigment of value for BGPO in the WEEK_BGPO_DATA register */
#define WEEK_BGPO_DATA_Msk                    _UINT32_(0x000003FF)                                 /* (WEEK_BGPO_DATA) Register Mask  */


/* -------- WEEK_BGPO_PWR : (WEEK Offset: 0x20) (R/W 32) BGPO Power Register -------- */
#define WEEK_BGPO_PWR_RESETVALUE              _UINT32_(0x3E)                                       /*  (WEEK_BGPO_PWR) BGPO Power Register  Reset Value */

#define WEEK_BGPO_PWR_BGPO_POWER_Pos          _UINT32_(1)                                          /* (WEEK_BGPO_PWR) Battery powered General Purpose Output power source. For each bit [i] in the field:\n         1=BGPO[i] is powered by VBAT. The BGPO[i] pin is always determined by the corresponding bit in the BGPO Data Register. The GPIO Input register\n            for the GPIO that is multiplexed with the BGPO always returns a '1b'.\n              0=The pin for BGPO[i] functions as a GPIO. When VTR is powered, the pin associated with BGPO[i] is determined by the GPIO associated with the pin.\n            When VTR is unpowered, the pin is tristated. Position */
#define WEEK_BGPO_PWR_BGPO_POWER_Msk          (_UINT32_(0x1F) << WEEK_BGPO_PWR_BGPO_POWER_Pos)     /* (WEEK_BGPO_PWR) Battery powered General Purpose Output power source. For each bit [i] in the field:\n         1=BGPO[i] is powered by VBAT. The BGPO[i] pin is always determined by the corresponding bit in the BGPO Data Register. The GPIO Input register\n            for the GPIO that is multiplexed with the BGPO always returns a '1b'.\n              0=The pin for BGPO[i] functions as a GPIO. When VTR is powered, the pin associated with BGPO[i] is determined by the GPIO associated with the pin.\n            When VTR is unpowered, the pin is tristated. Mask */
#define WEEK_BGPO_PWR_BGPO_POWER(value)       (WEEK_BGPO_PWR_BGPO_POWER_Msk & (_UINT32_(value) << WEEK_BGPO_PWR_BGPO_POWER_Pos)) /* Assigment of value for BGPO_POWER in the WEEK_BGPO_PWR register */
#define WEEK_BGPO_PWR_Msk                     _UINT32_(0x0000003E)                                 /* (WEEK_BGPO_PWR) Register Mask  */


/* -------- WEEK_BGPO_RST : (WEEK Offset: 0x24) (R/W 32) BGPO Reset Register -------- */
#define WEEK_BGPO_RST_RESETVALUE              _UINT32_(0x00)                                       /*  (WEEK_BGPO_RST) BGPO Reset Register  Reset Value */

#define WEEK_BGPO_RST_BGPO_RESET_Pos          _UINT32_(0)                                          /* (WEEK_BGPO_RST) Battery powered General Purpose Output reset event. For each bit [i] in the field:\n                1=BGPO[i] is reset to 0 on RESET_VTR; 0=BGPO[i] is reset to 0 on RESET_SYS. Position */
#define WEEK_BGPO_RST_BGPO_RESET_Msk          (_UINT32_(0x3FF) << WEEK_BGPO_RST_BGPO_RESET_Pos)    /* (WEEK_BGPO_RST) Battery powered General Purpose Output reset event. For each bit [i] in the field:\n                1=BGPO[i] is reset to 0 on RESET_VTR; 0=BGPO[i] is reset to 0 on RESET_SYS. Mask */
#define WEEK_BGPO_RST_BGPO_RESET(value)       (WEEK_BGPO_RST_BGPO_RESET_Msk & (_UINT32_(value) << WEEK_BGPO_RST_BGPO_RESET_Pos)) /* Assigment of value for BGPO_RESET in the WEEK_BGPO_RST register */
#define WEEK_BGPO_RST_Msk                     _UINT32_(0x000003FF)                                 /* (WEEK_BGPO_RST) Register Mask  */


/** \brief WEEK register offsets definitions */
#define WEEK_CTRL_REG_OFST             _UINT32_(0x00)      /* (WEEK_CTRL) Control Register Offset */
#define WEEK_ALARM_CNT_REG_OFST        _UINT32_(0x04)      /* (WEEK_ALARM_CNT) Week Alarm Counter Register Offset */
#define WEEK_TMR_COMP_REG_OFST         _UINT32_(0x08)      /* (WEEK_TMR_COMP) Week Timer Compare Register Offset */
#define WEEK_CLKDIV_REG_OFST           _UINT32_(0x0C)      /* (WEEK_CLKDIV) Clock Divider Register Offset */
#define WEEK_SS_INTR_SEL_REG_OFST      _UINT32_(0x10)      /* (WEEK_SS_INTR_SEL) Sub-Second Programmable Interrupt Select Register Offset */
#define WEEK_SWK_CTRL_REG_OFST         _UINT32_(0x14)      /* (WEEK_SWK_CTRL) Sub-Week Control Register Offset */
#define WEEK_SWK_ALARM_REG_OFST        _UINT32_(0x18)      /* (WEEK_SWK_ALARM) Sub-Week Alarm Counter Register Offset */
#define WEEK_BGPO_DATA_REG_OFST        _UINT32_(0x1C)      /* (WEEK_BGPO_DATA) BGPO Data Register Offset */
#define WEEK_BGPO_PWR_REG_OFST         _UINT32_(0x20)      /* (WEEK_BGPO_PWR) BGPO Power Register Offset */
#define WEEK_BGPO_RST_REG_OFST         _UINT32_(0x24)      /* (WEEK_BGPO_RST) BGPO Reset Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief WEEK register API structure */
typedef struct
{  /* The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n        and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
  __IO  uint32_t                       WEEK_CTRL;          /**< Offset: 0x00 (R/W  32) Control Register */
  __IO  uint32_t                       WEEK_ALARM_CNT;     /**< Offset: 0x04 (R/W  32) Week Alarm Counter Register */
  __IO  uint32_t                       WEEK_TMR_COMP;      /**< Offset: 0x08 (R/W  32) Week Timer Compare Register */
  __IO  uint32_t                       WEEK_CLKDIV;        /**< Offset: 0x0C (R/W  32) Clock Divider Register */
  __IO  uint32_t                       WEEK_SS_INTR_SEL;   /**< Offset: 0x10 (R/W  32) Sub-Second Programmable Interrupt Select Register */
  __I   uint32_t                       WEEK_SWK_CTRL;      /**< Offset: 0x14 (R/   32) Sub-Week Control Register */
  __I   uint32_t                       WEEK_SWK_ALARM;     /**< Offset: 0x18 (R/   32) Sub-Week Alarm Counter Register */
  __IO  uint32_t                       WEEK_BGPO_DATA;     /**< Offset: 0x1C (R/W  32) BGPO Data Register */
  __IO  uint32_t                       WEEK_BGPO_PWR;      /**< Offset: 0x20 (R/W  32) BGPO Power Register */
  __IO  uint32_t                       WEEK_BGPO_RST;      /**< Offset: 0x24 (R/W  32) BGPO Reset Register */
} week_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_WEEK_COMPONENT_H_ */
