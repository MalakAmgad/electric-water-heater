/*
 * ADC.h
 *
 * Created: 01/01/2023 08:52:44 ص
 *  Author: mogavcs
 */ 

#ifndef ADC_H_
#define ADC_H_


#include <avr/io.h>
#include "std_macros.h"


void ADC_init(void);
uint16_t ADC_read(void);

#include "ADC.c"
#endif /* ADC_H_ */
Foo