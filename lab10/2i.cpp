/*
Write a program to read height of person in feet and inches and convert into meter by using suitable type conversion method.
*/
#include <iostream>
using namespace std;
class Height{
    private:
    int feet;
    float inches;
    public:
    Height(int f, float i){
        feet=f;
        inches=i;
    }
    void display(){
        cout<<feet<< " feet and "<<inches<<" inches"<<endl;
    }
    operator float(){
        float f = feet + inches/12;
        return (f/3.28083);
    }
};
int main ( ){
    Height h1(984,3.02) ;
    float m=h1;  
    cout<<"Height in feet and inches:"<<endl;
    h1.display();
    cout<<"Height in meter =  "<<m<<endl;
    return 0;
}