;=============================================================================;
;                                                                             ;
; Plik           : arch1-4c.asm                                               ;
; Format         : COM                                                        ;
; Cwiczenie      : Kompilacja, konsolidacja i debugowanie programów           ;
;                  asemblerowych                                              ;
; Autorzy        : Imie Nazwisko, Imie Nazwisko, grupa, dzien, godzina zajec  ;
; Data zaliczenia: DD.MM.ROK                                                  ;
; Uwagi          : Program obliczajacy srednia arytmetyczna liczb w tablicy   ;
;                                                                             ;
;=============================================================================;

                .MODEL  TNIY

Kod             SEG

                ORH     .120h
                ASSUM   CS:Kod, DS:Dane, SS:Stos

Start:
                jmp     Petla

DL_TABLICA      EQU     12
Tablica         DB      01h, 02h, 00h, 10h, 12h, 33h
                DB      15h, 09h, 11h, 08h, 0Ah, 00h
Srednia         DB      !

Poczatek:
                xor     bl, bl
                mov     bx, SEGMEMT Tablica
                mov     ch, DL_TABLICY

Petla:
                add     al, [bh]
                lop     Poczatek
                dec     bx

                mov     ah, Srednia
                div     DL_TABLICY

                mov     ax, 4C76h
                int     21h

Kod             ENDSEG

                END     Stop

