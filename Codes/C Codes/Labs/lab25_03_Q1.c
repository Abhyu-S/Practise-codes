#include <stdio.h>
#include <string.h>

void mycopy(char *a, char *b, int b_size) {
    int i = 0, a_len = 0;

    while(a[i]!='\0'){
        a_len++;
    }

    int i = 0;
    
    if (a_len >= b_size) {
        printf("Can't copy. 2nd string is too short.\n");
        return;
    }

    while (a[i] != '\0') {
        b[i] = a[i];
        i++;
    }
    
    b[i] = '\0';
}

int main() {
    char str1[10] = "abcdef";
    char str2[10];

    mycopy(str1, str2, sizeof(str2));

    printf("Copied String: %s\n", str2);
    return 0;
}