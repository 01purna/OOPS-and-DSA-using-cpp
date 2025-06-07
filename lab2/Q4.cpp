/*
In main ( ) function create one object of class Employee and call member function to
initialize and display the information of employee.
allow only those employees to be displayed whose salary is greater than 50000.
*/

#include <iostream>
using namespace std;
class Employee {
    private:
    int Emp_id;
    string name;
    string address; 
    float salary;
    string department;
    public:
    void initilize(){
        cout << "Enter Employee ID: ";
        cin >> Emp_id;
        cin.ignore(); // Ignore the newline character left in the buffer
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Employee Address: ";
        getline(cin, address);
        cout << "Enter Employee Salary: ";
        cin >> salary;
        cin.ignore(); // Ignore the newline character left in the buffer
        cout << "Enter Employee Department: ";
        getline(cin, department);
    }
    void display(){
        if(salary >50000){
            cout << "Employee ID: " << Emp_id << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Address: " << address << endl;
            cout << "Employee Salary: " << salary << endl;
            cout << "Employee Department: " << department << endl;
        }
    }
};
int main() {
    int n=2;
    Employee emp[n];
    for(int i=0; i<n; i++){
        cout << "Enter details for Employee " << i+1 << ":" << endl;
        emp[i].initilize();
    }
    cout << "\nEmployee Details:" << endl;
    for(int i=0; i<n; i++){
        emp[i].display();
        cout << endl;
    }
    return 0;
}
        