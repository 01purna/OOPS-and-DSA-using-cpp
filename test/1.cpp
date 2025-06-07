#include <iostream>
using namespace std;

// Class definition
class Student {
private:
    // Data members (private)
    string name;
    int age;

public:
    // Member function to set data
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    // Member function to display data
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Main function
int main() {
    Student s1;              // Creating an object of class Student
    s1.setData("John", 20);  // Calling member function
    s1.display();            // Displaying object data

    return 0;
}