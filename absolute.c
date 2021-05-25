#include<stdio.h>

//absolute
int main() {
	int n, abs1, abs2, abs3;
	scanf("%d", &n);
	if (n < 0)
		abs1 = n * -1;
	printf("%d\n", abs1);
	abs2 = (n < 0) ? n * -1 : n;
	printf("%d\n", abs2);
	abs3 = abs(n);
	printf("%d\n", abs3);
	return 0;
}