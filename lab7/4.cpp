/*
Develop a complete program for an institution which wishes to maintain a database of its
staff. Declare a base class Staff which include staff_id and name.Now develop a records
for the following staffs with the given information below.
Lecturer(subject,department)
Administrative staff (Post,department)
*/
#include <iostream>
using namespace std;
class staff{
    protected:
    int id;
    char name[40];
    public:
    void get_info(){
        cout<<"enter the id of the staff"<<endl;
        cin>>id;
        cout<<"enter the name of the staff"<<endl;
        cin>>name;
    }
    void display_staff(){
        cout<<"ID: "<<id<<endl;
        cout<<"NAME: "<<name<<endl;
    }
};
class lecture: public staff{
   protected:
  char subject[50];
  char department[50];
  public:
    void get_lecture(){
        cout<<"enter the subject of the staff"<<endl;
        cin>>subject;
        cout<<"enter the department of the staff"<<endl;
        cin>>department;
    }
    void display_lecture(){
        cout<<"SUBJECT="<<subject<<endl;
        cout<<"DEPARTMENT="<<department<<endl;
    }
};
class administrative : public staff{
    protected:
    char post[50];
    public:
      void get_administrative(){
        cout<<"enter the post of the staff"<<endl;
        cin>>post;
    }
    void display_admist(){
        cout<<"POST: "<<post<<endl;
    }
};
int main(){
    lecture l1;
    administrative a1;
    l1.get_info();
    l1.get_lecture();
    a1.get_administrative();
    l1.display_staff();
    l1.display_lecture();
    a1.display_admist();
    return 0;
}