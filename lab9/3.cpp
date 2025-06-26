/*
Write a program to generate Fibonacci series using operator overloading of ++
operator.
*/
#include <iostream>
using namespace std;
class Febi{
    int a,b,c;
    public:
    Febi(){
        a=-1;
        b=1;
        c=a+b;
    }
    void display(){
        cout<<c<<", ";
    }
    void operator ++(){
        a=b;
        b=c;
        c=a+b;
    }
};
int main(){
    int n;
    cout<<"enter the nth number"<<endl;
    cin>>n;
    Febi f;
    for(int i=0; i<n; i++){
        f.display();
        ++f;
    }
    return 0;
}