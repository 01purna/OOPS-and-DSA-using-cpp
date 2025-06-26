/*
Create a class student with two data members represent name and age. Use appropriate
member function to read and print these data members name and roll. Derive a class
marks from student that has additional data member sessional1, sessional2 to store
sessional marks. Derive another class result from marks and add the sessional marks. Use appropriate member function to read and display data in the class.
*/
#include <iostream>
using namespace std;
    class student {
    protected:
        char name[50];
        int age;
    public:
        void get_info() {
            cout << "Enter the name of the student: ";
            cin >> name;
            cout << "Enter the age of the student: ";
            cin >> age;
        }
        void display_info() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};
class marks : public student {
    protected:
        int sessional1, sessional2;
    public:
        void get_marks() {
            cout << "Enter sessional 1 marks: ";
            cin >> sessional1;
            cout << "Enter sessional 2 marks: ";
            cin >> sessional2;
        }
        void display_marks() {
            cout << "Sessional 1 Marks: " << sessional1 << endl;
            cout << "Sessional 2 Marks: " << sessional2 << endl;
        }
};
class result : public marks {
    public:
        void display_result() {
            display_info();
            display_marks();
            cout << "Total Sessional Marks: " << sessional1+sessional2 << endl;
        }
};
int main() {
    result r;
    r.get_info();
    r.get_marks();
    r.display_result();
    return 0;
}