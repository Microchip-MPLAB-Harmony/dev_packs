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
#ifndef __XC_MCC_PIC32C_H
#define __XC_MCC_PIC32C_H


#if defined(__32CZ8110CA90100__)
#  include <pic32cz8110ca90100.h>
#elif defined(__32CZ4010CA90144__)
#  include <pic32cz4010ca90144.h>
#elif defined(__32CZ8110CA90100S1__)
#  include <pic32cz8110ca90100s1.h>
#elif defined(__32CZ4010CA90208__)
#  include <pic32cz4010ca90208.h>
#elif defined(__32CZ2051CA90144__)
#  include <pic32cz2051ca90144.h>
#elif defined(__32CZ8110CA90144S1__)
#  include <pic32cz8110ca90144s1.h>
#elif defined(__32CZ4010CA90100S1__)
#  include <pic32cz4010ca90100s1.h>
#elif defined(__32CZ2051CA90208S1__)
#  include <pic32cz2051ca90208s1.h>
#elif defined(__32CZ2051CA90176__)
#  include <pic32cz2051ca90176.h>
#elif defined(__32CZ2051CA90208__)
#  include <pic32cz2051ca90208.h>
#elif defined(__32CZ4010CA90100__)
#  include <pic32cz4010ca90100.h>
#elif defined(__32CZ8110CA90208__)
#  include <pic32cz8110ca90208.h>
#elif defined(__32CZ4010CA90176__)
#  include <pic32cz4010ca90176.h>
#elif defined(__32CZ4010CA90144S1__)
#  include <pic32cz4010ca90144s1.h>
#elif defined(__32CZ2051CA90100S1__)
#  include <pic32cz2051ca90100s1.h>
#elif defined(__32CZ4010CA90208S1__)
#  include <pic32cz4010ca90208s1.h>
#elif defined(__32CZ8110CA90176S1__)
#  include <pic32cz8110ca90176s1.h>
#elif defined(__32CZ8110CA90176__)
#  include <pic32cz8110ca90176.h>
#elif defined(__32CZ2051CA90100__)
#  include <pic32cz2051ca90100.h>
#elif defined(__32CZ4010CA90176S1__)
#  include <pic32cz4010ca90176s1.h>
#elif defined(__32CZ8110CA90208S1__)
#  include <pic32cz8110ca90208s1.h>
#elif defined(__32CZ2051CA90144S1__)
#  include <pic32cz2051ca90144s1.h>
#elif defined(__32CZ8110CA90144__)
#  include <pic32cz8110ca90144.h>
#elif defined(__32CZ2051CA90176S1__)
#  include <pic32cz2051ca90176s1.h>
#else
  /* Try the legacy file */
  #include "../include/xc.h"
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

#endif /* __XC_MCC_PIC32C_H */
