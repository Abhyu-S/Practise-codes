#include <stdio.h>

int power(int a, int b){
    if(b<0) return -1;
    else if(b==0)return 1;
    return a*power(a,b-1);
}
int main(void){
    int k=power(2,5);
    printf("%d",k);
}