#include<stdio.h>

//char functions
int main() {
	int i;
	char str[256];
	printf("Enter a number : ");
	//fgets(str,256,stdin);
	gets(str, 256);
	i = atoi(str);
	printf("입력된 정수값 : %d, 2배의 값 : %d.\n", i, i * 2);
	return 0;
}