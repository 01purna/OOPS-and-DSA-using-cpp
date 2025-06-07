//type 3 -- feet and inches
//passing and returning object as an argument.
#include <iostream>
using namespace std;
class Distance{
    private:
    int feet, inch;
    public:
    void getdata(){
        cout << "enter the feet" <<endl;
        cin >> feet;
        cout << "enter the inches"<<endl;
        cin >> inch;
        
    }
    void display(){
        cout << feet <<"'"<<inch<<"''"<<endl;
    }
    Distance adddist(Distance d2){
        Distance temp;
        temp.inch=inch+d2.inch;
        temp.feet=feet+d2.feet+temp.inch/12;
        temp.inch=temp.inch%12;
        return temp;
    }
};
int main(){
    Distance d1, d2, d3;
    cout << "enter the data for t1"<<endl;
    d1.getdata();
    cout << "enter the data for t2"<<endl;
    d2.getdata();
    d3=d1.adddist(d2);
    cout<<"the sum is ";
    d3.display();
    return 0;
}