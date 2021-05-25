#include<stdio.h>

int main() {
	int arr[15];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int t;
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1]) {
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}