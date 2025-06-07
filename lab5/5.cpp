/*
Write a Program to add two complex number using the concept of Constructor
overloading
*/
#include <iostream>
using namespace std;
class Complex{
    private:
    int  real, imag;
    public:
    Complex(){
    }
    Complex(int r, int i){
       real=r;
       imag=i;
    }
    void display(){
       cout<<real<<"+"<<imag<<"i"<<endl;
    }
    void addcom(Complex c1, Complex c2){
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
};
int main(){
    int r1, i1, r2, i2;
    cout<<"enter real and imag for first complex"<<endl;
    cin>>r1>>i1;
    cout<<"enter real and imag for second complex"<<endl;
    cin>>r2>>i2;
    Complex c1(r1, i1);
    Complex c2(r2, i2);
    Complex c3;
    cout<<"fisrt complex: ";
    c1.display();
    cout<<"second complex: ";
    c2.display();
    c3.addcom(c1, c2);
    cout<<"resultant complex: ";
    c3.display();
    return 0;
}