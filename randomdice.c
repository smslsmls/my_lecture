#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand((unsigned int)time(NULL));
	int n1 = 0, n2 = 0;
	int score = 0;
	char a=' ';
	while (1)
	{
		a = ' ';
		while (a != 'y' && a != 'n') {
			printf("play game?(y/n)\n");
			scanf(" %c", &a);
		}
		if (a == 'n')
			break;
		score = 0;
		n1 = 0;
		n2 = 0;
		for (int i = 1; n1 == n2; i++)
		{
			n1 = rand() % 6 + 1;
			n2 = rand() % 6 + 1;
			score += n1 + n2;
			printf("dice%d : %d %d", i, n1, n2);
			if (n1 == n2)
				printf(" (double!)");
			printf("\n");
		}
		printf("\nscore : %d\n", score);
	}
}