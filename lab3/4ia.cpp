//type 1
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
    void addtime(Timee t1, Timee t2){
        sec=t1.sec+t2.sec;
        min=t1.min+t2.min+sec/60;
        hour=t1.hour+t2.hour+min/60;
        min=min%60;
        sec=sec%60;
    }
};
int main(){
    Timee t1, t2, t3;
    cout << "enter the data for t1"<<endl;
    t1.getdata();
    cout << "enter the data for t2"<<endl;
    t2.getdata();
    t3.addtime(t1, t2);
    cout<<"the sum is ";
    t3.display();
    return 0;
}