/*
11.Write a program to input two vector coordinates from the base class named “Base”. Class
“Derived” inherits all the properties of class “Base”. Class “Derived” must contain a function
named add_vector() that add the two vectors input from the base class and finally display the
result from the function display() that is friend to the base class.
*/
#include <iostream>
using namespace std;
class Base {
    protected:
        int x1, y1, x2, y2, x, y;
    public:
        void get_vector() {
            cout << "Enter first vector  (x1 y1): ";
            cin >> x1 >> y1;
            cout << "Enter second vector  (x2 y2): ";
            cin >> x2 >> y2;
        }
        friend void display(Base &b); 
};
class Derived : public Base {
    public:
        void add_vector(){
            x = x1 + x2;
            y = y1 + y2;
        }
};
void display(Base &b) {
            cout << "Resultant vector : (" << b.x << ", " << b.y << ")" << endl;
}
int main() {
    Derived d;
    d.get_vector();
    d.add_vector();
    display(d); 
    return 0;
}