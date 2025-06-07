/*
Create a class person with data members name, age, address and citizenship number.
Write a constructor to initialize the value of a person. Assign citizenship number if
the age of the person is greater than 16 otherwise assign zero to citizenship number.
Also create a function to display values.
*/
#include <iostream>
using namespace std;
class Person{
    private:
    char name[20];
    int age;
    char address[40];
    long int citno;
    public:
    Person (char n[], int ae, char a[], long int c){
        strcpy(name, n);
        age=ae;
        strcpy(address, a);
        citno=c;
    }
    void display(){
      cout<<endl<<endl<<"your entered details are:"<<endl;
      cout<<"NAME:"<<name<<endl;
      cout<<"AGE:"<<age<<endl;
      cout<<"ADDRESS:"<<address<<endl;
      cout<<"CITIZEN NO.:"<<citno<<endl;
    }
};
int main(){
   char name[40];
   int age;
   char address[50];
   long int citno=0;
   cout<<"enter the name"<<endl;
   cin>>name;
   cout<<"enter the age"<<endl;
   cin>>age;
   cout<<"enter the address"<<endl;
   cin>>address;
   if(age>16){
     cout<<"enter the citizen no."<<endl;
     cin>>citno;
   }
   Person p(name, age, address, citno);
   p.display();
    return 0;
}