#include<stdio.h>
#define SWAP(x,y) { x = x + y; y = x - y; x = x - y; }

//bubble sort
int main() {
	int arr[] = { 6,23,7,34,7,3,7,9,4,23 };
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1])
				SWAP(arr[j], arr[j + 1]);
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}