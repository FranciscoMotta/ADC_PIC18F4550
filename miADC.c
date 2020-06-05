#include <xc.h>
#include "miADC.h"

void simpleAdcInit(int justify, char canal, char pines, int adc_status)
{
    ADCON0bits.CHS = canal;// Los canales análogos se definen en este punto
    ADCON0bits.ADON = adc_status; //Para encender o apagar el ADC
    ADCON1bits.PCFG = pines; //Que pines serán análogos o digitales 
    ADCON2bits.ADFM = justify; //Justificacion de los datos del ADC
    ADCON2bits.ACQT = 0b001; //16 TAD -> para los 20MHZ
    ADCON2bits.ADCS = 0b100; // FOSC/4
}
