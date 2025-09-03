#include <iostream>
using namespace std;
int binarysearch(int arr[], int x, int low, int high){
      if(low <= high){
         int mid = low+(high-low)/2;
        if (x==arr[mid]){
            return mid;
        }
        if(x>arr[mid]){
            binarysearch(arr, x, mid+1, high);
        }else{
            binarysearch(arr, x, low, mid-1 );
        }
      }else{
            return -1;
      } 
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int x=6;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarysearch(arr, x, 0, n-1);
    if(result==-1){
        cout<<"not found";
    }else{
        cout<<"element is found at "<<result;
    }

    return 0;
}