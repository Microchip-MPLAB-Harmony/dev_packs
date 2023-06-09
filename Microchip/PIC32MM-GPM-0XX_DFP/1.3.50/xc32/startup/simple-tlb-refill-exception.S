/*********************************************************************
 *
 *                  Simple TLB-Refill Exception
 *
 *********************************************************************
 * Filename:        simple-tlb-refill-exception.S
 *
 * Processor:       PIC32
 *
 * Compiler:        MPLAB XC32 v1.00
 *                  MPLAB X IDE
 * Company:         Microchip Technology Inc.
 *
 * Software License Agreement
 *
 * Copyright (c) 2014, Microchip Technology Inc. and its subsidiaries ("Microchip")
 * All rights reserved.
 * 
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1.      Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 * 2.      Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * Publication is not required when this file is used in an embedded 
 * application.
 *
 * 3.      Microchip's name may not be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ********************************************************************/
 
/* Zero register:  Always returns 0 */
#define zero               $0

/* Assembler temporary register:  Reserved for use by the assembler */
#define at_reg             $1
#define AT_reg             $1

/* Return value registers:  Value returned by subroutine */
#define v0                 $2
#define v1                 $3

/* Argument registers:  First few parameters for a subroutine */
#define a0                 $4
#define a1                 $5
#define a2                 $6
#define a3                 $7

/* Subroutine register temporaries:  Registers that subroutines can use
 * without saving
 */
#define t0                 $8
#define t1                 $9
#define t2                 $10
#define t3                 $11
#define t4                 $12
#define t5                 $13
#define t6                 $14
#define t7                 $15
#define t8                 $24
#define t9                 $25

/* Subroutine register variables:  A subroutine that writes one of these
 * must save the old value and restore it before it exists, so the calling
 * routine sees the values preserved
 */
#define s0                 $16
#define s1                 $17
#define s2                 $18
#define s3                 $19
#define s4                 $20
#define s5                 $21
#define s6                 $22
#define s7                 $23

/* Ninth subroutine register variable:  Can either be used as above or
 * as the frame pointer for functions that require one
 */
#define s8                 $30
#define fp                 $30

/* Interrupt/Trap handler registers:  Reserved for use by interrupt/trap
 * handler.  May change under your feet!
 */
#define k0                 $26
#define k1                 $27

/* Global pointer register:  Gives easy access to (some) `static' or `extern'
 * variables
 */
#define gp                 $28

/* Stack pointer register:  Stack pointer */
#define sp                 $29

/* Return address register:  Contains the return address for the subroutine */
#define ra                 $31

/* these are from the 32MXGENERIC device header */
BMXDKPBA = 0xBF882010
BMXDUDBA = 0xBF882020
BMXDUPBA = 0xBF882030

#include <cp0defs.h>

#ifdef __LIBBUILD__
   .file 1 "simple-tlb-refill-exception.S"
   .loc 1 0
#endif
  ###################
  # Default Simple TLB-Refill handler
  ###################

  .weak __exception_handler_break

  .section .text.simple_tlb_refill_context, code
  .set noreorder
  .set noat
  .set nomips16
  .globl _simple_tlb_refill_exception_context
  .ent _simple_tlb_refill_exception_context

_simple_tlb_refill_exception_context:

  # Save off the non-callee saved registers that may get mucked with
   addiu sp, sp, -88
   sw $1,  4(sp)
   sw v0,  8(sp)
   sw v1, 12(sp)
   sw a0, 16(sp)
   sw a1, 20(sp)
   sw a2, 24(sp)
   sw a3, 28(sp)
   sw t0, 32(sp)
   sw t1, 36(sp)
   sw t2, 40(sp)
   sw t3, 44(sp)
   sw t4, 48(sp)
   sw t5, 52(sp)
   sw t6, 56(sp)
   sw t7, 60(sp)
   sw t8, 64(sp)
   sw t9, 68(sp)
   sw ra, 72(sp)
   mflo t0
   sw t0, 76(sp)
   mfhi t0
   sw t0, 80(sp)

  # Pass Cause and Status to the handler function
0: mfc0 a0, _CP0_CAUSE
   mfc0 a1, _CP0_STATUS
#if defined(__PIC__)   
   lw   t9, %call16(_simple_tlb_refill_exception_handler)(gp)
   jalr t9
   nop
#else
   la   v0, _simple_tlb_refill_exception_handler
   jalr v0
   nop
#endif

   lw t0, 80(sp)
   mthi t0
   lw t0, 76(sp)
   mtlo t0

   lw $1,  4(sp)
   lw v0,  8(sp)
   lw v1, 12(sp)
   lw a0, 16(sp)
   lw a1, 20(sp)
   lw a2, 24(sp)
   lw a3, 28(sp)
   lw t0, 32(sp)
   lw t1, 36(sp)
   lw t2, 40(sp)
   lw t3, 44(sp)
   lw t4, 48(sp)
   lw t5, 52(sp)
   lw t6, 56(sp)
   lw t7, 60(sp)
   lw t8, 64(sp)
   lw t9, 68(sp)
   lw ra, 72(sp)
   addiu sp, sp, 88

   ehb  # do we need this? Execution hazard barriers?
   eret

  .end _simple_tlb_refill_exception_context

