/*
Using class write a program that receives inputs principle amount, time and rate.
Keeping rate 8% as the default argument, calculate simple interest for three
customers.
*/ 
#include <iostream>
using namespace std;
class Bank{
    private:
    float pamount, si;
    int rate, time;
    public:
    void setdata(float p, int r, int t){
        pamount = p;
        rate = r;
        time = t;
    }
    void calculate(){
         si = (pamount * rate * time) / 100;
    }
    void display(){
        cout<<"Principle Amount: "<<pamount<<endl;
        cout<<"Rate of Interest: "<<rate<<"%"<<endl;
        cout<<"Time: "<<time<<" years"<<endl;
        cout<<"Simple Interest: "<<si<<endl;

    }
};
int main(){
    float principle;
    int time, rate=8;
    Bank c[3];
    for(int i=0; i<3; i++){
        cout<<"enter the principle and time period of account "<<i+1<<endl;
        cin>>principle>>time;
        c[i].setdata(principle, rate, time);
        c[i].calculate();
        c[i].display();
    }
   
    return 0;
}