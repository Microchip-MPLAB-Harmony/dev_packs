/**
 * \file
 *
 * \brief Top level header file
 *
 * Copyright (c) 2019 Microchip Technology Inc.
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

#ifndef _SAM_
#define _SAM_

#if   defined(__SAMV71J19__) || defined(__ATSAMV71J19__)
  #include "samv71j19.h"
#elif defined(__SAMV71J20__) || defined(__ATSAMV71J20__)
  #include "samv71j20.h"
#elif defined(__SAMV71J21__) || defined(__ATSAMV71J21__)
  #include "samv71j21.h"
#elif defined(__SAMV71N19__) || defined(__ATSAMV71N19__)
  #include "samv71n19.h"
#elif defined(__SAMV71N20__) || defined(__ATSAMV71N20__)
  #include "samv71n20.h"
#elif defined(__SAMV71N21__) || defined(__ATSAMV71N21__)
  #include "samv71n21.h"
#elif defined(__SAMV71Q19__) || defined(__ATSAMV71Q19__)
  #include "samv71q19.h"
#elif defined(__SAMV71Q20__) || defined(__ATSAMV71Q20__)
  #include "samv71q20.h"
#elif defined(__SAMV71Q21__) || defined(__ATSAMV71Q21__)
  #include "samv71q21.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

