/*-------------------------------------------------------------------------
 * XC processor header for PIC32C devices
 *
 * Copyright (c) 2017, Microchip Technology Inc. and its subsidiaries ("Microchip")
 * All rights reserved.
 * 
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above 
 *         copyright notice, this list of conditions and the following 
 *         disclaimer in the documentation and/or other materials provided 
 *         with the distribution.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written 
 *         permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#pragma once
#ifndef __XC_PIC32C_H
#define __XC_PIC32C_H

#if defined(__32CZ8110CA90100__)
#  include <pic32c.h>
#elif defined(__32CZ4010CA90144__)
#  include <pic32c.h>
#elif defined(__32CZ8110CA90100S1__)
#  include <pic32c.h>
#elif defined(__32CZ4010CA90208__)
#  include <pic32c.h>
#elif defined(__32CZ2051CA90144__)
#  include <pic32c.h>
#elif defined(__32CZ8110CA90144S1__)
#  include <pic32c.h>
#elif defined(__32CZ4010CA90100S1__)
#  include <pic32c.h>
#elif defined(__32CZ2051CA90208S1__)
#  include <pic32c.h>
#elif defined(__32CZ2051CA90176__)
#  include <pic32c.h>
#elif defined(__32CZ2051CA90208__)
#  include <pic32c.h>
#elif defined(__32CZ4010CA90100__)
#  include <pic32c.h>
#elif defined(__32CZ8110CA90208__)
#  include <pic32c.h>
#elif defined(__32CZ4010CA90176__)
#  include <pic32c.h>
#elif defined(__32CZ4010CA90144S1__)
#  include <pic32c.h>
#elif defined(__32CZ2051CA90100S1__)
#  include <pic32c.h>
#elif defined(__32CZ4010CA90208S1__)
#  include <pic32c.h>
#elif defined(__32CZ8110CA90176S1__)
#  include <pic32c.h>
#elif defined(__32CZ8110CA90176__)
#  include <pic32c.h>
#elif defined(__32CZ2051CA90100__)
#  include <pic32c.h>
#elif defined(__32CZ4010CA90176S1__)
#  include <pic32c.h>
#elif defined(__32CZ8110CA90208S1__)
#  include <pic32c.h>
#elif defined(__32CZ2051CA90144S1__)
#  include <pic32c.h>
#elif defined(__32CZ8110CA90144__)
#  include <pic32c.h>
#elif defined(__32CZ2051CA90176S1__)
#  include <pic32c.h>
#else
#  error Unknown processor for selected DFP!
#endif

#if defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS__)

#if defined(__XC32_VERSION) && (__XC32_VERSION >= 2490)
#include <pic32c_builtins.h>
#endif

#ifndef _nop
#define _nop() __builtin_nop()
#endif /* _nop */

#ifndef Nop
/* Consider using _nop rather than Nop */
#define Nop()  _nop()
#endif /* Nop */

#endif /* defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS__) */

/*** Begin DAL (debug access level) support definitions */ 
/* To enable programming of the DAL (debug access level) for all cores,
   use the XC_SET_DAL_xx macro at file scope in a single source file
   within your project, where each 'x' is a value indicating the level for
   each core in turn.

   For single-core devices, the default level of '2' is implicit. For multi-core
   devices, the level of '2' can be explicitly specified for each core. For 
   example,

   XC_SET_DAL_1;
   
   will set the DAL to 1 for the single core, and

   XC_SET_DAL_20;

   will set the DAL to 2 for core 0, and 0 for core 1. 

   Refer to your device family datasheet for information about the debug access level
   feature.
*/
#include <stdint.h>
#if 0
#define __XC_DAL_ENABLED__ 0
#elif defined(__32CZ8110CA90100__)
#define __XC_DAL_ENABLED__ 1
#define XC_SET_DAL_00 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x0
#define XC_SET_DAL_01 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x4
#define XC_SET_DAL_02 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x8
#define XC_SET_DAL_10 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x1
#define XC_SET_DAL_11 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x5
#define XC_SET_DAL_12 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x9
#define XC_SET_DAL_20 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x2
#define XC_SET_DAL_21 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x6
#define XC_SET_DAL_22 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0xa
#elif defined(__32CZ4010CA90144__)
#define __XC_DAL_ENABLED__ 1
#define XC_SET_DAL_00 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x0
#define XC_SET_DAL_01 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x4
#define XC_SET_DAL_02 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x8
#define XC_SET_DAL_10 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x1
#define XC_SET_DAL_11 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x5
#define XC_SET_DAL_12 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x9
#define XC_SET_DAL_20 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x2
#define XC_SET_DAL_21 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x6
#define XC_SET_DAL_22 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0xa
#elif defined(__32CZ4010CA90208__)
#define __XC_DAL_ENABLED__ 1
#define XC_SET_DAL_00 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x0
#define XC_SET_DAL_01 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x4
#define XC_SET_DAL_02 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x8
#define XC_SET_DAL_10 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x1
#define XC_SET_DAL_11 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x5
#define XC_SET_DAL_12 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x9
#define XC_SET_DAL_20 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x2
#define XC_SET_DAL_21 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x6
#define XC_SET_DAL_22 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0xa
#elif defined(__32CZ2051CA90144__)
#define __XC_DAL_ENABLED__ 1
#define XC_SET_DAL_00 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x0
#define XC_SET_DAL_01 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x4
#define XC_SET_DAL_02 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x8
#define XC_SET_DAL_10 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x1
#define XC_SET_DAL_11 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x5
#define XC_SET_DAL_12 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x9
#define XC_SET_DAL_20 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x2
#define XC_SET_DAL_21 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x6
#define XC_SET_DAL_22 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0xa
#elif defined(__32CZ2051CA90176__)
#define __XC_DAL_ENABLED__ 1
#define XC_SET_DAL_00 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x0
#define XC_SET_DAL_01 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x4
#define XC_SET_DAL_02 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x8
#define XC_SET_DAL_10 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x1
#define XC_SET_DAL_11 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x5
#define XC_SET_DAL_12 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x9
#define XC_SET_DAL_20 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x2
#define XC_SET_DAL_21 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x6
#define XC_SET_DAL_22 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0xa
#elif defined(__32CZ2051CA90208__)
#define __XC_DAL_ENABLED__ 1
#define XC_SET_DAL_00 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x0
#define XC_SET_DAL_01 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x4
#define XC_SET_DAL_02 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x8
#define XC_SET_DAL_10 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x1
#define XC_SET_DAL_11 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x5
#define XC_SET_DAL_12 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x9
#define XC_SET_DAL_20 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x2
#define XC_SET_DAL_21 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x6
#define XC_SET_DAL_22 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0xa
#elif defined(__32CZ4010CA90100__)
#define __XC_DAL_ENABLED__ 1
#define XC_SET_DAL_00 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x0
#define XC_SET_DAL_01 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x4
#define XC_SET_DAL_02 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x8
#define XC_SET_DAL_10 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x1
#define XC_SET_DAL_11 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x5
#define XC_SET_DAL_12 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x9
#define XC_SET_DAL_20 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x2
#define XC_SET_DAL_21 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x6
#define XC_SET_DAL_22 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0xa
#elif defined(__32CZ8110CA90208__)
#define __XC_DAL_ENABLED__ 1
#define XC_SET_DAL_00 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x0
#define XC_SET_DAL_01 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x4
#define XC_SET_DAL_02 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x8
#define XC_SET_DAL_10 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x1
#define XC_SET_DAL_11 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x5
#define XC_SET_DAL_12 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x9
#define XC_SET_DAL_20 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x2
#define XC_SET_DAL_21 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x6
#define XC_SET_DAL_22 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0xa
#elif defined(__32CZ4010CA90176__)
#define __XC_DAL_ENABLED__ 1
#define XC_SET_DAL_00 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x0
#define XC_SET_DAL_01 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x4
#define XC_SET_DAL_02 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x8
#define XC_SET_DAL_10 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x1
#define XC_SET_DAL_11 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x5
#define XC_SET_DAL_12 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x9
#define XC_SET_DAL_20 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x2
#define XC_SET_DAL_21 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x6
#define XC_SET_DAL_22 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0xa
#elif defined(__32CZ8110CA90176__)
#define __XC_DAL_ENABLED__ 1
#define XC_SET_DAL_00 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x0
#define XC_SET_DAL_01 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x4
#define XC_SET_DAL_02 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x8
#define XC_SET_DAL_10 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x1
#define XC_SET_DAL_11 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x5
#define XC_SET_DAL_12 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x9
#define XC_SET_DAL_20 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x2
#define XC_SET_DAL_21 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x6
#define XC_SET_DAL_22 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0xa
#elif defined(__32CZ2051CA90100__)
#define __XC_DAL_ENABLED__ 1
#define XC_SET_DAL_00 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x0
#define XC_SET_DAL_01 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x4
#define XC_SET_DAL_02 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x8
#define XC_SET_DAL_10 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x1
#define XC_SET_DAL_11 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x5
#define XC_SET_DAL_12 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x9
#define XC_SET_DAL_20 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x2
#define XC_SET_DAL_21 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x6
#define XC_SET_DAL_22 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0xa
#elif defined(__32CZ8110CA90144__)
#define __XC_DAL_ENABLED__ 1
#define XC_SET_DAL_00 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x0
#define XC_SET_DAL_01 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x4
#define XC_SET_DAL_02 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x8
#define XC_SET_DAL_10 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x1
#define XC_SET_DAL_11 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x5
#define XC_SET_DAL_12 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x9
#define XC_SET_DAL_20 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x2
#define XC_SET_DAL_21 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0x6
#define XC_SET_DAL_22 const uint32_t __attribute__((keep, address(1140858884))) __XC_DAL__ = 0xa
#endif
/*** End DAL support definitions */

#endif /* __XC_PIC32C_H */
