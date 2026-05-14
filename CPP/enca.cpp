#include<iostream>
using namespace std;

class Employee{

    private:
        int salary;
        string name;

    public :

    Employee(string name , int annulPkg){
        salary =annulPkg;
          name =name ;

    }

    int countSalay(){
return salary;
    }
        

};

int main(){
    Employee emp1("vijith",12222);
    cout<<emp1.countSalay();
    return 0;
}