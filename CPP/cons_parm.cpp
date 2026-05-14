#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int price;

    Car(string b,string m, int p){
        brand=b;
        model=m;
        price=p;
    }

};
//construction overloading
class Bike{
    public :
    string brand;
    string model;
    int price;

    Bike(){
        brand="Honda";
        model="African";
        price =30000;
    }

    Bike(string b,string m,int p){
        brand=b;
        model=m;
        price=p;
    }
    Bike (string b,string m){
        brand=b;
        model=m;


    }
};

int main(){
    Car newCar("BMW","X5",90000);
    cout<<newCar.brand<<" "<<newCar.model<<"  " <<newCar.price<<"\n";

    Bike bike1;
    Bike bike2("Kawasaki","Ninja",60000);
    Bike bike3("Yemaha","Fz");

    cout<<bike1.brand<<""<<bike1.model<<""<<bike1.price<<"\n";
    cout<<bike2.brand<<""<<bike2.model<<""<<bike2.price<<"\n";
    cout <<bike3.brand<<""<<bike3.model<<"\n";
    cout<<bike3.brand<<" "<<bike3.price<<"\n";


    return 0;
}