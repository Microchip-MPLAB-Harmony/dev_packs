/**
 * \file
 *
 * \brief Top level header file
 *
 * Copyright (c) 2021 Microchip Technology Inc.
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

#if   defined(__SAMR35J17B__) || defined(__ATSAMR35J17B__)
  #include "samr35j17b.h"
#elif defined(__SAMR35J18B__) || defined(__ATSAMR35J18B__)
  #include "samr35j18b.h"
#elif defined(__SAMR35J16B__) || defined(__ATSAMR35J16B__)
  #include "samr35j16b.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

