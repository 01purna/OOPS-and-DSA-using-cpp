#include <stdio.h>
int gdc(int a, int b);
int gdc(int a, int b){
    if(b==0){
        return a;
    }
    return gdc(b, a%b);
}
int main(){
    int a=10;
    int b=6;
    printf("GCD is %d", gdc(a,b));
    return 0;
}