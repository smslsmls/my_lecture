#include<stdio.h>

//bit operator
int main() {
	int num1 = 15;
	int num2 = 20;
	printf("AND 연산의 결과 : %d\n", num1 & num2);
	printf("OR 연산의 결과 : %d\n", num1 | num2);
	printf("XOR 연산의 결과 : %d\n", num1 ^ num2);
	printf("NOT 연산의 결과 : %d\n", ~num1);
	printf("bit 이동 왼쪽 1 : %d\n", 1 << 1);
	printf("bit 이동 왼쪽 2 : %d\n", 1 << 2);
	printf("bit 이동 왼쪽 3 : %d\n", 1 << 3);
	printf("bit 이동 왼쪽 4 : %d\n", 1 << 4);
	printf("bit 이동 왼쪽 14 : %d\n", 1 << 14);
	printf("bit 이동 오른쪽 1 : %d\n", 2048 >> 1);
	printf("bit 이동 오른쪽 2 : %d\n", 2048 >> 2);
	printf("bit 이동 오른쪽 3 : %d\n", 2048 >> 3);
	printf("bit 이동 오른쪽 4 : %d\n", 2048 >> 4);
	printf("bit 이동 오른쪽 14 : %d\n", 2048 >> 14);
	return 0;
}