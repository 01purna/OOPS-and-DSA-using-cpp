/*
circuler doubly linked list implementation in C
This program creates a  circuler doubly linked list, allows insertion at the beginning,
and deletion from the end of the list. It also displays the list before and after deletion.
*/

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

// Function to insert a node at the beginning
void insertAtBeginning(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (!newnode) {
        printf("Memory allocation failed.\n");
        return;
    }

    newnode->data = value;

    if (head == NULL) {
        newnode->next = newnode;
        newnode->prev = newnode;
        head = newnode;
    } else {
        struct node *tail = head->prev;

        newnode->next = head;
        newnode->prev = tail;
        tail->next = newnode;
        head->prev = newnode;
        head = newnode;
    }
}

// Function to delete a node from the end
void deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct node *tail = head->prev;

    if (head == tail) { // only one node
        free(head);
        head = NULL;
    } else {
        struct node *newTail = tail->prev;
        newTail->next = head;
        head->prev = newTail;
        free(tail);
    }
}

// Function to display the list
void displayList() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head;
    printf("Circular Doubly Linked List: ");
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}
// Main function
int main() {
    int choice, value;
    do {
        printf("\n1. Insert at beginning\n");
        printf("2. Delete from end\n");
        printf("3. Display list\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtBeginning(value);
                break;
            case 2:
                deleteFromEnd();
                break;
            case 3:
                displayList();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);
    return 0;
}