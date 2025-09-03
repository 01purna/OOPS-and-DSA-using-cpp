/*
18. Write a program that illustrates the concept of exception handling.
19. Write a program to illustrates the multiple catches/Handling Multiple Exceptions.
*/
#include <iostream>
using namespace std;
void test(int x){
    try{
        if(x==1){
            throw x;
        }else if(x==0){
            throw 'x';
        }else if(x==-1){
            throw 1.0;
        }
            cout<<"entry of try block "<<endl;
    }
    catch(char c){
        cout<<"cought a character : "<<endl;
    }
    catch(int m){
        cout<<"cought an integer : "<<endl;
    }
     catch(double d){
        cout<<"cought a double : "<<endl;
    }
        cout<<"end of try block  "<<endl;
}
int main(){
    cout<<"x==1"<<endl;
    test(1);
    cout<<"x==0"<<endl;
    test(0);
    cout<<"x==-1"<<endl;
    test(-1);
    cout<<"x==2"<<endl;
    test(2);
    return 0;
}