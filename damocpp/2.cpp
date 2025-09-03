/*
2. Write a program to swap the values of two different classes using friend function.
*/
#include <iostream>
using namespace std;
class ClassB; // Forward declaration
class ClassA {
    private:
        int a;
    public:
        void setValue() {
           cout << "Enter value for a: ";
           cin >> a;
        }
        void display() {
            cout << "Value of a : " << a << endl;
        }
        friend void swap(ClassA &a1, ClassB &b1); // Friend function
};
class ClassB {
    private:
        int b;
    public:
        void setValue() {
           cout << "Enter value for b: ";
           cin >> b;
        }
        void display() {
            cout << "Value of b : " << b << endl;
        }
        friend void swap(ClassA &a1, ClassB &b1); // Friend function
};
void swap(ClassA &a1, ClassB &b1) {
    int temp = a1.a;
    a1.a = b1.b;
    b1.b = temp;
}
int main() {
    ClassA a1;
    ClassB b1;
    a1.setValue();
    b1.setValue();
    cout << "Before swapping:" << endl;
    a1.display();
    b1.display();
    swap(a1, b1);
    cout << "After swapping:" << endl;
    a1.display();
    b1.display();
    return 0;
}