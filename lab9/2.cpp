/*
Write a simple program to overload unary minus(-) operator.
*/
#include <iostream>
using namespace std;
class Minus{
    int x, y;
    public:
    void setdata(int a, int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"x= "<<x<<endl;
        cout<<"y= "<<y<<endl;
    }
    void operator -(){
        x=-x;
        y=-y;
    }
};
int main(){
    Minus m;
    m.setdata(4, 5);
    cout<<" M "<<endl;
    m.display();
    -m;
    cout<<" -M "<<endl;
    m.display();
    return 0;
}