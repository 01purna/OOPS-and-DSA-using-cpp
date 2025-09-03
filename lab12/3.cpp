/*
Write a program that stores the object of student class. (Assume that data members
are roll, name and university_name) into a file and read values from the file and
display the data in console.
*/

#include <iostream>
#include <fstream>
using namespace std;
class Student{
    int roll;
    string name, uname;
    public:
    void getdata(){
        cout<<"enter the roll of a Student: "<<endl;
        cin>>roll;
        cout<<"enter the name of a Student: "<<endl;
        cin>>name;
        cout<<"enter the name of university of a Student: "<<endl;
        cin>>uname;
    }
    void showdata(){
            cout<<"NAME: "<<name<<endl;
            cout<<"ROLL No: "<<roll<<endl;;
            cout<<"UNIVERSITY NAME: "<<uname<<endl;        
    }
};
int main(){
    Student st;
    fstream file;
    file.open("Student.txt" ,ios::in|ios::out|ios::binary|ios::trunc);
    st.getdata();
    file.write((char *)&st, sizeof(st));
    file.seekg(0);
    cout<<"inforamation of a Student "<<endl;
    file.read((char * )&st, sizeof(st));
    st.showdata();
    file.close();
    return 0;
}


