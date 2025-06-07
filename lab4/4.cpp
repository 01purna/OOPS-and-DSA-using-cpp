/*
Write a program to find the largest of four integers. your program should have three
classes and each classes have one integer number.
*/
#include <iostream>
using namespace std;
class sample2;
class sample3;
class sample1{
    private:
    int a;
    public:
    void getinfo(int x){
       a=x;
    }
    friend void compare(sample1 p, sample2 q, sample3 r, int s);

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
    friend void compare(sample1 p, sample2 q, sample3 r, int s);

};
class sample3{
    int c;
    public:
    void getinfo(int z){
       c=z;
    }
    friend void compare(sample1 p, sample2 q, sample3 r, int s);
};

  void compare(sample1 p, sample2 q, sample3 r, int s){
    // int sum =p.a + q.b + r.c + s;
    int large=p.a;
    if(q.b>large){
        large=q.b;
    }
    if(r.c>large){
        large=r.c;
    }
    if(s>large){
        large=s;
    }
    cout<<"the largest is "<<large;
}
int main(){
    sample1 s1;
    sample2 s2;
    sample3 s3;
    int x,y,z,w;
    cout<<"enter the the value of a,b,c and d"<<endl;
    cin>>x>>y>>z>>w;
    s1.getinfo(x);
    s2.getinfo(y);
    s3.getinfo(z);
    compare(s1, s2, s3, w);
    return 0;

}