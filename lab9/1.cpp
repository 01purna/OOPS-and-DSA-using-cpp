/*
Write a program finding area of square, rectangle, triangle by using function
overloading technique.
*/
#include <iostream>
using namespace std;
class Area{
    public:
    int area(int l){
        return (l*l);
    }
    int area(int l, int b){
        return (l*b);
    }
    float area(float b, float h){
        return (b*h)/2;
    }
};
int main(){
    Area a;

    cout<<"the area of a squere (5) : "<<a.area(5)<<endl;
    cout<<"the area of a rectange (4, 5) :  "<<a.area(4,5)<<endl;
    cout<<"the area of a triange (4.1, 4.2) : "<<a.area(4.1f, 4.2f)<<endl;

}