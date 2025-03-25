#include <stdio.h>
#include <string.h>

void myrev(char *a, int n){
    for(int i=0; i<n/2; i++){
        int temp = *(a+i);
        *(a+i) = *(a+n-1-i);
        *(a+n-1-i) = temp;
    }
}

int main(){
    char str[10] = "abcdef";
    myrev(&str[0], strlen(str));
    printf("%s", str);
    return 0;
}