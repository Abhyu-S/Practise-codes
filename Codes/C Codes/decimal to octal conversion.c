#include <stdio.h>
int main(){
    int n;
    int octal =0;
    int power=1;

    scanf("%d",&n);
    while(n>0){
        octal+=n%8*power;
        power*=10;
        n=n/8;
    }
    printf("0o%d",octal);
}