#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void sound (){
        cout <<"Aniaml sound \n";
    }
};

class Dog:public Animal{
    public :
    void sound() override{
        cout <<"DOg bark \n";
    }
};


int main(){
    Dog dog;
    dog.sound ();

    Animal *a;
    a=&dog;
    //cout<<&a;
    a->sound();

    Animal *b=new Animal();
    b->sound();
    return 0;

}