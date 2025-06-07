/*
Define a class to represent bowlers in a cricket team with data members name, Overs
bowled, Runs given, Wickets taken and use constructor to initialize values and use
member function to display bowlers information.
*/
#include <iostream>
using namespace std;
class bowlers{
    char name[30];
    int overs;
    int bowled;
    int rungiven;
    int wickettaken;
    public:
    bowlers(char n[], int o, int b, int r, int w){
        strcpy(name, n);
        overs=o;
        bowled=b;
        rungiven=r;
        wickettaken=w; 
    }
    void display(){
        cout<<"NAME OF THE BOWLER:"<<name<<endl;
        cout<<"OVERS BOWLED:"<<overs<<endl;
        cout<<"RUNS GIVEN:"<<rungiven<<endl;
        cout<<"WICKETS TAKEN:"<<wickettaken<<endl;
    }

};
int main(){
    char name[30];
    int overs, bowled, rungiven, wickettaken;
    cout<<"ENTER THE NAME OF THE BOWLER:"<<endl;
    cin>>name;
    cout<<"ENTER THE OVERS BOWLED:"<<endl;
    cin>>overs;
    cout<<"ENTER THE RUNS GIVEN:"<<endl;
    cin>>rungiven;
    cout<<"ENTER THE WICKETS TAKEN:"<<endl;
    cin>>wickettaken;
    cout<<"ENTER THE BOWLED:"<<endl;
    cin>>bowled;
    bowlers b(name, overs, bowled, rungiven, wickettaken);
    cout<<endl<<endl<<"YOUR ENTERED DETAILS ARE:"<<endl;
    b.display();
    return 0;
}
