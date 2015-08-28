 
  Ian Arduino RTOS
  
  Copyright (C) Ian Jin
  iancanada.mail@gmail.com
  Twittter: @iancanadaTT
  
  Might be the smallest RTOS for Arduino
  With scheduled tasks management in non-block mode
  To make your life easier with state machine style C++ programming 

  2015-08-15 V1.0 First release
  2015-08-27 V2.0 tick time can be set other than default 10ms

  Tested on Arduino-UNO, MEGA 2560 and DUE

  Run example:
  1. copy IanArduinoRTOS folder into Arduino\Libraries folder
  2. Run IanRTOS  in example folder
  If LED toggles every 1 second, it means IanRTOS is working  
  
  How to use this Ian RTOS class in  your Arduino project
  1. copy IanArduinoRTOS floder into Arduino\Libraries folder (skip if already done)
  2. in your main sketch,  #include "IanArduinoRTOS.h"
  3. in loop(), run IanOS. Please keep in mind never use any delay functions.
  4. re-define void IanOStasks() in your main sketch with your tasks filled in.

  Please note: total run time of all tasks should be shorter than system tick time. 
  However,  even its longer than that, IanOS will still be non-blocked.
  system tick time can also be set other than 10ms if your put IanOS.setTickTime to set it in setup()
  
  Please see the following sample code for reference.

  #include "IanArduinoRTOS.h"
  //......
  void setup() 
  { 
    //IanOS.setTickTime(20000);  //only needed if you want system tick other than 10ms
    //put your setup code here
  }

  void loop()
  {
    IanOS.run();
    //put your main code here
  }

  void IanOStasks()
  {
    //task 1    
    func1();   //put your task function 1 here
    //...      //other tasks
    //task n
    funcn();   //put your task function n here
  }

  This program is free software: you can redistribute it and/or modify it
  under the terms of the GNU Lesser General Public License as published by the
  Free Software Foundation, either version 3 of the License, or any later
  version.
 
  This program is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
  for more details.
 
  You should have received a copy of the GNU Lesser General Public License
  along with this program. If not, see <http://www.gnu.org/licenses/>.

  Ian Jin
