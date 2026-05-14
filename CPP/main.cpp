#include <iostream>
#include "motor.h"

int main(){

    Motor leftMotor;
    leftMotor.setSpeed(75);

   std:: cout<<leftMotor.getSpeed()<<std::endl;
   return 0;
}
