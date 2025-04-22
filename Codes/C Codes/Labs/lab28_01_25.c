#include <stdio.h>
// const int N = 1e7;
// int arr[N];

int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(void){
    // arr[0]=arr[1]=1;
    // for(int i=2; i<N; i++){
    //     arr[i]=arr[i-1]*i;
    // }
    
    /* QUES 1 */
    // int n;
    // scanf("%d", &n);
    // switch(n){
    //     case 1:
    //     printf("Monday");
    //     break;
    //     case 2:
    //     printf("Tuesday");
    //     break;
    //     case 3:
    //     printf("Wednesday");
    //     break;
    //     case 4:
    //     printf("Thursday");
    //     break;
    //     case 5:
    //     printf("Friday");
    //     break;
    //     case 6:
    //     printf("Satruday");
    //     break;
    //     case 7:
    //     printf("Sunday");
    //     break;
    // }

    /* QUES 2 */
    // for(int i=0; i<5; i++){
    //     for(int j=0; j<5; j++){
    //         if(j>(3-i)){
    //             printf(" * ");
    //         }
    //         else{
    //             printf("   ");
    //         }
    //     }
    //     printf("\n");
    // }

    /* QUES 3 */
    // int n, res=0;
    // scanf("%d", &n);
    // int copy = n;
    // int power=10;
    // while(n){
    //     res = res*power + (n%10);
    //     n/=10;
    // }
    // if(res==copy){
    //     printf("Palindrome");
    // }
    // else{
    //     printf("Not palindrome");
    // }

    /* QUES 4 */
    int n;
    scanf("%d", &n);
    int factorial = fact(n);
    printf("%d", factorial);
    // printf(arr[n]);
}