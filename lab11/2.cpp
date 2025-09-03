/*
Write a C++ Program to find Largest among two integers, characters and float using
function template
*/
#include <iostream>
using namespace std;
template <class T>
T islarge(T a, T b) {
    if(a>b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    char a='x', b='y';
    cout<<"largest among character is  : " << islarge(a, b) << endl;
    return 0;
}