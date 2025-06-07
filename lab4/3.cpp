/*
WAP to add private data of three different classes using friend function
*/
#include <iostream>
using namespace std;
class sample2;
class sample3;
class sample1{
    int a;
    public:
    void getinfo(int x){
       a=x;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
    }
    friend void sum(sample1 p, sample2 q, sample3 r);

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
    friend void sum(sample1 p, sample2 q, sample3 r);

};
class sample3{
    int c;
    public:
    void getinfo(int z){
       c=z;
    }
    void display(){
        cout<<"the value of c is "<< c <<endl;
    }
    friend void sum(sample1 p, sample2 q, sample3 r);
};

  void sum(sample1 p, sample2 q, sample3 r){
    int sum =p.a+q.b+r.c;
    cout<<"the sum is "<<sum;
}
int main(){
    sample1 s1;
    sample2 s2;
    sample3 s3;
    int x,y,z;
    cout<<"enter the the value of a,b and c"<<endl;
    cin>>x>>y>>z;
    s1.getinfo(x);
    s2.getinfo(y);
    s3.getinfo(z);
    s1.display();
    s2.display();
    s3.display();
    sum(s1, s2, s3);
    return 0;

}