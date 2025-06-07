/*
Create a class called employee with data member Code, Name, address, salary. Create
a constructor to initialize the member of the class. Also create the another constructor
so that we can create an object from another object. Define member function display()
to display the information of the class.
*/
#include <iostream>
#include <cstring>

using namespace std;
class employee{
   int code;
   char name[30];
   char address[40];
   float salary;
    public:
    employee(int c, const char n[], const char a[], float s){
        code=c;
        strcpy(name, n);
        strcpy(address, a);
        salary=s;
    }
    employee(employee &e){
        code=e.code;
        strcpy(name, e.name);
        strcpy(address, e.address);
        salary=e.salary;
    }
    void display(){
        cout<<"code:"<<code<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"address:"<<address<<endl;
        cout<<"salary:"<<salary<<endl<<endl;
    }
};
int main(){
    int code=100;
    employee e(code, "purna", "kathmandu", 5000.01);
    employee e2(e);
    e.display();
    e2.display();
    return 0;
}
