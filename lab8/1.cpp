#include <iostream>
using namespace std;
class alpha{
    protected:
    int a;
    public:
    alpha(int x){
        a=x;
    }
    void showa(){
        cout<<"the value of a is "<<a<<endl;
    }
};
class betta: public alpha{
    int b;
    public:
    betta(int x, int y):alpha(x){
        b=y;
    }
    void showb(){
        cout<<"the value of b is "<<b<<endl;
    }
};

int main(){
    betta b(1,2);
    b.showa();
    b.showb();
    return 0;
}