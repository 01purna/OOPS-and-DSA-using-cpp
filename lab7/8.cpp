/*
 An educational institution wishes to maintain a database of its employees. The database is
divided into a number of classes whose hierarchical relationship are shown below. The figure
also shows minimum information requires for each class. Specify all the classes and define
functions to create database and retrieve individual information when required.
*/
#include <iostream>
using namespace std;
class Staff {
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
class Teacher: public Staff {
    private:
    string subject;
    string publication;
    public:
    void get_teach(){
        cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter publication: ";
        cin >> publication;
    }
    void display_teach() {
        cout << "Subject: " << subject << endl;
        cout << "Publication: " << publication << endl;
    }
};
class Officer: public Staff {
    private:
    string grade;
    public:
    void get_off() {
        cout << "Enter grade: ";
        cin >> grade;
    }
    void display_off() {
        cout << "Grade: " << grade << endl;
    }
};
class Typist: public Staff {
    private:
    int speed;
    public:
    void get_ty() {
        cout << "Enter typing speed: ";
        cin >> speed;
    }
    void display_ty() {
        cout << "Typing Speed: " << speed << endl;
    }
};
class Regular: public Typist {
    float salary;
    public:
    void get_reg() {
        cout << "Enter salary: ";
        cin >> salary;
    }
    void display_reg() {
        cout << "Salary: " << salary << endl;
    }
};
class Casual: public Typist{
    int daily;
    int wages;
    public:
    void get_cau() {
        cout << "Enter number of days: ";
        cin >> daily;
        cout << "Enter the  wages: ";
        cin >> wages;
    }
    void display_cau(){
        cout << "numbe of days : " << daily << endl;
        cout << "Daily Wages : " << wages << endl;
    }
};
int main(){
    Regular r;
    Casual c;
    Teacher t;
    Officer o;
    cout << "Enter Regular Staff Details:" << endl;
    r.get_info();
    r.get_ty();
    r.get_reg();
    r.display_info();
    r.display_ty();
    r.display_reg();
    cout << "Enter Casual Staff Details:" << endl;
    c.get_info();
    c.get_ty();
    c.get_cau();
    c.display_info();
    c.display_ty();
    c.display_cau();
    cout << "Enter Teacher Details:" << endl;
    t.get_info();
    t.get_teach();
    t.display_info();
    t.display_teach();
    cout << "Enter Officer Details:" << endl;
    o.get_info();
    o.get_off();
    o.display_info();
    o.display_off();
    return 0;
}