#include <iostream>
using namespace std;
int febi(int n){
    if(n==0 || n==1){
        return n;
    }
    return febi(n-1)+febi(n-2);
}
int main(){
    int n;
    cout<<"enter the nth term is feboniac series"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        int result=febi(i);
        cout<<result<<" ";
    }
    return 0;
}