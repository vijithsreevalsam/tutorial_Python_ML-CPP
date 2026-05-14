#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void barking(){
        cout<<"ANimal soud "<<"\n";
    }
    void sound(){
        cout<<"ANimal sound non virtual"<<"\n";
    }
};

class Dog:public Animal{

    public:
    void barking () override {
        cout<<"Dog Bow Bow "<<"\n";
    }
    void sound(){
        cout<<"Dog non virtual sound "<<"\n";
    }
};


int main()
{


    Animal *a;
    cout <<"address of d"<<a<<"\n";
    Dog d;
    a=&d;
    cout<<"address of d"<<a<<"\n";
    a->barking();


    Animal ani;
    Dog dog;

    dog.barking();
    ani.barking();
    ani.sound();
    dog.sound();

    return 0;

}