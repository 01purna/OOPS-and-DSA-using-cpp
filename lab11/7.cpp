/*
Write a program to illustrate exception handling mechanism in C++.
*/
#include <iostream>
using namespace std;
int main(){
    int a, b, result;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    result=a-b;
    try{
        if(result!=0){
            cout<<"result (1/result)= "<<a/result<<endl;
        }else{
            throw resultk;//throw an objectww
        }
    }
    catch(int x){
        cout<<"exceptiom cought :divided by zero "<<endl;
        cout<<"end"<<endl;
    }
    return 0;
}