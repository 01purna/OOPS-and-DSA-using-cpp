/*
Write a program to input Book_name, Publication and price. Now store these
information in a file named “Library.dat” and display it.
*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream outfile("Library.dat");
    string book_name, publication;
    float price;
    cout<<"enter the book name and publication :"<<endl;
    cin>>book_name>>publication;
    outfile<<book_name<<publication;
    cout<<"enter the price of a book: "<<endl;
    cin>>price;
    outfile<<price;
    ifstream infile("Library.dat");
    infile>>book_name;
    infile>>publication;
    infile>>price;
    cout<<"name of a book: "<<book_name<<endl;
    cout<<"publication  of a book: "<<publication<<endl;
    cout<<"price of a book: "<<price<<endl;
    return 0;
}