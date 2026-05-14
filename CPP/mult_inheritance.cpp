#include <iostream>
#include<string>
using namespace std;

class HomeAppliances{
    public:
    string applicane="TV";

};

class Tv:public  HomeAppliances{
    public:
    string brand="Samsung";
    void LoudOutBrand(){
        cout<<"brand name is :"<<brand<<"\n";
    }
};

class Model:public Tv{
    public:
    string model="smartTV";
    void LoundoutModel(){
        cout<<"TV model is "<<applicane<<" "<<brand<<"\n";
    }
};
class Electronics{
    public:
    string IC="Arm";
};

class Loudoutit:public Model,public Electronics{

};



int main(){
    Model model;
    Tv tv;
    //cout <<tv.applicane;
    cout <<model.model<<" model of brand "<< model.brand<<" coming under :"<<model.applicane<<"\n";

    Loudoutit printthis;
    printthis.LoundoutModel();
    printthis.LoudOutBrand();
    cout<<printthis.IC;
    
    return 0;

}