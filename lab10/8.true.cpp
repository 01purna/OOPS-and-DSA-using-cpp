/*
Write a program to convert degree Celsius to degree Fahrenheit by using class to class type conversion.
*/
#include <iostream>
#include <cmath>
using namespace std;
class Degree {
    float tempD;
    public:
    Degree(){
    }
    Degree(float d){
        tempD=d;
    }
    void display(){
        cout<<"temperatur in degree :"<<tempD<<endl;
    }
    float getd(){
        return tempD;
    }
};
class Fahernheit{
    float tempf;
    public:
    Fahernheit(){
    }
    Fahernheit(float f){
        tempf=f;
    }
    Fahernheit(Degree d){
        float tempD =d.getd();
        tempf = 1.8*tempD+32;
    }
    void display(){
        cout<<"temperatur in fahernheit:"<<tempf<<endl;
    }
};
int main(){
    Degree d(37);
    Fahernheit f=d;
    d.display();
    f.display();
    return 0;
}
