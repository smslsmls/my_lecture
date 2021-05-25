#include<stdio.h>

//Four rule calculation
int main() {
	ld a, b;
	scanf("%Lf %Lf", &a, &b);
	printf("plu : %.2Lf\nmin : %.2Lf\nmul : %.2Lf\ndiv : %.2Lf\n", a + b, a - b, a * b, a / b);
	return 0;
}