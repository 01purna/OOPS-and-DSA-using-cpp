//bubble sort 
#include <iostream>
using namespace std;
int main(){
    int n, arr[40];
    cout<<"enter the number of term "<<endl;
    cin>>n;
    cout<<"enter "<<n<<" number of element"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j < n-i-1; j++){
            if(arr[j+1]<arr[j]){
                int temp;
                temp = arr[j];
                arr[j] =  arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"element in bubble sort is : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}