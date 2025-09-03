/*
1. Create two classes named Vehicle1 and Vehicle2, each having a private data member
named, price. Add a member function setPrice() in each class to assign a value of price. Also, define a friend function max() that has access to both classes. The max() function should compare the price values and display the maximum price.
*/
#include <iostream>
using namespace std;
class Vehicle2; 
class Vehicle1 {
    private:
        string name;
        float price;
    public:
        void setPrice() {
            price = 1500.05;
        }
        friend void max(Vehicle1 v1, Vehicle2 v2);  
};
class Vehicle2 {
    private:
        string name;
        float price;
    public:
        void setPrice() {
            price = 1700.05;
        }
        friend void max(Vehicle1 v1, Vehicle2 v2);  
};
void max(Vehicle1 v1, Vehicle2 v2) {
    if (v1.price > v2.price) {
        cout << "Maximum price is: " << v1.price << endl;
    } else {
        cout << "Maximum price is: " << v2.price << endl;
    }
}
int main() {
    Vehicle1 v1;
    Vehicle2 v2;
    v1.setPrice();
    v2.setPrice();
    max(v1, v2);
    return 0;
}


