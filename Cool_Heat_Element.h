/*
 * Cool_Heat_Element.h
 *
 * Created: 01/01/2023 08:57:16 ص
 *  Author: mogavcs
 */ 

#ifndef COOL_HEAT_ELEMENTS_H_
#define COOL_HEAT_ELEMENTS_H_

#include <avr/io.h>

#define HEAT_PORT_DIR DDRB
#define HEAT_PORT PORTB
#define HEAT_PIN 4

#define COOL_PORT_DIR DDRB
#define COOL_PORT PORTB
#define COOL_PIN 5

void heat_init(void);
void heat_start(void);
void heat_stop(void);

void cool_init(void);
void cool_start(void);
void cool_stop(void);

#include "Cool_Heat_Elements.c"
#endif /* COOL_HEAT_ELEMENTS_H_ */