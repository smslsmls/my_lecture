#include<stdio.h>

//continue, break
int main() {
	int sum = 0, num = 0;
	while (num < 100)
	{
		num++;
		if (num % 2 == 1)
			continue;
		printf("%d\n", num);
	}
	return 0;
}