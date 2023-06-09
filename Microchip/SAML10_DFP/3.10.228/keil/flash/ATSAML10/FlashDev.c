/* -----------------------------------------------------------------------------
 * Copyright (c) 2017 ARM Ltd.
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software. Permission is granted to anyone to use this
 * software for any purpose, including commercial applications, and to alter
 * it and redistribute it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software in
 *    a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 *
 *
 * $Date:        20. September 2017
 * $Revision:    V1.0.0
 *
 * Project:      Flash Device Description for ATSAML10
 * --------------------------------------------------------------------------- */

#include "..\FlashOS.h"                               /* FlashOS Structures */

extern struct FlashDevice const FlashDevice;

/* ---- SAML10 --------------------------------------------------------*/
#ifdef FLASH_MEM

#ifdef ATSAML10_16
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              /* Driver Version, do not modify! */
   "ATSAML10 16kB Flash",       /* Device Name */
   ONCHIP,                      /* Device Type */
   0x00000000,                  /* Device Start Address */
   0x00004000,                  /* Device Size in Bytes (16kB) */
   1024,                        /* Programming Page Size (16 * 64, 64 is real page size */
   0,                           /* Reserved, must be 0 */
   0xFF,                        /* Initial Content of Erased Memory */
   {0, 0, 0},                   /* padding bytes */   
   100,                         /* Program Page Timeout 100 mSec */
   1000,                        /* Erase Sector Timeout 1000 mSec */

   /* Specify Size and Address of Sectors */
   {
     {0x100, 0x000000},         /* Sector Size 256B (1 row = 4 * page a 64 Byte) */
     {SECTOR_END     }
   }
};
#endif

#ifdef ATSAML10_32
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              /* Driver Version, do not modify! */
   "ATSAML10 32kB Flash",       /* Device Name */
   ONCHIP,                      /* Device Type */
   0x00000000,                  /* Device Start Address */
   0x00008000,                  /* Device Size in Bytes (32B) */
   1024,                        /* Programming Page Size (16 * 64, 64 is real page size */
   0,                           /* Reserved, must be 0 */
   0xFF,                        /* Initial Content of Erased Memory */
   {0, 0, 0},                   /* padding bytes */   
   100,                         /* Program Page Timeout 100 mSec */
   1000,                        /* Erase Sector Timeout 1000 mSec */

   /* Specify Size and Address of Sectors */
   {
     {0x100, 0x000000},         /* Sector Size 256B (1 row = 4 * page a 64 Byte) */
     {SECTOR_END     }
   }
};
#endif

#ifdef ATSAML10_64
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              /* Driver Version, do not modify! */
   "ATSAML10 64kB Flash",       /* Device Name */
   ONCHIP,                      /* Device Type */
   0x00000000,                  /* Device Start Address */
   0x00010000,                  /* Device Size in Bytes (64kB) */
   1024,                        /* Programming Page Size (16 * 64, 64 is real page size */
   0,                           /* Reserved, must be 0 */
   0xFF,                        /* Initial Content of Erased Memory */
   {0, 0, 0},                   /* padding bytes */   
   100,                         /* Program Page Timeout 100 mSec */
   1000,                        /* Erase Sector Timeout 1000 mSec */

   /* Specify Size and Address of Sectors */
   {
     {0x100, 0x000000},         /* Sector Size 256B (1 row = 4 * page a 64 Byte) */
     {SECTOR_END     }
   }
};
#endif

#endif /* FLASH_MEM */


#ifdef FLASH_EEPROM

struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              /* Driver Version, do not modify! */
   "ATSAML10 2kB Data EEPROM",  /* Device Name */
   ONCHIP,                      /* Device Type */
   0x00400000,                  /* Device Start Address */
   0x00000800,                  /* Device Size in Bytes (2kB) */
   64,                          /* Programming Page Size */
   0,                           /* Reserved, must be 0 */
   0xFF,                        /* Initial Content of Erased Memory */
   {0, 0, 0},                   /* padding bytes */   
   100,                         /* Program Page Timeout 100 mSec */
   1000,                        /* Erase Sector Timeout 1000 mSec */

   /* Specify Size and Address of Sectors */
   {
     {0x100, 0x000000},         /* Sector Size 256B (1 row = 4 * page a 64 Byte) */
     {SECTOR_END     }
   }
};

#endif /* FLASH_EEPROM */

#ifdef FLASH_UROW

struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              /* Driver Version, do not modify! */
   "ATSAML10 UROW",             /* Device Name */
   ONCHIP,                      /* Device Type */
   0x00804000,                  /* Device Start Address */
   0x00000100,                  /* Device Size in Bytes (256B) */
   8,                           /* Programming Page Size (we only need 2 words) */
   0,                           /* Reserved, must be 0 */
   0xFF,                        /* Initial Content of Erased Memory */
   {0, 0, 0},                   /* padding bytes */   
   100,                         /* Program Page Timeout 100 mSec */
   1000,                        /* Erase Sector Timeout 1000 mSec */

   /* Specify Size and Address of Sectors */
   {
     {0x100, 0x000000},         /* Sector Size 256B (1 row = 4 * page a 64 Byte) */
     {SECTOR_END     }
   }
};

#endif /* FLASH_UROW */
