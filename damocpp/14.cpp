/*
14. Write a program to overload unary minus(-) operator.
*/
#include <iostream>
using namespace std;
class Sample{
    int x;
    public:
    Sample(int a){
        x = a;
    }
    void operator-() {
        x=-x;
    }
    void display() {
        cout << "Value: " << x << endl;
    }
};
int main() {
    Sample s(10);
    s.display(); // Displays original value
    -s; // Calls overloaded unary minus operator
    s.display(); // Displays negated value
    return 0;
}