/*
Create classes called class1 and class2 with each of having one private member. Add
member function to set a value(say setvalue()) one each class. Add one more function
max() that is friendly to both classes. max() function should compare two private member
of two classes and show maximum among them. Create one-one object of each class and
then set a value on them. Display the maximum number among them.
*/

#include <iostream>
using namespace std;
class class2;
class class1 {
private:
    int a;
public:
    void setvalue(int x) {
        a = x;
    }
    friend void max(class1, class2); 
};
class class2 {
private:
    int b;
public:
    void setvalue(int y) {
        b = y;
    }
    friend void max(class1, class2); 
};
void max(class1 p, class2 q) { 
    if (p.a > q.b) {
        cout << "Maximum value is: " << p.a << endl;
    } else {
        cout << "Maximum value is: " << q.b << endl;
    }
}
int main() {
    class1 p;
    class2 q;
    p.setvalue(10);
    q.setvalue(20);
    max(p, q); 
    return 0;
}