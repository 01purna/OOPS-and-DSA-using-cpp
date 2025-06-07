/*
WAP in C++ to calculate simple interest from given principal, time and rate. Set the
rate to 15 % as default argument when rate is not provided and also implement the
concept of dynamic initialization of object.
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
    int size, time, rate=15;
    cout<<"enter the number of accounts:"<<endl;
    cin>>size;
    Bank *ptr;
    ptr = new Bank[size];
    for(int i=0; i<size; i++){
        cout<<"enter the principle and time period of account "<<i+1<<endl;
        cin>>principle>>time;
        ptr[i].setdata(principle, rate, time);
        ptr[i].calculate();
        ptr[i].display();
    }
    delete[] ptr;
    return 0;
}