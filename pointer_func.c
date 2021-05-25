#include<stdio.h>

//function3
//call by value
void swap1(int a, int b) {
	a += b;
	b = a - b;
	a -= b;
}
//call by reperence
void swap2(int* a, int* b) {
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}
int main() {
	int a = 5, b = 8;
	printf("a=%d, b=%d\n", a, b);
	swap1(a, b);
	printf("a=%d, b=%d\n", a, b);
	swap2(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return 0;
}