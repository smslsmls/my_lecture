#include<stdio.h>
#include<math.h>

typedef struct{
	int x,y;
}Point;

int main(){
	Point p1,p2;
	p1.x=30;
	p1.y=20;
	p2.x=60;
	p2.y=50;
	double sol;
	
	sol=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	
	printf("%lf\n",sol);
	return 0;
}