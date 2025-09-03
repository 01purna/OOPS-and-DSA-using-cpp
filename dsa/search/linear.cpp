//linear search in an array
#include <iostream>
using namespace std;
int main(){
    int arr[20];
    int n;
    int key=1;
    cout<<"enter the number of element in an array"<<endl;
    cin>>n;
    cout<<"enter"<< n<<"number of element"<<endl;
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(key==arr[i]){
            cout<<"element found"<<endl;
        }
    }
    cout<<"successful linear search"<<endl;
    return 0;
}