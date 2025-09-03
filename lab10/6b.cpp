/*
Write a program to convert Rectangle coordinate to Polar coordinate by using:
conversion routine in destination class
*/
#include <iostream>
#include <cmath>
using namespace std;
class Rectangle{
    int xco, yco;
    public:
    Rectangle(){
    }
    Rectangle(int x, int y){
        xco = x;
        yco = y;
    }
    void display(){
        cout<<"("<<xco<<","<<yco<<")"<<endl;
    }
    float getxco(){
        return xco;
    }
    float getyco(){
        return yco;
    }
};
class Polar{
    float radius, angle;
    public:
    Polar(){
    } 
    Polar(float r, float a){
        radius = r;
        angle = a;
    }
    Polar( Rectangle r){
        float xco = r.getxco();
        float yco = r.getyco();
        radius = sqrt((xco*xco) + (yco*yco));
        angle = atan(yco/xco); 
    }
    void display(){
        cout<<"("<<radius<<","<<angle<<")"<<endl;
    }
};
int main(){
    Rectangle r(50,100);
    Polar p = r; 
    cout<<"Rectangle coordinate: "<<endl;
    r.display();
    cout<<"Polar coordinate: "<<endl;
    p.display();
    return 0;
}