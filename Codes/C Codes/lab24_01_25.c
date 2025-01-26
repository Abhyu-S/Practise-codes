#include <stdio.h>
#include <string.h>

int main(void){
    /* QUES 1 */
    // int a,b,c;
    // scanf("%d %d %d",&a,&b,&c);
    // int largest=a;
    // if(b>largest){
    //     largest=b;
    // }
    // if(c>largest){
    //     largest=c;
    // }
    // printf("The largest number is: %d",largest);

    /* QUES 2 */
    // int year;
    // scanf("%d",&year);
    // if(year%100 == 0){
    //     if(year%400 == 0){
    //         printf("%d is a leap year", year);
    //     }
    //     else{
    //         printf("%d is not a leap year", year);
    //     }
    // }
    // else if(year%4 == 0){
    //     printf("%d is a leap year", year);
    // }
    // else{
    //     printf("%d is not a leap year", year);
    // }

    /* QUES 3 */
    // char buffer[100];
    // scanf("%[^\n]%*c", &buffer);
    // int vow=0, cons=0;
    // for(int i=0; i<100; i++){
    //     if(((buffer[i]>64)&&(buffer[i]<91)) || ((buffer[i]>96)&&(buffer[i]<123))){
    //         if((buffer[i]=='A')||(buffer[i]=='E')||(buffer[i]=='I')||(buffer[i]=='O')||(buffer[i]=='U')||(buffer[i]=='a')||(buffer[i]=='e')||(buffer[i]=='i')||(buffer[i]=='o')||(buffer[i]=='u')){
    //             vow+=1;
    //         }
    //         else{
    //             cons+=1;
    //         }
    //     }
    //     else{
    //         continue;
    //     }
    // }
    // printf("Vowels: %d, Consonants: %d", vow,cons);

    /* QUES 4 */
    // int n,ctr=0;
    // scanf("%d",&n);
    // int copy16=n;
    // int copy8=n;
    // while(n){
    //     n/=10;
    //     ctr++;
    // }
    // int rem8[ctr], rem16[ctr];
    
    // int i=0;
    // while(copy8){
    //     int rem = copy8 % 8;
    //     copy8/=8;
    //     rem8[i]=rem;
    //     i++;
    // }    
    // int j=0;
    // while(copy16){
    //     int rem = copy16 % 16;
    //     copy16/=16;
    //     rem16[j]=rem;
    //     j++;
    // }
    // printf("Hexadecimal: 0x");
    // for(int i=0; i<ctr; i++){
    //     if((rem16[ctr-1-i]>9)&&(rem16[ctr-1-i]<16)){
    //         char ch = 87+rem16[ctr-1-i]; 
    //         printf("%c", ch);
    //     }
    //     else if((rem16[ctr-1-i]>0)&&(rem16[ctr-1-i]<10)){
    //         char ch = 48+rem16[ctr-1-i];
    //         printf("%c", ch);
    //     }
    // }
    // printf("\nOctal: 0o");
    // for (int i = 0; i < ctr; i++)
    // {
    //     printf("%d", rem8[ctr-1-i]);
    // }
}