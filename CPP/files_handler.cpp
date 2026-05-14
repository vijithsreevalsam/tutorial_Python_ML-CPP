#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream Myfile("newfile.txt");
    Myfile <<"i have writen here";
    Myfile.close();
}