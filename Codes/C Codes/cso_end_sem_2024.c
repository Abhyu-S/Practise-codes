#include <stdio.h>
#include <string.h>

struct point{
	int x;
	int y;
};

struct circle{
	struct point centre;
	int radius;
};

int intersect(struct circle circle1, struct circle circle2){
	int rad = circle1.radius + circle2.radius;
	int dist_sqrd = (circle1.centre.x - circle2.centre.x)*(circle1.centre.x - circle2.centre.x) + (circle1.centre.y - circle2.centre.y)*(circle1.centre.y - circle2.centre.y);
	if(rad*rad >= dist_sqrd) return 1;
	else return 0;
}

int f(int n, int m){
	static int count;
	count++;
	if(n<1 || m<1){
		printf("The function was called %d times\n", count);
		return 1;
	}
	if(n%2 == 0) return f(n/2, m-1) + f(n/2, m/2);
	return f(n/3, m/3);
}

int main(){
	
	struct circle c1, c2;
	c1.centre.x = 0;
	c1.centre.y = 0;
	c2.centre.x = 2;
	c2.centre.y = 0;

	c1.radius = 1;
	c2.radius = 1;

	int does_it = intersect(c1, c2);
	
	printf("%d", does_it);
	// printf("%d\n", f(500,7));
	return 0;	
}