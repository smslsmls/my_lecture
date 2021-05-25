#include<stdio.h>

//function2
int n;
void add(int);
int func2() {
	printf("n : %d\n", n);
	add(3);
	printf("n : %d\n", n);
	n++;
	printf("n : %d\n", n);
	return 0;
}
void add(int x) {
	n += x;
}