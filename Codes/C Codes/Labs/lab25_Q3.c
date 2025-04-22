#include <stdio.h>


int rev1(int k, int init){
    if(k==0){
        return init;
    }
    else{
        return rev1(k/10, (init*10+k%10));
    }
}

int rev(int num){
    rev1(num,0);
}

int main(void){
    int j=rev(1234567);
    printf("%d", j);
}