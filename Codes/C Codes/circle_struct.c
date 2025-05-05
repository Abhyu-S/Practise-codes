#include <stdio.h>

struct Point{
    int x;
    int y;
};

struct circle{
    struct Point centre;
    int radius;
};

float circum(struct circle c){
    float circum = (float)2*22/7*c.radius;
    return circum;    
}

float area(struct circle c){
    float area = (float)22/7*c.radius*c.radius;
    return area;
}

int main(){
    struct circle c1 = {{1,2}, 10};
    printf("%f\t%f", circum(c1), area(c1));
    return 0;
}