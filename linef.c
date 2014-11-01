#define F_CPU 1000000UL 
#include <avr/io.h>     
#include <util/delay.h>

 
int main(void)
{
DDRB=0b11111111; 
DDRC=0b0000000; 

int left_sensor=0, right_sensor=0;
while(1) 
{
     left_sensor=PINC&0b00000001; 
     right_sensor=PINC&0b00010000;
      
            if((left_sensor==0b0000000) & (right_sensor==0b0000000)) 
              {
                 PORTB=0b00000000; 
                 
              }
 
                  if((left_sensor==0b00000001) & (right_sensor==0b00001000)) 
              {
                 PORTB=0b00010010; 
              
              }
            if((left_sensor==0b0000000)&(right_sensor==0b0001000))
              {
                 PORTB=0b00000010; 
              }
 if((left_sensor==0b00000001)&(right_sensor==0b0000000))
              {
                 PORTB=0b00010000; 
              }
 }
 } 