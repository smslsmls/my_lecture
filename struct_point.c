#include<stdio.h>
#include<math.h>

typedef struct{
	int x,y;
}point;

int main(){
	point p1,p2;
	p1.x=10;
	p1.y=20;
	p2.x=30;
	p2.y=40;
	printf("%lf",sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)));
}