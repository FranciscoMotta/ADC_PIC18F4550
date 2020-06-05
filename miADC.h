/* 
 * File:   miADC.h
 * Author: HP
 *
 * Created on 4 de junio de 2020, 07:23 PM
 */

#ifndef MIADC_H
#define	MIADC_H

#include <xc.h>
#define CANAL_AN0 0x0
#define CANAL_AN1 0x1
#define CANAL_AN2 0x2
#define CANAL_AN3 0x3
#define CANAL_AN4 0x4
#define CANAL_AN5 0x5
#define CANAL_AN6 0x6
#define CANAL_AN7 0x7
#define CANAL_AN8 0x8
#define CANAL_AN9 0x9
#define CANAL_AN10 0xA
#define CANAL_AN11 0xB
#define CANAL_AN12 0xC

#define TODO_ANALOGO 0x0
#define AN0A_RESD 0xE

#define ADC_ON 1
#define ADC_OFF 0

#define JUST_DERECHA 1
#define JUST_IZQUIERDA 0 

void simpleAdcInit (int justify, char canal, char pines, int adc_status);

#endif	/* MIADC_H */

