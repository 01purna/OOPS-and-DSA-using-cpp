/*
doubly linked list implementation in C
This program creates a doubly linked list, allows insertion at the beginning,
and deletion from the end of the list. It also displays the list before and after deletion.  
*/
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * prev;
    struct node * next;
};
int choice;
    struct node * head, *tail, *newnode , *temp;
struct node * ifb(){
    head=0;
    do{
        newnode =(struct node *) malloc (sizeof(struct node));
        if(!newnode){
            printf("failed to create a new node\n");
            exit(0);
        }
        printf("enter the data:\n");
        scanf("%d", &newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL){
            temp = newnode;
            head = temp;
            tail = newnode;
        }else{
         newnode->next = head;
         head->prev = newnode;
         head = newnode;
        }
        printf("enter again?\t0 or 1 : ");
        scanf("%d", &choice);
    }while(choice == 1);
    return head;
}
// Function to delete a node from the end of the list
    void deleteFromEnd() {
        if (head == NULL || tail == NULL) {
            printf("The list is empty. Nothing to delete.\n");
            return;
        } else if (tail->prev == NULL) { // Only one node
            free(tail);
            head = NULL;
            tail = NULL;
        } else {
            temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            free(temp);
        }
    }
void displayLinkedList(struct node* head) {
    struct node* temp = head;
    printf("The linked list is: ");
    while (temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main(){
    struct node * h;
    h=ifb();
    displayLinkedList(h);
    deleteFromEnd();
    printf("link list after deleting last element:\n");
    displayLinkedList(h);
    return 0;
}