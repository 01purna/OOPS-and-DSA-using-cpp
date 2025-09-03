/*
6.Write a program to input n numbers and find their sum using dynamic memory
allocation
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* arr = new int [n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    cout << "The sum of the entered numbers is: " << sum << endl;
    delete[] arr;
    return 0;
}