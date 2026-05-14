#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
    string title;
    string auther;
    int year;
};

int main(){
    Book book1;
    book1.title="ROS book";
    book1.auther="vijtih";
    book1.year=1991;

    Book book2;
    book2.title="AI Book";
    book2.auther="viswan";
    book2.year=2020;

    cout<<"Book 1 name is "<<book1.title<<" written by "<<book1.auther<<" published on "<<book1.year<<"\n";
    cout<<"Book 2 name is "<<book2.title<<" written by "<<book2.auther<< "  published on " <<book2.year;
    return 0;
}