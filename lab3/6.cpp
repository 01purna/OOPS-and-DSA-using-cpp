/*
Create a class called Volume that uses three Variables (length, width, height) of type distance (feet and
inches) to model the volume of a room. Read the three dimensions of the room and calculate the volume it
represent, and print out the result .The volume should be in (feet3) form i.e. you will have to convert each
dimension into the feet and fraction of For instance , the length 12 feet 6 inches will be 12.5 ft.
*/
#include <iostream>
using namespace std;
class Distance{
    private:
    int feet, inch;
    public:
    void getdata(){
        cout << "enter the feet" <<endl;
        cin >> feet;
        cout << "enter the inches"<<endl;
        cin >> inch;
    }
    void display(){
        cout << feet <<"'"<<inch<<"''"<<endl;
    }
    float toFeet(){
        return feet + (float)inch/12;
    }
};
class Volume{
    private:
    Distance length, width, height;
    public:
    void getVolume(){
        cout << "enter the length of the room"<<endl;
        length.getdata();
        cout << "enter the width of the room"<<endl;
        width.getdata();
        cout << "enter the height of the room"<<endl;
        height.getdata();
    }
    float calculateVolume(){
        return length.toFeet() * width.toFeet() * height.toFeet();
    }
};
int main(){
    Volume room;
    room.getVolume();
    float volume = room.calculateVolume();
    cout << "The volume of the room is: " << volume << " cubic feet" << endl;
    return 0;
}