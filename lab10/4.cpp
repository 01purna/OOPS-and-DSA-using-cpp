/*
4. Write a program to convert total memory in bytes into mb, kb and bytes using type
conversion. (1kb=1024bytes,1mb=1024kb)
*/
#include <iostream>
using namespace std;
class Memory {
private:
    int bytes, kb, mb;
public:
    Memory(){
    }
    Memory(int m, int k, int b){
        mb=m;
        kb=k;
        bytes=b;
    }
    operator int(){
        int byt=(mb*1024*1024)+(kb*1024)+bytes;
        return byt;
    }
    void display() {
       cout<<mb<<"megabyte"<<endl;
        cout<<kb<<"megabyte"<<endl;
        cout<<bytes<<"megabyte"<<endl;
    }
};
int main() {
    Memory m( 1, 38, 177);
   
    cout<<"before converting"<<endl;
    m.display();
    int x=m;
    cout<<"all in bytes is"<<x<<endl;
  
    return 0;
}