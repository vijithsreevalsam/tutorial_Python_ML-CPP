#include <iostream>
#include<string>

using namespace std;

class Dog{
    public:
    void bark();
};

void Dog::bark(){
    cout<<" Woof ... Woof ";
}

int main(){
    Dog wolf;
    wolf.bark();
    return 0;
}

