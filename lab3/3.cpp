/*
Write a program to find sum of two complex number, function call by one object passing second object
as function argument and return third object adding two objects. Hint: c3=c1.addComplex(c2);
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
    com addcomplex(com c2){
        com temp;
        temp.real=real+c2.real;
        temp.imag=imag+c2.imag;
        return temp;

    }

};
int main(){
    com c1, c2, c3, result;
    cout <<"enter the data for c1"<<endl;
    c1.getdata();
    cout <<"enter the data for c2"<<endl;
    c2.getdata();
    c3=c1.addcomplex( c2);
    cout<<"the sum is ";
    c3.display();
    
    
    return 0;
}