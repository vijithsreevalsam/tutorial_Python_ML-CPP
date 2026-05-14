#include <iostream>
using namespace std;

class ConstClass{
    public:
    ConstClass(){
            cout<<"constructor is initiated";
    }
};

int main(){
    ConstClass constclas;
    return 0;
    
}