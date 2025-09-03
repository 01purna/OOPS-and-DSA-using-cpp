/*
Create a abstract class shape with two members base and height, a member function
for initialization and a pure virtual function to compute area().Derive two specific
classes, Triangle and Rectangle which override the function area ().Use these classes
in main function and display the area of triangle and rectangle.
*/
#include <iostream>
using namespace std;
class Shape {
    protected:
    int base, hight;
public:
    virtual void area() = 0; 
};
class Tringle : public Shape {
    public:
    void getsetdata(){
        base = 10;
        hight = 20;
    }
    void area() {
        cout << "Area of a triangle is " <<(base*hight)/2<< endl;
    }
};
class Rectangle : public Shape {
    public:
    void getsetdata(){
        base = 20;
        hight = 20;
    }
    void area() {
        cout << "Area of a triangle is " <<(base*hight)<< endl;
    }
};
int main() {
    Shape *bptr;
    Tringle t;
    Rectangle r;
    bptr = &t;
    bptr->setdata();
    bptr->area(); 
    bptr = &r;
    bptr->setdata();
    bptr->area(); 
    return 0;
}
