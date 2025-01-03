#include <stdio.h>

int main(void){
    int length, height, width, volume;
    length = 10;
    height = 5;
    width = 8;
    volume = length*width*height;

    printf("The dimensional weight of the box is : %d", volume/166);
}