#include <stdio.h>
#include <stdlib.h>

void freeMemory(int *ptr) {
    free(ptr);
    printf("Memory successfully freed.\n");
}

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    freeMemory(arr);

    return 0;
}
