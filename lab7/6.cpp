
//question in diagram
#include <iostream>
using namespace std;
class sport{
    protected:
    int score;
    public:
    void get_tsport(){
        cout<<"enter the score of the sports"<<endl;
        cin>>score;
    }
    void display_sport(){
        cout<<"score:"<<score<<endl;
    }
};
class student {
    protected:
    char name[40];
    int roll;
    public:
    void get_student(){
        cout<<"enter the name of the student"<<endl;
        cin>>name;
        cout<<"enter the roll of the student"<<endl;
        cin>>roll;
    }
    void display_student(){
        cout<<"NAME:"<<name<<endl<<"ROLL:"<<roll<<endl;
    }
};
class test:public student{
    protected:
    int math, eng;
    public:
    void get_test(){
        cout<<"enter the makrs of the maths and english"<<endl;
        cin>>math>>eng;
    }
    void display_test(){
        cout<<"MATH:"<<math<<endl<<"ENGLISH:"<<eng<<endl;
    }
};
class result:public test, public sport{
    protected:
    int total;
    public:
    void calc_total(){
        total=(math+eng+score);
    }
    void display(){
        display_student();
        display_test();
        display_sport();
        cout<<"TOTAL="<<total<<endl;
    }
};
int main(){
    result r;
    r.get_student();
    r.get_test();
    r.get_tsport();
    r.display();
    return 0;
}