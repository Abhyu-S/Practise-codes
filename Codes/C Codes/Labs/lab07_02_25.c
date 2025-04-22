#include <stdio.h>
#include <string.h>

int main(void){
    /* QUES 1 */
    // int k,arr[k],n;
    // printf("Enter number of elements: ");
    // scanf("%d",&k);
    // printf("Enter the array: ");
    // for(int i=0; i<k; i++){
    //     sacnf("%d", &arr[i]);
    // }
    // printf("Number to check: ");
    // scanf("%d", &n);
    // for(int i=0; i<5; i++){
    //     if(arr[i] == n){
    //         flag=1;
    //     }
    // }
    // if(flag==1){
    //         printf("Yes");
    //     }
    // else{
    //         printf("No");
    //     }

    /* QUES 2 */
    // char str_in[100];
    // scanf("%[^\n]%*c",&str_in);
    
    /* QUES 3 */
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int targetSum;
    printf("Enter Target sum: ");
    scanf("%d", &targetSum);
    int ctr=0;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum+=arr[i];
            if(sum==targetSum){
                ctr++;
                break;            
            }
        }
    }
    printf("%d", ctr);

    /* QUES 4 */
    // int n;
    // printf("Enter number of elements: ");
    // scanf("%d",&n);
    // int arr[n];
    // printf("Enter the array: ");
    // for(int i=0; i<n; i++){
    //     scanf("%d", &arr[i]);
    // }
    // int k;
    // printf("numbers to rotate K: ");
    // scanf("%d", &k);
    // int arr_new[n];
    // for(int i=k; i<n; i++){
    //     arr_new[i]=arr[i];
    //     printf("%d ", arr[i]);
    // }
    // for(int i=0; i<k; i++){
    //     arr_new[i]=arr[i];
    //     printf("%d ", arr[i]);
    // }
}