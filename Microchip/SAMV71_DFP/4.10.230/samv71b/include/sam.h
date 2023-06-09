/**
 * \file
 *
 * \brief Top level header file
 *
 * Copyright (c) 2023 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

#ifndef _SAM_H_
#define _SAM_H_

#if   defined(__SAMV71J19B__) || defined(__ATSAMV71J19B__)
  #include "samv71j19b.h"
#elif defined(__SAMV71J20B__) || defined(__ATSAMV71J20B__)
  #include "samv71j20b.h"
#elif defined(__SAMV71J21B__) || defined(__ATSAMV71J21B__)
  #include "samv71j21b.h"
#elif defined(__SAMV71N19B__) || defined(__ATSAMV71N19B__)
  #include "samv71n19b.h"
#elif defined(__SAMV71N20B__) || defined(__ATSAMV71N20B__)
  #include "samv71n20b.h"
#elif defined(__SAMV71N21B__) || defined(__ATSAMV71N21B__)
  #include "samv71n21b.h"
#elif defined(__SAMV71Q19B__) || defined(__ATSAMV71Q19B__)
  #include "samv71q19b.h"
#elif defined(__SAMV71Q20B__) || defined(__ATSAMV71Q20B__)
  #include "samv71q20b.h"
#elif defined(__SAMV71Q21B__) || defined(__ATSAMV71Q21B__)
  #include "samv71q21b.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_H_ */

