//insertionn sort
#include <iostream>
using namespace std;
void insertion(int arr[]){
    cout<<"elements in  after insertion sort: "
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {5, 4, 3, 2, 1};
    for (int i = 0; i < 5; i++){
        int current = arr[i];
        int j= i-1;
        while(j>=0 && current < 5 ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    insertion(arr);
    return 0;
}