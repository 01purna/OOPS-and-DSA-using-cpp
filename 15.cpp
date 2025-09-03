// lets assume youare developing a LMS(learining management system ) for a PU
// how u usedifferent data structure on this applicatipon exmpalin with example



/*
Create a base class Shape with a virtual method draw( ). Derive two classes Circle and
Square, each implementing the draw () method. Demonstrate the principle of
substitutability by storing objects of Circle and Square in Shape * pointer. Add an
additional method specialFeature( ) to Circle and explain why it cannot accessed via the
Shape* pointer.
*/
#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() = 0; 
};
class Circle : public Shape {
    public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
    void specialFeature() {
        cout << "Circle has a special feature" << endl;
    }
};
class Square : public Shape {
    public:
    void draw() {
        cout << "Drawing Square" << endl;
    }
};
int main() {
    Shape *bptr;
    Circle c;
    Square s;
    bptr = &c; 
    bptr->draw(); 
    bptr = &s; 
    bptr->draw(); 
    Circle *cptr = &c;
    cptr->specialFeature(); 
    return 0;
}

