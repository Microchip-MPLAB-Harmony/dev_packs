/**
 * \file
 *
 * \brief Top level header file
 *
 * Copyright (c) 2020 Microchip Technology Inc.
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

#if   defined(__SAMA5D26__) || defined(__ATSAMA5D26__)
  #include "sama5d26.h"
#elif defined(__SAMA5D27CD1G__) || defined(__ATSAMA5D27CD1G__)
  #include "sama5d27cd1g.h"
#elif defined(__SAMA5D27CLD2G__) || defined(__ATSAMA5D27CLD2G__)
  #include "sama5d27cld2g.h"
#elif defined(__SAMA5D24__) || defined(__ATSAMA5D24__)
  #include "sama5d24.h"
#elif defined(__SAMA5D27__) || defined(__ATSAMA5D27__)
  #include "sama5d27.h"
#elif defined(__SAMA5D21__) || defined(__ATSAMA5D21__)
  #include "sama5d21.h"
#elif defined(__SAMA5D28CLD1G__) || defined(__ATSAMA5D28CLD1G__)
  #include "sama5d28cld1g.h"
#elif defined(__SAMA5D28CLD2G__) || defined(__ATSAMA5D28CLD2G__)
  #include "sama5d28cld2g.h"
#elif defined(__SAMA5D225CD1M__) || defined(__ATSAMA5D225CD1M__)
  #include "sama5d225cd1m.h"
#elif defined(__SAMA5D28CD1G__) || defined(__ATSAMA5D28CD1G__)
  #include "sama5d28cd1g.h"
#elif defined(__SAMA5D23__) || defined(__ATSAMA5D23__)
  #include "sama5d23.h"
#elif defined(__SAMA5D27CD5M__) || defined(__ATSAMA5D27CD5M__)
  #include "sama5d27cd5m.h"
#elif defined(__SAMA5D27CLD1G__) || defined(__ATSAMA5D27CLD1G__)
  #include "sama5d27cld1g.h"
#elif defined(__SAMA5D22__) || defined(__ATSAMA5D22__)
  #include "sama5d22.h"
#elif defined(__SAMA5D28__) || defined(__ATSAMA5D28__)
  #include "sama5d28.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

