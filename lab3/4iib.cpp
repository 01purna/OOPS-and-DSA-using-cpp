//type 2 -- feet and inches
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
    Distance adddist(Distance d1, Distance d2){
        Distance temp;
        temp.inch=d1.inch+d2.inch;
        temp.feet=d1.feet+d2.feet+temp.inch/12;
        temp.inch=temp.inch%12;
        return temp;
    }
};
int main(){
    Distance d1, d2, d3,result ;
    cout << "enter the data for t1"<<endl;
    d1.getdata();
    cout << "enter the data for t2"<<endl;
    d2.getdata();
    result=d3.adddist(d1, d2);
    cout<<"the sum is ";
    result.display();
    return 0;
}