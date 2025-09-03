/*
17. Write a program to read height of person in meter and convert into feet and inches using suitable type conversion method. [Hint: 1 feet=12 inches and 1 meter =3.28084 feet]
*/
#include <iostream>
using namespace std;
class Height{
    int feet;
    float inch;
    public:
    Height(){
    }
    Height(int h){
        float f= h*3.28;
        feet = f;
        inch = (f-feet)*12;  
    }
    void display(){
        cout<<"feet "<<feet<<endl;
        cout<<"inch "<<inch<<endl;
    }
};
int main(){
    int h;
    cout<<"enter the height of a person in meter: "<<endl;
    cin>>h;
    Height h1;
    h1=h;
    h1.display();
    return 0;
}