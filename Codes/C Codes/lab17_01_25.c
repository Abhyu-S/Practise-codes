#include <stdio.h>

int main(void){
    /* QUES 1 */
    // int c;
    // float far;
    // scanf("%d", &c);
    // far = ((float)9*c/5) + 32;
    // printf("%f", far);

    /* QUES 2 */    
    // int r;
    // float pi = 3.145f,vol;
    // scanf("%d", &r);
    // vol = ((float)4/3)*pi*r*r*r;
    // printf("%f", vol);

    /* QUES 3 */
    // int x,eval;
    // scanf("%d", &x);
    // eval=((((3*x +2)*x - 5)*x*(-1))*x+7)*x - 6;
    // printf("%d", eval);

    /* QUES 4 */
    // int in_rate, paym, balance;
    // float loan;
    // printf("%s", "Enter amount of loan : ");
    // scanf("%f", &loan);
    // printf("%s", "Enter interest rate : ");
    // scanf("%d", &in_rate);
    // printf("%s", "Enter monthly payment : ");
    // scanf("%d", &paym);
    // for (int i=0; i<3; i++){
    //     loan = loan + ((loan*in_rate)/(100*12));
    //     loan = loan - paym;
    //     printf("%f\n", loan); 
    // }

    /* QUES 5 */
    // int a,b,x,y,num,den;
    // char input[10];
    // for(int i=0; i<9; i++){
    //     scanf("%c", &input[i]);
    // }
    // a=(int)input[0]-48;
    // b=(int)input[2]-48;
    // x=(int)input[6]-48;
    // y=(int)input[8]-48;
    // num=a*y + b*x;
    // den =b*y;
    // printf("%d/%d", num,den);

    //better way
    // int num1,den1,num2,den2,num,den;
    // scanf("%d/%d + %d/%d", &num1,&den1,&num2,&den2);
    // num=(num1*den2) + (num2*den1);
    // den = den1*den2;
    // printf("%d/%d",num,den);
}