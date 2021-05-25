#include<stdio.h>

int histo[13];
int main() {
	int a[20] = { 35,26,48,77,56,98,75,78,99,0,43,56,67,84,99,100,45,37,49,78 };
	for (int i = 0; i < 20; i++)
	{
		histo[a[i] / 10]++;
	}
	for (int i = 0; i <= 10; i++)
	{
		printf("%3d : ", i * 10);
		for (int j = 0; j < histo[i]; j++)
		{
			printf("¡Ú");
		}
		printf("\n");
	}

	return 0;
}