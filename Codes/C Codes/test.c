#include <stdio.h>

int fact(int n){
	if(n==0) return 1;
	return n*fact(n-1);
}
int fibo(int n){
	if(n<=1) return n;
	return fibo(n-1) + fibo(n-2);	
}
int digitSum(int n){
	if(n<1) return 0;
	return n%10 + digitSum(n/10);
}
void towerOfHanoi(int n, char source, char auxiliary, char destination){
	if(n==1){
		printf("Move disk 1 from %c to %c\n", source, destination);
		return;
	}
	towerOfHanoi(n-1, source, destination, auxiliary);
	printf("Move disk %d from %c to %c\n", n, source, destination);
	towerOfHanoi(n-1, auxiliary, source, destination);
}
void reverseStr(char str[], int k){
	if(k<0) return;
	printf("%c", str[k-1]);
	reverseStr(str, k-1);
}
void swapper(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b= temp;
}
int main(void){
	int x=6, y=10;
	swapper(&x, &y);
	printf("After swapping x=%d y=%d", x,y);
}