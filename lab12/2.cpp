/*
Write a single program to implement the following details:
✓ Create a file named “fruits” and write Apple, Mango, Banana to the file and read
from the file and display it.
✓ Create a file named “vegetable” and Write Potato, Cauliflower, Cabbage to the file
and read from the file and display it
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