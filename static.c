#include<stdio.h>

int func(int n) {
	static int a = 0;
	a++;
	printf("a = %d, n = %d\n", a, n);
	return 0;
}
int main() {
	func(1);
	func(2);
	return 0;
}