/*
 * Component description for GPIO
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
#ifndef _CEC1702Q_GPIO_COMPONENT_H_
#define _CEC1702Q_GPIO_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR GPIO                                         */
/* ************************************************************************** */

/* -------- GPIO_CTRL : (GPIO Offset: 0x00) (R/W 32) GPIO Pin Control Register -------- */
#define GPIO_CTRL_RESETVALUE                  _UINT32_(0x00)                                       /*  (GPIO_CTRL) GPIO Pin Control Register  Reset Value */

#define GPIO_CTRL_PU_PD_Pos                   _UINT32_(0)                                          /* (GPIO_CTRL) These bits are used to enable an internal pull-up or pull-down resistor.\n                00 = None, 01 = Pull Up Enabled, 10 = Pull Down Enabled, 11 = None Position */
#define GPIO_CTRL_PU_PD_Msk                   (_UINT32_(0x3) << GPIO_CTRL_PU_PD_Pos)               /* (GPIO_CTRL) These bits are used to enable an internal pull-up or pull-down resistor.\n                00 = None, 01 = Pull Up Enabled, 10 = Pull Down Enabled, 11 = None Mask */
#define GPIO_CTRL_PU_PD(value)                (GPIO_CTRL_PU_PD_Msk & (_UINT32_(value) << GPIO_CTRL_PU_PD_Pos)) /* Assigment of value for PU_PD in the GPIO_CTRL register */
#define GPIO_CTRL_PWR_GATING_Pos              _UINT32_(2)                                          /* (GPIO_CTRL) The GPIO pin will be tristated when the selected power well is off.\n            00 = VTR Power Rail, 01 = VCC Main Power Rail (as determined by the VCC_PWRGD input), 1x = Reserved Position */
#define GPIO_CTRL_PWR_GATING_Msk              (_UINT32_(0x3) << GPIO_CTRL_PWR_GATING_Pos)          /* (GPIO_CTRL) The GPIO pin will be tristated when the selected power well is off.\n            00 = VTR Power Rail, 01 = VCC Main Power Rail (as determined by the VCC_PWRGD input), 1x = Reserved Mask */
#define GPIO_CTRL_PWR_GATING(value)           (GPIO_CTRL_PWR_GATING_Msk & (_UINT32_(value) << GPIO_CTRL_PWR_GATING_Pos)) /* Assigment of value for PWR_GATING in the GPIO_CTRL register */
#define GPIO_CTRL_INTR_DET_Pos                _UINT32_(4)                                          /* (GPIO_CTRL) When combined with the field INTERRUPT_DETECTION in this register, determines the interrupt capability of the GPIO input.\n           0 000 = Low Level Sensitive\n               0 001 = High Level Sensitive\n              0 100 = Interrupt events are disabled\n             1 101 = Rising Edge Triggered\n             1 110 = Falling Edge Triggered\n           1 111 = Either edge triggered Position */
#define GPIO_CTRL_INTR_DET_Msk                (_UINT32_(0x7) << GPIO_CTRL_INTR_DET_Pos)            /* (GPIO_CTRL) When combined with the field INTERRUPT_DETECTION in this register, determines the interrupt capability of the GPIO input.\n           0 000 = Low Level Sensitive\n               0 001 = High Level Sensitive\n              0 100 = Interrupt events are disabled\n             1 101 = Rising Edge Triggered\n             1 110 = Falling Edge Triggered\n           1 111 = Either edge triggered Mask */
#define GPIO_CTRL_INTR_DET(value)             (GPIO_CTRL_INTR_DET_Msk & (_UINT32_(value) << GPIO_CTRL_INTR_DET_Pos)) /* Assigment of value for INTR_DET in the GPIO_CTRL register */
#define GPIO_CTRL_EDGE_EN_Pos                 _UINT32_(7)                                          /* (GPIO_CTRL) When combined with the field INTERRUPT_DETECTION in this register, determines the interrupt capability of the GPIO input.\n         0 = Edge detection disabled, 1 = Edge detection enabled Position */
#define GPIO_CTRL_EDGE_EN_Msk                 (_UINT32_(0x1) << GPIO_CTRL_EDGE_EN_Pos)             /* (GPIO_CTRL) When combined with the field INTERRUPT_DETECTION in this register, determines the interrupt capability of the GPIO input.\n         0 = Edge detection disabled, 1 = Edge detection enabled Mask */
#define GPIO_CTRL_EDGE_EN(value)              (GPIO_CTRL_EDGE_EN_Msk & (_UINT32_(value) << GPIO_CTRL_EDGE_EN_Pos)) /* Assigment of value for EDGE_EN in the GPIO_CTRL register */
#define GPIO_CTRL_OUT_BUFF_TYPE_Pos           _UINT32_(8)                                          /* (GPIO_CTRL) Unless explicitly stated otherwise, pins with (I/O/OD) or (O/OD) in their buffer type column in the tables are\n           compliant with the following Programmable OD/PP Multiplexing Design Rule: Each compliant pin has a programmable open drain/push-pull\n           buffer controlled by the Output Buffer Type bit in the associated Pin Control Register. The state of this bit controls the mode of\n          the interface buffer for all selected functions, including the GPIO function. 0 = Push-Pull, 1 = Open Drain Position */
#define GPIO_CTRL_OUT_BUFF_TYPE_Msk           (_UINT32_(0x1) << GPIO_CTRL_OUT_BUFF_TYPE_Pos)       /* (GPIO_CTRL) Unless explicitly stated otherwise, pins with (I/O/OD) or (O/OD) in their buffer type column in the tables are\n           compliant with the following Programmable OD/PP Multiplexing Design Rule: Each compliant pin has a programmable open drain/push-pull\n           buffer controlled by the Output Buffer Type bit in the associated Pin Control Register. The state of this bit controls the mode of\n          the interface buffer for all selected functions, including the GPIO function. 0 = Push-Pull, 1 = Open Drain Mask */
#define GPIO_CTRL_OUT_BUFF_TYPE(value)        (GPIO_CTRL_OUT_BUFF_TYPE_Msk & (_UINT32_(value) << GPIO_CTRL_OUT_BUFF_TYPE_Pos)) /* Assigment of value for OUT_BUFF_TYPE in the GPIO_CTRL register */
#define GPIO_CTRL_GPIO_DIR_Pos                _UINT32_(9)                                          /* (GPIO_CTRL) This bit controls the buffer direction only when the MUX_CONTROL field is '00' selecting the pin signal function to\n        be GPIO. When the MUX_CONTROL field is greater than '00' (i.e., a non-GPIO signal function is selected) this bit has no affect\n            and the selected signal function logic directly controls the pin direction. 0 = Input, 1 = Output Position */
#define GPIO_CTRL_GPIO_DIR_Msk                (_UINT32_(0x1) << GPIO_CTRL_GPIO_DIR_Pos)            /* (GPIO_CTRL) This bit controls the buffer direction only when the MUX_CONTROL field is '00' selecting the pin signal function to\n        be GPIO. When the MUX_CONTROL field is greater than '00' (i.e., a non-GPIO signal function is selected) this bit has no affect\n            and the selected signal function logic directly controls the pin direction. 0 = Input, 1 = Output Mask */
#define GPIO_CTRL_GPIO_DIR(value)             (GPIO_CTRL_GPIO_DIR_Msk & (_UINT32_(value) << GPIO_CTRL_GPIO_DIR_Pos)) /* Assigment of value for GPIO_DIR in the GPIO_CTRL register */
#define GPIO_CTRL_GPIO_OUT_SEL_Pos            _UINT32_(10)                                         /* (GPIO_CTRL) This control bit determines which register is used to update the data register for GPIO outputs.\n            0=GPIO output data for this GPIO come from the ALTERNATE_GPIO_DATA field of this register; writes to the bit representing\n              this GPIO in the GPIO Output Register do not affect the GPIO; 1=GPIO output data for this GPIO come from the bit representing\n          this GPIO in the GPIO Output Register; writes to the ALTERNATE_GPIO_DATA field of this register do not affect the GPIO. Position */
#define GPIO_CTRL_GPIO_OUT_SEL_Msk            (_UINT32_(0x1) << GPIO_CTRL_GPIO_OUT_SEL_Pos)        /* (GPIO_CTRL) This control bit determines which register is used to update the data register for GPIO outputs.\n            0=GPIO output data for this GPIO come from the ALTERNATE_GPIO_DATA field of this register; writes to the bit representing\n              this GPIO in the GPIO Output Register do not affect the GPIO; 1=GPIO output data for this GPIO come from the bit representing\n          this GPIO in the GPIO Output Register; writes to the ALTERNATE_GPIO_DATA field of this register do not affect the GPIO. Mask */
#define GPIO_CTRL_GPIO_OUT_SEL(value)         (GPIO_CTRL_GPIO_OUT_SEL_Msk & (_UINT32_(value) << GPIO_CTRL_GPIO_OUT_SEL_Pos)) /* Assigment of value for GPIO_OUT_SEL in the GPIO_CTRL register */
#define GPIO_CTRL_POL_Pos                     _UINT32_(11)                                         /* (GPIO_CTRL) When the Polarity bit is set to '1' and the MUX_CONTROL bits are greater than '00', the selected signal function outputs\n       are inverted and Interrupt Detection sense is inverted. When the MUX_CONTROL field selects the GPIO signal function (Mux='00'), the\n          Polarity bit does not effect the output. Regardless of the state of the MUX_CONTROL field and the Polarity bit, the state of the pin\n         is always reported without inversion in the GPIO input register. 1=Inverted; 0=Non-inverted Position */
#define GPIO_CTRL_POL_Msk                     (_UINT32_(0x1) << GPIO_CTRL_POL_Pos)                 /* (GPIO_CTRL) When the Polarity bit is set to '1' and the MUX_CONTROL bits are greater than '00', the selected signal function outputs\n       are inverted and Interrupt Detection sense is inverted. When the MUX_CONTROL field selects the GPIO signal function (Mux='00'), the\n          Polarity bit does not effect the output. Regardless of the state of the MUX_CONTROL field and the Polarity bit, the state of the pin\n         is always reported without inversion in the GPIO input register. 1=Inverted; 0=Non-inverted Mask */
#define GPIO_CTRL_POL(value)                  (GPIO_CTRL_POL_Msk & (_UINT32_(value) << GPIO_CTRL_POL_Pos)) /* Assigment of value for POL in the GPIO_CTRL register */
#define GPIO_CTRL_MUX_CTRL_Pos                _UINT32_(12)                                         /* (GPIO_CTRL) This field determines the active signal function for a pin. 00 = GPIO Function Selected, 01 = Signal Function 1 Selected,\n              10 = Signal Function 2 Selected, 11 = Signal Function 3 Selected. Position */
#define GPIO_CTRL_MUX_CTRL_Msk                (_UINT32_(0x3) << GPIO_CTRL_MUX_CTRL_Pos)            /* (GPIO_CTRL) This field determines the active signal function for a pin. 00 = GPIO Function Selected, 01 = Signal Function 1 Selected,\n              10 = Signal Function 2 Selected, 11 = Signal Function 3 Selected. Mask */
#define GPIO_CTRL_MUX_CTRL(value)             (GPIO_CTRL_MUX_CTRL_Msk & (_UINT32_(value) << GPIO_CTRL_MUX_CTRL_Pos)) /* Assigment of value for MUX_CTRL in the GPIO_CTRL register */
#define GPIO_CTRL_ALT_GPIO_DATA_Pos           _UINT32_(16)                                         /* (GPIO_CTRL) Reads of this bit always return the last data written to the GPIO output data register bit; reads do not return the\n          current output value of the GPIO pin if it is configured as an output. If the GPIO_OUTPUT_SEL      T bit in this register is '1', then\n                  this bit is Read Only and the GPIO output data register bit is only written by the GPIO Output Register. If the GPIO_OUTPUT_SELECT\n          bit in this register is '0', then this bit is R/W, and the bit corresponding to this GPIO in the GPIO Output Register is Read Only. Position */
#define GPIO_CTRL_ALT_GPIO_DATA_Msk           (_UINT32_(0x1) << GPIO_CTRL_ALT_GPIO_DATA_Pos)       /* (GPIO_CTRL) Reads of this bit always return the last data written to the GPIO output data register bit; reads do not return the\n          current output value of the GPIO pin if it is configured as an output. If the GPIO_OUTPUT_SEL      T bit in this register is '1', then\n                  this bit is Read Only and the GPIO output data register bit is only written by the GPIO Output Register. If the GPIO_OUTPUT_SELECT\n          bit in this register is '0', then this bit is R/W, and the bit corresponding to this GPIO in the GPIO Output Register is Read Only. Mask */
#define GPIO_CTRL_ALT_GPIO_DATA(value)        (GPIO_CTRL_ALT_GPIO_DATA_Msk & (_UINT32_(value) << GPIO_CTRL_ALT_GPIO_DATA_Pos)) /* Assigment of value for ALT_GPIO_DATA in the GPIO_CTRL register */
#define GPIO_CTRL_GPIO_INP_Pos                _UINT32_(24)                                         /* (GPIO_CTRL) Reads of this bit always return the state of GPIO input from the pad, independent of the Mux selection for the pin\n      or the Direction. This bit is forced high when the selected power well is off as selected by the POWER_GATING field in this register. Position */
#define GPIO_CTRL_GPIO_INP_Msk                (_UINT32_(0x1) << GPIO_CTRL_GPIO_INP_Pos)            /* (GPIO_CTRL) Reads of this bit always return the state of GPIO input from the pad, independent of the Mux selection for the pin\n      or the Direction. This bit is forced high when the selected power well is off as selected by the POWER_GATING field in this register. Mask */
#define GPIO_CTRL_GPIO_INP(value)             (GPIO_CTRL_GPIO_INP_Msk & (_UINT32_(value) << GPIO_CTRL_GPIO_INP_Pos)) /* Assigment of value for GPIO_INP in the GPIO_CTRL register */
#define GPIO_CTRL_Msk                         _UINT32_(0x01013FFF)                                 /* (GPIO_CTRL) Register Mask  */


/* -------- GPIO_PARIN : (GPIO Offset: 0x300) (R/W 32) The GPIO Input Registers. -------- */
#define GPIO_PARIN_RESETVALUE                 _UINT32_(0x00)                                       /*  (GPIO_PARIN) The GPIO Input Registers.  Reset Value */

#define GPIO_PARIN_Msk                        _UINT32_(0x00000000)                                 /* (GPIO_PARIN) Register Mask  */


/* -------- GPIO_PAROUT : (GPIO Offset: 0x380) (R/W 32) The GPIO Output Registers. -------- */
#define GPIO_PAROUT_RESETVALUE                _UINT32_(0x00)                                       /*  (GPIO_PAROUT) The GPIO Output Registers.  Reset Value */

#define GPIO_PAROUT_Msk                       _UINT32_(0x00000000)                                 /* (GPIO_PAROUT) Register Mask  */


/* -------- GPIO_CTRL2P : (GPIO Offset: 0x500) (R/W 32) The GPIO PIN_CTRL2 Registers -------- */
#define GPIO_CTRL2P_RESETVALUE                _UINT32_(0x00)                                       /*  (GPIO_CTRL2P) The GPIO PIN_CTRL2 Registers  Reset Value */

#define GPIO_CTRL2P_SLEW_RATE_Pos             _UINT32_(0)                                          /* (GPIO_CTRL2P) This bit is used to select the slew rate on the pin. 0 = slow (half frequency), 1 = fast Position */
#define GPIO_CTRL2P_SLEW_RATE_Msk             (_UINT32_(0x1) << GPIO_CTRL2P_SLEW_RATE_Pos)         /* (GPIO_CTRL2P) This bit is used to select the slew rate on the pin. 0 = slow (half frequency), 1 = fast Mask */
#define GPIO_CTRL2P_SLEW_RATE(value)          (GPIO_CTRL2P_SLEW_RATE_Msk & (_UINT32_(value) << GPIO_CTRL2P_SLEW_RATE_Pos)) /* Assigment of value for SLEW_RATE in the GPIO_CTRL2P register */
#define GPIO_CTRL2P_DRIV_STREN_Pos            _UINT32_(4)                                          /* (GPIO_CTRL2P) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n          powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_CTRL2P_DRIV_STREN_Msk            (_UINT32_(0x3) << GPIO_CTRL2P_DRIV_STREN_Pos)        /* (GPIO_CTRL2P) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n          powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_CTRL2P_DRIV_STREN(value)         (GPIO_CTRL2P_DRIV_STREN_Msk & (_UINT32_(value) << GPIO_CTRL2P_DRIV_STREN_Pos)) /* Assigment of value for DRIV_STREN in the GPIO_CTRL2P register */
#define GPIO_CTRL2P_Msk                       _UINT32_(0x00000031)                                 /* (GPIO_CTRL2P) Register Mask  */


/** \brief GPIO register offsets definitions */
#define GPIO_CTRL_REG_OFST             _UINT32_(0x00)      /* (GPIO_CTRL) GPIO Pin Control Register Offset */
#define GPIO_CTRL0_REG_OFST            _UINT32_(0x00)      /* (GPIO_CTRL0) GPIO Pin Control Register Offset */
#define GPIO_CTRL1_REG_OFST            _UINT32_(0x04)      /* (GPIO_CTRL1) GPIO Pin Control Register Offset */
#define GPIO_CTRL2_REG_OFST            _UINT32_(0x08)      /* (GPIO_CTRL2) GPIO Pin Control Register Offset */
#define GPIO_CTRL3_REG_OFST            _UINT32_(0x0C)      /* (GPIO_CTRL3) GPIO Pin Control Register Offset */
#define GPIO_CTRL4_REG_OFST            _UINT32_(0x10)      /* (GPIO_CTRL4) GPIO Pin Control Register Offset */
#define GPIO_CTRL5_REG_OFST            _UINT32_(0x14)      /* (GPIO_CTRL5) GPIO Pin Control Register Offset */
#define GPIO_CTRL6_REG_OFST            _UINT32_(0x18)      /* (GPIO_CTRL6) GPIO Pin Control Register Offset */
#define GPIO_CTRL7_REG_OFST            _UINT32_(0x1C)      /* (GPIO_CTRL7) GPIO Pin Control Register Offset */
#define GPIO_CTRL8_REG_OFST            _UINT32_(0x20)      /* (GPIO_CTRL8) GPIO Pin Control Register Offset */
#define GPIO_CTRL9_REG_OFST            _UINT32_(0x24)      /* (GPIO_CTRL9) GPIO Pin Control Register Offset */
#define GPIO_CTRL10_REG_OFST           _UINT32_(0x28)      /* (GPIO_CTRL10) GPIO Pin Control Register Offset */
#define GPIO_CTRL11_REG_OFST           _UINT32_(0x2C)      /* (GPIO_CTRL11) GPIO Pin Control Register Offset */
#define GPIO_CTRL12_REG_OFST           _UINT32_(0x30)      /* (GPIO_CTRL12) GPIO Pin Control Register Offset */
#define GPIO_CTRL13_REG_OFST           _UINT32_(0x34)      /* (GPIO_CTRL13) GPIO Pin Control Register Offset */
#define GPIO_CTRL14_REG_OFST           _UINT32_(0x38)      /* (GPIO_CTRL14) GPIO Pin Control Register Offset */
#define GPIO_CTRL15_REG_OFST           _UINT32_(0x3C)      /* (GPIO_CTRL15) GPIO Pin Control Register Offset */
#define GPIO_CTRL16_REG_OFST           _UINT32_(0x40)      /* (GPIO_CTRL16) GPIO Pin Control Register Offset */
#define GPIO_CTRL17_REG_OFST           _UINT32_(0x44)      /* (GPIO_CTRL17) GPIO Pin Control Register Offset */
#define GPIO_CTRL18_REG_OFST           _UINT32_(0x48)      /* (GPIO_CTRL18) GPIO Pin Control Register Offset */
#define GPIO_CTRL19_REG_OFST           _UINT32_(0x4C)      /* (GPIO_CTRL19) GPIO Pin Control Register Offset */
#define GPIO_CTRL20_REG_OFST           _UINT32_(0x50)      /* (GPIO_CTRL20) GPIO Pin Control Register Offset */
#define GPIO_CTRL21_REG_OFST           _UINT32_(0x54)      /* (GPIO_CTRL21) GPIO Pin Control Register Offset */
#define GPIO_CTRL22_REG_OFST           _UINT32_(0x58)      /* (GPIO_CTRL22) GPIO Pin Control Register Offset */
#define GPIO_CTRL23_REG_OFST           _UINT32_(0x5C)      /* (GPIO_CTRL23) GPIO Pin Control Register Offset */
#define GPIO_CTRL24_REG_OFST           _UINT32_(0x60)      /* (GPIO_CTRL24) GPIO Pin Control Register Offset */
#define GPIO_CTRL25_REG_OFST           _UINT32_(0x64)      /* (GPIO_CTRL25) GPIO Pin Control Register Offset */
#define GPIO_CTRL26_REG_OFST           _UINT32_(0x68)      /* (GPIO_CTRL26) GPIO Pin Control Register Offset */
#define GPIO_CTRL27_REG_OFST           _UINT32_(0x6C)      /* (GPIO_CTRL27) GPIO Pin Control Register Offset */
#define GPIO_CTRL28_REG_OFST           _UINT32_(0x70)      /* (GPIO_CTRL28) GPIO Pin Control Register Offset */
#define GPIO_CTRL29_REG_OFST           _UINT32_(0x74)      /* (GPIO_CTRL29) GPIO Pin Control Register Offset */
#define GPIO_CTRL30_REG_OFST           _UINT32_(0x78)      /* (GPIO_CTRL30) GPIO Pin Control Register Offset */
#define GPIO_CTRL31_REG_OFST           _UINT32_(0x7C)      /* (GPIO_CTRL31) GPIO Pin Control Register Offset */
#define GPIO_CTRL32_REG_OFST           _UINT32_(0x80)      /* (GPIO_CTRL32) GPIO Pin Control Register Offset */
#define GPIO_CTRL33_REG_OFST           _UINT32_(0x84)      /* (GPIO_CTRL33) GPIO Pin Control Register Offset */
#define GPIO_CTRL34_REG_OFST           _UINT32_(0x88)      /* (GPIO_CTRL34) GPIO Pin Control Register Offset */
#define GPIO_CTRL35_REG_OFST           _UINT32_(0x8C)      /* (GPIO_CTRL35) GPIO Pin Control Register Offset */
#define GPIO_CTRL36_REG_OFST           _UINT32_(0x90)      /* (GPIO_CTRL36) GPIO Pin Control Register Offset */
#define GPIO_CTRL37_REG_OFST           _UINT32_(0x94)      /* (GPIO_CTRL37) GPIO Pin Control Register Offset */
#define GPIO_CTRL38_REG_OFST           _UINT32_(0x98)      /* (GPIO_CTRL38) GPIO Pin Control Register Offset */
#define GPIO_CTRL39_REG_OFST           _UINT32_(0x9C)      /* (GPIO_CTRL39) GPIO Pin Control Register Offset */
#define GPIO_CTRL40_REG_OFST           _UINT32_(0xA0)      /* (GPIO_CTRL40) GPIO Pin Control Register Offset */
#define GPIO_CTRL41_REG_OFST           _UINT32_(0xA4)      /* (GPIO_CTRL41) GPIO Pin Control Register Offset */
#define GPIO_CTRL42_REG_OFST           _UINT32_(0xA8)      /* (GPIO_CTRL42) GPIO Pin Control Register Offset */
#define GPIO_CTRL43_REG_OFST           _UINT32_(0xAC)      /* (GPIO_CTRL43) GPIO Pin Control Register Offset */
#define GPIO_CTRL44_REG_OFST           _UINT32_(0xB0)      /* (GPIO_CTRL44) GPIO Pin Control Register Offset */
#define GPIO_CTRL45_REG_OFST           _UINT32_(0xB4)      /* (GPIO_CTRL45) GPIO Pin Control Register Offset */
#define GPIO_CTRL46_REG_OFST           _UINT32_(0xB8)      /* (GPIO_CTRL46) GPIO Pin Control Register Offset */
#define GPIO_CTRL47_REG_OFST           _UINT32_(0xBC)      /* (GPIO_CTRL47) GPIO Pin Control Register Offset */
#define GPIO_CTRL48_REG_OFST           _UINT32_(0xC0)      /* (GPIO_CTRL48) GPIO Pin Control Register Offset */
#define GPIO_CTRL49_REG_OFST           _UINT32_(0xC4)      /* (GPIO_CTRL49) GPIO Pin Control Register Offset */
#define GPIO_CTRL50_REG_OFST           _UINT32_(0xC8)      /* (GPIO_CTRL50) GPIO Pin Control Register Offset */
#define GPIO_CTRL51_REG_OFST           _UINT32_(0xCC)      /* (GPIO_CTRL51) GPIO Pin Control Register Offset */
#define GPIO_CTRL52_REG_OFST           _UINT32_(0xD0)      /* (GPIO_CTRL52) GPIO Pin Control Register Offset */
#define GPIO_CTRL53_REG_OFST           _UINT32_(0xD4)      /* (GPIO_CTRL53) GPIO Pin Control Register Offset */
#define GPIO_CTRL54_REG_OFST           _UINT32_(0xD8)      /* (GPIO_CTRL54) GPIO Pin Control Register Offset */
#define GPIO_CTRL55_REG_OFST           _UINT32_(0xDC)      /* (GPIO_CTRL55) GPIO Pin Control Register Offset */
#define GPIO_CTRL56_REG_OFST           _UINT32_(0xE0)      /* (GPIO_CTRL56) GPIO Pin Control Register Offset */
#define GPIO_CTRL57_REG_OFST           _UINT32_(0xE4)      /* (GPIO_CTRL57) GPIO Pin Control Register Offset */
#define GPIO_CTRL58_REG_OFST           _UINT32_(0xE8)      /* (GPIO_CTRL58) GPIO Pin Control Register Offset */
#define GPIO_CTRL59_REG_OFST           _UINT32_(0xEC)      /* (GPIO_CTRL59) GPIO Pin Control Register Offset */
#define GPIO_CTRL60_REG_OFST           _UINT32_(0xF0)      /* (GPIO_CTRL60) GPIO Pin Control Register Offset */
#define GPIO_CTRL61_REG_OFST           _UINT32_(0xF4)      /* (GPIO_CTRL61) GPIO Pin Control Register Offset */
#define GPIO_CTRL62_REG_OFST           _UINT32_(0xF8)      /* (GPIO_CTRL62) GPIO Pin Control Register Offset */
#define GPIO_CTRL63_REG_OFST           _UINT32_(0xFC)      /* (GPIO_CTRL63) GPIO Pin Control Register Offset */
#define GPIO_CTRL64_REG_OFST           _UINT32_(0x100)     /* (GPIO_CTRL64) GPIO Pin Control Register Offset */
#define GPIO_CTRL65_REG_OFST           _UINT32_(0x104)     /* (GPIO_CTRL65) GPIO Pin Control Register Offset */
#define GPIO_CTRL66_REG_OFST           _UINT32_(0x108)     /* (GPIO_CTRL66) GPIO Pin Control Register Offset */
#define GPIO_CTRL67_REG_OFST           _UINT32_(0x10C)     /* (GPIO_CTRL67) GPIO Pin Control Register Offset */
#define GPIO_CTRL68_REG_OFST           _UINT32_(0x110)     /* (GPIO_CTRL68) GPIO Pin Control Register Offset */
#define GPIO_CTRL69_REG_OFST           _UINT32_(0x114)     /* (GPIO_CTRL69) GPIO Pin Control Register Offset */
#define GPIO_CTRL70_REG_OFST           _UINT32_(0x118)     /* (GPIO_CTRL70) GPIO Pin Control Register Offset */
#define GPIO_CTRL71_REG_OFST           _UINT32_(0x11C)     /* (GPIO_CTRL71) GPIO Pin Control Register Offset */
#define GPIO_CTRL72_REG_OFST           _UINT32_(0x120)     /* (GPIO_CTRL72) GPIO Pin Control Register Offset */
#define GPIO_CTRL73_REG_OFST           _UINT32_(0x124)     /* (GPIO_CTRL73) GPIO Pin Control Register Offset */
#define GPIO_CTRL74_REG_OFST           _UINT32_(0x128)     /* (GPIO_CTRL74) GPIO Pin Control Register Offset */
#define GPIO_CTRL75_REG_OFST           _UINT32_(0x12C)     /* (GPIO_CTRL75) GPIO Pin Control Register Offset */
#define GPIO_CTRL76_REG_OFST           _UINT32_(0x130)     /* (GPIO_CTRL76) GPIO Pin Control Register Offset */
#define GPIO_CTRL77_REG_OFST           _UINT32_(0x134)     /* (GPIO_CTRL77) GPIO Pin Control Register Offset */
#define GPIO_CTRL78_REG_OFST           _UINT32_(0x138)     /* (GPIO_CTRL78) GPIO Pin Control Register Offset */
#define GPIO_CTRL79_REG_OFST           _UINT32_(0x13C)     /* (GPIO_CTRL79) GPIO Pin Control Register Offset */
#define GPIO_CTRL80_REG_OFST           _UINT32_(0x140)     /* (GPIO_CTRL80) GPIO Pin Control Register Offset */
#define GPIO_CTRL81_REG_OFST           _UINT32_(0x144)     /* (GPIO_CTRL81) GPIO Pin Control Register Offset */
#define GPIO_CTRL82_REG_OFST           _UINT32_(0x148)     /* (GPIO_CTRL82) GPIO Pin Control Register Offset */
#define GPIO_CTRL83_REG_OFST           _UINT32_(0x14C)     /* (GPIO_CTRL83) GPIO Pin Control Register Offset */
#define GPIO_CTRL84_REG_OFST           _UINT32_(0x150)     /* (GPIO_CTRL84) GPIO Pin Control Register Offset */
#define GPIO_CTRL85_REG_OFST           _UINT32_(0x154)     /* (GPIO_CTRL85) GPIO Pin Control Register Offset */
#define GPIO_CTRL86_REG_OFST           _UINT32_(0x158)     /* (GPIO_CTRL86) GPIO Pin Control Register Offset */
#define GPIO_CTRL87_REG_OFST           _UINT32_(0x15C)     /* (GPIO_CTRL87) GPIO Pin Control Register Offset */
#define GPIO_CTRL88_REG_OFST           _UINT32_(0x160)     /* (GPIO_CTRL88) GPIO Pin Control Register Offset */
#define GPIO_CTRL89_REG_OFST           _UINT32_(0x164)     /* (GPIO_CTRL89) GPIO Pin Control Register Offset */
#define GPIO_CTRL90_REG_OFST           _UINT32_(0x168)     /* (GPIO_CTRL90) GPIO Pin Control Register Offset */
#define GPIO_CTRL91_REG_OFST           _UINT32_(0x16C)     /* (GPIO_CTRL91) GPIO Pin Control Register Offset */
#define GPIO_CTRL92_REG_OFST           _UINT32_(0x170)     /* (GPIO_CTRL92) GPIO Pin Control Register Offset */
#define GPIO_CTRL93_REG_OFST           _UINT32_(0x174)     /* (GPIO_CTRL93) GPIO Pin Control Register Offset */
#define GPIO_CTRL94_REG_OFST           _UINT32_(0x178)     /* (GPIO_CTRL94) GPIO Pin Control Register Offset */
#define GPIO_CTRL95_REG_OFST           _UINT32_(0x17C)     /* (GPIO_CTRL95) GPIO Pin Control Register Offset */
#define GPIO_CTRL96_REG_OFST           _UINT32_(0x180)     /* (GPIO_CTRL96) GPIO Pin Control Register Offset */
#define GPIO_CTRL97_REG_OFST           _UINT32_(0x184)     /* (GPIO_CTRL97) GPIO Pin Control Register Offset */
#define GPIO_CTRL98_REG_OFST           _UINT32_(0x188)     /* (GPIO_CTRL98) GPIO Pin Control Register Offset */
#define GPIO_CTRL99_REG_OFST           _UINT32_(0x18C)     /* (GPIO_CTRL99) GPIO Pin Control Register Offset */
#define GPIO_CTRL100_REG_OFST          _UINT32_(0x190)     /* (GPIO_CTRL100) GPIO Pin Control Register Offset */
#define GPIO_CTRL101_REG_OFST          _UINT32_(0x194)     /* (GPIO_CTRL101) GPIO Pin Control Register Offset */
#define GPIO_CTRL102_REG_OFST          _UINT32_(0x198)     /* (GPIO_CTRL102) GPIO Pin Control Register Offset */
#define GPIO_CTRL103_REG_OFST          _UINT32_(0x19C)     /* (GPIO_CTRL103) GPIO Pin Control Register Offset */
#define GPIO_CTRL104_REG_OFST          _UINT32_(0x1A0)     /* (GPIO_CTRL104) GPIO Pin Control Register Offset */
#define GPIO_CTRL105_REG_OFST          _UINT32_(0x1A4)     /* (GPIO_CTRL105) GPIO Pin Control Register Offset */
#define GPIO_CTRL106_REG_OFST          _UINT32_(0x1A8)     /* (GPIO_CTRL106) GPIO Pin Control Register Offset */
#define GPIO_CTRL107_REG_OFST          _UINT32_(0x1AC)     /* (GPIO_CTRL107) GPIO Pin Control Register Offset */
#define GPIO_CTRL108_REG_OFST          _UINT32_(0x1B0)     /* (GPIO_CTRL108) GPIO Pin Control Register Offset */
#define GPIO_CTRL109_REG_OFST          _UINT32_(0x1B4)     /* (GPIO_CTRL109) GPIO Pin Control Register Offset */
#define GPIO_CTRL110_REG_OFST          _UINT32_(0x1B8)     /* (GPIO_CTRL110) GPIO Pin Control Register Offset */
#define GPIO_CTRL111_REG_OFST          _UINT32_(0x1BC)     /* (GPIO_CTRL111) GPIO Pin Control Register Offset */
#define GPIO_CTRL112_REG_OFST          _UINT32_(0x1C0)     /* (GPIO_CTRL112) GPIO Pin Control Register Offset */
#define GPIO_CTRL113_REG_OFST          _UINT32_(0x1C4)     /* (GPIO_CTRL113) GPIO Pin Control Register Offset */
#define GPIO_CTRL114_REG_OFST          _UINT32_(0x1C8)     /* (GPIO_CTRL114) GPIO Pin Control Register Offset */
#define GPIO_CTRL115_REG_OFST          _UINT32_(0x1CC)     /* (GPIO_CTRL115) GPIO Pin Control Register Offset */
#define GPIO_CTRL116_REG_OFST          _UINT32_(0x1D0)     /* (GPIO_CTRL116) GPIO Pin Control Register Offset */
#define GPIO_CTRL117_REG_OFST          _UINT32_(0x1D4)     /* (GPIO_CTRL117) GPIO Pin Control Register Offset */
#define GPIO_CTRL118_REG_OFST          _UINT32_(0x1D8)     /* (GPIO_CTRL118) GPIO Pin Control Register Offset */
#define GPIO_CTRL119_REG_OFST          _UINT32_(0x1DC)     /* (GPIO_CTRL119) GPIO Pin Control Register Offset */
#define GPIO_CTRL120_REG_OFST          _UINT32_(0x1E0)     /* (GPIO_CTRL120) GPIO Pin Control Register Offset */
#define GPIO_CTRL121_REG_OFST          _UINT32_(0x1E4)     /* (GPIO_CTRL121) GPIO Pin Control Register Offset */
#define GPIO_CTRL122_REG_OFST          _UINT32_(0x1E8)     /* (GPIO_CTRL122) GPIO Pin Control Register Offset */
#define GPIO_CTRL123_REG_OFST          _UINT32_(0x1EC)     /* (GPIO_CTRL123) GPIO Pin Control Register Offset */
#define GPIO_CTRL124_REG_OFST          _UINT32_(0x1F0)     /* (GPIO_CTRL124) GPIO Pin Control Register Offset */
#define GPIO_CTRL125_REG_OFST          _UINT32_(0x1F4)     /* (GPIO_CTRL125) GPIO Pin Control Register Offset */
#define GPIO_CTRL126_REG_OFST          _UINT32_(0x1F8)     /* (GPIO_CTRL126) GPIO Pin Control Register Offset */
#define GPIO_CTRL127_REG_OFST          _UINT32_(0x1FC)     /* (GPIO_CTRL127) GPIO Pin Control Register Offset */
#define GPIO_CTRL128_REG_OFST          _UINT32_(0x200)     /* (GPIO_CTRL128) GPIO Pin Control Register Offset */
#define GPIO_CTRL129_REG_OFST          _UINT32_(0x204)     /* (GPIO_CTRL129) GPIO Pin Control Register Offset */
#define GPIO_CTRL130_REG_OFST          _UINT32_(0x208)     /* (GPIO_CTRL130) GPIO Pin Control Register Offset */
#define GPIO_CTRL131_REG_OFST          _UINT32_(0x20C)     /* (GPIO_CTRL131) GPIO Pin Control Register Offset */
#define GPIO_CTRL132_REG_OFST          _UINT32_(0x210)     /* (GPIO_CTRL132) GPIO Pin Control Register Offset */
#define GPIO_CTRL133_REG_OFST          _UINT32_(0x214)     /* (GPIO_CTRL133) GPIO Pin Control Register Offset */
#define GPIO_CTRL134_REG_OFST          _UINT32_(0x218)     /* (GPIO_CTRL134) GPIO Pin Control Register Offset */
#define GPIO_CTRL135_REG_OFST          _UINT32_(0x21C)     /* (GPIO_CTRL135) GPIO Pin Control Register Offset */
#define GPIO_CTRL136_REG_OFST          _UINT32_(0x220)     /* (GPIO_CTRL136) GPIO Pin Control Register Offset */
#define GPIO_CTRL137_REG_OFST          _UINT32_(0x224)     /* (GPIO_CTRL137) GPIO Pin Control Register Offset */
#define GPIO_CTRL138_REG_OFST          _UINT32_(0x228)     /* (GPIO_CTRL138) GPIO Pin Control Register Offset */
#define GPIO_CTRL139_REG_OFST          _UINT32_(0x22C)     /* (GPIO_CTRL139) GPIO Pin Control Register Offset */
#define GPIO_CTRL140_REG_OFST          _UINT32_(0x230)     /* (GPIO_CTRL140) GPIO Pin Control Register Offset */
#define GPIO_CTRL141_REG_OFST          _UINT32_(0x234)     /* (GPIO_CTRL141) GPIO Pin Control Register Offset */
#define GPIO_CTRL142_REG_OFST          _UINT32_(0x238)     /* (GPIO_CTRL142) GPIO Pin Control Register Offset */
#define GPIO_CTRL143_REG_OFST          _UINT32_(0x23C)     /* (GPIO_CTRL143) GPIO Pin Control Register Offset */
#define GPIO_CTRL144_REG_OFST          _UINT32_(0x240)     /* (GPIO_CTRL144) GPIO Pin Control Register Offset */
#define GPIO_CTRL145_REG_OFST          _UINT32_(0x244)     /* (GPIO_CTRL145) GPIO Pin Control Register Offset */
#define GPIO_CTRL146_REG_OFST          _UINT32_(0x248)     /* (GPIO_CTRL146) GPIO Pin Control Register Offset */
#define GPIO_CTRL147_REG_OFST          _UINT32_(0x24C)     /* (GPIO_CTRL147) GPIO Pin Control Register Offset */
#define GPIO_CTRL148_REG_OFST          _UINT32_(0x250)     /* (GPIO_CTRL148) GPIO Pin Control Register Offset */
#define GPIO_CTRL149_REG_OFST          _UINT32_(0x254)     /* (GPIO_CTRL149) GPIO Pin Control Register Offset */
#define GPIO_CTRL150_REG_OFST          _UINT32_(0x258)     /* (GPIO_CTRL150) GPIO Pin Control Register Offset */
#define GPIO_CTRL151_REG_OFST          _UINT32_(0x25C)     /* (GPIO_CTRL151) GPIO Pin Control Register Offset */
#define GPIO_CTRL152_REG_OFST          _UINT32_(0x260)     /* (GPIO_CTRL152) GPIO Pin Control Register Offset */
#define GPIO_CTRL153_REG_OFST          _UINT32_(0x264)     /* (GPIO_CTRL153) GPIO Pin Control Register Offset */
#define GPIO_CTRL154_REG_OFST          _UINT32_(0x268)     /* (GPIO_CTRL154) GPIO Pin Control Register Offset */
#define GPIO_CTRL155_REG_OFST          _UINT32_(0x26C)     /* (GPIO_CTRL155) GPIO Pin Control Register Offset */
#define GPIO_CTRL156_REG_OFST          _UINT32_(0x270)     /* (GPIO_CTRL156) GPIO Pin Control Register Offset */
#define GPIO_CTRL157_REG_OFST          _UINT32_(0x274)     /* (GPIO_CTRL157) GPIO Pin Control Register Offset */
#define GPIO_CTRL158_REG_OFST          _UINT32_(0x278)     /* (GPIO_CTRL158) GPIO Pin Control Register Offset */
#define GPIO_CTRL159_REG_OFST          _UINT32_(0x27C)     /* (GPIO_CTRL159) GPIO Pin Control Register Offset */
#define GPIO_CTRL160_REG_OFST          _UINT32_(0x280)     /* (GPIO_CTRL160) GPIO Pin Control Register Offset */
#define GPIO_CTRL161_REG_OFST          _UINT32_(0x284)     /* (GPIO_CTRL161) GPIO Pin Control Register Offset */
#define GPIO_CTRL162_REG_OFST          _UINT32_(0x288)     /* (GPIO_CTRL162) GPIO Pin Control Register Offset */
#define GPIO_CTRL163_REG_OFST          _UINT32_(0x28C)     /* (GPIO_CTRL163) GPIO Pin Control Register Offset */
#define GPIO_CTRL164_REG_OFST          _UINT32_(0x290)     /* (GPIO_CTRL164) GPIO Pin Control Register Offset */
#define GPIO_CTRL165_REG_OFST          _UINT32_(0x294)     /* (GPIO_CTRL165) GPIO Pin Control Register Offset */
#define GPIO_CTRL166_REG_OFST          _UINT32_(0x298)     /* (GPIO_CTRL166) GPIO Pin Control Register Offset */
#define GPIO_CTRL167_REG_OFST          _UINT32_(0x29C)     /* (GPIO_CTRL167) GPIO Pin Control Register Offset */
#define GPIO_CTRL168_REG_OFST          _UINT32_(0x2A0)     /* (GPIO_CTRL168) GPIO Pin Control Register Offset */
#define GPIO_CTRL169_REG_OFST          _UINT32_(0x2A4)     /* (GPIO_CTRL169) GPIO Pin Control Register Offset */
#define GPIO_CTRL170_REG_OFST          _UINT32_(0x2A8)     /* (GPIO_CTRL170) GPIO Pin Control Register Offset */
#define GPIO_CTRL171_REG_OFST          _UINT32_(0x2AC)     /* (GPIO_CTRL171) GPIO Pin Control Register Offset */
#define GPIO_PARIN_REG_OFST            _UINT32_(0x300)     /* (GPIO_PARIN) The GPIO Input Registers. Offset */
#define GPIO_PARIN0_REG_OFST           _UINT32_(0x300)     /* (GPIO_PARIN0) The GPIO Input Registers. Offset */
#define GPIO_PARIN1_REG_OFST           _UINT32_(0x304)     /* (GPIO_PARIN1) The GPIO Input Registers. Offset */
#define GPIO_PARIN2_REG_OFST           _UINT32_(0x308)     /* (GPIO_PARIN2) The GPIO Input Registers. Offset */
#define GPIO_PARIN3_REG_OFST           _UINT32_(0x30C)     /* (GPIO_PARIN3) The GPIO Input Registers. Offset */
#define GPIO_PARIN4_REG_OFST           _UINT32_(0x310)     /* (GPIO_PARIN4) The GPIO Input Registers. Offset */
#define GPIO_PARIN5_REG_OFST           _UINT32_(0x314)     /* (GPIO_PARIN5) The GPIO Input Registers. Offset */
#define GPIO_PAROUT_REG_OFST           _UINT32_(0x380)     /* (GPIO_PAROUT) The GPIO Output Registers. Offset */
#define GPIO_PAROUT0_REG_OFST          _UINT32_(0x380)     /* (GPIO_PAROUT0) The GPIO Output Registers. Offset */
#define GPIO_PAROUT1_REG_OFST          _UINT32_(0x384)     /* (GPIO_PAROUT1) The GPIO Output Registers. Offset */
#define GPIO_PAROUT2_REG_OFST          _UINT32_(0x388)     /* (GPIO_PAROUT2) The GPIO Output Registers. Offset */
#define GPIO_PAROUT3_REG_OFST          _UINT32_(0x38C)     /* (GPIO_PAROUT3) The GPIO Output Registers. Offset */
#define GPIO_PAROUT4_REG_OFST          _UINT32_(0x390)     /* (GPIO_PAROUT4) The GPIO Output Registers. Offset */
#define GPIO_PAROUT5_REG_OFST          _UINT32_(0x394)     /* (GPIO_PAROUT5) The GPIO Output Registers. Offset */
#define GPIO_CTRL2P_REG_OFST           _UINT32_(0x500)     /* (GPIO_CTRL2P) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P0_REG_OFST          _UINT32_(0x500)     /* (GPIO_CTRL2P0) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P1_REG_OFST          _UINT32_(0x504)     /* (GPIO_CTRL2P1) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P2_REG_OFST          _UINT32_(0x508)     /* (GPIO_CTRL2P2) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P3_REG_OFST          _UINT32_(0x50C)     /* (GPIO_CTRL2P3) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P4_REG_OFST          _UINT32_(0x510)     /* (GPIO_CTRL2P4) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P5_REG_OFST          _UINT32_(0x514)     /* (GPIO_CTRL2P5) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P6_REG_OFST          _UINT32_(0x518)     /* (GPIO_CTRL2P6) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P7_REG_OFST          _UINT32_(0x51C)     /* (GPIO_CTRL2P7) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P8_REG_OFST          _UINT32_(0x520)     /* (GPIO_CTRL2P8) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P9_REG_OFST          _UINT32_(0x524)     /* (GPIO_CTRL2P9) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P10_REG_OFST         _UINT32_(0x528)     /* (GPIO_CTRL2P10) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P11_REG_OFST         _UINT32_(0x52C)     /* (GPIO_CTRL2P11) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P12_REG_OFST         _UINT32_(0x530)     /* (GPIO_CTRL2P12) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P13_REG_OFST         _UINT32_(0x534)     /* (GPIO_CTRL2P13) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P14_REG_OFST         _UINT32_(0x538)     /* (GPIO_CTRL2P14) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P15_REG_OFST         _UINT32_(0x53C)     /* (GPIO_CTRL2P15) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P16_REG_OFST         _UINT32_(0x540)     /* (GPIO_CTRL2P16) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P17_REG_OFST         _UINT32_(0x544)     /* (GPIO_CTRL2P17) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P18_REG_OFST         _UINT32_(0x548)     /* (GPIO_CTRL2P18) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P19_REG_OFST         _UINT32_(0x54C)     /* (GPIO_CTRL2P19) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P20_REG_OFST         _UINT32_(0x550)     /* (GPIO_CTRL2P20) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P21_REG_OFST         _UINT32_(0x554)     /* (GPIO_CTRL2P21) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P22_REG_OFST         _UINT32_(0x558)     /* (GPIO_CTRL2P22) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P23_REG_OFST         _UINT32_(0x55C)     /* (GPIO_CTRL2P23) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P24_REG_OFST         _UINT32_(0x560)     /* (GPIO_CTRL2P24) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P25_REG_OFST         _UINT32_(0x564)     /* (GPIO_CTRL2P25) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P26_REG_OFST         _UINT32_(0x568)     /* (GPIO_CTRL2P26) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P27_REG_OFST         _UINT32_(0x56C)     /* (GPIO_CTRL2P27) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P28_REG_OFST         _UINT32_(0x570)     /* (GPIO_CTRL2P28) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P29_REG_OFST         _UINT32_(0x574)     /* (GPIO_CTRL2P29) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P30_REG_OFST         _UINT32_(0x578)     /* (GPIO_CTRL2P30) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P31_REG_OFST         _UINT32_(0x57C)     /* (GPIO_CTRL2P31) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P32_REG_OFST         _UINT32_(0x580)     /* (GPIO_CTRL2P32) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P33_REG_OFST         _UINT32_(0x584)     /* (GPIO_CTRL2P33) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P34_REG_OFST         _UINT32_(0x588)     /* (GPIO_CTRL2P34) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P35_REG_OFST         _UINT32_(0x58C)     /* (GPIO_CTRL2P35) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P36_REG_OFST         _UINT32_(0x590)     /* (GPIO_CTRL2P36) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P37_REG_OFST         _UINT32_(0x594)     /* (GPIO_CTRL2P37) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P38_REG_OFST         _UINT32_(0x598)     /* (GPIO_CTRL2P38) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P39_REG_OFST         _UINT32_(0x59C)     /* (GPIO_CTRL2P39) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P40_REG_OFST         _UINT32_(0x5A0)     /* (GPIO_CTRL2P40) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P41_REG_OFST         _UINT32_(0x5A4)     /* (GPIO_CTRL2P41) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P42_REG_OFST         _UINT32_(0x5A8)     /* (GPIO_CTRL2P42) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P43_REG_OFST         _UINT32_(0x5AC)     /* (GPIO_CTRL2P43) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P44_REG_OFST         _UINT32_(0x5B0)     /* (GPIO_CTRL2P44) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P45_REG_OFST         _UINT32_(0x5B4)     /* (GPIO_CTRL2P45) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P46_REG_OFST         _UINT32_(0x5B8)     /* (GPIO_CTRL2P46) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P47_REG_OFST         _UINT32_(0x5BC)     /* (GPIO_CTRL2P47) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P48_REG_OFST         _UINT32_(0x5C0)     /* (GPIO_CTRL2P48) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P49_REG_OFST         _UINT32_(0x5C4)     /* (GPIO_CTRL2P49) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P50_REG_OFST         _UINT32_(0x5C8)     /* (GPIO_CTRL2P50) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P51_REG_OFST         _UINT32_(0x5CC)     /* (GPIO_CTRL2P51) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P52_REG_OFST         _UINT32_(0x5D0)     /* (GPIO_CTRL2P52) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P53_REG_OFST         _UINT32_(0x5D4)     /* (GPIO_CTRL2P53) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P54_REG_OFST         _UINT32_(0x5D8)     /* (GPIO_CTRL2P54) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P55_REG_OFST         _UINT32_(0x5DC)     /* (GPIO_CTRL2P55) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P56_REG_OFST         _UINT32_(0x5E0)     /* (GPIO_CTRL2P56) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P57_REG_OFST         _UINT32_(0x5E4)     /* (GPIO_CTRL2P57) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P58_REG_OFST         _UINT32_(0x5E8)     /* (GPIO_CTRL2P58) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P59_REG_OFST         _UINT32_(0x5EC)     /* (GPIO_CTRL2P59) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P60_REG_OFST         _UINT32_(0x5F0)     /* (GPIO_CTRL2P60) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P61_REG_OFST         _UINT32_(0x5F4)     /* (GPIO_CTRL2P61) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P62_REG_OFST         _UINT32_(0x5F8)     /* (GPIO_CTRL2P62) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P63_REG_OFST         _UINT32_(0x5FC)     /* (GPIO_CTRL2P63) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P64_REG_OFST         _UINT32_(0x600)     /* (GPIO_CTRL2P64) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P65_REG_OFST         _UINT32_(0x604)     /* (GPIO_CTRL2P65) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P66_REG_OFST         _UINT32_(0x608)     /* (GPIO_CTRL2P66) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P67_REG_OFST         _UINT32_(0x60C)     /* (GPIO_CTRL2P67) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P68_REG_OFST         _UINT32_(0x610)     /* (GPIO_CTRL2P68) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P69_REG_OFST         _UINT32_(0x614)     /* (GPIO_CTRL2P69) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P70_REG_OFST         _UINT32_(0x618)     /* (GPIO_CTRL2P70) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P71_REG_OFST         _UINT32_(0x61C)     /* (GPIO_CTRL2P71) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P72_REG_OFST         _UINT32_(0x620)     /* (GPIO_CTRL2P72) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P73_REG_OFST         _UINT32_(0x624)     /* (GPIO_CTRL2P73) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P74_REG_OFST         _UINT32_(0x628)     /* (GPIO_CTRL2P74) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P75_REG_OFST         _UINT32_(0x62C)     /* (GPIO_CTRL2P75) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P76_REG_OFST         _UINT32_(0x630)     /* (GPIO_CTRL2P76) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P77_REG_OFST         _UINT32_(0x634)     /* (GPIO_CTRL2P77) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P78_REG_OFST         _UINT32_(0x638)     /* (GPIO_CTRL2P78) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P79_REG_OFST         _UINT32_(0x63C)     /* (GPIO_CTRL2P79) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P80_REG_OFST         _UINT32_(0x640)     /* (GPIO_CTRL2P80) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P81_REG_OFST         _UINT32_(0x644)     /* (GPIO_CTRL2P81) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P82_REG_OFST         _UINT32_(0x648)     /* (GPIO_CTRL2P82) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P83_REG_OFST         _UINT32_(0x64C)     /* (GPIO_CTRL2P83) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P84_REG_OFST         _UINT32_(0x650)     /* (GPIO_CTRL2P84) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P85_REG_OFST         _UINT32_(0x654)     /* (GPIO_CTRL2P85) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P86_REG_OFST         _UINT32_(0x658)     /* (GPIO_CTRL2P86) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P87_REG_OFST         _UINT32_(0x65C)     /* (GPIO_CTRL2P87) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P88_REG_OFST         _UINT32_(0x660)     /* (GPIO_CTRL2P88) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P89_REG_OFST         _UINT32_(0x664)     /* (GPIO_CTRL2P89) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P90_REG_OFST         _UINT32_(0x668)     /* (GPIO_CTRL2P90) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P91_REG_OFST         _UINT32_(0x66C)     /* (GPIO_CTRL2P91) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P92_REG_OFST         _UINT32_(0x670)     /* (GPIO_CTRL2P92) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P93_REG_OFST         _UINT32_(0x674)     /* (GPIO_CTRL2P93) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P94_REG_OFST         _UINT32_(0x678)     /* (GPIO_CTRL2P94) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P95_REG_OFST         _UINT32_(0x67C)     /* (GPIO_CTRL2P95) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P96_REG_OFST         _UINT32_(0x680)     /* (GPIO_CTRL2P96) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P97_REG_OFST         _UINT32_(0x684)     /* (GPIO_CTRL2P97) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P98_REG_OFST         _UINT32_(0x688)     /* (GPIO_CTRL2P98) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P99_REG_OFST         _UINT32_(0x68C)     /* (GPIO_CTRL2P99) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P100_REG_OFST        _UINT32_(0x690)     /* (GPIO_CTRL2P100) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P101_REG_OFST        _UINT32_(0x694)     /* (GPIO_CTRL2P101) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P102_REG_OFST        _UINT32_(0x698)     /* (GPIO_CTRL2P102) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P103_REG_OFST        _UINT32_(0x69C)     /* (GPIO_CTRL2P103) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P104_REG_OFST        _UINT32_(0x6A0)     /* (GPIO_CTRL2P104) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P105_REG_OFST        _UINT32_(0x6A4)     /* (GPIO_CTRL2P105) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P106_REG_OFST        _UINT32_(0x6A8)     /* (GPIO_CTRL2P106) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P107_REG_OFST        _UINT32_(0x6AC)     /* (GPIO_CTRL2P107) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P108_REG_OFST        _UINT32_(0x6B0)     /* (GPIO_CTRL2P108) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P109_REG_OFST        _UINT32_(0x6B4)     /* (GPIO_CTRL2P109) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P110_REG_OFST        _UINT32_(0x6B8)     /* (GPIO_CTRL2P110) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P111_REG_OFST        _UINT32_(0x6BC)     /* (GPIO_CTRL2P111) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P112_REG_OFST        _UINT32_(0x6C0)     /* (GPIO_CTRL2P112) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P113_REG_OFST        _UINT32_(0x6C4)     /* (GPIO_CTRL2P113) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P114_REG_OFST        _UINT32_(0x6C8)     /* (GPIO_CTRL2P114) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P115_REG_OFST        _UINT32_(0x6CC)     /* (GPIO_CTRL2P115) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P116_REG_OFST        _UINT32_(0x6D0)     /* (GPIO_CTRL2P116) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P117_REG_OFST        _UINT32_(0x6D4)     /* (GPIO_CTRL2P117) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P118_REG_OFST        _UINT32_(0x6D8)     /* (GPIO_CTRL2P118) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P119_REG_OFST        _UINT32_(0x6DC)     /* (GPIO_CTRL2P119) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P120_REG_OFST        _UINT32_(0x6E0)     /* (GPIO_CTRL2P120) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P121_REG_OFST        _UINT32_(0x6E4)     /* (GPIO_CTRL2P121) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P122_REG_OFST        _UINT32_(0x6E8)     /* (GPIO_CTRL2P122) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P123_REG_OFST        _UINT32_(0x6EC)     /* (GPIO_CTRL2P123) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P124_REG_OFST        _UINT32_(0x6F0)     /* (GPIO_CTRL2P124) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P125_REG_OFST        _UINT32_(0x6F4)     /* (GPIO_CTRL2P125) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P126_REG_OFST        _UINT32_(0x6F8)     /* (GPIO_CTRL2P126) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P127_REG_OFST        _UINT32_(0x6FC)     /* (GPIO_CTRL2P127) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P128_REG_OFST        _UINT32_(0x700)     /* (GPIO_CTRL2P128) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P129_REG_OFST        _UINT32_(0x704)     /* (GPIO_CTRL2P129) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P130_REG_OFST        _UINT32_(0x708)     /* (GPIO_CTRL2P130) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P131_REG_OFST        _UINT32_(0x70C)     /* (GPIO_CTRL2P131) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P132_REG_OFST        _UINT32_(0x710)     /* (GPIO_CTRL2P132) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P133_REG_OFST        _UINT32_(0x714)     /* (GPIO_CTRL2P133) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P134_REG_OFST        _UINT32_(0x718)     /* (GPIO_CTRL2P134) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P135_REG_OFST        _UINT32_(0x71C)     /* (GPIO_CTRL2P135) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P136_REG_OFST        _UINT32_(0x720)     /* (GPIO_CTRL2P136) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P137_REG_OFST        _UINT32_(0x724)     /* (GPIO_CTRL2P137) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P138_REG_OFST        _UINT32_(0x728)     /* (GPIO_CTRL2P138) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P139_REG_OFST        _UINT32_(0x72C)     /* (GPIO_CTRL2P139) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P140_REG_OFST        _UINT32_(0x730)     /* (GPIO_CTRL2P140) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P141_REG_OFST        _UINT32_(0x734)     /* (GPIO_CTRL2P141) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P142_REG_OFST        _UINT32_(0x738)     /* (GPIO_CTRL2P142) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P143_REG_OFST        _UINT32_(0x73C)     /* (GPIO_CTRL2P143) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P144_REG_OFST        _UINT32_(0x740)     /* (GPIO_CTRL2P144) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P145_REG_OFST        _UINT32_(0x744)     /* (GPIO_CTRL2P145) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P146_REG_OFST        _UINT32_(0x748)     /* (GPIO_CTRL2P146) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P147_REG_OFST        _UINT32_(0x74C)     /* (GPIO_CTRL2P147) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P148_REG_OFST        _UINT32_(0x750)     /* (GPIO_CTRL2P148) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P149_REG_OFST        _UINT32_(0x754)     /* (GPIO_CTRL2P149) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P150_REG_OFST        _UINT32_(0x758)     /* (GPIO_CTRL2P150) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P151_REG_OFST        _UINT32_(0x75C)     /* (GPIO_CTRL2P151) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P152_REG_OFST        _UINT32_(0x760)     /* (GPIO_CTRL2P152) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P153_REG_OFST        _UINT32_(0x764)     /* (GPIO_CTRL2P153) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P154_REG_OFST        _UINT32_(0x768)     /* (GPIO_CTRL2P154) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P155_REG_OFST        _UINT32_(0x76C)     /* (GPIO_CTRL2P155) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P156_REG_OFST        _UINT32_(0x770)     /* (GPIO_CTRL2P156) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P157_REG_OFST        _UINT32_(0x774)     /* (GPIO_CTRL2P157) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P158_REG_OFST        _UINT32_(0x778)     /* (GPIO_CTRL2P158) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P159_REG_OFST        _UINT32_(0x77C)     /* (GPIO_CTRL2P159) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P160_REG_OFST        _UINT32_(0x780)     /* (GPIO_CTRL2P160) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P161_REG_OFST        _UINT32_(0x784)     /* (GPIO_CTRL2P161) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P162_REG_OFST        _UINT32_(0x788)     /* (GPIO_CTRL2P162) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P163_REG_OFST        _UINT32_(0x78C)     /* (GPIO_CTRL2P163) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P164_REG_OFST        _UINT32_(0x790)     /* (GPIO_CTRL2P164) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P165_REG_OFST        _UINT32_(0x794)     /* (GPIO_CTRL2P165) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P166_REG_OFST        _UINT32_(0x798)     /* (GPIO_CTRL2P166) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P167_REG_OFST        _UINT32_(0x79C)     /* (GPIO_CTRL2P167) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P168_REG_OFST        _UINT32_(0x7A0)     /* (GPIO_CTRL2P168) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P169_REG_OFST        _UINT32_(0x7A4)     /* (GPIO_CTRL2P169) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P170_REG_OFST        _UINT32_(0x7A8)     /* (GPIO_CTRL2P170) The GPIO PIN_CTRL2 Registers Offset */
#define GPIO_CTRL2P171_REG_OFST        _UINT32_(0x7AC)     /* (GPIO_CTRL2P171) The GPIO PIN_CTRL2 Registers Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GPIO register API structure */
typedef struct
{  /* GPIO Pin Control Registers */
  __IO  uint32_t                       GPIO_CTRL[172];     /**< Offset: 0x00 (R/W  32) GPIO Pin Control Register */
  __I   uint8_t                        Reserved1[0x50];
  __IO  uint32_t                       GPIO_PARIN[6];      /**< Offset: 0x300 (R/W  32) The GPIO Input Registers. */
  __I   uint8_t                        Reserved2[0x68];
  __IO  uint32_t                       GPIO_PAROUT[6];     /**< Offset: 0x380 (R/W  32) The GPIO Output Registers. */
  __I   uint8_t                        Reserved3[0x168];
  __IO  uint32_t                       GPIO_CTRL2P[172];   /**< Offset: 0x500 (R/W  32) The GPIO PIN_CTRL2 Registers */
} gpio_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_GPIO_COMPONENT_H_ */
