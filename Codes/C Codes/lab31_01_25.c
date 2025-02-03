#include <stdio.h>

int main(void){

    /* QUES 1 */
    // int n, ctr=0;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // while(n){
    //     n/=10;
    //     ctr++;
    // }
    // printf("Number of digits: %d", ctr);

    /* QUES 2 */
    // int n;
    // int flag = 1;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // for(int i=2; i<=(n/2); i++){
    //     if(n%i == 0){
    //         flag = 0;
    //         printf("%d is NOT a prime number", n);
    //         break;
    //     }
    // }
    // if(flag==1){
    //     printf("%d is a prime number", n);
    // }

    /* QUES 3 */
    // int n, first = 0, second = 1, next;
    
    // scanf("%d", &n);
    // int count = 0;
    // while (count < n) {
    //     printf("%d ", first);
    //     next = first + second;
    //     first = second;
    //     second = next;
    //     count++;
    // }

    /* QUES 4 */
    int a,b,small,large;
    scanf("%d %d", &a, &b);
    if(a<b){
        small=a;
        large=b;
    }
    else{
        small=b;
        large=a;
    }
    float d;
    int div;
    int i=1;
    while(i<=small){
        div=small/i;
        d=(float)small/i;
        printf("%d\t%f\n", div,d);
        if(div==d){
            int tempi=large/div;
            float tempf=(float)large/div;
            printf("%d\t%f\n", tempi,tempf);
            if(tempi==tempf){
                printf("gcd of %d and %d is: %d",a,b,div);
                break;
            }
        }
        i++;
    }
}