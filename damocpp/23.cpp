/*
23. Write a C++ program to illustrate reading and writing into multiple files.
*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //writing into a file
    ofstream fout;
    fout.open("fruits");
    fout<<" Apple "<<" Mango "<<" Banana"<<endl;
    fout.close();
    fout.open("vegetable");
    fout<<" Potato "<<" Cauliflower "<<" Cabbage "<<endl;
    //reading from the file
    char line[50];
    ifstream fin;
    fin.open("fruits");
    cout<<"contents of a fruit is: "<<endl;
    while(fin){
        fin.getline(line, 50);
        cout<<line<<endl;
    }
    fin.close();
    fin.open("vegetable");
    cout<<"contents of a vegetable is: "<<endl;
    while(fin){
        fin.getline(line, 50);
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}