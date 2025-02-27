#include <stdio.h>

int sumNat(int a){
    if(a==1)return a;
    return a+sumNat(a-1);
}
int main(void){
    int k=sumNat(10);
    printf("%d",k);
}