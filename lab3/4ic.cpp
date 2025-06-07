//type 3  argument and return third object adding two objects. Hint: c3=c1.addComplex(c2);
#include <iostream>
using namespace std;
class Timee{
    private:
    int hour, min,sec;
    public:
    void getdata(){
        cout << "enter the hour" <<endl;
        cin >> hour;
        cout << "enter the minute"<<endl;
        cin >> min;
        cout << "enter the second"<<endl;
        cin >> sec;
    }
    void display(){
        cout << hour <<":"<<min<<":"<<sec<<endl;
    }
    Timee addtime(Timee t2){
        Timee temp;
        temp.sec=sec+t2.sec;
        temp.min=min+t2.min+temp.sec/60;
        temp.hour=hour+t2.hour+temp.min/60;
        temp.min=temp.min%60;
        temp.sec=temp.sec%60;
        return temp;
    }
};
int main(){
    Timee t1, t2, t3,result;
    cout << "enter the data for t1"<<endl;
    t1.getdata();
    cout << "enter the data for t2"<<endl;
    t2.getdata();
    t3=t1.addtime( t2);
    cout<<"the sum time is ";
    t3.display();
    return 0;
}