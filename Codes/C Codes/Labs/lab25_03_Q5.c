#include <stdio.h>
#include <string.h>

void myrev(char *a, int na) {
    for(int i=0; i<(na/2); i++){
        char temp = *(a + i);
        *(a + i) = *(a + na - 1 - i);
        *(a + na - 1 - i) = temp;
    }
}

int main() {
    char str1[100] = "abcdef";
    printf("Before: %s\n", str1);
    myrev(str1, strlen(str1));
    printf("After: %s\n", str1);
    return 0;
}