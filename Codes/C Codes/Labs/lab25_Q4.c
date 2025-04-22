#include <stdio.h>

void swapper (int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(void){
    int a=10,b=20;
    printf("Before swap: %d %d\n",a,b);
    swapper(&a, &b);
    printf("After swap: %d %d",a,b);
}