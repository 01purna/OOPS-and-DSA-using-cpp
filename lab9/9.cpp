/*
Create a abstract class shape with two members base and height, a member function
for initialization and a pure virtual function to compute area().Derive two specific
classes, Triangle and Rectangle which override the function area ().Use these classes
in main function and display the area of triangle and rectangle.
*/
#include <iostream>
using namespace std;
class Shape{
    int base, hight;
    public:
    void getdata(){
        cout<<"enter the base"<<endl;
        cin>>base;
        cout<<"enter the hight"<<endl;
        cin>>hight;
    }
    virtual void area()=0;
};
class Triangle: public Shape{
    int area;
    public:
    void calculate(){
         area = (base*hight)/2;
    }
    void area(){
        cout<<"area of a triangle is"<<area<<endl;
    }
};
class Reactanle: public Shape{
    int area;
    public:
    void calculate(){
         area = (base*hight);
    }
    void area(){
        cout<<"area of a reactangle is"<<area<<endl;
    }
};
int main(){
    
}