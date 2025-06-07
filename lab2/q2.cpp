/*
Write a program to create a structure in C++ named Hospital giving details about the patient
admitted. Details are:
• Patient name
• Age
• Gender
• Nature of illness
Modify Que no. 1 by adding data member Date of Birth (Implement concept of nested structure)
 */
#include <iostream>
using namespace std;
struct dob{
    int dd, mm, yy;
};

struct Hospital {
    string patientName;
    int age;
    string gender;
    string natureOfIllness;
    struct dob d;
    // Nested structure for date of birth  
};
int main() {
    Hospital p;

    // Input patient details
    cout << "Enter patient name: "<<endl;
    getline(cin, p.patientName);
    cout << "Enter age: ";
    cin >> p.age;
    cin.ignore(); // Ignore the newline character left in the buffer
    cout << "enter the gender of the patient:"<<endl;
    getline(cin, p.gender);
    cout << "enter the nature of illness: "<<endl;
    getline(cin, p.natureOfIllness);
    cout << "Enter date of birth (yyyy mm dd): "<<endl;
    cin >>p.d.yy >> p.d.mm >>p.d.dd;
    cin.ignore(); // Ignore the newline character left in the buffer
    // Display patient details
    cout << "Patient Details:" << endl;
    cout << "Name: " << p.patientName << endl;
    cout << "Age: " << p.age << endl;
    cout <<"gender : "<<p.gender<<endl;
    cout << "Nature of Illness: " << p.natureOfIllness << endl;
    cout << "Date of Birth: " << p.d.yy << "-" << p.d.mm << "-" << p.d.dd << endl;
    return 0;
}