#include<stdio.h>

//pointer
int main() {
	//포인터란?
	//주소를 저장하는 변수
	//포인터는 연산이 가능, 포인터 연산
	int* p;
	int a = 100;
	printf("%d\n", 100);
	p = &a;
	printf("%p\n", &a);
	printf("%d\n", a);
	printf("%d %p\n", *p, p);
	*p = 300;
	printf("%d\n", a);

	printf("\n\n");

	int num1 = 100, num2 = 100;
	int* pNum;
	pNum = &num1;
	*pNum = 50;
	pNum = &num2;
	*pNum = -30;
	printf("%d %d\n", num1, num2);
	return 0;
}