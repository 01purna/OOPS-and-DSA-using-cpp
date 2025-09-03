/*
20. Create a function template to find sum and product of two integers and two float values.
*/
#include <iostream>
using namespace std;
template <class T>
void sumpro(T a, T b){
    cout<<"sum = "<<a+b<<endl;
    cout<<"product = "<<a*b<<endl;
}
int main(){
    int a=10, b=20;
    cout<<"integers calculation: "<<endl;
    sumpro(a, b);
    float x=10.5, y=20.5;
    cout<<"float calculation: "<<endl;
    sumpro(x, y);
    return 0;
}