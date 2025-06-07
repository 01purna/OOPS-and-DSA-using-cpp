/*
1.Write a Program to find sum of two complex number by passing object as an argument.
*/
#include <iostream>
using namespace std;
class com{
    private:
    int real, imag;
    public:
    void getdata(){
        cout << "enter the real part of a complex number"<<endl;
        cin >> real;
        cout << "enter the imaginary part of a complex number"<<endl;
        cin >> imag;
    }
    void display(){
        cout << real <<"+"<<imag<<"i"<<endl;
    }
    void addcomplex(com c1, com c2){
        real=c1.real+c2.real;
       imag=c1.imag+c2.imag;
    }

};
int main(){
    com c1, c2, c3;
    cout <<"enter the data for c1"<<endl;
    c1.getdata();
    cout <<"enter the data for c2"<<endl;
    c2.getdata();
    c3.addcomplex(c1, c2);
    c3.display();
    return 0;
}