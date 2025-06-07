#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else
    {
        return gcd(b , a%b);
    }
}
int main(){
    int a,b;
    cout<<"enter any two number"<<endl;
    cin>>a>>b;
    gcd(a,b);
    cout<<"the GCD is "<< gcd(a,b);
    return 0;
}