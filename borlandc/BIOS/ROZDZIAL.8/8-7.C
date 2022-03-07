/*
   BIOS dla programuj�cych w C i C++
   Copyright (c) 1992 - Billy P. Taylor

   Program 8-7.  Wl�czenie/wy��czenie dzia�ania klawisza Print Screen
*/


/* Wy��czenie klawisza Print Screen */

#define pStat (unsigned char far *)0x00500000

void disablePrintScrn( void )
{
#define INPROGRESS 1         /* 1 = trwa drukowanie */

*pStat = INPROGRESS;         /* Powoduje ignorowanie przez BIOS
                                ��dania drukowania zawarto�ci ekranu */
}


/* W��czenie klawisza Print Screen */
void enablePrintScrn( void )
{
#define COMPLETE 0           /* 0 = drukowanie zako�czone */

*pStat = COMPLETE;           /* BIOS akceptuje ��danie druku */
}