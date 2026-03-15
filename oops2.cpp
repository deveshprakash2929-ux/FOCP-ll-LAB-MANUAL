#include<iostream>
using namespace std;
class SmartSystem{
    string brand;
    int brightness;
    bool isOn;
public:
    SmartSystem();
    SmartSystem(string cmpny, int bright, bool on);
    void turnOn();
    void turnOff();
    void decBrightness(int value);
    void incBrightness(int value);
    void displayStatus();
    ~SmartSystem(){cout<<"\n object destroyed";};
};
SmartSystem::SmartSystem(){
    cout<<"\n default constructor ";
    brand = "Unknown";
    brightness = 50;
    isOn = false;
}

SmartSystem::SmartSystem(string cmpny, int bright, bool on){
    cout<<"\n parameterized constructor ";
    brand = cmpny;
    brightness = bright;
    isOn = on;
}
void SmartSystem::turnOn(){
    isOn = true;
    cout << "\n Light turned on.";
}
void SmartSystem::turnOff(){
    isOn = false;
    cout << "\n Light turned off.";
}
void SmartSystem::decBrightness(int value){
    brightness -= value;
    if(brightness < 0) brightness = 0;
}
void SmartSystem::incBrightness(int value){
    brightness += value;
    if(brightness > 100) brightness = 100;
}
void SmartSystem::displayStatus(){
    cout << "\n Brand: "<<brand ;
    cout << "\n Brightness: " << brightness;
    cout << "\n Is On: " << (isOn ? "Yes" : "No");
}
SmartSystem s3;
int main(){

    SmartSystem light("devesh", 50, false);

    
    light.displayStatus();
    light.turnOn();
    light.incBrightness(10);
    light.displayStatus();
    light.decBrightness(40);
    light.displayStatus();
    light.turnOff();
    light.displayStatus();
    return 0;
}
