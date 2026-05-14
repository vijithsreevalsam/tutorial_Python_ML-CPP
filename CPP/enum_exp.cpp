#include<iostream>
using namespace std;


enum class Robotstate{
    IDEL,
    MOVING,
    GRASPING,
    ERROR
};

void print_robot_state(Robotstate state){
    switch (state){
        case Robotstate::IDEL:
            cout<<"Robot is idel "<<endl;
            break;
        case Robotstate::MOVING:
            cout<<"Robot stat is moving "<<endl;
            break;

        case Robotstate::GRASPING:
            cout    <<"Robot stat is grasping "<<endl;
            break;

        case Robotstate::ERROR:
            cout<<"Robot stati is in error "<<endl;
            break;
        
    }
}

int main(){
 Robotstate newState=Robotstate::IDEL;
    print_robot_state(newState);
    return 0;

}
   
