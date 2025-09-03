/*
Write a complete program to convert the polar coordinates into rectangular
coordinates.(hint: polar-coordinates(radius, angle) and rectangular co-ordinates (x,y)
where x=r*cos(angle) and y=r*sin(angle))
*/
#include <iostream>
#include <math.h>
using namespace std;
class Polar{
    private: 
    float radius;
    float angle; 
    public:
    Polar(){
    radius=0.0;
    angle=0.0;
    }

    Polar(float r, float a){
        radius=r;
        angle=a;
    }
    void display(){
        cout<<"("<<radius<","<<angle<<")"<<endl;
    }
    float getr(){
        return radius;
    }
    float geta(){
        return angle;
    }
};
class Rectangle{
    private:
    float xco;
    float yco;
    public:
    Rectangle(){
        xco=0.0;
        ycо=0.0;
    }
    void display(){
        cout<<"'"<<xco<<","<<yco<<")";
    }
    Rectangle(Polar p){
        float r=p.getr();
        float a=p.geta();
        xco=r*cos(a);
        yco=r*sin(a);
    }
};
int main(){
    Polar p(10.0,0.785398);
    Rectangle r;
    r = p ;
    cout<<"Polar coordinates=";
    p.display();
    cout<<"Rectangular coordinates=:";
    r.display();
    return 0;
}