/*
Make a class called memory with member data to represent bytes, kilobytes and
megabytes .Read the value of memory in bytes from the user as basic types and display
the result in user defined memory type. Like for m (basic type) = 108766, your program
should display as: 1 megabyte 38 kilobytes 177 bytes. [Hint: Use basic to user defined
(basic-to-class) conversion method].
*/
#include <iostream>
using namespace std;
class Memory {
private:
    int bytes, kb, mb;
public:
    Memory(){
    }
    Memory(int m) {
        mb = m / (1024 * 1024);
        int rem = m %(1024 * 1024);
        kb = rem / 1024;
        bytes = rem % 1024;
    }
    void display() {
        cout<<mb<<" megabyte"<<endl;
        cout<<kb<<" kilobyte"<<endl;
        cout<<bytes<<" byte"<<endl;
    }
};
int main() {
    int m=1087665; // Example input in bytes
    Memory m1;
    m1 = m;
    m1.display();
    return 0;
}

