/* -----------------------------------------------------------------------------
 * Copyright (c) 2015 ARM Ltd.
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
 * $Date:        20. January 2015
 * $Revision:    V1.00
 *
 * Project:      Flash Programming Functions for ATSAME7x
 * --------------------------------------------------------------------------- */

/* History:
 *  Version 1.00
 *    Initial release
 */

#include "..\FlashOS.H"                          /* FlashOS Structures */

typedef volatile unsigned long    vu32;
typedef          unsigned long     u32;
typedef          unsigned char     u8;

/* Power Management Controller register */
typedef struct {
  vu32 PMC_SCER;
  vu32 PMC_SCDR;
  vu32 PMC_SCSR;
  vu32 Reserved1[1];
  vu32 PMC_PCER;
  vu32 PMC_PCDR;
  vu32 PMC_PCSR;
  vu32 Reserved2[1];
  vu32 CKGR_MOR;
  vu32 CKGR_MCFR;
  vu32 CKGR_PLLAR;
  vu32 CKGR_PLLBR;
  vu32 PMC_MCKR;
  vu32 Reserved3[1];
  vu32 PMC_USB;
  vu32 Reserved4[1];
  vu32 PMC_PCK[3];
  vu32 Reserved5[5];
  vu32 PMC_IER;
  vu32 PMC_IDR;
  vu32 PMC_SR;
  vu32 PMC_IMR;
  vu32 PMC_FSMR;
  vu32 PMC_FSPR;
  vu32 PMC_FOCR;
  vu32 Reserved6[26];
  vu32 PMC_WPMR;
  vu32 PMC_WPSR;
} PMC_TypeDef;

/* PMC clock generator main oscillatoer register definitions */
#define PMC_CKGR_MOSCXTEN     (0x01   <<  0)     /* MOSCXTEN: Main Crystal Oscillator Enable             */
#define PMC_CKGR_MOSCRCEN     (0x01   <<  3)     /* MOSCRCEN: Main On-Chip RC Oscillator Enable          */
#define PMC_CKGR_MOSCRCF      (0x07   <<  4)     /* MOSCRCF:  Main On-Chip RC Oscillator Freq. Selection */
#define PMC_CKGR_MOSCRCF_12   (0x02   <<  4)     /* MOSCRCF:  The Fast RC Oscillator Freq. is at 12 MHz  */
#define PMC_CKGR_MOSCXTST     (0x0F   <<  8)     /* MOSCXTST: Main Crystal Oscillator Start-up Time (15) */
#define PMC_CKGR_CKGR_KEY     (0x37   << 16)     /* KEY: Password                                        */
#define PMC_CKGR_MOSCSEL      (0x01   << 24)     /* MOSCSEL: Main Oscillator Selection                   */

/* PMC master clock register definitions */
#define PMC_MCKR_CSS          (0x03   <<  0)     /* CSS: Master Clock Source Selection */
#define PMC_MCKR_CSS_MAIN_CLK (0x01   <<  0)     /* Main Clock is selected             */
#define PMC_MCKR_PRES         (0x07   <<  4)     /* PRES: Processor Clock Prescaler    */
#define PMC_MCKR_PRES_1       (0x01   <<  4)     /* PRES: Processor Clock Prescaler    */

/* PMC status register definitions */
#define PMC_SR_MOSCXTS        (0x01   <<  0)     /* MOSCXTS:  Main XTAL Oscillator Status       */
#define PMC_SR_MCKRDY         (0x01   <<  3)     /* MCKRDY:   Master Clock  Status              */
#define PMC_SR_MOSCSELS       (0x01   << 16)     /* MOSCSELS: Main Oscillator Selection Status  */
#define PMC_SR_MOSCRCS        (0x01   << 17)     /* MOSCRCS:  Main On-Chip RC Oscillator Status */

/* PMC write protection register definitions */
#define PMC_WPMR_WPEN         (0x01     <<  0)   /* WPEN: Write Protect Enable */
#define PMC_WPMR_WPKEY        (0x504D43 <<  8)   /* WPKEY: Write Protect KEY   */

/* Independent WATCHDOG register */
typedef struct {
  vu32 CR;
  vu32 MR;
  vu32 SR;
} WDT_TypeDef;

/* WDT mode register definitions */
#define WDT_MR_WDDIS          (0x01   << 15)     /* WDDIS: Watchdog Disable */

/* Flash Registers register */
typedef struct {
  vu32 FMR;
  vu32 FCR;
  vu32 FSR;
  vu32 FRR;
  vu32 Reserved0[53];
  vu32 WPMR;
} EEFC_TypeDef;

/* EEFC command register definitions */
#define EEFC_FCR_FKEY         (0x5A   << 24)     /* Flash Writing Protection Key */
#define EEFC_FCR_FARG         (0xFFFF <<  8)     /* Flash Command Argument bits  */
#define EEFC_FCR_FCMD         (0xFF   <<  0)     /* Flash Command bits           */

/* EEFC command definitions */
#define EEFC_FCR_FCMD_GETD     0x00              /* Get Flash Descriptor                */
#define EEFC_FCR_FCMD_WP       0x01              /* Write Page                          */
#define EEFC_FCR_FCMD_WPL      0x02              /* Write Page and Lock                 */
#define EEFC_FCR_FCMD_EWP      0x03              /* Erase Page and Write Page           */
#define EEFC_FCR_FCMD_EWPL     0x04              /* Erase Page and Write Page then Lock */
#define EEFC_FCR_FCMD_EA       0x05              /* Erase All                           */
#define EEFC_FCR_FCMD_EPL      0x06              /* Erase Plane                         */
#define EEFC_FCR_FCMD_EPA      0x07              /* Erase Pages                         */
#define EEFC_FCR_FCMD_SLB      0x08              /* Set Lock Bit                        */
#define EEFC_FCR_FCMD_CLB      0x09              /* Clear Lock Bit                      */
#define EEFC_FCR_FCMD_GLB      0x0A              /* Get Lock Bit                        */
#define EEFC_FCR_FCMD_SGPB     0x0B              /* Set GPNVM Bit                       */
#define EEFC_FCR_FCMD_CGPB     0x0C              /* Clear GPNVM Bit                     */
#define EEFC_FCR_FCMD_GGPB     0x0D              /* Get GPNVM Bit                       */
#define EEFC_FCR_FCMD_STUI     0x0E              /* Start Read Unique Identifier        */
#define EEFC_FCR_FCMD_SPUI     0x0F              /* Stop Read Unique Identifier         */

/* EEFC status register definitions */
#define EEFC_FSR_FRDY         (0x01   <<  0)     /* Flash Ready Status         */
#define EEFC_FSR_FCMDE        (0x01   <<  1)     /* Flash Command Error Status */
#define EEFC_FSR_FLOCKE       (0x01   <<  2)     /* Flash Lock Error Status    */
#define EEFC_FSR_FLERR        (0x01   <<  3)     /* Flash Error Status         */

/* EEFC mode register */
#define EEFC_FMR_FAM          (0x01   << 24)     /* FAM: Flash Access mode     */
#define EEFC_FMR_FWS          (0x0F   <<  8)     /* FWS: Flash Wait State      */

/* GPNVM bits */
#define GPNVM_BIT0             0                 /* GPNVM bit0: Security bit */
#define GPNVM_BIT1             1                 /* GPNVM bit1: Boot mode selection  0 = Boot from ROM,    1 = Boot from Flash  */
#define GPNVM_BIT7             7                 /* GPNVM bit7: TCM configuration  */
#define GPNVM_BIT8             8                 /* GPNVM bit8: TCM configuration  */


/* Peripheral Memory Map */

/* ---- SAME7x -------------------------------------------------------------------*/
#if defined ATSAME7x_512 || defined ATSAME7x_1024 || defined ATSAME7x_2048
  #define PMC_BASE             0x400E0600U       /* SAME7, SAMS7, SAMV7        */
  #define WDT0_BASE            0x400E1850U       /* SAME7, SAMS7, SAMV7        */
  #define WDT1_BASE            0x400E1900U       /* SAME7, SAMS7, SAMV7        */
  #define EEFC0_BASE           0x400E0C00U       /* SAME7, SAMS7, SAMV7        */
#endif


#define PMC            (( PMC_TypeDef *)   PMC_BASE)
#define WDT0           (( WDT_TypeDef *)  WDT0_BASE)
#define WDT1           (( WDT_TypeDef *)  WDT1_BASE)
#define EEFC0          ((EEFC_TypeDef *) EEFC0_BASE)

#define FLASH_PAGE_SIZE        512               /* Page size is 512 Byte for all devices */



unsigned long base_adr;        /* Base Address  */


/*
 *  Initialize Flash Programming Functions
 *    Parameter:      adr:  Device Base Address
 *                    clk:  Clock Frequency (Hz)
 *                    fnc:  Function Code (1 - Erase, 2 - Program, 3 - Verify)
 *    Return Value:   0 - OK,  1 - Failed
 */

int Init (unsigned long adr, unsigned long clk, unsigned long fnc) {

  /* store Flash Start address */
  base_adr = adr;

  /* disable EEFC write protection */
  EEFC0->WPMR = 0x45464300;

  /* set Flash Waite State to maximum */
  EEFC0->FMR = EEFC_FMR_FWS;

  /* disable Watchdogs */
  WDT0->MR   = WDT_MR_WDDIS;
  WDT1->MR   = WDT_MR_WDDIS;

  /* disable PMC write protection */
  PMC->PMC_WPMR = PMC_WPMR_WPKEY;

  /* before we change the clocksetup we switch Master Clock Source
     to MAIN_CLK and set prescaler to one
   */
  PMC->PMC_MCKR = (PMC->PMC_MCKR & ~PMC_MCKR_CSS) | PMC_MCKR_CSS_MAIN_CLK;
  while (!(PMC->PMC_SR & PMC_SR_MCKRDY));     /* Wait for MCKRDY                   */

  PMC->PMC_MCKR = (PMC->PMC_MCKR & ~PMC_MCKR_PRES);
  while (!(PMC->PMC_SR & PMC_SR_MCKRDY));     /* Wait for MCKRDY                   */

  PMC->CKGR_MOR = (PMC->CKGR_MOR                    ) | PMC_CKGR_CKGR_KEY | PMC_CKGR_MOSCRCEN;
  while (!(PMC->PMC_SR & PMC_SR_MOSCRCS));    /* Wait for MOSCRCS                   */

  PMC->CKGR_MOR = (PMC->CKGR_MOR & ~PMC_CKGR_MOSCRCF) | PMC_CKGR_CKGR_KEY | PMC_CKGR_MOSCRCF_12 ;

  PMC->CKGR_MOR = (PMC->CKGR_MOR & ~PMC_CKGR_MOSCSEL) | PMC_CKGR_CKGR_KEY;
  while (!(PMC->PMC_SR & PMC_SR_MOSCSELS));   /* Wait for MOSCSELS                  */

  /* Select Main Clock (CSS field) */
  PMC->PMC_MCKR = (PMC->PMC_MCKR & ~PMC_MCKR_CSS) | PMC_MCKR_CSS_MAIN_CLK;

  /* Wait for Clock ready */
  while (!(PMC->PMC_SR & PMC_SR_MCKRDY));

  /* Select Main Clock */
  PMC->PMC_MCKR = PMC_MCKR_CSS_MAIN_CLK;

  /* Wait for Clock ready */
  while (!(PMC->PMC_SR & PMC_SR_MCKRDY));

  /* enable PMC write protection */
  PMC->PMC_WPMR = PMC_WPMR_WPKEY | PMC_WPMR_WPEN;

  return (0);
}


/*
 *  De-Initialize Flash Programming Functions
 *    Parameter:      fnc:  Function Code (1 - Erase, 2 - Program, 3 - Verify)
 *    Return Value:   0 - OK,  1 - Failed
 */

int UnInit (unsigned long fnc) {
#ifdef FLASH_MEM
  u32           frr;

  /* after programming Flash  set GPNVMBit to boot from Flash */
  if (fnc == 2) {

    /* read current GPNVM bits */
    EEFC0->FCR = EEFC_FCR_FKEY | EEFC_FCR_FCMD_GGPB;
    while (!(EEFC0->FSR & EEFC_FSR_FRDY));
    frr = EEFC0->FRR;

    /* configure GPNVM bit #1 :  1 = Boot from Flash  */
    if ((frr & (1 << GPNVM_BIT1)) == 0) {
      EEFC0->FCR = EEFC_FCR_FKEY | (GPNVM_BIT1 << 8) | EEFC_FCR_FCMD_SGPB;

      /* Wait until the end of Command */
      while (!(EEFC0->FSR & EEFC_FSR_FRDY)) __nop();
    }

  }
#endif

  /* enable EEFC write protection */
  EEFC0->WPMR = 0x45464301;

  return (0);
}


/*
 *  Blank Check Checks if Memory is Blank
 *    Parameter:      adr:  Block Start Address
 *                    sz:   Block Size (in bytes)
 *                    pat:  Block Pattern
 *    Return Value:   0 - OK,  1 - Failed
 */

#ifdef FLASH_GPNVM
int BlankCheck (unsigned long adr, unsigned long sz, unsigned char pat) {

  /* for GPNVM bits blankCheck is always ok */
  return (0);
}
#endif


/*
 *  Erase complete Flash Memory
 *    Return Value:   0 - OK,  1 - Failed
 */

int EraseChip (void) {
#ifdef FLASH_MEM

  /* erase all command
     memory covered by the Flash Programming Algorithm is erased */

  EEFC0->FCR  = EEFC_FCR_FKEY | EEFC_FCR_FCMD_EA;
  while (!(EEFC0->FSR  & EEFC_FSR_FRDY)) __nop();

#endif

  return (0);
}


/*
 *  Erase Sector in Flash Memory
 *    Parameter:      adr:  Sector Address
 *    Return Value:   0 - OK,  1 - Failed
 */

int EraseSector (unsigned long adr) {
  u32           page;
  EEFC_TypeDef *EEFCx;

  /* select EEFC, calculate page */
    EEFCx =  EEFC0;
    page  = (adr - (base_adr                   )) / FLASH_PAGE_SIZE;

  /* FARG[1:0] Number of pages to be erased with EPA command */
  page = ((page & ~3UL) | 2);

  /* unlock page command */
  EEFCx->FCR = EEFC_FCR_FKEY | EEFC_FCR_FCMD_CLB | (EEFC_FCR_FARG & (page << 8));
  while (!(EEFCx->FSR & EEFC_FSR_FRDY)) __nop();

  /* Erase page command (Erase page on 16 pages) */
  EEFCx->FCR = EEFC_FCR_FKEY | EEFC_FCR_FCMD_EPA | (EEFC_FCR_FARG & (page << 8));
  while (!(EEFCx->FSR & EEFC_FSR_FRDY)) __nop();

  /* check for errors */
  if (EEFCx->FSR & (EEFC_FSR_FLERR |EEFC_FSR_FCMDE | EEFC_FSR_FLOCKE))
    return (1);

  return (0);
}


/*
 *  Program Page in Flash Memory
 *    Parameter:      adr:  Page Start Address
 *                    sz:   Page Size
 *                    buf:  Page Data
 *    Return Value:   0 - OK,  1 - Failed
 */
#ifdef FLASH_MEM
int ProgramPage (unsigned long adr, unsigned long sz, unsigned char *buf) {
  u32           page;
  u32          *Flash;
  EEFC_TypeDef *EEFCx;

  /* select EEFC, calculate page */
    EEFCx =  EEFC0;
    page  = (adr - (base_adr                   )) / FLASH_PAGE_SIZE;

  /* we always flash complete pages */
  sz = FLASH_PAGE_SIZE;

  /* set write pointer to Flash address */
  Flash = (unsigned long *)adr;

  /* copy data to write buffer */
  for (sz = (sz + 3) & ~3; sz; sz -= 4, buf += 4) {
    *Flash++ = *((unsigned long *)buf);
  }

  /* start programming command */
  EEFCx->FCR = EEFC_FCR_FKEY | EEFC_FCR_FCMD_WP | (EEFC_FCR_FARG & (page << 8));
  while (!(EEFCx->FSR & EEFC_FSR_FRDY)) __nop();

  /* check for errors */
  if (EEFCx->FSR & (EEFC_FSR_FLERR |EEFC_FSR_FCMDE | EEFC_FSR_FLOCKE))
    return (1);

  return (0);
}
#endif

#ifdef FLASH_GPNVM
int ProgramPage (unsigned long adr, unsigned long sz, unsigned char *buf) {
  u32           frr;
  u32           gpnvm;

  gpnvm = *(u32 *)buf;

  /* read current GPNVM bits */
  EEFC0->FCR = EEFC_FCR_FKEY | EEFC_FCR_FCMD_GGPB;
  while (!(EEFC0->FSR & EEFC_FSR_FRDY));
  frr = EEFC0->FRR;

  /* configure GPNVM bit #0 : Security bit */
  if ((gpnvm & (1 << GPNVM_BIT0)) != (frr & (1 << GPNVM_BIT0))) {
    if (gpnvm & (1 << GPNVM_BIT0))
      EEFC0->FCR = EEFC_FCR_FKEY | (GPNVM_BIT0 << 8) | EEFC_FCR_FCMD_SGPB;
    else
      EEFC0->FCR = EEFC_FCR_FKEY | (GPNVM_BIT0 << 8) | EEFC_FCR_FCMD_CGPB;

    /* Wait until the end of Command */
    while (!(EEFC0->FSR & EEFC_FSR_FRDY)) __nop();
  }

  /* configure GPNVM bit #1 : Boot mode selection  0 = Boot from ROM,    1 = Boot from Flash  */
  if ((gpnvm & (1 << GPNVM_BIT1)) != (frr & (1 << GPNVM_BIT1))) {
    if (gpnvm & (1 << GPNVM_BIT1))
      EEFC0->FCR = EEFC_FCR_FKEY | (GPNVM_BIT1 << 8) | EEFC_FCR_FCMD_SGPB;
    else
      EEFC0->FCR = EEFC_FCR_FKEY | (GPNVM_BIT1 << 8) | EEFC_FCR_FCMD_CGPB;

    /* Wait until the end of Command */
    while (!(EEFC0->FSR & EEFC_FSR_FRDY)) __nop();
  }

  /* configure GPNVM bit #7, #8 : TCM configuration  */
  if ((gpnvm & (1 << GPNVM_BIT7)) != (frr & (1 << GPNVM_BIT7))) {
    if (gpnvm & (1 << GPNVM_BIT7))
      EEFC0->FCR = EEFC_FCR_FKEY | (GPNVM_BIT7 << 8) | EEFC_FCR_FCMD_SGPB;
    else
      EEFC0->FCR = EEFC_FCR_FKEY | (GPNVM_BIT7 << 8) | EEFC_FCR_FCMD_CGPB;

    /* Wait until the end of Command */
    while (!(EEFC0->FSR & EEFC_FSR_FRDY)) __nop();
  }
  if ((gpnvm & (1 << GPNVM_BIT8)) != (frr & (1 << GPNVM_BIT8))) {
    if (gpnvm & (1 << GPNVM_BIT8))
      EEFC0->FCR = EEFC_FCR_FKEY | (GPNVM_BIT8 << 8) | EEFC_FCR_FCMD_SGPB;
    else
      EEFC0->FCR = EEFC_FCR_FKEY | (GPNVM_BIT8 << 8) | EEFC_FCR_FCMD_CGPB;

    /* Wait until the end of Command */
    while (!(EEFC0->FSR & EEFC_FSR_FRDY)) __nop();
  }

  return (0);
}
#endif

/*
 *  Verify Flash Contents
 *    Parameter:      adr:  Start Address
 *                    sz:   Size (in bytes)
 *                    buf:  Data
 *    Return Value:   (adr+sz) - OK, Failed Address
 */

#ifdef FLASH_GPNVM
unsigned long Verify (unsigned long adr, unsigned long sz, unsigned char *buf) {
  u32           frr;
  u32           gpnvm;

  gpnvm = *(u32 *)buf;

  /* read current GPNVM bits */
  EEFC0->FCR = EEFC_FCR_FKEY | EEFC_FCR_FCMD_GGPB;
  while (!(EEFC0->FSR & EEFC_FSR_FRDY));
  frr = EEFC0->FRR;

  /* check GPNVM bit #0 : Security bit */
  if ((gpnvm & (1 << GPNVM_BIT0)) != (frr & (1 << GPNVM_BIT0))) {
    return (adr + GPNVM_BIT0);
  }

  /* check GPNVM bit #1 : Boot mode selection */
  if ((gpnvm & (1 << GPNVM_BIT1)) != (frr & (1 << GPNVM_BIT1))) {
    return (adr + GPNVM_BIT1);
  }

  /* check GPNVM bit #7,#8 : TCM configuration */
  if ((gpnvm & (1 << GPNVM_BIT7)) != (frr & (1 << GPNVM_BIT7))) {
    return (adr + GPNVM_BIT7);
  }
  if ((gpnvm & (1 << GPNVM_BIT8)) != (frr & (1 << GPNVM_BIT8))) {
    return (adr + GPNVM_BIT8);
  }

  return (adr + sz);
}
#endif


// --- Test --- Test --- Test --- Test ---
#ifdef FLASH_TEST
void rdEFD (unsigned int *efd) {                   // read embedded Flash Descriport

  EEFC0->FCR = EEFC_FCR_FKEY | EEFC_FCR_FCMD_GETD;
  while (!(EEFC0->FSR & EEFC_FSR_FRDY));
  *efd++ = EEFC0->FRR;                             // Flash Interface Description
  *efd++ = EEFC0->FRR;                             // Flash size in bytes
  *efd++ = EEFC0->FRR;                             // Page size in bytes
  *efd++ = EEFC0->FRR;                             // Number of planes
  *efd++ = EEFC0->FRR;                             // Number of bytes in the first plane
  *efd++ = EEFC0->FRR;                             // Number of lock bits
  *efd++ = EEFC0->FRR;                             // Number of bytes in the 1st lock region
  *efd++ = EEFC0->FRR;                             // Number of bytes in the 2nd lock region
  *efd++ = EEFC0->FRR;                             // Number of bytes in the 3rd lock region
}

void rdLB (unsigned int *lb) {                     // read Lock Bits

  EEFC0->FCR = EEFC_FCR_FKEY | EEFC_FCR_FCMD_GLB;
  while (!(EEFC0->FSR & EEFC_FSR_FRDY));
  *lb++ = EEFC0->FRR;                              // Lock Bits  0..31
  *lb++ = EEFC0->FRR;                              // Lock Bits 32..63
  *lb++ = EEFC0->FRR;                              // Lock Bits 64..95
}

void rdGPNVM (u32 *gpnvm) {

  /* read current GPNVM bits */
  EEFC0->FCR = EEFC_FCR_FKEY | EEFC_FCR_FCMD_GGPB;
  while (!(EEFC0->FSR & EEFC_FSR_FRDY));
  *gpnvm = EEFC0->FRR;
}
#endif
