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

#ifndef _SAM_
#define _SAM_

#if   defined(__SAM9X70__) || defined(__SAM9X70__)
  #include "sam9x70.h"
#elif defined(__SAM9X72__) || defined(__SAM9X72__)
  #include "sam9x72.h"
#elif defined(__SAM9X75__) || defined(__SAM9X75__)
  #include "sam9x75.h"
#elif defined(__SAM9X75D1G__) || defined(__SAM9X75D1G__)
  #include "sam9x75d1g.h"
#elif defined(__SAM9X75D2G__) || defined(__SAM9X75D2G__)
  #include "sam9x75d2g.h"
#elif defined(__SAM9X75D5M__) || defined(__SAM9X75D5M__)
  #include "sam9x75d5m.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

