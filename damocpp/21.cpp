#include <iostream>
using namespace std;

template <class T>
void swapValues(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 10;
    cout << "Before swapping (int): a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swapping (int):  a = " << a << ", b = " << b << endl << endl;

    float c = 5.01, d = 10.01;
    cout << "Before swapping (float): c = " << c << ", d = " << d << endl;
    swapValues(c, d);
    cout << "After swapping (float):  c = " << c << ", d = " << d << endl << endl;

    char ac = 'A', bc = 'B';
    cout << "Before swapping (char): ac = " << ac << ", bc = " << bc << endl;
    swapValues(ac, bc);
    cout << "After swapping (char):  ac = " << ac << ", bc = " << bc << endl;

    return 0;
}