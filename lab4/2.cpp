/*
WAP to add private data of two different classes using friend function
*/
#include <iostream>
using namespace std;
class sample2;
class sample1{
    int a;
    public:
    void getinfo(int x){
       a=x;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
    }
    friend void sum(sample1 p, sample2 q);

};
class sample2{
    int b;
    public:
    void getinfo(int y){
       b=y;
    }
    void display(){
        cout<<"the value of b is "<<b<<endl;
    }
    friend void sum(sample1 p, sample2 q);

};

  void sum(sample1 p, sample2 q){
    int sum =p.a+q.b;
    cout<<"the sum is "<<sum;
}
int main(){
    sample1 s1;
    sample2 s2;
    int x,y;
    cout<<"enter the the value of a and b"<<endl;
    cin>>x>>y;
    s1.getinfo(x);
    s2.getinfo(y);
    s1.display();
    s2.display();
    sum(s1, s2);
    return 0;

}