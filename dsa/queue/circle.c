#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
void enqueue(int element) {
    if ((rear + 1) % MAX == front) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) {
        front=0;
    }
    rear = (rear + 1) % MAX; // Circular increment for rear
    queue[rear] = element;
    printf("Enqueued: %d\n", element);
}
int dequeue() {
    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
        return 0; // Return a default value
    }
     int element = queue[front];
     if(front == rear){// for only one element 
        front = rear = -1;
    }else{
        front=(front+1)%MAX;
    }
   return element;
}
int main() {
    // enqueue(10);
    // enqueue(20);
    // enqueue(30);
    // enqueue(40);
    // enqueue(50);
    // enqueue(60);
    // printf("Dequeued: %d\n", dequeue());
    // printf("Dequeued: %d\n", dequeue());
    // printf("Dequeued: %d\n", dequeue());
    // printf("Dequeued: %d\n", dequeue());
    // printf("Dequeued: %d\n", dequeue());
    // printf("Dequeued: %d\n", dequeue());
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