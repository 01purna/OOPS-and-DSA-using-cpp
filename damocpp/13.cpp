/*
13. Write a program that illustrate the concept of runtime polymorphism.
*/
#include <iostream>
using namespace std;
class Shape{
    public:
        virtual void draw() {
            cout << "Drawing a shape" << endl;
        }
};
class Circle : public Shape {
    public:
        void draw() {
            cout << "Drawing a circle" << endl;
        }
};
class Square : public Shape {
    public:
        void draw() {
            cout << "Drawing a square" << endl;
        }
};
int main(){
    Shape *bptr;
    Circle c;
    Square s;
    bptr = &c;
    bptr->draw(); // Calls Circle's draw method
    bptr = &s;
    bptr->draw(); // Calls Square's draw method
    return 0;
}
