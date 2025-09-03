/*
Create a function templates to find the sum of two integers and floats using function
template.
*/
#include <iostream>
using namespace std;
template <class T>
T sum(T a, T b) {
    return a + b;
}
int main() {
    int a=1, b=2;
    float x=1.5, y=2.5;
    cout<<"Sum of integers: " << sum(a, b) << endl;
    cout << "Sum of floats: " << sum(x, y) << endl;
    return 0;
}