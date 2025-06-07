/*
WAP to add complex numbers of two different classes using friend class.*/
#include <iostream>
using namespace std;
class sample2;
class sample1{
    int real,imag;
    public:
    void getinfo(int x, int y){
       real=x;
       imag=y;
    }
    friend class sample2;

};
class sample2{
    int real,imag;
    public:
    void getinfo(int x,int y){
        real=x;
        imag=y;
    }
   void sum(sample1 A){
    int ireal=real+A.real;
    int iimag=imag+A.imag;
    cout<<"real sum="<<  ireal <<endl;
    cout<<"imag sum="<< iimag  <<endl;
   }
  
   
};

int main(){
    sample1 s1;
    sample2 s2;
    s1.getinfo(1,2);
    s2.getinfo(1,2);
    s2.sum(s1);
    
    return 0;

}