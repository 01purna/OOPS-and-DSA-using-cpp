/*
Create a class time constructor having hour, minute and second as an arguments is
use to take two time data from user. The add function that takes two class objects an
arguments add them respectively then display the aggregate result?
(Apply 60 second =1 minutes and 60 minutes =1 hour)
*/
#include <iostream>
using namespace std;
class Time{
    private:
    int hour, min, sec;
    public:
    Time()
    {
    }
    Time(int h, int m, int s){
       hour=h;
       min=m; 
       sec=s;
    }
    void display(){
       cout<<hour<<":"<<min<<":"<<sec<<endl;
    }
    void addtime(Time t1, Time t2){
        sec=t1.sec+t2.sec;
        min=t1.min+t2.min+sec/60;
        hour=t1.hour+t2.hour+min/60;
        min=min%60;
        sec=sec%60;
    }
};
int main(){
    int h1,h2,m1,m2,s1,s2;
    cout<<"enter hour min and sec for first time"<<endl;
    cin>>h1>>m1>>s1;
    cout<<"enter hour min and sec for second time"<<endl;
    cin>>h2>>m2>>s2;
    Time t1(h1, m1, s1);
    Time t2(h2, m2, s2);
    Time t3;
    cout<<"fisrt time: ";
    t1.display();
    cout<<"second time: ";
    t2.display();
    t3.addtime(t1, t2);
    cout<<"resultant time: ";
    t3.display();
    return 0;
}