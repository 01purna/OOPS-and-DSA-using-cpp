//type 2  --passing and returning object as an argument.
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
    Timee addtime(Timee t1, Timee t2){
        Timee temp;
        temp.sec=t1.sec+t2.sec;
        temp.min=t1.min+t2.min+temp.sec/60;
        temp.hour=t1.hour+t2.hour+temp.min/60;
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
    result=t3.addtime(t1, t2);
    cout<<"the sum time is ";
    result.display();
    return 0;
}