#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Vector{
    public :
    T* data;//pointer declared,in stack , but memory space is not delcared.

    int size;

    Vector(initializer_list<T> list ){
        size=list.size();
        data=new T[size];
        int i =0;
        for (auto item :list){
            data[i++]=item;
        }
    }

    ~Vector(){
        delete[] data;

    }

};


int main(){
   Vector<string> names={"vijith","arun"};
   

    
    cout<<names.data[0]<<endl;
}
