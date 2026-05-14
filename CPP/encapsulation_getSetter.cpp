#include <iostream>
#include <string>
using namespace std;

class Enc_get_setter{
    private:
    int salary;

    public:
    void set_salary(int s){
        salary=s;
    }
    int get_salary(){
        return salary;
    }
};

int main(){
    Enc_get_setter empSalary;
    empSalary.set_salary(10000);
    cout<<"Employee salary is :"<<empSalary.get_salary()<<"\n";
    return 0;
}

