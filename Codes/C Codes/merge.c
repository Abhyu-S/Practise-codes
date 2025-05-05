//divide and conquer time required t(n) = 2t(n/2) + n; ---------(1)
// because two sub problems of size n/2
// merging solutions require O(n/2 + n/2) = O(n).

//Ananlysis of merge sort
// 2^j(t(n/2^j)) + jn ------ done using equiation (1)
// for base case t(1)=1
//assuming n=2^k
// When j = log n assuming base 2;
// t(n) =  2^logn + n(log n)

#include <stdio.h>
#include <stdlib.h>

void Merge(int *A, int m, int *B, int n, int *C){
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (A[i] <= B[j]) C[k++] = A[i++];
        else C[k++] = B[j++];
    }
    while (i < m) C[k++] = A[i++];
    while (j < n) C[k++] = B[j++];
}

void MergeSort(int *A, int left, int right, int *B){
    if (right - left == 1) {
        B[0] = A[left];
    } else if (right - left > 1) {
        int mid = (left + right) / 2;
        int *L = (int *)malloc((mid - left) * sizeof(int));
        int *R = (int *)malloc((right - mid) * sizeof(int));
        
        MergeSort(A, left, mid, L);
        MergeSort(A, mid, right, R);
        Merge(L, mid - left, R, right - mid, B);

        free(L);
        free(R);
    }
}

int main(){
    int arr[5] = {3, 6, 2, 22, 1};
    int res[5];
    MergeSort(arr, 1, 5, res);
    for(int i=0; i<5; i++){
        printf("%d ", res[i]);
    }
    return 0;
}
