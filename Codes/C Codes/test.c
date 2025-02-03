#include <stdio.h>

int main(void){
    for(float i=0;i<2;i=i+0.000001){
        printf("%f\n",i);
    }
}