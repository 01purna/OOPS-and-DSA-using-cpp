/*
Write a program to create a structure in C++ named Hospital giving details about the patient
admitted. Details are:
• Patient name
• Age
• Gender
• Nature of illness
 */
#include <iostream>
using namespace std;
struct Hospital {
    string patientName;
    int age;
    string gender;
    string natureOfIllness;
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
    // Display patient details
    cout << "Patient Details:" << endl;
    cout << "Name: " << p.patientName << endl;
    cout << "Age: " << p.age << endl;
    cout <<"gender : "<<p.gender<<endl;
    cout << "Nature of Illness: " << p.natureOfIllness << endl;
    return 0;
}