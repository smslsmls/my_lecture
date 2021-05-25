#include<stdio.h>

struct Point{
	int x,y;
};

int main(){
	struct Point p={4,5};
	printf("x=%d, y=%d",p.x,p.y);
	struct Point p1;
	p1.x=5;
	p1.y=8;
	printf("x=%d, y=%d",p1.x,p1.y);
	
	return 0;
}