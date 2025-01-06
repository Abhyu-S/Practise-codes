#include <stdio.h>

int main(void){
    int length, height, width, volume;
    length = 10;
    height = 5;
    width = 8;
    volume = length*width*height;

    printf("The dimensional weight of the box is : %d", (volume+165)/166); // if it comes out to be 5.734 w/0 adding 165 this will 
}//return 5, but it is very much above it and should be charged just like that, if the value is just greater than an interger, it equals
//the next integer