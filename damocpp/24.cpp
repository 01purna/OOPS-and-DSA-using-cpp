/*
Create a class named Employee with data members: emp_id, name, position and
salary. Now, input the records of n employees and store them in a file named
“employee.dat”. After writing the data to the file, read the records from the file and
display the information of those employees whose salary is greater than 25,000.
*/
#include <iostream>
#include <fstream>
using namespace std;
class Employee{
    int id;
    string name, position;
    float salary;
    public:
    void getdata(){
        cout<<"enter the id of a employee: "<<endl;
        cin>>id;
        cout<<"enter the name of a employee: "<<endl;
        cin>>name;
        cout<<"enter the position of a employee: "<<endl;
        cin>>position;
        cout<<"enter the salary of a employee: "<<endl;
        cin>>salary;
    }
    void showdata(){
        if(salary>25000){
            cout<<"NAME: "<<name<<endl;
            cout<<"ID: "<<id<<endl;;
            cout<<"POSITION: "<<position<<endl;
            cout<<"SALARY: "<<salary<<endl; 
        }
    }
};
int main(){
    Employee e[100];
    int n;
    cout<<"enter the number of a employee: "<<endl;
    cin>>n;
    fstream file;
    file.open("employee.txt" ,ios::in|ios::out|ios::binary|ios::trunc);
    for(int i=0; i<n; i++){t
        e[i].getdata();
        file.write((char *)&e[i], sizeof(e[i]));
    }
    file.seekg(0);
    cout<<"inforamation of a employee whose salary is >25000"<<endl;
    for(int i=0; i<n; i++){
        file.read((char * )&e[i], sizeof(e[i]));
        e[i].showdata();
    }
    file.close();
    return 0;
}
