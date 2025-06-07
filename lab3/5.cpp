/*
Create a new class named City that will have two member varibles CityName (char[20]), and
DistFromKtm (float).Add member functions to set and retrieve the CityName and DistanceFromKtm
separately. Add new member function AddDistance that takes two arguments of class City and returns
the sum of DistFromKtm of two arguments. In the main function, Initialize three city objects .Set the
first and second City to be Pokhara and Dhangadi. Display the sum of DistFromKtm of Pokhara and
Dhangadi calling AddDistance function of third City object.
*/
#include <iostream>
using namespace std;
class City{
    private:
    char CityName[20];
    float DistFromKtm;
    public:
    void setCityName(char name[]){
       strcpy(CityName, name);
    }
    void setDistFromKtm(float dist){
        DistFromKtm=dist;
    }
    
    float getDistFromKtm(){
        return DistFromKtm;
    }
    
    float AddDistance(City c1, City c2){
        return c1.getDistFromKtm() + c2.getDistFromKtm();
    }
};
int main(){
    City c1, c2, c3;
    char name1[20] = "Pokhara";
    char name2[20] = "Dhangadi";
    
    c1.setCityName(name1);
    c1.setDistFromKtm(200.5);
    
    c2.setCityName(name2);
    c2.setDistFromKtm(300.75);
    
    float totalDistance = c3.AddDistance(c1, c2);
    cout << "Total distance from Kathmandu: " << totalDistance << " km" << endl;
    
    return 0;
}