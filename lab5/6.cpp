/*
Create a class Mountain with data members name, height, location, a constructor that
initializes the members to the values passed it to its parameters, a function called
CmpHeight() to compare two objects and DispInf() to display the information of
mountain. In main create two objects of the class mountain and print the information
of the mountain which is greatest height.
*/
#include <iostream>
#include <cstring>
using namespace std;
class Mountain{
    private:
    char name[20];
    int hight;
    char location[40];
    public:
    Mountain(char n[], int h, char l[]){
        strcpy(name, n);
        hight=h;
        strcpy(location, l);
    }


    void display(){
     
      cout<<"NAME OF TH MOUTAIN:"<<name<<endl;
      cout<<"HIGHT:"<<hight<<endl;
      cout<<"LOCATION:"<<location<<endl;
    }
    friend void comp(Mountain m1, Mountain m2);
};
void comp(Mountain m1, Mountain m2){
    if(m1.hight>>m2.hight){
        cout<<endl<<m1.name<<"is taller"<<endl;
    }else{
         cout<<endl<<m2.name<<"is taller"<<endl;
    }
}
int main(){
   char name1[40], name2[40];
   int h1, h2;
   char location1[50], location2[50];
   //first
   cout<<"enter the first name of the everest"<<endl;
   cin>>name1;
   cout<<"enter the hight"<<endl;
   cin>>h1;
   cout<<"enter the location"<<endl;
   cin>>location1;
   //secod
   cout<<"enter the secod name of the everest"<<endl;
   cin>>name2;
   cout<<"enter the hight"<<endl;
   cin>>h2;
   cout<<"enter the location"<<endl;
   cin>>location2;
   Mountain m1(name1, h1, location1);
   Mountain m2(name2, h2, location2);
   cout<<endl<<endl<<"your entered details are:"<<endl;
   m1.display();
   m2.display();
   comp(m1,m2);

    return 0;
}