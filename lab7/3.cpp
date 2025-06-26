/*
WAP to show that how inheritance supports reusability
*/
#include <iostream>
using namespace std;
class info{
    protected:
    char name[50];
    int roll;
    char faculty[40];
    public:
    void get_info(){
        cout<<"enter the name of the student"<<endl;
        cin>>name;
        cout<<"enter the roll no of the student"<<endl;
        cin>>roll;
        cout<<"enter the faculty of the student"<<endl;
        cin>>faculty;
    }
};
class marks: public info{
   protected:
    int mark1, mark2, mark3;
    public:
    void get_mark(){
        cout<<"enter the marks of  three subjects "<<endl;
        cin>>mark1>>mark2>>mark3;
    }
};
class result : public marks{
    public:
    void display(){
       cout<<"NAME: "<<name<<endl;
        cout<<"ROLL NO.: "<<roll<<endl;
        cout<<"FACULTY: "<<faculty<<endl;
         cout<<"mark1="<<mark1<<"mark2="<<mark2<<"mark3="<<mark3<<endl;
        if(mark1>=45 && mark2>=45 && mark3>=45 ){
            cout<<"passed"<<endl;
        }else{
            cout<<"failed"<<endl;
        }
    }
};
int main(){
    result r[100];
    int n;
    cout<<"enter the number of student"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        r[i].get_info();
        r[i].get_mark();
    }
     for(int i=0; i<n; i++){
       r[i].display();
    }
    return 0;
}