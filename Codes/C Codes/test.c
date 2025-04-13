#include <stdio.h>
#include <string.h>

int main(){
	char *s = "Abhyudaya";
	char str[100] = "Ajay\0";
	printf("%d\n%d\n",strlen(s),strlen(str));
	return 0;
}