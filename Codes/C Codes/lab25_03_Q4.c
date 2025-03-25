#include <stdio.h>
#include <string.h>

int mycomp(const char *a, const char *b) {    
    while(*a != '\0' && *b != '\0'){
        if(*a != *b) return *a - *b;
        a++; b++;
    }
    return *a - *b;
}

int main() {
    char str1[100] = "abcdef";
    char str2[100] = "abcdf";

    int res = mycomp(str1, str2);
    printf("comp res: %d", res);
}