#include<iostream>
using namespace std;
class Employee{
    int eid;
    float salary;
    public: 
    void getdata (){
    cout<<"Enter id and salary of employee"<<endl;
    cin>>eid>>salary;
    }
    void display(){
    cout<<"Emp ID:"<<eid<<endl;
    cout<<"Salary:"<<salary<<endl;
    }
};
class Company{
    string cname, department;
    Employee e;
    public:
    void getdata(){
        e.getdata();
        cout<<"Enter company name and Deparment:"<<endl;
        cin>>cname>>department;
    }
    void display(){
        e.display();
        cout<<"Company name:"<<cname<<endl;
        cout<<"Department:"<<department<<endl;
    }
};
int main(){
    Company c;
    c.getdata();
    c.display();
    return 0;
}