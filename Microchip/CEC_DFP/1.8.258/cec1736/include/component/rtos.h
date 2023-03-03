/*
 * Component description for RTOS
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

/* file generated from device description version 2023-01-17T13:00:30Z */
#ifndef _CEC_RTOS_COMPONENT_H_
#define _CEC_RTOS_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RTOS                                         */
/* ************************************************************************** */

/* -------- RTOS_CNT : (RTOS Offset: 0x00) (R/W 32) RTOS Timer Count Register. -------- */
#define RTOS_CNT_RESETVALUE                   _UINT32_(0x00)                                       /*  (RTOS_CNT) RTOS Timer Count Register.  Reset Value */

#define RTOS_CNT_CNTR_Pos                     _UINT32_(0)                                          /* (RTOS_CNT) This register contains the current value of the RTOS Timer counter. This register should be read as a DWORD. There is no latching mechanism         of the upper bytes implemented if the register is accessed as a byte or word. Reading the register with byte or word operations may give incorrect results. Position */
#define RTOS_CNT_CNTR_Msk                     (_UINT32_(0xFFFFFFFF) << RTOS_CNT_CNTR_Pos)          /* (RTOS_CNT) This register contains the current value of the RTOS Timer counter. This register should be read as a DWORD. There is no latching mechanism         of the upper bytes implemented if the register is accessed as a byte or word. Reading the register with byte or word operations may give incorrect results. Mask */
#define RTOS_CNT_CNTR(value)                  (RTOS_CNT_CNTR_Msk & (_UINT32_(value) << RTOS_CNT_CNTR_Pos)) /* Assigment of value for CNTR in the RTOS_CNT register */
#define RTOS_CNT_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (RTOS_CNT) Register Mask  */


/* -------- RTOS_PRLD : (RTOS Offset: 0x04) (R/W 32) RTOS Timer Preload Register -------- */
#define RTOS_PRLD_RESETVALUE                  _UINT32_(0x00)                                       /*  (RTOS_PRLD) RTOS Timer Preload Register  Reset Value */

#define RTOS_PRLD_PRELOAD_Pos                 _UINT32_(0)                                          /* (RTOS_PRLD) The this register is loaded into the RTOS Timer counter either when the TIMER_START bit is written with a 1, or when the timer counter counts down to 0 and the AUTO_RELOAD bit is 1.      This register must be programmed with a new count value before the TIMER_START bit is set to 1. If this register is updated while the counter is operating, the new count value will only take effect if      the counter transitions form 1 to 0 while the AUTO_RELOAD bit is set. Position */
#define RTOS_PRLD_PRELOAD_Msk                 (_UINT32_(0xFFFFFFFF) << RTOS_PRLD_PRELOAD_Pos)      /* (RTOS_PRLD) The this register is loaded into the RTOS Timer counter either when the TIMER_START bit is written with a 1, or when the timer counter counts down to 0 and the AUTO_RELOAD bit is 1.      This register must be programmed with a new count value before the TIMER_START bit is set to 1. If this register is updated while the counter is operating, the new count value will only take effect if      the counter transitions form 1 to 0 while the AUTO_RELOAD bit is set. Mask */
#define RTOS_PRLD_PRELOAD(value)              (RTOS_PRLD_PRELOAD_Msk & (_UINT32_(value) << RTOS_PRLD_PRELOAD_Pos)) /* Assigment of value for PRELOAD in the RTOS_PRLD register */
#define RTOS_PRLD_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (RTOS_PRLD) Register Mask  */


/* -------- RTOS_CTRL : (RTOS Offset: 0x08) (R/W 32) RTOS Timer Control Register -------- */
#define RTOS_CTRL_RESETVALUE                  _UINT32_(0x00)                                       /*  (RTOS_CTRL) RTOS Timer Control Register  Reset Value */

#define RTOS_CTRL_BLK_EN_Pos                  _UINT32_(0)                                          /* (RTOS_CTRL) 1=RTOS timer counter is enabled     0=RTOS timer disabled. All register bits are reset to their default state Position */
#define RTOS_CTRL_BLK_EN_Msk                  (_UINT32_(0x1) << RTOS_CTRL_BLK_EN_Pos)              /* (RTOS_CTRL) 1=RTOS timer counter is enabled     0=RTOS timer disabled. All register bits are reset to their default state Mask */
#define RTOS_CTRL_BLK_EN(value)               (RTOS_CTRL_BLK_EN_Msk & (_UINT32_(value) << RTOS_CTRL_BLK_EN_Pos)) /* Assigment of value for BLK_EN in the RTOS_CTRL register */
#define RTOS_CTRL_AU_RELOAD_Pos               _UINT32_(1)                                          /* (RTOS_CTRL) 1=The the RTOS Timer Preload Register is loaded into the timer counter and the counter is restarted when the counter transitions from 1 to 0     0=The timer counter halts when it transitions from 1 to 0 and will not restart. Position */
#define RTOS_CTRL_AU_RELOAD_Msk               (_UINT32_(0x1) << RTOS_CTRL_AU_RELOAD_Pos)           /* (RTOS_CTRL) 1=The the RTOS Timer Preload Register is loaded into the timer counter and the counter is restarted when the counter transitions from 1 to 0     0=The timer counter halts when it transitions from 1 to 0 and will not restart. Mask */
#define RTOS_CTRL_AU_RELOAD(value)            (RTOS_CTRL_AU_RELOAD_Msk & (_UINT32_(value) << RTOS_CTRL_AU_RELOAD_Pos)) /* Assigment of value for AU_RELOAD in the RTOS_CTRL register */
#define RTOS_CTRL_TMR_STRT_Pos                _UINT32_(2)                                          /* (RTOS_CTRL) Writing a 1 to this bit will load the timer counter with the RTOS Timer Preload Register and start counting. If the Preload Register is 0, counting will not start and this bit will be cleared to 0.     Writing a 0 to this bit will halt the counter and clear its contents to 0. The RTOS timer interrupt will not be generated. This bit is automatically cleared if the AUTO_RELOAD bit is 0 and the     timer counter transitions from 1 to 0. Position */
#define RTOS_CTRL_TMR_STRT_Msk                (_UINT32_(0x1) << RTOS_CTRL_TMR_STRT_Pos)            /* (RTOS_CTRL) Writing a 1 to this bit will load the timer counter with the RTOS Timer Preload Register and start counting. If the Preload Register is 0, counting will not start and this bit will be cleared to 0.     Writing a 0 to this bit will halt the counter and clear its contents to 0. The RTOS timer interrupt will not be generated. This bit is automatically cleared if the AUTO_RELOAD bit is 0 and the     timer counter transitions from 1 to 0. Mask */
#define RTOS_CTRL_TMR_STRT(value)             (RTOS_CTRL_TMR_STRT_Msk & (_UINT32_(value) << RTOS_CTRL_TMR_STRT_Pos)) /* Assigment of value for TMR_STRT in the RTOS_CTRL register */
#define RTOS_CTRL_EXT_HW_HALT_EN_Pos          _UINT32_(3)                                          /* (RTOS_CTRL) 1=The timer counter is halted when the external HALT signal is asserted. Counting is always enabled if HALT is de-asserted.     0=The HALT signal does not affect the RTOS Timer Position */
#define RTOS_CTRL_EXT_HW_HALT_EN_Msk          (_UINT32_(0x1) << RTOS_CTRL_EXT_HW_HALT_EN_Pos)      /* (RTOS_CTRL) 1=The timer counter is halted when the external HALT signal is asserted. Counting is always enabled if HALT is de-asserted.     0=The HALT signal does not affect the RTOS Timer Mask */
#define RTOS_CTRL_EXT_HW_HALT_EN(value)       (RTOS_CTRL_EXT_HW_HALT_EN_Msk & (_UINT32_(value) << RTOS_CTRL_EXT_HW_HALT_EN_Pos)) /* Assigment of value for EXT_HW_HALT_EN in the RTOS_CTRL register */
#define RTOS_CTRL_FW_TMR_HALT_Pos             _UINT32_(4)                                          /* (RTOS_CTRL) 1=The timer counter is halted. If the counter was running, clearing this bit will restart the counter from the value at which it halted     0=The timer counter, if enabled, will continue to run Position */
#define RTOS_CTRL_FW_TMR_HALT_Msk             (_UINT32_(0x1) << RTOS_CTRL_FW_TMR_HALT_Pos)         /* (RTOS_CTRL) 1=The timer counter is halted. If the counter was running, clearing this bit will restart the counter from the value at which it halted     0=The timer counter, if enabled, will continue to run Mask */
#define RTOS_CTRL_FW_TMR_HALT(value)          (RTOS_CTRL_FW_TMR_HALT_Msk & (_UINT32_(value) << RTOS_CTRL_FW_TMR_HALT_Pos)) /* Assigment of value for FW_TMR_HALT in the RTOS_CTRL register */
#define RTOS_CTRL_Msk                         _UINT32_(0x0000001F)                                 /* (RTOS_CTRL) Register Mask  */


/* -------- RTOS_SOFTIRQ : (RTOS Offset: 0x0C) ( /W 32) Soft Interrupt Register -------- */
#define RTOS_SOFTIRQ_RESETVALUE               _UINT32_(0x00)                                       /*  (RTOS_SOFTIRQ) Soft Interrupt Register  Reset Value */

#define RTOS_SOFTIRQ_SWI0_Pos                 _UINT32_(0)                                          /* (RTOS_SOFTIRQ) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.     Writes of a '0' have no effect. Reads return '0'. Position */
#define RTOS_SOFTIRQ_SWI0_Msk                 (_UINT32_(0x1) << RTOS_SOFTIRQ_SWI0_Pos)             /* (RTOS_SOFTIRQ) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.     Writes of a '0' have no effect. Reads return '0'. Mask */
#define RTOS_SOFTIRQ_SWI0(value)              (RTOS_SOFTIRQ_SWI0_Msk & (_UINT32_(value) << RTOS_SOFTIRQ_SWI0_Pos)) /* Assigment of value for SWI0 in the RTOS_SOFTIRQ register */
#define RTOS_SOFTIRQ_SWI1_Pos                 _UINT32_(1)                                          /* (RTOS_SOFTIRQ) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.     Writes of a '0' have no effect. Reads return '0'. Position */
#define RTOS_SOFTIRQ_SWI1_Msk                 (_UINT32_(0x1) << RTOS_SOFTIRQ_SWI1_Pos)             /* (RTOS_SOFTIRQ) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.     Writes of a '0' have no effect. Reads return '0'. Mask */
#define RTOS_SOFTIRQ_SWI1(value)              (RTOS_SOFTIRQ_SWI1_Msk & (_UINT32_(value) << RTOS_SOFTIRQ_SWI1_Pos)) /* Assigment of value for SWI1 in the RTOS_SOFTIRQ register */
#define RTOS_SOFTIRQ_SWI2_Pos                 _UINT32_(2)                                          /* (RTOS_SOFTIRQ) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.     Writes of a '0' have no effect. Reads return '0'. Position */
#define RTOS_SOFTIRQ_SWI2_Msk                 (_UINT32_(0x1) << RTOS_SOFTIRQ_SWI2_Pos)             /* (RTOS_SOFTIRQ) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.     Writes of a '0' have no effect. Reads return '0'. Mask */
#define RTOS_SOFTIRQ_SWI2(value)              (RTOS_SOFTIRQ_SWI2_Msk & (_UINT32_(value) << RTOS_SOFTIRQ_SWI2_Pos)) /* Assigment of value for SWI2 in the RTOS_SOFTIRQ register */
#define RTOS_SOFTIRQ_SWI3_Pos                 _UINT32_(3)                                          /* (RTOS_SOFTIRQ) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.     Writes of a '0' have no effect. Reads return '0'. Position */
#define RTOS_SOFTIRQ_SWI3_Msk                 (_UINT32_(0x1) << RTOS_SOFTIRQ_SWI3_Pos)             /* (RTOS_SOFTIRQ) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.     Writes of a '0' have no effect. Reads return '0'. Mask */
#define RTOS_SOFTIRQ_SWI3(value)              (RTOS_SOFTIRQ_SWI3_Msk & (_UINT32_(value) << RTOS_SOFTIRQ_SWI3_Pos)) /* Assigment of value for SWI3 in the RTOS_SOFTIRQ register */
#define RTOS_SOFTIRQ_Msk                      _UINT32_(0x0000000F)                                 /* (RTOS_SOFTIRQ) Register Mask  */

#define RTOS_SOFTIRQ_SWI_Pos                  _UINT32_(0)                                          /* (RTOS_SOFTIRQ Position) Software Interrupt. A write of a 'x' to this bit will generate an SWI interrupt to the EC.     Writes of a 'x' have no effect. Reads return 'x'. */
#define RTOS_SOFTIRQ_SWI_Msk                  (_UINT32_(0xF) << RTOS_SOFTIRQ_SWI_Pos)              /* (RTOS_SOFTIRQ Mask) SWI */
#define RTOS_SOFTIRQ_SWI(value)               (RTOS_SOFTIRQ_SWI_Msk & (_UINT32_(value) << RTOS_SOFTIRQ_SWI_Pos)) 

/** \brief RTOS register offsets definitions */
#define RTOS_CNT_REG_OFST              _UINT32_(0x00)      /* (RTOS_CNT) RTOS Timer Count Register. Offset */
#define RTOS_PRLD_REG_OFST             _UINT32_(0x04)      /* (RTOS_PRLD) RTOS Timer Preload Register Offset */
#define RTOS_CTRL_REG_OFST             _UINT32_(0x08)      /* (RTOS_CTRL) RTOS Timer Control Register Offset */
#define RTOS_SOFTIRQ_REG_OFST          _UINT32_(0x0C)      /* (RTOS_SOFTIRQ) Soft Interrupt Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RTOS register API structure */
typedef struct
{  /* RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. */
  __IO  uint32_t                       RTOS_CNT;           /**< Offset: 0x00 (R/W  32) RTOS Timer Count Register. */
  __IO  uint32_t                       RTOS_PRLD;          /**< Offset: 0x04 (R/W  32) RTOS Timer Preload Register */
  __IO  uint32_t                       RTOS_CTRL;          /**< Offset: 0x08 (R/W  32) RTOS Timer Control Register */
  __O   uint32_t                       RTOS_SOFTIRQ;       /**< Offset: 0x0C ( /W  32) Soft Interrupt Register */
} rtos_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_RTOS_COMPONENT_H_ */
