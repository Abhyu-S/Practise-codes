#include <stdio.h>

struct complex{
	int real;
	int img;
};

struct complex mult(struct complex c1, struct complex c2){
	struct complex res;
	res.real = c1.real*c2.real - c1.img*c2.img;
	res.img = c1.real*c2.img + c1.img*c2.real;
	return res;
}

int main(){
	int n=2;
	printf("Enter elements for m1 :\n");
	struct complex m1[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("Enter element %d, %d in same format : ", i+1, j+1);
			scanf("%d, %d", &m1[i][j].real, &m1[i][j].img);
		}
	}
	printf("Enter elements for m2 :\n");
	struct complex m2[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("Enter element %d, %d in same format : ", i+1, j+1);
			scanf("%d, %d", &m2[i][j].real, &m2[i][j].img);
		}
	}

	struct complex result[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			result[i][j].real = 0;
			result[i][j].img = 0;
			for(int k=0; k<n; k++){
				struct complex temp = mult(m1[i][k], m2[k][j]);
				result[i][j].real += temp.real;
				result[i][j].img += temp.img;
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d+i%d ", result[i][j].real, result[i][j].img);
		}
		printf("\n");
	}

	return 0;
}