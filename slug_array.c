#include<stdio.h>

//slug array
int main() {
	int n;
	scanf("%d", &n);
	int cnt = 1;
	int row = 0, col = -1;
	int inc = 1;
	int arr[100][100] = { 0 };
	while (n > 0) {
		for (int i = 0; i < n; i++)
		{
			col += inc;
			arr[row][col] = cnt++;
		}
		n--;
		if (n == 0)
			break;
		for (int i = 0; i < n; i++)
		{
			row += inc;
			arr[row][col] = cnt++;
		}
		inc *= -1;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}