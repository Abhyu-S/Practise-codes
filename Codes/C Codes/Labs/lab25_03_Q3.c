#include <stdio.h>

int mylen(char *a) {    
    int i = 0;

    while(a[i]!='\0'){
        i++;
    }

    return i;
}

int main() {
    char str1[100] = "abcdef";
    printf("Length: %d\n", mylen(str1));
    return 0;
}