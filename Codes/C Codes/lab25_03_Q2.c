#include <stdio.h>
#include <string.h>

char *myconcat(char *a, int a_size, char *b) {    
    int i = 0;
    int a_len = 0, b_len = 0;
    
    while(a[a_len]!='\0'){
        a_len++;
    }

    while(b[b_len]!='\0'){
        b_len++;
    }
    
    if((a_len+b_len) > a_size){
        printf("can't concatenate");
        return a;
    }

    for(int i = 0; i < b_len; i++){
        a[a_len + i] = b[i];
    }
    return a;
}

int main() {
    char str1[100] = "abcdef";
    char str2[100] = "hijk";

    char *x = myconcat(str1, sizeof(str1), str2);

    printf("concatenated String: %s\n", x);
    return 0;
}