#include<stdio.h>

//for repeat2
int main() {
	printf("====================\n");
	for (int j = 2; j < 10; j++)
	{
		for (int i = 1; i < 10; i++)
		{
			printf("%d * %d = %d\n", j, i, j * i);
		}
		printf("====================\n");
	}

	return 0;
}