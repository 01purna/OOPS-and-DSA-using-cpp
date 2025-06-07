#include <stdio.h>
#define MAX_SIZE 5;
int deque[MAX_SIZE];
int front=-1 rare=-1;
void insertAtFront(int element) {
    if ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1)) {
        printf("Deque Overflow! Cannot insert %d\n", key);
        return;
    }
    if (front == -1) {// for empty deque
    front = 0;
    rear = 0; 
    }else if(front == 0) { // If front is at the beginning, wrap it around to the end
    front = MAX_SIZE - 1;
    }
    // Otherwise, simply decrement front
    else {
    front--;
    }
    // Insert the new element at the front
    deque[front] = element;
    printf("Inserted %d at the front\n", key);
    }
    void display() {
        if (front == -1) {
        printf("Deque is empty\n");
        return;
    }
    printf("Deque elements: ");
    int i = front;
    while (1){
        printf("%d ", deque[i]);
        if (i == rear){
            break;
        } 
        i = (i + 1) % MAX_SIZE; // Circular traversal
    }
    printf("\n");
    }
   void deleteRear() {
    if (front == -1) {
        printf("Deque is empty. Cannot delete from the rear.\n");
        return;
    }
    // Check if the deque has only one element
    if (front == rear) {// only for one 
        printf("Deleted %d from the rear.\n", queue[rear]);
        front = -1;
        rear = -1; 
    } else if (rear == 0) {
    // If rear is at the first index, wrap it around to the last index
    printf("Deleted %d from the rear.\n", queue[rear]);
    rear = MAX_SIZE - 1;
    } else {
    // Otherwise, simply decrease the rear index
    printf("Deleted %d from the rear.\n", queue[rear]);
    rear--;
    }
    }
    int main(){
        while(1){
            int choice;
            printf("1.enque\t 2. deque\t 3.exit \n");
            scanf("%d", &choice);
            switch (choice){
                case 1:
                    printf("enter the element to be queue\n");
                    int x;
                    scanf("%d", &x);
                    enqueue(x);
                    break;
                case 2:
                    printf("Dequeued: %d\n", dequeue());
                    break;
                case 3:
                    printf("thank you  for using circular queue\n");
                    exit(0);
                default:
                printf("rmaro herera thich\n ");
                    break;
            }


        }

        return 0;
    }
