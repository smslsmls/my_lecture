#include<stdio.h>
#define SWAP(x,y) { x = x + y; y = x - y; x = x - y; }


//selection sort
int main() {
	int arr[] = { 5,1,3,7,2,9 };
	int s;
	for (int i = 0; i < 6 - 1; i++)
	{
		s = i;
		for (int j = i + 1; j < 6; j++)
		{
			if (arr[j] < arr[s])
				s = j;
		}
		if (i == s)
			continue;
		SWAP(arr[i], arr[s]);
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%3d", arr[i]);
	}
	return 0;
}