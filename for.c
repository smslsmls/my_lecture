#include<stdio.h>

//for
int main() {
	double n = 0.0;
	for (int i = 0; i < 100; i++)
	{
		n += 0.1;
	}
	printf("%lf", n);

	return 0;
}