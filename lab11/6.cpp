/*
Create a class template to find the scalar product of vectors of integers and vectors of floating point number
*/

#include <iostream>
#include <cmath>
using namespace std;
template <class T>
class Vector{
    T a, b, c;
    public:
    Vector(T x, T y, T z){
        a=x;
        b=y;
        c=z;
    }
    T operator *(Vector p){
        T sum;
        a = a*p.a;
        b = b*p.b; 
        c = c*p.c;
        sum=a+b+c;
        return sum;
    }
    void display(){
        cout<<a<<"i+"<<b<<"j+"<<c<<endl;
    }
};
int main(){ 
    Vector <int> v1(2, 3, 4), v2(4, 5, 6);
    Vector <float> v3(2.1, 3.2, 4.5), v4(4.9, 5.4, 6.1);
    cout<<"v1= ";
    v1.display();
    cout<<"v2= ";
    v2.display();
    cout<<"scaler product of vector v1 and v2 are: "<<v1*v2<<endl;
    
    cout<<"v3= ";
    v3.display();
    cout<<"v4= ";
    v4.display();
    cout<<"scaler product of vector v3 and v4 are: "<<v3*v4<<endl;
    return 0;
}