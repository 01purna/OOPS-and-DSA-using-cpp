/*
WAP to perform sum and product of two integer and two floating point data using class
template.
*/

#include <iostream>
#include <cmath>
using namespace std;
template <class T1, class T2>
void calculate(T1 a, T2 b){
    float sum=a+b;
    float product=a*b;
    cout<<"sum = "<<sum<<endl;
    cout<<"product = "<<product<<endl;
}
int main(){
    int a,b;
    float c,d;
    cout<<"enter the value of two integers: "<<endl;
    cin>>a>>b;
    cout<<"enter the value of float integers: "<<endl;
    cin>>c>>d;
    cout<<"calculation of two integer number is: "<<endl;
    calculate(a, b);
    cout<<"calculation of two float  number is: "<<endl;
    calculate(c, d);
    return 0;
}