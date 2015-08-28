/**
 * @file IanArduinoRTOS.cpp
 * implementation file of Ian Arduino RTOS class
 * Copyright (C) Ian Jin
 * iancanada.mail@gmail.com
 * Twitter: @iancanadaTT
 *
 * 2015-08-15 V1.0 First release
 * 2015-08-27 V2.0 tick time can be set other than default 10ms
 * 
 * please see IanArduinoRTOS.h for how to use this Ian RTOS class in an Arduino project
 *
 * This program is a free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
 
#include "IanArduinoRTOS.h"
CIanOS::CIanOS()
{
  tickTime=10000;
  oldTime=micros();
  currentTime=0;
  tickCounter=0;  
}

void CIanOS::run()
{
  currentTime=micros();
  if((currentTime-oldTime)>=tickTime)  //time is up
  {
    oldTime=currentTime;               //update old time
    tickCounter++;                     
    IanOStasks();                      //run scheduled IanOStasks, which need to be re-defined in main sketh                       
  }
}

//scheduled tasks IanOStasks() is defined as weak function here; It needs to be re-defined in your main sketch
 __attribute__((weak)) void IanOStasks() 
{
  //task 1
  ;
  //task 2
  //.....
  //task n  
}

CIanOS IanOS;                         //IanOS is here

