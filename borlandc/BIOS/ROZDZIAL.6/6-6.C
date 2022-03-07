/*
   BIOS dla programuj�cych w C i C++
   Copyright (c) 1992 - Billy P. Taylor

   Program 6-6.  Wys�anie znaku przez port szeregowy
*/


/* 
   Wys�anie znaku poprzez port
   szeregowy i podanie stanu linii
*/
unsigned char txSerialChar( unsigned int port, 
                            unsigned char charToXmit )
{
union REGS regs;

regs.h.ah = 1;                     /* AH = funkcja 1              */
regs.h.al = charToXmit;            /* AL = znak do wys�ania       */
regs.x.dx = port;                  /* DX = numer portu (0,1,2,3)  */
int86( 0x14, &regs, &regs );       /* Wywo�anie funkcji BIOS      */
return( regs.h.ah );               /* AH = stan linii             */
}