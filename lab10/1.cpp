/*
Write a program to read height of person in meter and convert into feet and inches by using suitable type conversion method.
*/
#include <iostream>
using namespace std;
class Hight{
    float feet , inches;
    public:
    Hight(){      
    }
    Hight(float h){
        float f = h * 3.28084;
        feet = int(f);
        inches = 12*(f-feet);
    }
    void display(){
        cout<<"feet: "<<feet<<endl;
        cout<<"inches: "<<inches<<endl;
    }
};
int main(){
    float h;
    cout<<"Enter height in meter: ";
    cin>>h;
    Hight h1=h; 
    h1.display();
    return 0;
}