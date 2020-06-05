/*
 * File:   main.c
 * Author: HP
 *
 * Created on 4 de junio de 2020, 07:17 PM
 */


#include <xc.h>
#include "configuracion.h"
#include "miADC.h"
#define _XTAL_FREQ 20000000

void inicioPuertos(void);

void main(void) {
    int cariable = 0x00;
    inicioPuertos();
    ADCON0 = 0x01; // Inioiamos con el puerto analogo AN0
    ADCON1 = 0x0E; // Elegimos el chanal de entrada del A0
    ADCON2 = 0x24; //8 TAD Fosc/4 y justificado a la izquierda 
    /*
     * Justificado a la derecha 
     * Canal análogo ANO activado
     * Solo el canal ANO es análogo los demás son digitales 
     * ADC desactivado
     */
START:
    ADRESH = 0;
    ADCON0bits.GO = 1; // Le damos inicio a la conversion 
    if (ADCON0bits.GO == 1) goto START;
    //variableDeGuarda = ((ADRESH * 100) / 255)*5;
    LATD = ADRESH;
    __delay_ms(500);
    goto START;
    return;
}

void inicioPuertos(void) {
    TRISD = 0X00;
}
