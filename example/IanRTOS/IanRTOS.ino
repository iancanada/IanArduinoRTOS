//Ian RTOS example
#include "IanArduinoRTOS.h"

int led = 13;           // Pin 13 has an LED connected on most Arduino boards.

void setup() 
{  
  pinMode(led, OUTPUT); // initialize the led pin as an output.
}

void loop() 
{
  IanOS.run();          //run Ian OS
}

void IanOStasks()       //system tick tasks, call by IanOS every 10ms
{
  //task 1
  if ((IanOS.gettickcounter()%100)==0)  //every 1 second
  {
    if((IanOS.gettickcounter()%200)==0) //every 2 seconds
      digitalWrite(led,LOW);
    else
      digitalWrite(led,HIGH);
  }
  //Task n...put your task code here
}
