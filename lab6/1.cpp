// Write a program to illustrate the dynamic memory allocation.
#include <iostream>
using namespace std;
int main(){
    int size, i;
    int *ptr;
    cout<<"enter the size:"<<endl;
    cin>>size;
    ptr = new int[size];
    for ( i = 0; i < size; i++){
        cout<<"enter the "<<i+1<<" element"<<endl;
        cin>>ptr[i];
    }
    cout<<"your entered details are:"<<endl;
    for(i=0; i<size; i++){
        cout<<ptr[i]<<" ";
    }
    delete[] ptr;
    return 0;
}