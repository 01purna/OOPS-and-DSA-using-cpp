#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
void enqueue(int value){
    if (rear == MAX - 1) {
    printf("Queue is full\n");
    } else if (front == -1 && rear == -1) {// initial case(first)
    front = rear = 0;
    queue[rear] = value;
    printf("Enqueued: %d\n", value);
    } else {
    rear++;
    queue[rear] = value;
    printf("Enqueued: %d\n", value);
    }
}
int dequeue() {
    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
        return -1; // Return a default value
    }else if(front == rear){// for only one element 
        int value = queue[front];
        front = rear = -1;
        return value;
    }else{
        int value = queue[front];
        front++;
        return value;
    }
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    return 0;
}