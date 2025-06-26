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
    void get() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter code: ";
        cin >> code;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
    }
};
class Teacher: public Staff {
    private:
    string subject;
    string publication;
    public:
    void get(){
        Staff::get();
        cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter publication: ";
        cin >> publication;
    }
    void display() {
        Staff::display();
        cout << "Subject: " << subject << endl;
        cout << "Publication: " << publication << endl;
    }
};
class Officer: public Staff {
    private:
    int grade;
    public:
    void get() {
        Staff::get();
        cout << "Enter grade: ";
        cin >> grade;
    }
    void display() {
        Staff::display();
        cout << "Grade: " << grade << endl;
    }
};
class Typist: public Staff {
    private:
    int speed;
    public:
    void get() {
        Staff::get();
        cout << "Enter typing speed: ";
        cin >> speed;
    }
    void display() {
        Staff::display();
        cout << "Typing Speed: " << speed << endl;
    }
};
class Regular: public Typist {
    float salary;
    public:
    void get() {
        Typist::get();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void display() {
        Typist::display();
        cout << "Salary: " << salary << endl;
    }
};
class Casual: public Typist{
    int daily;
    int wages;
    public:
    void get(){
        Typist::get();
        cout << "Enter number of days: ";
        cin >> daily;
        cout << "Enter the  wages: ";
        cin >> wages;
    }
    void display(){
        Typist::display();
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
    r.get();
    r.display();
    cout << "Enter Casual Staff Details:" << endl;
    c.get();
    c.display();
    cout << "Enter Teacher Details:" << endl;
    t.get();
    t.display();
    cout << "Enter Officer Details:" << endl;
    o.get();
    o.display();
    return 0;
}