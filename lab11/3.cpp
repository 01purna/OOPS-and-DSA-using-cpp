/*
Create a function template to swap two values
*/
#include <iostream>
using namespace std;
template <class T>
void swaper(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int a=1, b=2;
    float x=1.5, y=2.5;
    cout<<"beofere swapping: " << endl;
   cout<<" a= "<<a<<" b="<<b<<endl;
    cout<<" x= "<<x<<" y="<<y<<endl;
    cout<<"after swapping: " << endl;
    swaper(a, b);
    swaper(x, y);
    cout<<" a= "<<a<<" b="<<b<<endl;
    cout<<" x= "<<x<<" y="<<y<<endl;
    return 0;
}