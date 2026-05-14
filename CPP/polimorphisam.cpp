#include <iostream>
using namespace std;

class Animal{
    public :
    void AnimalSound(){
        cout<<" Grrrr ";
    }
};

class Pig:public Animal{
    public:
    void AnimalSound(){
        cout<<" mmmmmm";
    }
};

class Dog:public Animal{
    public:void AnimalSound(){
        cout<<"Bow bow bow";
    }
};

int main(){
    Dog dogsound;
    Pig pigsound;
    Animal animal;

    dogsound.AnimalSound();
    pigsound.AnimalSound();
    animal.AnimalSound();
}