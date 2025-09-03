/*
diamond proble/ multipath inheritance 
*/
#include <iostream>
using namespace std;
class College{
    string name, location;
    public:
    College(string na, string lo){
        name = na;
        location = lo;
    }
    void display1(){
        cout<<"COLLEGE NAME : "<<name<<endl;
        cout<<"LOCATION : "<<location<<endl;
    }
};
class Student: virtual public College{
    string name;
    int roll;
    public:
    Student(string na, string lo, string ne, int r):College(na, lo){
        string name = ne;
        roll = r;
    }
    void display2(){
        cout<<"STUDENT NAME : "<<name<<endl;
        cout<<"ROLL NO : "<<roll<<endl;
    }
};
class Teacher: virtual public College{
    string name;
    int code;
    public:
    Teacher(string na, string lo, string n, int c): College(na, lo){
        name = n;
        code = c;
    }
    void display3(){
        cout<<"TEACHER NAME : "<<name<<endl;
        cout<<"CODE : "<<code<<endl;
    }
};
class Books: public Student, public Teacher{
    string bookName;
    string writername;
    int code;
    public:
    Books(string na, string lo, string ne, int r, string n, int c, string bn, string wn, int co)
        : Student(na, lo, ne, r), Teacher(na, lo, n, c), College(na, lo) {
        bookName = bn;
        writername = wn;
        code = co;
    }
    void display4(){
        cout<<"BOOK NAME : "<<bookName<<endl;
        cout<<"WRITER NAME : "<<writername<<endl;
        cout<<"CODE : "<<code<<endl;
    }
};
int main(){
    Books b("ABC College", "New York", "jane doe", 101, "praadip", 202, "C++ Programming", "Jane Doe", 303);
    b.display1();
    b.display2();
    b.display3();
    b.display4();
    return 0;
}