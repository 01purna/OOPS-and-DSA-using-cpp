#include <iostream>
using namespace std;
class Person{
    protected:
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
class Account:virtual public Person{
    protected:
    float pay;
    public:
    void get_pay() {
        cout << "Enter pay: ";
        cin >> pay;
    }
    void display_pay() {
        cout << "Pay: " << pay << endl;
    }
};
class Admin:virtual public Person{
    protected:
    int experience;
    public:
    void get_exp() {
        cout << "Enter experience(in years): ";
        cin >> experience;
    }
    void display_exp() {
        cout << "experience: " << experience << endl;
    }
};
class Master: public Account, public Admin {
    public:
    void get_master() {
        Person::get_info();
        Account::get_pay();
        Admin::get_exp();
    }
    void display_master() {
        Person::display_info();
        Account::display_pay();
        Admin::display_exp();
    }
};
int main() {
    Master m;
    m.get_master();
    m.display_master();
    return 0;
}