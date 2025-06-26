/*
4. Create two classes Publication and Sales. The Publication class holds title and price and the Sales class holds the total monthly sales. 
Derive a class called Book from both Publication and Sales. 
The book class stores author’s name and page count. Each of these three classes should
have a function Display() to print the information of classes and should have at least one constructor that is inherited to derived class as well. Write a program to implement these classes.
*/
#include <iostream>
using namespace std;
class Publication{
    protected:
        string title;
        float price;
    public:
        Publication(string t, float p) {
            title = t;
            price = p;
        }
        void Display() {
            cout << "Title: " << title << endl;
            cout << "Price: rs." << price << endl;
        }
};
class Sales{
    protected:
        float tms;
    public:
        Sales(float sales) {
            tms = sales;
        }
        void Display() {
            cout << "Total Monthly Sales: rs." << tms << endl;
        }
};
class Book : public Publication, public Sales {
    private:
        string author;
        int pageCount;
    public:
        Book(string t, float p, float sales, string a, int pc) 
            :Publication(t, p), Sales(sales){
            author = a;
            pageCount = pc;
            }
        void Display() {
            Publication::Display();
            Sales::Display();
            cout << "Author: " << author << endl;
            cout << "Page Count: " << pageCount << endl;
        }
};
int main() {
    Book b("oops in c++", 500.01, 15000.01, "pradip paudel", 300);
    b.Display();
    return 0;
}