/*
Write a program to add two complex numbers by using dynamic constructor.
*/
#include <iostream>
using namespace std;
class Complex{
    int *real, *imag;
    public:
    Complex(){
         real = new int;
        imag= new int;
        *real=0;
        *imag=0;
    }
    Complex(int r, int i){
        real = new int;
        imag= new int;
        *real=r;
        *imag=i;
    }
    void display(){
        cout<<*real<<"+"<<*imag<<"i"<<endl;
    }
    void addcomplex(Complex c1, Complex c2){
        *real = *c1.real + *c2.real;
        *imag = *c1.imag + *c2.imag;
    }
    ~Complex(){
        delete real;
        delete imag;
    }
};
int main(){
    Complex c1(2,4), c2(4,2), c3;
    cout<<"first complex:"<<endl;
    c1.display();
    cout<<"seconde complex:"<<endl;
    c2.display();
    cout<<"resultant complex:"<<endl;
    c3.addcomplex(c1, c2);
    c3.display();
    return 0;
}