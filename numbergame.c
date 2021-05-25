#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int num[15];
void init() {
	srand((unsigned int)time(NULL));
	int random;
	int idx = 1;
	for (int i = 0; i < 3; i++)
	{
		random = rand() % 10;
		if (num[random])
			i--;
		else
			num[random] = idx++;
	}
}

int main() {
	int in[5];
	int b, s;
	init();
	while (1) {
		b = 0; s = 0;
		scanf("%1d%1d%1d", &in[1], &in[2], &in[3]);
		for (int i = 1; i <= 3; i++)
		{
			if (num[in[i]]) {
				if (num[in[i]] == i)
					s++;
				else
					b++;
			}
		}
		if (s == 0 && b == 0)
			printf("out\n");
		else if(s==3){
			printf("found number!");
			break;
		}
		else {
			if (s != 0)
				printf("%ds ", s);
			if (b != 0)
				printf("%db ", b);
		}
		printf("\n");
	}
}