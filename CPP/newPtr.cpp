#include <iostream>
using namespace std;

int main(){
    int *ptr= new int;
    *ptr=35;
    cout<<"new pointer address is :"<<ptr<<"\n";
     cout<<"new pointer value is :"<<*ptr<<"\n";

     delete ptr;
       cout<<"new pointer address after delete :"<<ptr<<"\n";
       cout<<"pointer value after delete :"<<*ptr<<"\n";
     *ptr=45;//this is a dangeiouras usage - after delete ptr , we must use ptr ==nullptr to throw away this pointer . 
     cout<<"new pointer 2nd value is :"<<*ptr<<"\n";
     cout<<"new pointer 2nd address is :"<<ptr<<"\n";
     ptr=nullptr;
     //cout<<"new pointer address: "<<ptr;
     *ptr=45;//this will trow segmention fault. becuase os doesn't know where is my pointere location is


    return 0;

}