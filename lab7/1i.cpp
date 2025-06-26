/*
WAP to show that how inheritance supports reusability
*/
#include <iostream>
using namespace std;
class A{
   
    protected:
    int x,y;
    public:
    void get_xy(){
        cout<<"enter the value of x, y"<<endl;
        cin>>x>>y;
    }
    void show_xy(){
        cout<<" x= "<<x<<" y= "<<y<<endl;
    }
};
class B: public A{
    private:
    int sum;
    public:
    void addition(){
        sum=x+y;
    }
    void display(){
        cout<<"the sum ="<<sum;
    }
};
int main(){
    B b;
    b.get_xy();
    b.show_xy();
    b.addition();
    b.display();
    return 0;
}