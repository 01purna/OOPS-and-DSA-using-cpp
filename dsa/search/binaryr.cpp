//binary search in an array
#include <iostream>
using namespace std;
int binarysearch(int arr[], int x, int low, int high){
     int i=0;
    while(low <= high){
        cout<<"itterative -"<<i<<endl;
        int mid = low+(high-low)/2;
        if (x==arr[mid]){
            return mid;
        }
        if(x>arr[mid]){
            low = mid+1;
        }else{
            high= mid-1;
        }
        i++;
    }
    return -1;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int x=1;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarysearch(arr, x, 0, n-1);
    if(result==-1){
        cout<<"not found";
    }else{
        cout<<"element is found at "<<result;
    }

    return 0;
}