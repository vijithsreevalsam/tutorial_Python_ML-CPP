#include<iostream>
using namespace std;
class Myclass{
    public:
        void myMethod();
        int maxSpeed(int maxspeed);

};

//declaring methoad class outside of the class

void Myclass::myMethod(){
    cout <<"Heloo world ";

}

int Myclass::maxSpeed(int maxSpeed){
    return maxSpeed;

}

int main(){
    Myclass myObj;

    myObj.myMethod();
   cout<< myObj.maxSpeed(200);

    return 0;
}