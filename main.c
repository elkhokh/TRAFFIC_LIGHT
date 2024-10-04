/*
 * TRAFFIC_LIGHT.c
 *
 * Created: 12/07/2024 01:44:06
 * Author : MUSTAFA_KHALED
 */ 

#define F_CPU 8000000UL 
#include <util/delay.h>
#include <avr/io.h>
#include "TRAFFIC/BIT_MATH.h"
#include "TRAFFIC/STD_TYPES.h"
// MACRO FOR COMMON CATHODE
#define ZERO  0X3F   //0b00111111
#define ONE   0X06   //0b00000110
#define TWO   0X5B   //0b01011011   
#define THREE 0X4F   //0b01001111     
#define FOUR  0X66   //0b01100110    
#define FIVE  0X6D   //0b01101101    
#define SIX   0X7D   //0b01111101     
#define SEVEN 0X07   //0b00000111     
#define EIGHT 0X7F   //0b01111111     
#define NINE  0X6F   //0b01101111  
#define RED_LED    5
#define YELLOW_LED 6
#define GREEN_LED  7

 u8 seven_segment[10]={ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};
int main(void)
{
	
	DDRC|=0b11111111;    //CONFGI_OUPUT_PORTC
	DDRD|=0b11111111;    //CONFGI_OUPUT_PORTD
	DDRA|=0b11100000;
	
	PORTC=0x00;
	PORTD=0x00;
	PORTA=0x00;

	
	
	SET_BIT(DDRB,5);
	CLEAR_BIT(DDRA,0);
	SET_BIT(PORTA,0);
	
	if((GET_BIT(PINA,0))==0){
		SET_BIT(PORTB,5);
		
    while (1) 
    {
		//RED_LED
		for(s8 i=9; i>=0;i--){
			
			SET_BIT(PORTA,RED_LED);
			CLEAR_BIT(PORTA,YELLOW_LED);
			CLEAR_BIT(PORTA,GREEN_LED);
			PORTC = seven_segment[i];
			
			for(s8 x=9; x>=0;x--){
				PORTD = seven_segment[x];
				_delay_ms(100);
			}}
			//YELLOW_LED
			for(s8 i=0; i>=0;i--){
				
				CLEAR_BIT(PORTA,RED_LED);
				SET_BIT(PORTA,YELLOW_LED);
				CLEAR_BIT(PORTA,GREEN_LED);
				PORTC = seven_segment[i];
				
				for(s8 x=9; x>=0;x--){
					PORTD = seven_segment[x];
					_delay_ms(100);}}	
			//GREEN_LED
			for(s8 i=6; i>=0;i--){
				
				CLEAR_BIT(PORTA,RED_LED);
				CLEAR_BIT(PORTA,YELLOW_LED);
				SET_BIT(PORTA,GREEN_LED);
				PORTC = seven_segment[i];
				
				for(s8 x=9; x>=0;x--){
					PORTD = seven_segment[x];
				_delay_ms(100);}}}
			
			}
			else{CLEAR_BIT(PORTB,5);
				
			}
			
			}

