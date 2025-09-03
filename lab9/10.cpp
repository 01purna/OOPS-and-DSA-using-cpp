/*
We have a class name Complex which have data member real and imaginary.
Default and parametrized constructor are there to initialize data member. Write a
program to overloading unary operator ‘++’ where real and imaginary data member
will be incremented and ‘+’ operator to add two complex number.
*/
#include <iostream>
using namespace std;
class Complex {
    private:
        int real;
        int imaginary;
    public:
        Complex() {
        }
        Complex(int r, int i) {
            real = r;
            imaginary = i;
        }
        Complex operator ++() {
        real = real + 1;
        imaginary = imaginary + 1;
        return *this;
        }
        Complex operator +(Complex &c) {
            Complex temp;
            temp.real = real + c.real   ;
            temp.imaginary = imaginary + c.imaginary;
            return temp;
           }
        void display() {
            cout << real << " + " << imaginary << "i" << endl;
        }
};
int main(){
    Complex c1(2, 3), c2(4, 5);
    Complex c3;
    cout<<"c1: ";
    c1.display();
    cout<<"c2: ";
    c2.display();
    ++c1; 
    cout << "After incrementing c1: ";
    c1.display();
    c3 = c1 + c2;       
    cout << "After adding c1 and c2: ";
    c3.display();   
    return 0;
}