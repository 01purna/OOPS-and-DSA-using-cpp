//type 1 -- feet and inches
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
    void adddist(Distance d1, Distance d2){
        inch=d1.inch+d2.inch;
        feet=d1.feet+d2.feet+inch/12;
        inch=inch%12;
    }
};
int main(){
    Distance d1, d2, d3;
    cout << "enter the data for t1"<<endl;
    d1.getdata();
    cout << "enter the data for t2"<<endl;
    d2.getdata();
    d3.adddist(d1, d2);
    cout<<"the sum is ";
    d3.display();
    return 0;
}