#include <stdio.h>
#include <math.h>

// int main(){
// 	// swap
// 	int a=10, b=20;
// 	int *pa=&a;
// 	int *pb=&b;
// 	int temp = *pa;
// 	*pa = *pb;
// 	*pb = temp;
// 	printf("Value of a : %d\nValue of b : %d", a, b);
// }

int gcd(int a, int b){
	
	if (b==0) return a;

	return gcd(b, a%b);
}

int main(){
	int k = gcd(12,18);
	printf("%d", k);
}