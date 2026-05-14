#include <iostream>
#include <string>
using namespace std;

class Salary{
    private :
    int salary;

    public:
    Salary(int s){
        salary=s;
    }
    friend void get_salary(Salary sal);
};

void get_salary(Salary sal){
    cout <<"Salary is :"<<sal.salary<<"\n";

}

int main(){
    Salary newSalary(40000);
    get_salary(newSalary);
    return 0;

}