/*
Create a base class student. Use the class to store name, dob, rollno and includes the
member function getdata(), discount().Derive two classes PG and UG from student..
make dispresult() as virtual function in the derived class to suit the requirement.
*/
#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    string name;
    string dob;
    int rollno;
public:
    void getdata() {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Date of Birth (dd/mm/yyyy): ";
        cin>>dob;
        cout<<"Enter Roll Number: ";
        cin>>rollno;
    }
    virtual void dispresult() = 0; // Pure virtual function
};
class UG : public Student {
public:
    void dispresult() {
        cout << "Undergraduate Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Roll Number: " << rollno << endl;
    }
};
class PG : public Student {
public:
    void dispresult() {
        cout << "Postgraduate Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Roll Number: " << rollno << endl;
    }
};
int main() {
    UG u;
    PG p;
    cout << "Enter details for UG Student:" << endl;
    u.getdata();
    cout << "Enter details for PG Student:" << endl;
    p.getdata();
    Student* s1 = &u;
    Student* s2 = &p;
    s1->dispresult();
    s2->dispresult();
    return 0;
}
