#include <stdio.h>

int main() {
	int ra=1,rb=1,ca=1,cb=1;
    int a[10][10];
    int b[10][10];
	printf("Enter rows and columns for matrix A: ");
	scanf("%d %d", &ra,&ca);
	printf("Enter rows and columns for matrix B: ");
	scanf("%d %d", &rb,&cb);
	printf("Enter elements of matrix A: ");
	for(int i=0; i<ra; i++){
		for(int j=0; j<ca; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter elements of matrix B: ");
	for(int i=0; i<rb; i++){
		for(int j=0; j<cb; j++){
			scanf("%d", &b[i][j]);
		}
	}
	if(ra!=cb){
		printf("Matrix multiplication not possible");
		return 0;
	}
	int res[10][10];
	for(int i=0; i<ra; i++){
		for(int j=0; j<cb; j++){
			res[i][j]=0;
			for(int k=0; k<ca; k++){
				res[i][j] += (a[i][k] * b[k][j]);
			}
		}
	}
	printf("The product of matrix A and B is:\n");
	for(int i=0; i<ra; i++){
		for(int j=0; j<cb; j++){
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
	return 0;
}