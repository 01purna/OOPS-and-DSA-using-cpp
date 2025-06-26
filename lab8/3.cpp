#include <iostream>
using namespace std;
class Alpha{
    protected:
    int a;
    public:
    Alpha(int x){
        a=x;
    }
    void showa(){
        cout<<"the value of a is "<<a<<endl;
    }
};
class Betta{
    protected:
    int b, c;
    public:
    Betta(int y, int z){
        b=y;
        c=z;
    }
    void showb(){
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        
    }
};
class Gamma : public Betta, public Alpha{
    protected:
    int d;
    public:
    Gamma(int x, int y, int z, int w) :Betta(y, z), Alpha(x){
       d=w;
    }
    void showc(){
        cout<<"the value of d is "<<d<<endl;
    }
};


int main(){
    Gamma g(1, 2, 3, 4);
    g.showa();
    g.showb();
    g.showc();
    return 0;
}