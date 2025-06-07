/*
Write a simple program using of dynamic memory allocation which should include
calculation of marks of 3 subjects of n students and displaying the result as pass or fail & name, roll. Pass mark is 45 out of 100 in each subject
*/ 
#include <iostream>
using namespace std;
class Student{
    private:
    char name[30];
    int rollno;
    float mark1, mark2, mark3;
    public:
    void getdata(){
        cout<<"enter tha name of the student"<<endl;
        cin>>name;
        cout<<"enter tha roll no. of the student"<<endl;
        cin>>rollno;
        cout<<"enter the makrs of three subject the student"<<endl;
        cin>>mark1>>mark2>>mark3;
    }
    void display(){
        if(mark1 >= 45 && mark2 >= 45 && mark3 >= 45){
            cout<<"----------------"<<endl;
            cout<<"NAME:"<<name<<endl;
            cout<<"----------------"<<endl;
            cout<<"ROLL NO. "<<rollno<<endl;
            cout<<"----------------"<<endl;
            cout<<"RESULT:"<<"--PASS--"<<endl;
            cout<<"----------------"<<endl;
        }else{
            cout<<"----------------"<<endl;
             cout<<"NAME:"<<name<<endl;
             cout<<"----------------"<<endl;
            cout<<"ROLL NO. "<<rollno<<endl;
            cout<<"----------------"<<endl;
            cout<<"RESULT:"<<"--FAILED--"<<endl;
            cout<<"----------------"<<endl;
        }
    }
};
int main(){
    int size;
    Student *ptr;
    cout<<"enter the number of student"<<endl;
    cin>>size;
    ptr = new Student[size];
    for(int i=0; i<size; i++){
        ptr[i].getdata();
        ptr[i].display();
    }
    return 0;
}