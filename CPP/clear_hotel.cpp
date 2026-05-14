#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numGeust;
    cout<<"Enter the number of guests";
    cin>>numGeust;
    cin.ignore();
    if (numGeust<=0){
        cout <<"Requreid atleat 1 member ";
    }

    string *guests=new string[numGeust];
    for (int i=0;i<numGeust;i++){
        cout<<"enter the guest "<<(i+1)<<":";
        getline (cin,guests[i]);

    }
    cout<<"geusts checkd in"<<"\n";
    for (int i=0;i<numGeust;i++){
        cout<<"Gest name "<<(i+1)<<":"<<guests[i]<<"\n";
    }
    delete[] guests;
    guests=nullptr;
    return 0;
}