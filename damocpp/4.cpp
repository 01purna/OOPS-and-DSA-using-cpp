/*
4.Write a program to illustrate the concept of dynamic constructor.
OR sum of two complex numbers using dynamic constructor.
*/
#include <iostream>
using namespace std;
class Complex {
    int *real , *imag;
    public:
    Complex(){
        real = new int;
        imag = new int;
        *real = 0;
        *imag = 0;  
    }
    Complex(int r, int i) {
        real = new int;
        imag = new int;
        *real = r;
        *imag = i;
    }
    void display() {
        cout << *real << " + " << *imag << "i" << endl;
    }
    void sum(Complex c1, Complex c2) {
        *real = *c1.real + *c2.real;
        *imag = *c1.imag + *c2.imag;
    }
    ~Complex() {
        delete real;
        delete imag;
    }
};
int main() {
    Complex c1(3, 2), c2(1, 4), c3;
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    c3.sum(c1, c2);
    cout << "Sum of complex numbers: ";
    c3.display();
    return 0;
}