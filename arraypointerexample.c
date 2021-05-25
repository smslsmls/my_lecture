#include<stdio.h>

int N;
int arr[100];
int* p;
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	p = arr;
	for (int i = 0; i < N; i++)
	{
		printf("%d ", *p++);
	}
	return 0;
}