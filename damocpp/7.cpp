/*
7.Write a program to illustrate the use of static member function.
*/
#include <iostream>
using namespace std;
class Item{
    int code;
    static int count;
    public:
    void setcode(){
        code=++count;
    }
    void displaycode(){
        cout<<"code: "<<code<<endl;
    }
    static  void dcount(){
        cout<<"count: "<<count<<endl;
    }
};
int Item::count;
int main(){
    Item i1, i2, i3;
    i1.setcode();
    i2.setcode();
    Item::dcount();
    i3.setcode();
    i1.displaycode();
    i2.displaycode();
    i3.displaycode();
    Item::dcount();
    return 0;
}
