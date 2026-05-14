#include <iostream>
using namespace std;

template<typename T>
class Square{
    private:
    T value;
    public:
    Square(T v){
        value=v;
        
    }
    void show(){
        cout<<"value: "<<value<<"\n";
    }
};

int main(){
    Square<int> square(100);
    Square<double> dSq(100.90);
    square.show();
    dSq.show();
}