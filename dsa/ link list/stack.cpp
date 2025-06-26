#include <iostream>
using namespace std;
struct node{
    int data;
    struct node * next;

};
struct node *top = NULL;
//push
void push(int value){
    struct node * newnode= (struct node*)malloc(sizeof(struct node));
    if(!newnode){
        cout<<"error creating a newnode"<<endl;
        return;
    }
    newnode->data=value;
    newnode->next=top;
    top=newnode;
    cout<<value<<"addded to stack"<<endl;  
}
void pop(){
    struct node * temp;
    if(!top){
        cout<<"there is not element to pop"<<endl;
        return;
    }
    temp=top;
    cout<<top->data<<"has been poped from the stack"<<endl;
    top=top->next;
    free(temp);
}
void display(){
    if(!top){
        cout<<"there is no element in the stack"<<endl;
        return;
    }
    cout<<"the elements in the stack are: "<<endl;
    struct node * temp=top;
    while(temp){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
}
int main(){
    int choice, value;
    do{ 
        cout<<"enter the choice 0 to exit"<<endl;   
        cout<<"1. push"<<endl;   
        cout<<"2. pop"<<endl;   
        cout<<"3. display"<<endl;   
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch(choice){
            case 0:
                cout<<"exiting..."<<endl;
                exit(0);
                break;
            case 1:
                cout<<"enter the number to push"<<endl;
                cin>>value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
               display();
                break;  
            default:
               cout<<"wrong enter !! enter again!!";
        }
    }while(choice!=0);
    return 0;

}