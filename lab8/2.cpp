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
class Betta: public Alpha{
    protected:
    int b;
    public:
    Betta(int x, int y):Alpha(x){
        b=y;
    }
    void showb(){
        cout<<"the value of b is "<<b<<endl;
    }
};
class Gamma : public Betta{
    protected:
    int c;
    public:
    Gamma(int x, int y, int z):Betta(x, y){
       c=z;
    }
    void showc(){
        cout<<"the value of c is "<<c<<endl;
    }
};


int main(){
    Gamma g(1, 2, 3);
    g.showa();
    g.showb();
    g.showc();
    return 0;
}