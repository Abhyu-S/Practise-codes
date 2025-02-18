#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int ans=0;
    do{
        ans*=10;
        if(n%10 == 9){
            ans+=0;
        }
        else{
            ans+=((n%10)+1);
        }
        n/=10;
    }while(n);
    printf("%d\n", ans);
    int out=0;
    do{
        out*=10;
        out+=(ans%10);
        ans/=10;
    }while(ans);
    printf("%d",out);
}