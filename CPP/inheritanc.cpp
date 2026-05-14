#include <iostream>
using namespace std;

class Vehicle{
    public:
    string brand="Ford";
    void honk(){
        cout<<"honiing \n";
    }
};


class Car:public Vehicle{
    public:
    string model="Mustag";
};

int main(){
    Car myCar;
    myCar.honk();
    cout<<myCar.model<<"\n";

    return 0;
}