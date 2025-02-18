#include <stdio.h>

int main(void) {
    int n=4;
	scanf("%d", &n);
	printf("Prime factors: ");
	printf("%d ",1);
	for(int i=2; i<=n/2; i++){
		repeat:
		if(n%i==0){
			n/=i;
			if(n%i==0){
				goto repeat;
			}
			else{
				printf("%d ", i);
			}
		}
	}
}