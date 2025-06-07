/*
1.Write a program to create a structure in C++ named Hospital giving details about the patient
admitted. Details are:
• Patient name
• Age
• Gender
• Nature of illness
2---Modify Que no. 1 by adding data member Date of Birth (Implement concept of nested structure)
3---Now, modify Que no. 2 for 50 Patients. (Implement concept of array of structure)
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
    Hospital p[2];

    // Input patient details
    for(int i=0; i<2; i++){
        cout << "Enter patient "<<i+1<<" name: "<<endl;
    getline(cin, p[i].patientName);
    cout << "Enter age: ";
    cin >> p[i].age;
    cin.ignore(); // Ignore the newline character left in the buffer
    cout << "enter the gender of the patient:"<<endl;
    getline(cin, p[i].gender);
    cout << "enter the nature of illness: "<<endl;
    getline(cin, p[i].natureOfIllness);
    cout << "Enter date of birth (yyyy mm dd): "<<endl;
    cin >>p[i].d.yy >> p[i].d.mm >>p[i].d.dd;
    cin.ignore(); // Ignore the newline character left in the buffer

    }
    
    // Display patient details
    cout << "Patient Details:" << endl;
    cout <<"NAME:     "<<"AGE:     "<<"GENDER:     "<<"NATURE OF ILLNESS:     "<<"DATE OF BIRTH: "<<endl;
    for(int i=0; i<2; i++){
        cout << p[i].patientName << "     " << p[i].age << "     " << p[i].gender << "     " << p[i].natureOfIllness << "     " 
         << p[i].d.yy << "-" << p[i].d.mm << "-" << p[i].d.dd << endl;
       
    }
 
    return 0;
}