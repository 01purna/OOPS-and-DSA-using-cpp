/*
WAP to find the roots of quadratic equation using function template
*/
#include<iostream>
#include<cmath>
using namespace std;
template<class T>
void calculate(T a, T b,T c){
     T d=b*b-4*a*c;
     if(d<0){
          cout<<"Roots are imaginary"<<endl;
     }
     else if(d==0){
          cout<<"Roots are real and equal"<<endl;
          cout<<"R1=R2="<<(-b/(2.0*a));
     }else{
          cout<<"Roots are real and unequal"<<endl;
          float r1=(-b+sqrt(d))/(2.0*a);
          float r2=(-b-sqrt(d))/(2.0*a);
          cout<<"R1="<<r1<<endl;
          cout<<"R2="<<r2<<endl;
     }
}
int main(){
     int a1,b1,c1;
     float a2,b2,c2;
     cout<<"Enter the integer coefficient "<<endl;
     cin>>a1>>b1>>c1;
     calculate(a1,b1,c1);
     cout<<"Enter the float coefficient "<<endl;
     cin>>a2>>b2>>c2;
     calculate(a2,b2,c2);
     return 0;
}
