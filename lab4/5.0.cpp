
/*
WAP to swap private data of two different classes using friend function
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
    friend void swap(sample1 &p, sample2 &q);

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
    friend void swap(sample1 &p, sample2 &q);

};

  void swap(sample1 &p, sample2 &q){
    int temp;
    temp=p.a;
    p.a=q.b;
    q.b=temp;
}
int main(){
    sample1 s1;
    sample2 s2;
    int x,y;
    cout<<"enter the the value of a and b"<<endl;
    cin>>x>>y;
    s1.getinfo(x);
    s2.getinfo(y);
    cout<<"the value before swaping:"<<endl;
    s1.display();
    s2.display();
    swap(s1, s2);
    cout<<"the value after swaping:"<<endl;
    s1.display();
    s2.display();
    return 0;

}