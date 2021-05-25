#include<stdio.h>

//sizeof operator
int main() {
	char ch = 9;
	int n = 9;
	double d = 9;
	printf("ch의 크기 : %d\n", sizeof(ch));
	printf("n의 크기 : %d\n", sizeof(n));
	printf("d의 크기 : %d\n", sizeof(d));
	printf("상수 9의 크기 : %d\n", sizeof(9));
	printf("상수 9.1234의 크기 : %d\n", sizeof(9.1234));

	return 0;
}