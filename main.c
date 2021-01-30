/*
 * led collegati in PB1, PB2, PD5, PD6, pulsanti PB3, PB4, PB5, PB6
 * Questo programma utilizza i tc 0 e 1 presenti a bordo del controllore atmega328p
 * per modulare i segnali in usita collegati a 4 led
 */



#include "mcc_generated_files/mcc.h"

void main(void)
{
SYSTEM_Initialize(); //Inizializzazione Del Microcontrollore

{
    
while(IO_PB3_GetValue()==1){
    
    OCR0A = 0x00;//uscita channel a tmr0 spenta
    OCR0B = 0x00;//uscita channel b tmr0 spenta
    OCR1A = 0x00;//uscita channel a tmr1 spenta
    OCR1B = 0x00;//uscita channel b tmr1 spenta
    __delay_ms(500); //Aspetto 500ms
    OCR1A = 0x3333; //Duty 20%  
    __delay_ms(500); //Aspetto 500ms
    OCR1A = 0x3F56; //Duty 40%
    __delay_ms(500); //Aspetto 500ms
    OCR1A = 0x9998; //Duty 60%
    __delay_ms(500); //Aspetto 500ms
    OCR1A = 0xCCCC; //Duty 80%
    __delay_ms(500); //Aspetto 500ms
    OCR1A = 0xFFFF; //Duty 100%
    __delay_ms(500); //Aspetto 500ms
    }
    
while(IO_PB4_GetValue()==1){
    OCR0A = 0x00;//uscita channel a tmr0 spenta
    OCR0B = 0x00;//uscita channel b tmr0 spenta
    OCR1A = 0x00;//uscita channel a tmr1 spenta
    OCR1B = 0x00;//uscita channel b tmr1 spenta
    __delay_ms(500); //Aspetto 500ms
    OCR1B = 0x3333; //Duty 20%  
    __delay_ms(500); //Aspetto 500ms
    OCR1B = 0x3F56; //Duty 40%
    __delay_ms(500); //Aspetto 500ms
    OCR1B = 0x9998; //Duty 60%
    __delay_ms(500); //Aspetto 500ms
    OCR1B = 0xCCCC; //Duty 80%
    __delay_ms(500); //Aspetto 500ms
    OCR1B = 0xFFFF; //Duty 100%
    __delay_ms(500); //Aspetto 500ms
    }
    
    while(IO_PB5_GetValue()==1){
    OCR0A = 0x00;//uscita channel a tmr0 spenta
    OCR0B = 0x00;//uscita channel b tmr0 spenta
    OCR1A = 0x00;//uscita channel a tmr1 spenta
    OCR1B = 0x00;//uscita channel b tmr1 spenta
    __delay_ms(500); //Aspetto 500ms
    OCR0A = 0x2D; //Duty 20%  
    __delay_ms(500); //Aspetto 500ms
    OCR0A = 0x66; //Duty 40%
    __delay_ms(500); //Aspetto 500ms
    OCR0A = 0x99; //Duty 60%
    __delay_ms(500); //Aspetto 500ms
    OCR0A = 0xCC; //Duty 80%
    __delay_ms(500); //Aspetto 500ms
    OCR0A = 0xFF; //Duty 100%
    __delay_ms(500); //Aspetto 500ms
    }
    
while(IO_PB6_GetValue()==1){
    OCR0A = 0x00;//uscita channel a tmr0 spenta
    OCR0B = 0x00;//uscita channel b tmr0 spenta
    OCR1A = 0x00;//uscita channel a tmr1 spenta
    OCR1B = 0x00;//uscita channel b tmr1 spenta
    __delay_ms(500); //Aspetto 500ms
    OCR0B = 0x2D; //Duty 20%  
    __delay_ms(500); //Aspetto 500ms
    OCR0B = 0x66; //Duty 40%
    __delay_ms(500); //Aspetto 500ms
    OCR0B = 0x99; //Duty 60%
    __delay_ms(500); //Aspetto 500ms
    OCR0B = 0xCC; //Duty 80%
    __delay_ms(500); //Aspetto 500ms
    OCR0B = 0xFF; //Duty 100%
    __delay_ms(500); //Aspetto 500ms
}
}
}