#include <iostream>
using namespace std;

class MyClass{
    public:
    int myNum;
    string Mystring;
};

int main(){
    MyClass myobj;
    myobj.myNum=7;
    myobj.Mystring="hello";

    cout<<myobj.myNum<<"\n";
    cout<<myobj.Mystring;

}