/*
Write a C++ program to input records of n students(name, address and roll) and save
to the file. Display the record of only those student whose address is “Kathmandu”
after reading from the file.
*/

#include <iostream>
#include <fstream>
using namespace std;
class Student{
    int roll;
    string name, address;
    public:
    void getdata(){
        cout<<"enter the roll of a Student: "<<endl;
        cin>>roll;
        cout<<"enter the name of a Student: "<<endl;
        cin>>name;
        cout<<"enter the address of a Student: "<<endl;
        cin>>address;
    }
    void showdata(){
        if(address=="kathmandu"){
            cout<<"NAME : "<<name<<endl;
            cout<<"ROLL No : "<<roll<<endl;;
            cout<<"ADDRESS : "<<address<<endl;  
        }      
    }
};
int main(){
    Student st;
    fstream file;
    file.open("Studentdetails.txt" ,ios::in|ios::out|ios::binary|ios::trunc);
    st.getdata();
    file.write((char *)&st, sizeof(st));
    file.seekg(0);
    cout<<"inforamation of a Student whose address in kathmandu "<<endl;
    file.read((char * )&st, sizeof(st));
    st.showdata();
    file.close();
    return 0;
}


