#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fibof[1000005] = { 0,1 };
int fibor[1000005] = { 0,1 };
int c = 1;
int fibonacchi(int n) {
	if (n == 1) {
		if (c) {
			printf("1 ");
			c = 0;
		}
		return 1;
	}
	if (fibof[n] != 0)
		return fibof[n];
	if (n == 0)
		return 0;
	fibof[n] = fibonacchi(n - 1) + fibonacchi(n - 2);
	printf("%d ", fibof[n]);
	return fibof[n];
}
int main() {
	int n;
	scanf("%d", &n);
	fibonacchi(n);
	printf("\n");
	printf("1 ");
	for (int i = 2; i <= n; i++)
	{
		fibor[i] = fibor[i - 1] + fibor[i - 2];
		printf("%d ", fibor[i]);
	}
	return 0;
}