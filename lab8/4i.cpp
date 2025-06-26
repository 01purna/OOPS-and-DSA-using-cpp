#include <iostream>
#include <cstring>
using namespace std;
class College{
    protected:
    string name;
    string location;
    public:
    College(string n, string l){
       name=n;
       location=l;
    }
    void show_a(){
        cout<<"the name of the college is : "<<name<<endl;
        cout<<"the location of the college is : "<<location<<endl;
    }
};

class Student:virtual public College{
    protected:
    string name;
    int roll;
    public:
    Student( string n, string l, string na, int r):College(n,l){
       name=na;
       roll=r;
    }
    void show_b(){
        cout<<"the name of the student is : "<<name<<endl;
        cout<<"the roll no of the "<< name <<" is "<<roll<<endl;
    }
};
class Teacher: virtual public College{
    protected:
    string name;
    int code;
    public:
    Teacher( string n ,string l, string ne, int c):College(n,l){
       name=ne;
       code=c;
    }
    void show_c(){
        cout<<"the name of the teacher is : "<<name<<endl;
        cout<<"the code no of the "<< name <<" is "<<code<<endl;
    }
};
class Books : public Student, public Teacher{
    string name, writername;
    int code;
    public:
    Books(string n, string l, string na, int r, string ne, int c, string nam,string wname, int co)
     :Student(n,l,na, r), Teacher(n, l, ne, c),College(n, l){
       name = nam;
       writername = wname;
       code = co;
    }
    void show_d(){
        cout<<"name of the book is  "<<name<<endl;
        cout<<"writer of "<<name<<" book is "<<writername<<endl;
        cout<<"code of "<<name<<" book is "<<code<<endl;
        
    }
};
int main(){
    string college_name="everest";
    string college_location="sapepa";
    string student_name="purna";
    int rollno=31;
    string teacher_name="pradip";
    int teacher_code=1001;
    string bname="c++";
    string writer_name="myself";
    int book_code=1098;
    //(String n, String l,string na, int r string ne, int c, string nam,string wname, int co)
    Books b(college_name,college_location, student_name,rollno, teacher_name, teacher_code, bname, writer_name, book_code);
    b.show_a();
    b.show_b();
    b.show_c();
    b.show_d();
    return 0;
}