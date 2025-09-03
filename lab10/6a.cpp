/*
Write a program to convert Rectangle coordinate to Polar coordinate by using:
conversion routine in source class
*/
#include <iostream>
#include <cmath>
using namespace std;
class Polar{
    float radius, angle;
    public:
    Polar(){
    } 
    Polar(float r, float a){
        radius = r;
        angle = a;
    }
    void display(){
        cout<<"("<<radius<<","<<angle<<")"<<endl;
    }
};
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
    operator Polar(){
        float r = sqrt((xco*xco)+(yco*yco));
        float a = atan(yco/xco);
        return Polar(r,a);
    }
};
int main(){
    Rectangle r(50,100);
    Polar p=r;
    cout<<"ractangle coordinate "<<endl;
    r.display();
    cout<<"polar coordinate "<<endl;
    p.display();
    return 0;
}