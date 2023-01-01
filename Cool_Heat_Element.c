/*
 * Cool_Heat_Element.c
 *
 * Created: 01/01/2023 08:55:54 ص
 *  Author: mogavcs
 */ 

/*----------------------------------------------------------------------------*-
Heater/Cooler Init. : 
-*----------------------------------------------------------------------------*/

#include "std_macros.h"
#include "Cool_Heat_Elements.h"

void heat_init(void){
	set_bit(HEAT_PORT_DIR,HEAT_PIN);
}

void cool_init(void){
	set_bit(COOL_PORT_DIR,COOL_PIN);
}


/*----------------------------------------------------------------------------*-
Heater/Cooler Start :
-*----------------------------------------------------------------------------*/

void heat_start(void){
	set_bit(HEAT_PORT,HEAT_PIN);
}

void cool_start(void){
	set_bit(COOL_PORT,COOL_PIN);
}


/*----------------------------------------------------------------------------*-
Heater/Cooler Stop : 
-*----------------------------------------------------------------------------*/

void heat_stop(void){
	clr_bit(HEAT_PORT,HEAT_PIN);
}

void cool_stop(void){
	clr_bit(COOL_PORT,COOL_PIN);
}
Footer
