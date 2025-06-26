/*
Write a Program to overload multiplication operator(*) showing the multiplication of
two objects.
*/
#include <iostream>
using namespace std;
class Multi {
    int a;
public:
    Multi() {
    }
    Multi(int x ) {
        a = x;
    }
    void display() {
        cout << "a = " << a << endl;
    }
    Multi operator *(Multi m) {
        Multi temp;
        temp.a = a * m.a;
        return temp;
    }
};
int main() {
    Multi m1(5), m2(10);
    Multi m3;
    m3 = m1 * m2;
    cout << "m1: ";
    m1.display();
    cout << "m2: ";
    m2.display();
    cout << "m3 (m1 * m2): ";
    m3.display();
    return 0;
}