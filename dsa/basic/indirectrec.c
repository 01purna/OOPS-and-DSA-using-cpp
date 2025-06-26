#include <stdio.h>
void functionA(int n);
void functionB(int n);
void functionA(int n) {
if (n > 0) {
printf("A: %d\n", n);
functionB(n - 1); // A calls B
}
}
void functionB(int n) {
if (n > 0) {
printf("B: %d\n", n);
functionA(n - 1); // B calls A
}
}
int main() {
functionA(3); // Start with A
return 0;
}