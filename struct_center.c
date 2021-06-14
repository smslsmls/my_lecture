#include<stdio.h>

typedef struct{
	double x,y;
}point;

int main(){
	point p1,p2,p3;
	scanf("%lf %lf",&p1.x,&p1.y);
	scanf("%lf %lf",&p2.x,&p2.y);
	scanf("%lf %lf",&p3.x,&p3.y);
	printf("%.1lf %.1lf",(p1.x+p2.x+p3.x)/3,(p1.y+p2.y+p3.y)/3);
}