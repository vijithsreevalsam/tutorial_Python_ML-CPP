#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    public:
    string brand="FOrd";

};

class Model:public Vehicle{
public:
string model="mustag";
};

int main(){
    Model model;
    cout<<model.model<<"  brand is "<<model.brand;
    return 0;

}