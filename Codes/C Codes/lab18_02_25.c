#include <stdio.h>
#include <string.h>

int sumArray(int a[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=a[i];
    }
    return sum;
}

int main() {
    /* QUES 1 */
	// int ra,rb,ca,cb;
    // printf("Enter rows and columns for matrix A: ");
	// scanf("%d %d", &ra,&ca);
	// printf("Enter rows and columns for matrix B: ");
	// scanf("%d %d", &rb,&cb);
	// printf("Enter elements of matrix A: ");
	// int a[ra][ca];
    // int b[rb][cb];
    // for(int i=0; i<ra; i++){
	// 	for(int j=0; j<ca; j++){
	// 		scanf("%d", &a[i][j]);
	// 	}
	// }
	// printf("Enter elements of matrix B: ");
	// for(int i=0; i<rb; i++){
	// 	for(int j=0; j<cb; j++){
	// 		scanf("%d", &b[i][j]);
	// 	}
	// }
	// if(ra!=cb){
	// 	printf("Matrix multiplication not possible");
	// 	return 0;
	// }
	// int res[ra][cb];
	// for(int i=0; i<ra; i++){
	// 	for(int j=0; j<cb; j++){
	// 		res[i][j]=0;
	// 		for(int k=0; k<ca; k++){
	// 			res[i][j] += (a[i][k] * b[k][j]);
	// 		}
	// 	}
	// }
	// printf("The product of matrix A and B is:\n");
	// for(int i=0; i<ra; i++){
	// 	for(int j=0; j<cb; j++){
	// 		printf("%d ", res[i][j]);
	// 	}
	// 	printf("\n");
	// }
	// return 0;

    /* QUES 2 */
    // int n;
    // printf("Enter the size of the array: ");
    // scanf("%d",&n);
    // int arr[n];
    // printf("Enter the elements of the array: ");
    // for(int i=0; i<n; i++){
    //     scanf("%d", &arr[i]);
    // }
    // int res=sumArray(arr, n);
    // printf("The sum of the elements in the array is: %d", res);

    /* QUES 3 */
    
    // int a[5];   
    // printf("%zu\n",sizeof(a[0]));
    // char c[7];
    // printf("%zu\n", sizeof(c[0]));
    // float f[3];
    // printf("%zu\n", sizeof(f[0]));
    // double d[10];
    // printf("%zu\n", sizeof(d[0]));
    // long long k[3];
    // printf("%zu\n", sizeof(k[0]));

    /* QUES 4 */
    // char str[10];
    // scanf("%s",&str);
    // int number=0;
    // for(int i=0; i<strlen(str); i++){
    //     number*=10;
    //     number+= str[i] - 48;
    // }
    // printf("%d", number);

    /* QUES 5 */
    // int row, col;
    // scanf("%d %d", &row, &col);
    // int arr[row][col];
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // int large=arr[0][0], small=arr[row-1][col-1];
    // int li,lj,si,sj;
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         if(arr[i][j]>large){
    //             large=arr[i][j];
    //             li=i;lj=j;
    //         }
    //         if(arr[i][j]<small){
    //             small=arr[i][j];
    //             si=i;sj=j;
    //         }
    //     }
    // }
    // printf("Largest element: %d\t Row: %d, Column: %d\nSmallest element: %d\tRow: %d, Column: %d", large, li, lj, small, si, sj);

    /* QUES 6 */
    // int n;
    // scanf("%d", &n);
    // int arr[n][n];
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // int flag=1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(i!=j){
    //             if(arr[i][j]!=arr[j][i]){
    //                 flag=0;
    //             }
    //         }
    //     }
    // }
    // if(flag){
    //     printf("Symmetric matrix");
    // }
    // else{
    //     printf("Unsymmetric matrix");
    // }
}