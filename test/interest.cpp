/*
 Using class write a program that receives inputs principal amount, time and rate.
Keeping rate 8% as the default argument, calculate simple interest for three
customers.
*/
#include <iostream>
using namespace std;
class SimpleInterest {
private:
    double principal;
    double time;
    double rate;
public:
    // Constructor with default rate value
    SimpleInterest(double p, double t, double r = 8.0) : principal(p), time(t), rate(r) {}

    // Function to calculate simple interest
    double calculateInterest() {
        return (principal * rate * time) / 100;
    }
};
int main() {
    double principal, time;

    // Input for first customer
    cout << "Enter principal amount for customer 1: ";
    cin >> principal;
    cout << "Enter time (in years) for customer 1: ";
    cin >> time;
    SimpleInterest customer1(principal, time);
    cout << "Simple Interest for customer 1: " << customer1.calculateInterest() << endl;

    // Input for second customer
    cout << "Enter principal amount for customer 2: ";
    cin >> principal;
    cout << "Enter time (in years) for customer 2: ";
    cin >> time;
    SimpleInterest customer2(principal, time);
    cout << "Simple Interest for customer 2: " << customer2.calculateInterest() << endl;

    // Input for third customer
    cout << "Enter principal amount for customer 3: ";
    cin >> principal;
    cout << "Enter time (in years) for customer 3: ";
    cin >> time;
    SimpleInterest customer3(principal, time);
    cout << "Simple Interest for customer 3: " << customer3.calculateInterest() << endl;

    return 0;
}
