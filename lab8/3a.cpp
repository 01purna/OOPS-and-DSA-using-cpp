/*
Create a class person with data members name, age and address. Create another class
teacher with data members Qualification and department .Also create another class Student
with data members program and semester. Both class are inherited from class person. Every
class has at least one constructor which uses base class constructor. Create member function
showdata() in each to display the information of the class member.
*/
#include <iostream>
#include <cstring>
using namespace std;
class Person {
    protected:
        string name;
        int age;
        string address;
    public:
        Person(string n, int a, string addr) {
            name = n;
            age = a;
            address = addr;
        }
        void showdata() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Address: " << address << endl;
        }
};
class Teacher : public Person {
    private:
        string qualification;
        string department;
    public:
        Teacher(string n, int a, string addr, string qual, string dept) : Person(n, a, addr){
            qualification = qual;
            department = dept;
        }
        void showdata() {
            Person::showdata();
            cout << "Qualification: " << qualification << endl;
            cout << "Department: " << department << endl;
        }
};
class Student : public Person {
    private:
        string program;
        int semester;
    public:
        Student(string n, int a, string addr, string prog, int sem) : Person(n, a, addr) {
            program = prog;
            semester = sem;
        }
        void showdata() {
            Person::showdata();
            cout << "Program: " << program << endl;
            cout << "Semester: " << semester << endl;
        }
};
int main(){
    Teacher t("pradip", 35, "pokhara", "masters Computer enginnering", "IT,software & computer");

    Student s("purna", 19, "sanepa", "computer Engineering", 2);
    
    cout << "Teacher Information:" << endl;
    t.showdata();
    
    cout << "\nStudent Information:" << endl;
    s.showdata();
    
    return 0;
}