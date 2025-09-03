/*
Write a complete program to convert the rectangular coordinates into polar coordinates
using suitable type conversion method
*/
#include <iostream>
#include <cmath>
using namespace std;
class Polar {
    float radius, angle;
    public:
    Polar() {
    }
    Polar(float r, float a) {
        radius = r;
        angle = a;
    }
    void display() {
        cout << "(" << radius << ", " << angle << ")" << endl;
    }
};
class Rectangular {
    int xco, yco;
    public:
    Rectangular() {
    }
    Rectangular(int x, int y) {
        xco = x;
        yco = y;
    }
    void display() {
        cout << "(" << xco << ", " << yco << ")" << endl;
    }
    operator Polar() {
        float r = sqrt(xco * xco + yco * yco);
        float a = atan(yco/xco); // angle in radians
        return Polar(r, a);
    }
};
int main() {
    Rectangular r(3, 4);
    cout << "Rectangular Coordinates: ";
    r.display();
    Polar p = r; // Implicit conversion from Rectangular to Polar
    cout << "Polar Coordinates: ";
    p.display();
    return 0;
}