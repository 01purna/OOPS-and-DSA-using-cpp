/*WAP to create a single class with private data members and add them using friend
function.
*/
#include <iostream>
using namespace std;
class sample{
    int a;
    int b;
    public:
    void getinfo(int x,int y){
       a=x;
       b=y;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
    friend void sum(sample s);

};
  void sum(sample s){
    int sum =s.a+s.b;
    cout<<"the sum is "<<sum;
}
int main(){
    sample s1;
    int x,y;
    cout<<"enter the data "<<endl;
    cin>>x>>y;
    s1.getinfo(x,y);
    s1.display();
    sum(s1);
    return 0;

}