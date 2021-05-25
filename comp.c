#include<stdio.h>

//compare
int main() {
	int n1 = 1, n2 = 2;
	int result = 0;
	printf("result = %d\n", result);
	result = (n1 == n2);
	printf("result = %d\n", result);

	n2 = 1;
	result = (n1 == n2);
	printf("result = %d\n", result);

	return 0;
}