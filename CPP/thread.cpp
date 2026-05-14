#include<iostream>
#include<thread>
#include<chrono>

void sensorTask(const std::string sensor_name ,int duration){
    std::cout<<"Sensor task started :"<<sensor_name<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    std::cout<<"Sensor task completed: "<<sensor_name<<std::endl;


}

void controlTask(const std::string& controller_name ,int  duration){
    std::cout<<"controller task started :"<<controller_name<<std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(duration));
    std::cout<<"Controller task completed "<<controller_name<<std::endl;

}


int main(){
    std::cout<<"Main thread started "<<std::endl
;
std::thread sensor_thread1(sensorTask,"TemperatureSensor",4);
std::thread sensor_thread2(sensorTask,"Humidity_sensor",10);
std::thread controller_thread1(controlTask,"motorcontroller",6);
std::thread controller_thread2(controlTask,"Manipulation",7);
sensor_thread1.join();
sensor_thread2.join();
controller_thread1.join();
controller_thread2.join();
return 0;
}