/*
Using class write a program that receives inputs principle amount, time and rate.
Keeping rate 8% as the default argument, calculate simple interest for three
customers.
*/
#include <iostream>
using namespace std;
class SI {
    float principal;
    float time;
    float rate;
    float si;
    public:
    SI(float p, float t, float r = 8.0) {
        principal = p;
        time = t;
        rate = r;
    }
    void calculate() {
        si = (principal * time * rate) / 100;
    }
    void display() {
        cout << "Principal: " << principal << ", Time: " << time 
             << ", Rate: " << rate << "%, Simple Interest: " << si << endl;
    }
};
int main(){
     for(int i=0; i<3; i++){
        float p, t, r = 8.0; // Default rate is 8%
        cout << "Enter principal amount and time (in years) for customer " << (i + 1) << ": ";
        cin >> p >> t;
        if (i == 2) { // For the third customer, ask for a custom rate
            cout << "Enter rate of interest for customer " << (i + 1) << ": ";
            cin >> r;
        }
        SI customer(p, t, r);
        customer.calculate();
        customer.display();
     }
}
