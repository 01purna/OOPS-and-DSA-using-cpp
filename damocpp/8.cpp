/*
Create a class time with data members hours, minutes and seconds. Now perform the
addition of two times object by passing object as an function arguments. Use constructor to initialize the object of time class.
*/
#include <iostream>
using namespace std;
class Time{
    int hour, min, sec;
    public:
    Time(){
    }
    Time(int h, int m, int s){
        hour = h;
        min = m; 
        sec = s;
    }
    void display(){
        cout<<hour<<" : "<<min<<" : "<<sec<<endl;
    }
    Time addtime(Time t){
        Time temp;
        temp.sec = sec + t.sec;
        temp.min = min + t.min + temp.sec/60;
        temp.sec = temp.sec%60;
        temp.hour = hour +t.hour+ temp.min/60; 
        temp.min = temp.min%60;
        return temp;
    }
};
int main(){
    Time t1(2, 30, 50), t2(3, 40, 50), t3;
    cout<<"time 1 ";
    t1.display();
    cout<<"time 2 ";
    t2.display();
    t3 = t1.addtime(t2);
    cout<<"addtion of two time is :";
    t3.display();
    return 0;
}