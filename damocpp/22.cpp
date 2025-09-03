/*
Write a program that prompts the user to enter their name and age. Write the entered data into a file named “userinfo.txt”, read details from “userinfo.txt” and display the data on
console
*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream outfile("userinfo.txt");
    string name;
    int age;
    cout<<"enter the  name a :"<<endl;
    cin>>name;
    outfile<<name;
    cout<<"enter the age : "<<endl;
    cin>>age;
    outfile<<age;
    ifstream infile("Library.dat");
    infile>>name;
    infile>>age;
    cout<<"name of a person: "<<name<<endl;
    cout<<"age  of a person: "<<age<<endl;
    return 0;
}