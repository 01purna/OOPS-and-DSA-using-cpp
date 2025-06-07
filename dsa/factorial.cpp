#include <iostream>
using namespace std;
int factorail(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorail(n-1);
}
int main(){
    int a, result;
    cout<<"enter the number which factorial you want"<<endl;
    cin>>a;
    result=factorail(a);
    cout<<"the factorial of "<<a<<" is "<<result <<endl;

    return 0;
}