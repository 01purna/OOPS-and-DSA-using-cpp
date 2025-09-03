/*
Write a program to convert class Polar to Rectangle and vice versa by using type
conversion.
*/
#include <iostream>
#include <cmath>
using namespace std;
class Rectangle{
    float xco, yco;
    public:
    Rectangle(){
    }
    Rectangle(float x, float y){
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
    Polar(Rectangle r){
        float xco = r.getxco(); 
        float yco = r.getyco(); 
        radius = sqrt((xco * xco) + (yco * yco));
        angle = atan(yco/xco);
    }
    operator Rectangle(){
        float x=radius*cos(angle);
        float y=radius*sin(angle);
        return Rectangle(x,y);
    }
    void display(){
        cout<<"("<<radius<<","<<angle<<")"<<endl;
    }
};
int main(){
    Polar p(11.25, 7.54);
    Rectangle r = p;
    cout<<"Polar coordinate: "<<endl;
    p.display();
    cout<<"Rectangle coordinate: "<<endl;
    r.display();
    Polar p2 = r; 
    cout<<"Converted back to Polar coordinate: "<<endl;
    p2.display();
    return 0;
}