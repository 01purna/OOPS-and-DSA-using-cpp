// WAP to find the sum of n numbers entered by user using Dynamic Memory Allocation in
// C++.
#include <iostream>
using namespace std;
int main(){
    int size, i, sum=0;
    int *ptr;
    cout<<"enter the size:"<<endl;
    cin>>size;
    ptr = new int[size];
    for ( i = 0; i < size; i++){
        cout<<"enter the "<<i+1<<" element"<<endl;
        cin>>ptr[i];
    }
    for(i=0; i<size; i++){
        sum=sum+ptr[i];
    }
    cout<<"the sum of entered number is "<<sum<<endl;
    delete[] ptr;
    return 0;
}