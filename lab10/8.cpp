/*
Write a program to convert degree Celsius to degree Fahrenheit by using class to class type conversion.
*/
#include <iostream>
#include <cmath>
using namespace std;
class Fahernheit{
    float tempf;
    public:
    Fahernheit(){
    }
    Fahernheit(float f){
        tempf=f;
    }
    void display(){
        cout<<"temperatur in fahernheit:"<<tempf<<endl;
    }
    float getf(){
        return tempf;
    }
};
class Degree {
    float tempD;
    public:
    Degree(){
    }
    Degree(float d){
        tempD=d;
    }
    Degree(Fahernheit f){
        float tempf =f.getf();
        tempD = (tempf-32)/1.8;
    }
    void display(){
        cout<<"temperatur in degree :"<<tempD<<endl;
    }
};

int main(){
    Fahernheit f(273);
    Degree d=f;
    f.display();
    d.display();
    return 0;
}
