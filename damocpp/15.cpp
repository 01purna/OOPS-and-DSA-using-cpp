/*
 Write a complete program to convert the polar coordinates into rectangular coordinates
using suitable type conversion method.
*/
#include <iostream>
#include <cmath>    
using namespace std;
class Rectangular {
    int xco, yco;
    public:
    Rectangular(){  
    }
    Rectangular(int x, int y){
        xco = x;
        yco = y;
    }
    void display() {
        cout << "(" << xco << ", " << yco << ")" << endl;
    }

};
class Polar {
    float radius, angle;
    public:
    Polar(){
    }
    Polar(float r, float a){
        radius = r;
        angle = a;
    }
    void display() {
        cout << "(" << radius << ", " << angle << ")" << endl;
    }
    operator Rectangular() {
        int x = radius * cos(angle);
        int y = radius * sin(angle);
        return Rectangular(x, y);
    }
};
int main(){
    Polar p(5, 0.927); // radius = 5, angle = 0.927 radians
    cout << "Polar Coordinates: ";
    p.display();
    Rectangular r = p; // Implicit conversion from Polar to Rectangular
    cout << "Rectangular Coordinates: ";
    r.display();
    return 0;   
}