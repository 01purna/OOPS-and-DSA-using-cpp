/*
3. Write a program to find sum of two complex number using friend class.
*/
#include <iostream>
using namespace std;
class Complex1{
    private:
        float real, imag;
    public:
        Complex1(){
        }
        Complex1(float r, float i){
            real = r;
            imag = i;
        }
        void display() {
            cout << "Complex Number: " << real << " + " << imag << "i" << endl;
        }
        friend class Complex2; 
};
class Complex2{
    private:
        float real, imag;
    public:
        Complex2() {
        }
        Complex2(float r, float i) {
            real = r;
            imag = i;
        }
        void display() {
            cout << "Complex Number: " << real << " + " << imag << "i" << endl;
        }
        void sum(Complex1 c1, Complex2 c2) {
            real = c1.real + c2.real;
            imag = c1.imag + c2.imag;        
        }
};
int main(){
    Complex1 c1(3.5, 2.5);
    Complex2 c2(1.5, 4.5);
    Complex2 c3;
    
    cout << "First ";
    c1.display();
    cout << "Second ";
    c2.display();
    
    c3.sum(c1, c2);
    
    cout << "Sum ";
    c3.display();
    
    return 0;
}