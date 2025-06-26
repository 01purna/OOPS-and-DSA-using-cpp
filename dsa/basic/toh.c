// Online C compiler to run C program online
#include <stdio.h>
void hanoi(int n, char src, char helper, char dest){
    if(n==1){
        printf("move disk %d from %c to %c \n", n, src, dest);
        return; 
    }
    hanoi(n-1, src, dest, helper);
    printf("move disk %d from %c to %c \n", n, src, dest);
    hanoi(n-1, helper, src, dest);
}
int main() {
    int n=3;
    // char sourse = 'S';
    // char helper = 'H';
    // char destination = 'D';
    hanoi(n, 'S', 'H', 'D');
    return 0;
}