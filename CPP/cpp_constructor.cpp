#include <iostream>
using namespace std;

class MYclass{
    public:

    MYclass(){
        cout <<"hello"<<"\n";
    }
};

class Car{
    public :
    string brand;
    string model;
    int year;

    Car(string x,string y, int z)
{
    brand=x;
    model=y;
    year=z;
}};

int main(){
    MYclass myobj;// this will print hello 
    Car newCar("BMW","x",2025);
    cout<<newCar.brand;
    
    return 0;
}