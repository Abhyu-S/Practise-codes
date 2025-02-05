#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for( int j=1; j<=n; j++){
            int element = min(i,j,n-1-i,n-1-j);
            printf(" %d ", element);
        }
        printf("\n");
    }
}