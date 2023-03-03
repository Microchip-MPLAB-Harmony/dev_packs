/*
 * Component description for CNT_TMR
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
#ifndef _CEC1702Q_CNT_TMR_COMPONENT_H_
#define _CEC1702Q_CNT_TMR_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR CNT_TMR                                      */
/* ************************************************************************** */

/* -------- CNT_TMR_TIMERX_CTRL : (CNT_TMR Offset: 0x00) (R/W 32) This bit reflects the current state of the timer's Clock_Required output signal. -------- */
#define CNT_TMR_TIMERX_CTRL_RESETVALUE        _UINT32_(0x00)                                       /*  (CNT_TMR_TIMERX_CTRL) This bit reflects the current state of the timer's Clock_Required output signal.  Reset Value */

#define CNT_TMR_TIMERX_CTRL_EN_Pos            _UINT32_(0)                                          /* (CNT_TMR_TIMERX_CTRL) This bit is used to start and stop the timer. This bit does not reset the timer count but does reset the timer\n                       pulse output. This bit will be cleared when the timer stops counting in One-Shot mode. The ENABLE bit is cleared after a\n           RESET cycle has completed. Firmware must poll the RESET bit in order to determine when the timer is active after reset.\n        1=Timer is enabled; 0=Timer is disabled. Position */
#define CNT_TMR_TIMERX_CTRL_EN_Msk            (_UINT32_(0x1) << CNT_TMR_TIMERX_CTRL_EN_Pos)        /* (CNT_TMR_TIMERX_CTRL) This bit is used to start and stop the timer. This bit does not reset the timer count but does reset the timer\n                       pulse output. This bit will be cleared when the timer stops counting in One-Shot mode. The ENABLE bit is cleared after a\n           RESET cycle has completed. Firmware must poll the RESET bit in order to determine when the timer is active after reset.\n        1=Timer is enabled; 0=Timer is disabled. Mask */
#define CNT_TMR_TIMERX_CTRL_EN(value)         (CNT_TMR_TIMERX_CTRL_EN_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CTRL_EN_Pos)) /* Assigment of value for EN in the CNT_TMR_TIMERX_CTRL register */
#define CNT_TMR_TIMERX_CTRL_RST_Pos           _UINT32_(1)                                          /* (CNT_TMR_TIMERX_CTRL) This bit stops the timer and resets the internal counter to the value in the Timer Reload Register. This bit\n                   also clears the ENABLE bit if it is set. This bit is self-clearing after the timer is reset. Firmware must poll the\n          RESET bit in order to determine when the timer is active after reset. Interrupts are blocked only when RESET takes\n        effect and the ENABLE bit is cleared. If interrupts are not desired, firmware must mask the interrupt in the interrupt\n       block. 1=Timer reset; 0=Normal timer operation. Position */
#define CNT_TMR_TIMERX_CTRL_RST_Msk           (_UINT32_(0x1) << CNT_TMR_TIMERX_CTRL_RST_Pos)       /* (CNT_TMR_TIMERX_CTRL) This bit stops the timer and resets the internal counter to the value in the Timer Reload Register. This bit\n                   also clears the ENABLE bit if it is set. This bit is self-clearing after the timer is reset. Firmware must poll the\n          RESET bit in order to determine when the timer is active after reset. Interrupts are blocked only when RESET takes\n        effect and the ENABLE bit is cleared. If interrupts are not desired, firmware must mask the interrupt in the interrupt\n       block. 1=Timer reset; 0=Normal timer operation. Mask */
#define CNT_TMR_TIMERX_CTRL_RST(value)        (CNT_TMR_TIMERX_CTRL_RST_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CTRL_RST_Pos)) /* Assigment of value for RST in the CNT_TMR_TIMERX_CTRL register */
#define CNT_TMR_TIMERX_CTRL_MODE_Pos          _UINT32_(2)                                          /* (CNT_TMR_TIMERX_CTRL) Timer Mode. 3=Measurement Mode; 2=One Shot Mode; 1=Event Mode; 0=Timer Mode. Position */
#define CNT_TMR_TIMERX_CTRL_MODE_Msk          (_UINT32_(0x3) << CNT_TMR_TIMERX_CTRL_MODE_Pos)      /* (CNT_TMR_TIMERX_CTRL) Timer Mode. 3=Measurement Mode; 2=One Shot Mode; 1=Event Mode; 0=Timer Mode. Mask */
#define CNT_TMR_TIMERX_CTRL_MODE(value)       (CNT_TMR_TIMERX_CTRL_MODE_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CTRL_MODE_Pos)) /* Assigment of value for MODE in the CNT_TMR_TIMERX_CTRL register */
#define   CNT_TMR_TIMERX_CTRL_MODE_TIMER_MODE_Val _UINT32_(0x0)                                        /* (CNT_TMR_TIMERX_CTRL) 0=Timer Mode  */
#define   CNT_TMR_TIMERX_CTRL_MODE_EVENT_MODE_Val _UINT32_(0x1)                                        /* (CNT_TMR_TIMERX_CTRL) 1=Event Mode  */
#define   CNT_TMR_TIMERX_CTRL_MODE_ONE_SHOT_MODE_Val _UINT32_(0x2)                                        /* (CNT_TMR_TIMERX_CTRL) 2=One Shot Mode  */
#define   CNT_TMR_TIMERX_CTRL_MODE_MEASUREMENT_MODE_Val _UINT32_(0x3)                                        /* (CNT_TMR_TIMERX_CTRL) 3=Measurement Mode  */
#define CNT_TMR_TIMERX_CTRL_MODE_TIMER_MODE   (CNT_TMR_TIMERX_CTRL_MODE_TIMER_MODE_Val << CNT_TMR_TIMERX_CTRL_MODE_Pos) /* (CNT_TMR_TIMERX_CTRL) 0=Timer Mode Position  */
#define CNT_TMR_TIMERX_CTRL_MODE_EVENT_MODE   (CNT_TMR_TIMERX_CTRL_MODE_EVENT_MODE_Val << CNT_TMR_TIMERX_CTRL_MODE_Pos) /* (CNT_TMR_TIMERX_CTRL) 1=Event Mode Position  */
#define CNT_TMR_TIMERX_CTRL_MODE_ONE_SHOT_MODE (CNT_TMR_TIMERX_CTRL_MODE_ONE_SHOT_MODE_Val << CNT_TMR_TIMERX_CTRL_MODE_Pos) /* (CNT_TMR_TIMERX_CTRL) 2=One Shot Mode Position  */
#define CNT_TMR_TIMERX_CTRL_MODE_MEASUREMENT_MODE (CNT_TMR_TIMERX_CTRL_MODE_MEASUREMENT_MODE_Val << CNT_TMR_TIMERX_CTRL_MODE_Pos) /* (CNT_TMR_TIMERX_CTRL) 3=Measurement Mode Position  */
#define CNT_TMR_TIMERX_CTRL_INPOL_Pos         _UINT32_(4)                                          /* (CNT_TMR_TIMERX_CTRL) This bit selects the polarity of the TINx input. 1=TINx is active low; 0=TINx is active high. Position */
#define CNT_TMR_TIMERX_CTRL_INPOL_Msk         (_UINT32_(0x1) << CNT_TMR_TIMERX_CTRL_INPOL_Pos)     /* (CNT_TMR_TIMERX_CTRL) This bit selects the polarity of the TINx input. 1=TINx is active low; 0=TINx is active high. Mask */
#define CNT_TMR_TIMERX_CTRL_INPOL(value)      (CNT_TMR_TIMERX_CTRL_INPOL_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CTRL_INPOL_Pos)) /* Assigment of value for INPOL in the CNT_TMR_TIMERX_CTRL register */
#define CNT_TMR_TIMERX_CTRL_UPDN_Pos          _UINT32_(5)                                          /* (CNT_TMR_TIMERX_CTRL) In Event Mode, this bit selects the timer count direction. In Timer Mode enables timer control by the TINx input pin.\n          Event Mode: 1=The timer counts up; 0=The timer counts down.\n                 Timer Mode:; 1=TINx pin pauses the timer when de-asserted; 0=TINx pin has no effect on the timer. Position */
#define CNT_TMR_TIMERX_CTRL_UPDN_Msk          (_UINT32_(0x1) << CNT_TMR_TIMERX_CTRL_UPDN_Pos)      /* (CNT_TMR_TIMERX_CTRL) In Event Mode, this bit selects the timer count direction. In Timer Mode enables timer control by the TINx input pin.\n          Event Mode: 1=The timer counts up; 0=The timer counts down.\n                 Timer Mode:; 1=TINx pin pauses the timer when de-asserted; 0=TINx pin has no effect on the timer. Mask */
#define CNT_TMR_TIMERX_CTRL_UPDN(value)       (CNT_TMR_TIMERX_CTRL_UPDN_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CTRL_UPDN_Pos)) /* Assigment of value for UPDN in the CNT_TMR_TIMERX_CTRL register */
#define CNT_TMR_TIMERX_CTRL_TOUT_EN_Pos       _UINT32_(6)                                          /* (CNT_TMR_TIMERX_CTRL) This bit enables the TOUTx pin. 1=TOUTx pin function is enabled; 0=TOUTx pin is inactive. Position */
#define CNT_TMR_TIMERX_CTRL_TOUT_EN_Msk       (_UINT32_(0x1) << CNT_TMR_TIMERX_CTRL_TOUT_EN_Pos)   /* (CNT_TMR_TIMERX_CTRL) This bit enables the TOUTx pin. 1=TOUTx pin function is enabled; 0=TOUTx pin is inactive. Mask */
#define CNT_TMR_TIMERX_CTRL_TOUT_EN(value)    (CNT_TMR_TIMERX_CTRL_TOUT_EN_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CTRL_TOUT_EN_Pos)) /* Assigment of value for TOUT_EN in the CNT_TMR_TIMERX_CTRL register */
#define CNT_TMR_TIMERX_CTRL_RLOAD_Pos         _UINT32_(7)                                          /* (CNT_TMR_TIMERX_CTRL) Reload Control. This bit controls how the timer is reloaded on overflow or underflow in Event and Timer modes.\n                    It has no effect in One shot mode. 1=Reload timer from Timer Reload Register and continue counting;\n                    0=Roll timer over to FFFFh and continue counting when counting down and rolls over to 0000h and continues counting when counting up. Position */
#define CNT_TMR_TIMERX_CTRL_RLOAD_Msk         (_UINT32_(0x1) << CNT_TMR_TIMERX_CTRL_RLOAD_Pos)     /* (CNT_TMR_TIMERX_CTRL) Reload Control. This bit controls how the timer is reloaded on overflow or underflow in Event and Timer modes.\n                    It has no effect in One shot mode. 1=Reload timer from Timer Reload Register and continue counting;\n                    0=Roll timer over to FFFFh and continue counting when counting down and rolls over to 0000h and continues counting when counting up. Mask */
#define CNT_TMR_TIMERX_CTRL_RLOAD(value)      (CNT_TMR_TIMERX_CTRL_RLOAD_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CTRL_RLOAD_Pos)) /* Assigment of value for RLOAD in the CNT_TMR_TIMERX_CTRL register */
#define CNT_TMR_TIMERX_CTRL_FIL_BYPASS_Pos    _UINT32_(8)                                          /* (CNT_TMR_TIMERX_CTRL) This bit is used to enable or disable the noise filter on the TINx input signal. 1=Bypass Mode: input filter disabled.\n                     The TINx input directly affects the timer; 0=Filter Mode: input filter enabled. The TINx input is filtered by the input filter. Position */
#define CNT_TMR_TIMERX_CTRL_FIL_BYPASS_Msk    (_UINT32_(0x1) << CNT_TMR_TIMERX_CTRL_FIL_BYPASS_Pos) /* (CNT_TMR_TIMERX_CTRL) This bit is used to enable or disable the noise filter on the TINx input signal. 1=Bypass Mode: input filter disabled.\n                     The TINx input directly affects the timer; 0=Filter Mode: input filter enabled. The TINx input is filtered by the input filter. Mask */
#define CNT_TMR_TIMERX_CTRL_FIL_BYPASS(value) (CNT_TMR_TIMERX_CTRL_FIL_BYPASS_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CTRL_FIL_BYPASS_Pos)) /* Assigment of value for FIL_BYPASS in the CNT_TMR_TIMERX_CTRL register */
#define CNT_TMR_TIMERX_CTRL_PD_Pos            _UINT32_(9)                                          /* (CNT_TMR_TIMERX_CTRL) Power Down. 1=The timer is powered down and all clocks are gated; 0=The timer is in a running state. Position */
#define CNT_TMR_TIMERX_CTRL_PD_Msk            (_UINT32_(0x1) << CNT_TMR_TIMERX_CTRL_PD_Pos)        /* (CNT_TMR_TIMERX_CTRL) Power Down. 1=The timer is powered down and all clocks are gated; 0=The timer is in a running state. Mask */
#define CNT_TMR_TIMERX_CTRL_PD(value)         (CNT_TMR_TIMERX_CTRL_PD_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CTRL_PD_Pos)) /* Assigment of value for PD in the CNT_TMR_TIMERX_CTRL register */
#define CNT_TMR_TIMERX_CTRL_TOUT_POL_Pos      _UINT32_(10)                                         /* (CNT_TMR_TIMERX_CTRL) This bit determines the polarity of the TOUTx output signal. In timer modes that toggle the TOUTx signal,\n           this polarity bit will not have a perceivable difference, except to determine the inactive state. In One-Shot mode\n           this determines if the pulsed output is active high or active low. 1=Active low; 0=Active high. Position */
#define CNT_TMR_TIMERX_CTRL_TOUT_POL_Msk      (_UINT32_(0x1) << CNT_TMR_TIMERX_CTRL_TOUT_POL_Pos)  /* (CNT_TMR_TIMERX_CTRL) This bit determines the polarity of the TOUTx output signal. In timer modes that toggle the TOUTx signal,\n           this polarity bit will not have a perceivable difference, except to determine the inactive state. In One-Shot mode\n           this determines if the pulsed output is active high or active low. 1=Active low; 0=Active high. Mask */
#define CNT_TMR_TIMERX_CTRL_TOUT_POL(value)   (CNT_TMR_TIMERX_CTRL_TOUT_POL_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CTRL_TOUT_POL_Pos)) /* Assigment of value for TOUT_POL in the CNT_TMR_TIMERX_CTRL register */
#define CNT_TMR_TIMERX_CTRL_SLP_EN_Pos        _UINT32_(11)                                         /* (CNT_TMR_TIMERX_CTRL) This bit reflects the current state of the timer's Sleep_Enable input signal. 1=Normal operation; 0=Sleep Mode is requested. Position */
#define CNT_TMR_TIMERX_CTRL_SLP_EN_Msk        (_UINT32_(0x1) << CNT_TMR_TIMERX_CTRL_SLP_EN_Pos)    /* (CNT_TMR_TIMERX_CTRL) This bit reflects the current state of the timer's Sleep_Enable input signal. 1=Normal operation; 0=Sleep Mode is requested. Mask */
#define CNT_TMR_TIMERX_CTRL_SLP_EN(value)     (CNT_TMR_TIMERX_CTRL_SLP_EN_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CTRL_SLP_EN_Pos)) /* Assigment of value for SLP_EN in the CNT_TMR_TIMERX_CTRL register */
#define CNT_TMR_TIMERX_CTRL_TMRX_CLK_REQ_Pos  _UINT32_(12)                                         /* (CNT_TMR_TIMERX_CTRL) This bit reflects the current state of the timer's Clock_Required output signal. 1=The main clock is required by this block;\n         0=The main clock is not required by this block. Position */
#define CNT_TMR_TIMERX_CTRL_TMRX_CLK_REQ_Msk  (_UINT32_(0x1) << CNT_TMR_TIMERX_CTRL_TMRX_CLK_REQ_Pos) /* (CNT_TMR_TIMERX_CTRL) This bit reflects the current state of the timer's Clock_Required output signal. 1=The main clock is required by this block;\n         0=The main clock is not required by this block. Mask */
#define CNT_TMR_TIMERX_CTRL_TMRX_CLK_REQ(value) (CNT_TMR_TIMERX_CTRL_TMRX_CLK_REQ_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CTRL_TMRX_CLK_REQ_Pos)) /* Assigment of value for TMRX_CLK_REQ in the CNT_TMR_TIMERX_CTRL register */
#define CNT_TMR_TIMERX_CTRL_Msk               _UINT32_(0x00001FFF)                                 /* (CNT_TMR_TIMERX_CTRL) Register Mask  */


/* -------- CNT_TMR_PRLD : (CNT_TMR Offset: 0x04) (R/W 32) This is the value of the Timer pre-load for the counter.\n       This is used by H/W when the counter is to be restarted automatically; this will become the new value of the counter upon restart. -------- */
#define CNT_TMR_PRLD_RESETVALUE               _UINT32_(0x00)                                       /*  (CNT_TMR_PRLD) This is the value of the Timer pre-load for the counter.\n       This is used by H/W when the counter is to be restarted automatically; this will become the new value of the counter upon restart.  Reset Value */

#define CNT_TMR_PRLD_TCLK_Pos                 _UINT32_(0)                                          /* (CNT_TMR_PRLD) Timer Clock Select. This field determines the clock source for the 16-bit counter in the timer. Position */
#define CNT_TMR_PRLD_TCLK_Msk                 (_UINT32_(0xF) << CNT_TMR_PRLD_TCLK_Pos)             /* (CNT_TMR_PRLD) Timer Clock Select. This field determines the clock source for the 16-bit counter in the timer. Mask */
#define CNT_TMR_PRLD_TCLK(value)              (CNT_TMR_PRLD_TCLK_Msk & (_UINT32_(value) << CNT_TMR_PRLD_TCLK_Pos)) /* Assigment of value for TCLK in the CNT_TMR_PRLD register */
#define CNT_TMR_PRLD_EDGE_Pos                 _UINT32_(5)                                          /* (CNT_TMR_PRLD) This field selects which edge of the TINx input signal affects the timer in Event Mode, One-Shot Mode and Measurement Mode.\n          Event Mode: 11b=No event selected; 10b=Counts rising and falling edges; 01b=Counts rising edges; 00b=Counts falling edges.\n         One-Shot Mode: 11b=Start counting when the Enable bit is set; 10b=Starts counting on a rising or falling edge; 01b=Starts\n       counting on a rising edge; 00b=Starts counting on a falling edge. Measurement Mode: 11b=No event selected; 10b=Measures\n         the time between rising edges and falling edges and the time between falling edges and rising edges; 01b=Measures the\n        time between rising edges; 00b=Measures the time between falling edges. Position */
#define CNT_TMR_PRLD_EDGE_Msk                 (_UINT32_(0x3) << CNT_TMR_PRLD_EDGE_Pos)             /* (CNT_TMR_PRLD) This field selects which edge of the TINx input signal affects the timer in Event Mode, One-Shot Mode and Measurement Mode.\n          Event Mode: 11b=No event selected; 10b=Counts rising and falling edges; 01b=Counts rising edges; 00b=Counts falling edges.\n         One-Shot Mode: 11b=Start counting when the Enable bit is set; 10b=Starts counting on a rising or falling edge; 01b=Starts\n       counting on a rising edge; 00b=Starts counting on a falling edge. Measurement Mode: 11b=No event selected; 10b=Measures\n         the time between rising edges and falling edges and the time between falling edges and rising edges; 01b=Measures the\n        time between rising edges; 00b=Measures the time between falling edges. Mask */
#define CNT_TMR_PRLD_EDGE(value)              (CNT_TMR_PRLD_EDGE_Msk & (_UINT32_(value) << CNT_TMR_PRLD_EDGE_Pos)) /* Assigment of value for EDGE in the CNT_TMR_PRLD register */
#define CNT_TMR_PRLD_EVENT_Pos                _UINT32_(7)                                          /* (CNT_TMR_PRLD) Event Select. This bit is used to select the count source when the timer is operating in Event Mode.\n          1=TINx is count source; 0=Timer x-1 overflow is count source. Position */
#define CNT_TMR_PRLD_EVENT_Msk                (_UINT32_(0x1) << CNT_TMR_PRLD_EVENT_Pos)            /* (CNT_TMR_PRLD) Event Select. This bit is used to select the count source when the timer is operating in Event Mode.\n          1=TINx is count source; 0=Timer x-1 overflow is count source. Mask */
#define CNT_TMR_PRLD_EVENT(value)             (CNT_TMR_PRLD_EVENT_Msk & (_UINT32_(value) << CNT_TMR_PRLD_EVENT_Pos)) /* Assigment of value for EVENT in the CNT_TMR_PRLD register */
#define CNT_TMR_PRLD_FCLK_Pos                 _UINT32_(8)                                          /* (CNT_TMR_PRLD) Timer Clock Select. This field determines the clock source for the TINx noise filter. The available frequencies\n                are the same as for TCLK. Position */
#define CNT_TMR_PRLD_FCLK_Msk                 (_UINT32_(0xF) << CNT_TMR_PRLD_FCLK_Pos)             /* (CNT_TMR_PRLD) Timer Clock Select. This field determines the clock source for the TINx noise filter. The available frequencies\n                are the same as for TCLK. Mask */
#define CNT_TMR_PRLD_FCLK(value)              (CNT_TMR_PRLD_FCLK_Msk & (_UINT32_(value) << CNT_TMR_PRLD_FCLK_Pos)) /* Assigment of value for FCLK in the CNT_TMR_PRLD register */
#define CNT_TMR_PRLD_Msk                      _UINT32_(0x00000FEF)                                 /* (CNT_TMR_PRLD) Register Mask  */


/* -------- CNT_TMR_TIMERX_RLD : (CNT_TMR Offset: 0x08) (R/W 32) This register is used in Timer and One-Shot modes to set the lower limit of the timer. -------- */
#define CNT_TMR_TIMERX_RLD_RESETVALUE         _UINT32_(0xFFFF)                                     /*  (CNT_TMR_TIMERX_RLD) This register is used in Timer and One-Shot modes to set the lower limit of the timer.  Reset Value */

#define CNT_TMR_TIMERX_RLD_TMR_RLD_Pos        _UINT32_(0)                                          /* (CNT_TMR_TIMERX_RLD) The Timer Reload register is used in Timer and One-Shot modes to set the lower limit of the timer.\n                 In Event mode the Timer Reload register sets either the upper or lower limit of the timer depending on if the\n            timer is counting up or down. Valid Timer Reload values are 0001h - FFFFh. If the timer is running, the\n                 reload value will not be updated until the timer overflows or underflows. Programming a 0000h as a preload\n             value is not a valid count value. Using a value of 0000h will cause unpredictable behavior. Position */
#define CNT_TMR_TIMERX_RLD_TMR_RLD_Msk        (_UINT32_(0xFFFF) << CNT_TMR_TIMERX_RLD_TMR_RLD_Pos) /* (CNT_TMR_TIMERX_RLD) The Timer Reload register is used in Timer and One-Shot modes to set the lower limit of the timer.\n                 In Event mode the Timer Reload register sets either the upper or lower limit of the timer depending on if the\n            timer is counting up or down. Valid Timer Reload values are 0001h - FFFFh. If the timer is running, the\n                 reload value will not be updated until the timer overflows or underflows. Programming a 0000h as a preload\n             value is not a valid count value. Using a value of 0000h will cause unpredictable behavior. Mask */
#define CNT_TMR_TIMERX_RLD_TMR_RLD(value)     (CNT_TMR_TIMERX_RLD_TMR_RLD_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_RLD_TMR_RLD_Pos)) /* Assigment of value for TMR_RLD in the CNT_TMR_TIMERX_RLD register */
#define CNT_TMR_TIMERX_RLD_Msk                _UINT32_(0x0000FFFF)                                 /* (CNT_TMR_TIMERX_RLD) Register Mask  */


/* -------- CNT_TMR_TIMERX_CNT : (CNT_TMR Offset: 0x0C) (R/W 32) This register returns the current value of the timer in all modes. -------- */
#define CNT_TMR_TIMERX_CNT_RESETVALUE         _UINT32_(0xFFFF)                                     /*  (CNT_TMR_TIMERX_CNT) This register returns the current value of the timer in all modes.  Reset Value */

#define CNT_TMR_TIMERX_CNT_TMR_CNT_Pos        _UINT32_(0)                                          /* (CNT_TMR_TIMERX_CNT) This is the current value of the timer in all modes. Position */
#define CNT_TMR_TIMERX_CNT_TMR_CNT_Msk        (_UINT32_(0xFFFF) << CNT_TMR_TIMERX_CNT_TMR_CNT_Pos) /* (CNT_TMR_TIMERX_CNT) This is the current value of the timer in all modes. Mask */
#define CNT_TMR_TIMERX_CNT_TMR_CNT(value)     (CNT_TMR_TIMERX_CNT_TMR_CNT_Msk & (_UINT32_(value) << CNT_TMR_TIMERX_CNT_TMR_CNT_Pos)) /* Assigment of value for TMR_CNT in the CNT_TMR_TIMERX_CNT register */
#define CNT_TMR_TIMERX_CNT_Msk                _UINT32_(0x0000FFFF)                                 /* (CNT_TMR_TIMERX_CNT) Register Mask  */


/** \brief CNT_TMR register offsets definitions */
#define CNT_TMR_TIMERX_CTRL_REG_OFST   _UINT32_(0x00)      /* (CNT_TMR_TIMERX_CTRL) This bit reflects the current state of the timer's Clock_Required output signal. Offset */
#define CNT_TMR_PRLD_REG_OFST          _UINT32_(0x04)      /* (CNT_TMR_PRLD) This is the value of the Timer pre-load for the counter.\n       This is used by H/W when the counter is to be restarted automatically; this will become the new value of the counter upon restart. Offset */
#define CNT_TMR_TIMERX_RLD_REG_OFST    _UINT32_(0x08)      /* (CNT_TMR_TIMERX_RLD) This register is used in Timer and One-Shot modes to set the lower limit of the timer. Offset */
#define CNT_TMR_TIMERX_CNT_REG_OFST    _UINT32_(0x0C)      /* (CNT_TMR_TIMERX_CNT) This register returns the current value of the timer in all modes. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief CNT_TMR register API structure */
typedef struct
{  /* This interface is a 16-bit auto-reloading timer/counter. */
  __IO  uint32_t                       CNT_TMR_TIMERX_CTRL; /**< Offset: 0x00 (R/W  32) This bit reflects the current state of the timer's Clock_Required output signal. */
  __IO  uint32_t                       CNT_TMR_PRLD;       /**< Offset: 0x04 (R/W  32) This is the value of the Timer pre-load for the counter.\n       This is used by H/W when the counter is to be restarted automatically; this will become the new value of the counter upon restart. */
  __IO  uint32_t                       CNT_TMR_TIMERX_RLD; /**< Offset: 0x08 (R/W  32) This register is used in Timer and One-Shot modes to set the lower limit of the timer. */
  __IO  uint32_t                       CNT_TMR_TIMERX_CNT; /**< Offset: 0x0C (R/W  32) This register returns the current value of the timer in all modes. */
} cnt_tmr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_CNT_TMR_COMPONENT_H_ */
