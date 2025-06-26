// has a relationship
#include <iostream>
using namespace std;
class Person {
    private:
        string name;
        int code;
    public:
        void get_info() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter code: ";
            cin >> code;
        }
        void display_info() {
            cout << "Name: " << name << endl;       
            cout << "Code: " << code << endl;
        }   
};
class Reservation {
    int rid;
    string date;
    Person p; 
    public:
        void get_r() {
            p.get_info(); 
            cout << "Enter reservation ID: ";
            cin >> rid;
            cout << "Enter date (yyyy-mm-dd): ";
            cin >> date;
        }
        void display_r() {
            p.display_info(); 
            cout << "Reservation ID: " << rid << endl;
            cout << "Date: " << date << endl;
        }
};
int main() {
    Reservation r;
    r.get_r();
    r.display_r();
    return 0;
}