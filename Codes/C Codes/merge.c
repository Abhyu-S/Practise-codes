#include <stdio.h>

void Merge(int *A, int m, int *B, int n, int *C){
    int i=0, j=0, k=0;
    while(k < m+n){
        if(j==n || A[i]>=B[i]){
            C[k]=A[i]; i++;k++;
        }
        else if(i==m || A[i]<B[i]){
            C[k]=B[i]; j++;k++;
        }
    }
}

//divide and conquer time required t(n) = 2t(n/2) + n; ---------(1)
// because two sub problems of size n/2
// merging solutions require O(n/2 + n/2) = O(n).

//Ananlysis of merge sort
// 2^j(t(n/2^j)) + jn ------ done using equiation (1)
// for base case t(1)=1
//assuming n=2^k
// When j = log n assuming base 2;
// t(n) =  2^logn + n(log n)

void MergeSort(int *A, int left, int right, int *B){
    int *L, *R;
    if(right - left == 1) B[0] = A[left];
    else if(right - left > 1){
        int mid = (left + right) / 2;
        MergeSort(A, left, mid+1, L);
        MergeSort(A, mid, right, R);
        Merge(L, mid - left, R, right - mid, B);
    }
}

int main(){
    return 0;
}