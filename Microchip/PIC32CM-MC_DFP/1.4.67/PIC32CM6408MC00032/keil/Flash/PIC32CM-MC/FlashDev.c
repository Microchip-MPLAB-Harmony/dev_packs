/*------------------------------------------------------------------------------
 * Copyright (c) 2020 Arm Limited (or its affiliates). All rights reserved.
 *------------------------------------------------------------------------------
 * Name:    FlashDev.c
 * Purpose: Flash Device Description for PIC32CM-MC
 * Rev.:    V1.0.0
 *----------------------------------------------------------------------------*/

#include "..\FlashOS.h"        /* FlashOS Structures */

extern struct FlashDevice const FlashDevice;

#ifdef FLASH_MEM

#ifdef PIC32CM_MC_32
  struct FlashDevice const FlashDevice  =  {
    FLASH_DRV_VERS,                /* Driver Version, do not modify! */
    "PIC32CM-MC 32kB Flash",       /* Device Name */
    ONCHIP,                        /* Device Type */
    0x00000000,                    /* Device Start Address */
    0x00008000,                    /* Device Size in Bytes (64kB) */
    1024,                          /* Programming Page Size (16 * 64, 64 is real page size) */
    0,                             /* Reserved, must be 0 */
    0xFF,                          /* Initial Content of Erased Memory */
    100,                           /* Program Page Timeout 100 mSec */
    1000,                          /* Erase Sector Timeout 1000 mSec */

    /* Specify Size and Address of Sectors */
    0x0800, 0x000000,              /* Sector Size 2kB (16 regions a 32 pages) */
    SECTOR_END
  };
#endif

#ifdef PIC32CM_MC_64
  struct FlashDevice const FlashDevice  =  {
    FLASH_DRV_VERS,                /* Driver Version, do not modify! */
    "PIC32CM-MC 64kB Flash",       /* Device Name */
    ONCHIP,                        /* Device Type */
    0x00000000,                    /* Device Start Address */
    0x00010000,                    /* Device Size in Bytes (64kB) */
    1024,                          /* Programming Page Size (16 * 64, 64 is real page size) */
    0,                             /* Reserved, must be 0 */
    0xFF,                          /* Initial Content of Erased Memory */
    100,                           /* Program Page Timeout 100 mSec */
    1000,                          /* Erase Sector Timeout 1000 mSec */

    /* Specify Size and Address of Sectors */
    0x1000, 0x000000,              /* Sector Size 4kB (16 regions a 64 pages) */
    SECTOR_END
  };
#endif

#ifdef PIC32CM_MC_128
  struct FlashDevice const FlashDevice  =  {
    FLASH_DRV_VERS,                /* Driver Version, do not modify! */
    "PIC32CM-MC 128kB Flash",      /* Device Name */
    ONCHIP,                        /* Device Type */
    0x00000000,                    /* Device Start Address */
    0x00020000,                    /* Device Size in Bytes (128kB) */
    1024,                          /* Programming Page Size (16 * 64, 64 is real page size) */
    0,                             /* Reserved, must be 0 */
    0xFF,                          /* Initial Content of Erased Memory */
    100,                           /* Program Page Timeout 100 mSec */
    1000,                          /* Erase Sector Timeout 1000 mSec */

    /* Specify Size and Address of Sectors */
    0x2000, 0x000000,              /* Sector Size 8kB (16 regions a 128 pages) */
    SECTOR_END
  };
#endif

#endif /* FLASH_MEM */


#ifdef FLASH_DATA

#ifdef PIC32CM_MC_32
  struct FlashDevice const FlashDevice  =  {
    FLASH_DRV_VERS,                /* Driver Version, do not modify! */
    "PIC32CM-MC 1kB Data Flash",   /* Device Name */
    ONCHIP,                        /* Device Type */
    0x00400000,                    /* Device Start Address */
    0x00000400,                    /* Device Size in Bytes (1kB) */
    64,                            /* Programming Page Size */
    0,                             /* Reserved, must be 0 */
    0xFF,                          /* Initial Content of Erased Memory */
    100,                           /* Program Page Timeout 100 mSec */
    1000,                          /* Erase Sector Timeout 1000 mSec */

    /* Specify Size and Address of Sectors */
   0x100, 0x000000,                /* Sector Size 256B (1 ROW = 4 * page a 64 Byte) */
    SECTOR_END
  };
#endif


#ifdef PIC32CM_MC_64
  struct FlashDevice const FlashDevice  =  {
    FLASH_DRV_VERS,                /* Driver Version, do not modify! */
    "PIC32CM-MC 2kB Data Flash",   /* Device Name */
    ONCHIP,                        /* Device Type */
    0x00400000,                    /* Device Start Address */
    0x00000800,                    /* Device Size in Bytes (2kB) */
    64,                            /* Programming Page Size */
    0,                             /* Reserved, must be 0 */
    0xFF,                          /* Initial Content of Erased Memory */
    100,                           /* Program Page Timeout 100 mSec */
    1000,                          /* Erase Sector Timeout 1000 mSec */

    /* Specify Size and Address of Sectors */
    0x100, 0x000000,               /* Sector Size 256B (1 ROW = 4 * page a 64 Byte) */
    SECTOR_END
  };
#endif

#ifdef PIC32CM_MC_128
  struct FlashDevice const FlashDevice  =  {
    FLASH_DRV_VERS,                /* Driver Version, do not modify! */
    "PIC32CM-MC 4kB Data Flash",   /* Device Name */
    ONCHIP,                        /* Device Type */
    0x00400000,                    /* Device Start Address */
    0x00001000,                    /* Device Size in Bytes (4kB) */
    64,                            /* Programming Page Size */
    0,                             /* Reserved, must be 0 */
    0xFF,                          /* Initial Content of Erased Memory */
    100,                           /* Program Page Timeout 100 mSec */
    1000,                          /* Erase Sector Timeout 1000 mSec */

    /* Specify Size and Address of Sectors */
    0x100, 0x000000,               /* Sector Size 256B (1 ROW = 4 * page a 64 Byte) */
    SECTOR_END
  };
#endif

#endif /* FLASH_DATA */

