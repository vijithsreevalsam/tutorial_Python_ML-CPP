#include <iostream>
using namespace std;

int sum(int k){
    if (k>0){
        k =   k+sum(k-1);
        cout<<"current values :"<<k<<"\n";
        return k;
    }
    else {
        return 0;
    }
}

int main(){
    int result =sum(5);
    cout<<"result : "<<result;
}
