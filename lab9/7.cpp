/*
Write a program to implement vector addition using operator overloading
i. Using Friend Function
ii. Without using Friend Function (using member function)
*/
#include <iostream>
using namespace std;
class Vector{
    int x, y, z;
    public:
    Vector(){
    }
    Vector(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }
    void display(){
        cout<<x<<"i +"<<y<<"j +"<<z<<"k"<<endl;
    }
    Vector operator +(Vector c2){
        Vector temp;
        temp.x = x + c2.x;
        temp.y = y + c2.y;
        temp.z = z + c2.z;
        return temp;
    }
};
int main(){
    Vector v1(1,2,3);
    Vector v2(1,2,3), v3;
    v3 = v1+ v2;
    cout<<"v1 : ";
    v1.display();
    cout<<"v2 : ";
    v2.display();
    cout<<"v3 : ";
    v3.display();
    return 0; 
}