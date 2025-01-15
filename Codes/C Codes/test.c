#include <stdio.h>

int main(void){
    char buffer[100];
    scanf("%[^\n]%*c", &buffer);
    printf("%s", buffer);
}
