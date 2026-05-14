#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string mytext;
    ifstream MyReadfile ("newfile.txt");

    while (getline (MyReadfile,mytext)){
        cout<<mytext;
    }

    MyReadfile.close();

}