/*
WAP to add two complex numbers. Your program should have three objects. Each
object contains two attributes (i.e. real and imaginary part) Now add each attribute
and save them into third object separately. Use the concept of ‘+’ operator
overloading.
*/
#include <iostream>
using namespace std;
class Complex{
    int real, imag;
    public:
    Complex(){  
    }
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    void display(){
        cout<<real<<"+i"<<imag<<endl;
    }
    Complex operator +(Complex c2){
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }
};
int main(){
    Complex c1(2,3);
    Complex c2(2,3), c3;
    c3=c1+c2;
    cout<<"c1 : ";
    c1.display();
    cout<<"c2 : ";
    c2.display();
    cout<<"c3 : ";
    c3.display();
    return 0; 
}