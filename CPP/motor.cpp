#include "motor.h"
Motor::Motor():speed(0){}
void Motor::setSpeed(int s){
    speed=s;
}

int Motor::getSpeed(){
    return speed;
}