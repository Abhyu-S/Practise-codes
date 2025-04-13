#include <stdio.h>

int main(){
    int n = 8;
    int arr[] = {6,3,5,1,2,3,2,4};

    //INSERTION SORT

    for(int i=1; i<n; i++){
        int pivot = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>pivot){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pivot;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    //BUBBLE SORT
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<(n-1-i); j++){
    //         if(arr[j+1]<=arr[j]){
    //             int temp = arr[j+1];
    //             arr[j+1] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }

    // for(int i=0; i<n; i++){
    //     printf("%d ", arr[i]);
    // }

    return 0;
}