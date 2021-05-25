#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<conio.h>
#define ADD(a,b,result) result=(a)+(b);


int p1() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("%d\n", n1 | n2);

	return 0;
}

int p2() {
	int n;
	scanf("%d", &n);
	n = ~n;
	n++;
	printf("%d", n);
	return 0;
}

int p3() {
	int n = 3;
	n = n << 3;
	n = n >> 2;
	printf("%d", n);

	return 0;
}

int p4() {
	double r;
	scanf("%lf", &r);
	printf("%.2f", r * r * 3.14);

	return 0;
}

int p5() {
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d\n", ch1, ch1);
	printf("%c %d\n", ch2, ch2);
	printf("%c %d\n", ch3, ch3);
	printf("%c %d\n", ch4, ch4);

	return 0;
}

int p6() {
	int x1, x2, y1, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	printf("area : %d", abs(x1 - x2) * abs(y1 - y2));

	return 0;
}

int p7() {
	int dec, oct, hex;
	scanf("%d %o %x", &dec, &oct, &hex);
	printf("decimal : %d %d %d\n", dec, oct, hex);
	printf("octal : %o %o %o\n", dec, oct, hex);
	printf("hexadecimal : %x %x %x\n", dec, oct, hex);
	printf("Hexadecimal : %X %X %X\n", dec, oct, hex);

	return 0;
}

int p8() {
	int t = 1;
	while (t <= 10) {
		printf("%d\n", t);
		t++;
	}
	printf("\n");
	t = 0;
	while (t++ < 10) {
		printf("%d\n", t);
	}
	printf("\n");
	t = 1;
	do {
		printf("%d\n", t);
	} while (t++ < 10);

	return 0;
}

int p9() {
	int N;
	int t = 1;
	ll sum = 0;
	scanf("%d", &N);
	do {
		sum += t;
	} while (t++ < N);
	printf("%lld", sum);

	return 0;
}

int p10() {
	int n;
	ll sum = 0;
	do {
		scanf("%d", &n);
		sum += n;
	} while (n != 0);
	printf("%lld", sum);

	return 0;
}

int p11() {
	int t = 0;
	while (t++ < 9) {
		printf("%d * %d = %d\n", 2, t, 2 * t);
	}

	return 0;
}

int p12() {
	int N, t = 0;
	scanf("%d", &N);
	while (t++ < 9) {
		printf("%d * %d = %d\n", N, t, N * t);
	}

	return 0;
}

int p13() {
	int n1 = 1, n2;
	while (n1++ < 9) {
		n2 = 0;
		while (n2++ < 9)
			printf("%d * %d = %d\n", n1, n2, n1 * n2);
		printf("\n");
	}

	return 0;
}

int p14() {
	for (int i = 9; i > 1; i--)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}

int p15() {
	for (int i = 9; i < 81; i++)
	{
		printf("%d * %d = %d\n", i / 9 + 1, i % 9 + 1, (i / 9 + 1) * (i % 9 + 1));
	}

	return 0;
}

int p16() {
	int a, b;
	int sum = 0, mul = 1;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		sum += i;
		mul *= i;
	}
	printf("%d %d", sum, mul);

	return 0;
}
//*****
//*****
//*****
//*****
//*****
int p17() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
//*****
//****
//***
//**
//*
int p18() {
	int N;
	scanf("%d", &N);
	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
//*****
// ****
//  ***
//   **
//    *
int p19() {
	int N;
	scanf("%d", &N);
	for (int i = N; i > 0; i--)
	{
		for (int j = i; j < N; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//  *  
// *** 
//*****
int p20() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j <= N * 2 - 1; j++)
		{
			if (N - i <= j && N + i >= j) {
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}
//  *  
// *** 
//*****
// *** 
//  *  
int p21() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N * 2 - 1; i++)
	{
		for (int j = 1; j <= N * 2 - 1; j++)
		{
			if (N > i) {
				if (N - i <= j && N + i >= j) {
					printf("*");
				}
				else
					printf(" ");
			}
			else {
				if (i - N + 2 <= j && N * 3 - i - 2 >= j) {
					printf("*");
				}
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}

int p22() {
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%4d", i);
		if (i % 15 == 0)
			printf("\n");
	}
	return 0;
}

int p23() {
	int n = 1;
	for (int i = 1; i < 101; i++)
	{
		if (i % 5 == 0 || i % 7 == 0) {
			printf("%d ", i);
			n++;
		}
		if (n % 6 == 0) {
			printf("\n");
			n = 1;
		}
	}
	return 0;
}

int p24() {
	int kor, mat, pro;
	scanf("%d %d %d", &kor, &mat, &pro);
	double avg = (kor + mat + pro) / 3.0;
	if (avg >= 90.0)
		printf("A");
	else if (avg >= 80.0)
		printf("B");
	else if (avg >= 70.0)
		printf("C");
	else if (avg >= 60.0)
		printf("D");
	else
		printf("F");

	return 0;
}

int p25() {
	int n = 0, sum = 0;
	while (1) {
		sum += ++n;
		if (sum > 100000)
			break;
	}
	printf("%d %d", n, sum);
	return 0;
}

int p26() {
	int n = 0;
	int sum = 0;
	while (1) {
		sum += ++n;
		printf("%d\n", sum);
		if (sum > 50000) {
			sum -= n--;
			break;
		}
	}
	printf("%d %d", n, sum);
	return 0;
}

int p27() {
	int n = 0;
	while (n++ < 50) {
		if (n % 2 == 0 || n % 3 == 0)
			continue;
		printf("%d\n", n);
	}
	return 0;
}

int p28() {
	for (int i = 2; i <= 9; i++)
	{
		if (i % 2 == 1)
			continue;
		for (int j = 1; j <= i; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}

int p29() {
	int i = 1, j;
	while (i <= 9) {
		i++;
		j = 0;
		while (j <= 9) {
			j++;
			if (j > i)
				break;
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}

int p30() {
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			for (int k = 3 * (i - 1) + 1; k <= 3 * i; k++)
			{
				printf("%d * %d = %d	", k, j, k * j);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	return 0;
}

int p31() {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i * 10 + j + j * 10 + i == 99)
				printf("%d %d\n", i, j);
		}
	}
	return 0;
}

int p32() {
	char dir;
	scanf("%c", &dir);
	switch (dir)
	{
	case 'w':
		printf("move up");
		break;
	case 'a':
		printf("move left");
		break;
	case 's':
		printf("move down");
		break;
	case 'd':
		printf("move right");
		break;
	default:
		printf("incollect direction");
		break;
	}
	return 0;
}

int p33() {
	int inp;
	while (1) {
		if (_kbhit()) {
			inp = _getch();
			switch (inp)
			{
			case 'w':
				printf("move up\n");
				break;
			case 'a':
				printf("move left\n");
				break;
			case 's':
				printf("move down\n");
				break;
			case 'd':
				printf("move right\n");
				break;
			default:
				printf("incollect direction\n");
				break;
			}
		}
	}
	return 0;
}

int p34() {
	char str;
	scanf("%c", &str);
	switch (str)
	{
	case 'M':
	case 'm':
		printf("Good Morning");
		break;
	case 'A':
	case 'a':
		printf("Good Afternoon");
		break;
	case 'E':
	case 'e':
		printf("Good Evening");
		break;
	default:
		printf("incollect choice");
		break;
	}
	return 0;
}

int p35() {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				if (i * 101 + j * 20 + k * 101 == 1232)
					printf("%d %d %d\n", i, j, k);
			}
		}
	}
	return 0;
}

int p36_add(int a, int b) {
	return a + b;
}
int p36_sub(int a, int b) {
	return a - b;
}
int p36_mul(int a, int b) {
	return a * b;
}
double p36_div(int a, int b) {
	if (b == 0)
		return 0;
	return (double)a / (double)b;
}

int p36() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("add : %d\nsub : %d\nmul : %d\ndiv : %f\n", p36_add(a, b), p36_sub(a, b), p36_mul(a, b), p36_div(a, b));
	return 0;
}

int p37_tmax(int a, int b, int c) {
	int t = (a > b) ? a : b;
	return (t > c) ? t : c;
}
int p37_tmin(int a, int b, int c) {
	int t = (a < b) ? a : b;
	return (t < c) ? t : c;
}
int p37() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d", p37_tmax(a, b, c), p37_tmin(a, b, c));
	return 0;
}

int p38() {
	double a;
	scanf("%lf", &a);
	printf("sin : %lf\ncos : %lf\ntan : %lf", sin(a), cos(a), tan(a));
	return 0;
}

int p39_fact(int n) {
	if (n <= 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return n * p39_fact(n - 1);
}
int p39() {
	printf("%d\n", p39_fact(5));
	return 0;
}

int p40() {
	int arr[5];
	int max = INT_MIN;
	int min = INT_MAX;
	int bidx = 0;
	int sidx = 0;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
			bidx = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			sidx = i;
		}
		sum += arr[i];
	}
	printf("%d %d\n%d %d\n%d", max, bidx, min, sidx, sum);
	return 0;
}

int p41() {
	char str[20];
	scanf("%s", str);
	int len = strlen(str);
	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	return 0;
}

int p42() {
	int n1 = 100;
	int* p;
	p = &n1;
	printf("주소(address) : %p, %p\n", p, &n1);
	printf("내용,값 : %d,%d\n", *p, n1);
	for (int i = 0; i < 5; i++)
	{
		printf("%4d", (*p)++);
	}
	printf("\n%d\n", n1);
	return 0;
}

int p43() {
	int a[5] = { 0,1,2,3,4 };
	printf("%d %d\n", a[0], a[0]);
	printf("%p %p\n", &a[0], &a[0]);
	printf("a주소 : %p, a[0]주소 : %p\n", &a, &a[0]);
	int* p = a;
	printf("a주소 : %p\n", p);
	return 0;
}

int p44() {
	int arr[3] = { 0,1,2 };
	int* p;
	p = arr;//배열의 이름 arr은 주소다
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	printf("%d %d %d\n", p[0], p[1], p[2]);
	printf("%d %d %d\n", *p, *(p + 1), *(p + 2));
	return 0;
}

int p45() {
	char str1[10] = "abcd";
	char* str2 = "ABCD";
	printf("%s\n", str1);
	printf("%s\n", str2);
	str1[2] = 'x';
	//str2[2] = 'x';  //런타임 에러
	printf("%s\n", str1);
	printf("%s\n", str2);
	return 0;
}

int p46() {
	int a = 1, b = 2, c = 3;
	int arr[3] = { 10,20,30 };
	int* parr[3] = { &a,&b,&c };
	printf("%d\n", *parr[0]);
	printf("%d\n", *parr[1]);
	printf("%d\n", *parr[2]);
	return 0;
}

int p47() {
	char str[3][10] = { "Kim","Hong","Lee" };
	char* parr[3] = { "Kim","Hong","Lee" };
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	return 0;
}

int p48() {
	char str[3][10] = { "Kim","Hong","Lee" };
	char* parr[3] = { str[0],str[1],str[2] };
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%s\n", *(parr));
	printf("%s\n", *(parr + 1));
	printf("%s\n", *(parr + 2));
	printf("%s\n", *parr + 0);
	printf("%s\n", *parr + 1);
	printf("%s\n", *parr + 2);
	return 0;
}

int p49() {
	int score[10] = { 34,6,34,6,234,6,789,56,23,2 };
	int rank[10];
	for (int i = 0; i < 10; i++)
	{
		rank[i] = 1;
		for (int j = 0; j < 10; j++)
		{
			if (score[i] < score[j])
				rank[i]++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d번 랭크 : %d\n", i + 1, rank[i]);
	}
	return 0;
}

int p50() {
	int score[10] = { 95,64,78,94,65,71,72,59,45,78 };
	int rank[102] = { 0, };
	for (int i = 0; i < 10; i++)
		rank[score[i]]++;
	rank[101] = 1;
	for (int i = 101 - 1; i >= 0; i--)
		rank[i] = rank[i] + rank[i + 1];
	printf("학번 점수 등수\n");
	for (int i = 0; i < 10; i++)
		printf("%3d %5d %3d\n", i + 1, score[i], rank[score[i] + 1]);
	return 0;
}

int p51() {
	int i;
	char str[256];
	printf("Enter a number : ");
	scanf("%d", &i);
	itoa(i, str, 10);
	printf("decimal : %s\n", str);
	itoa(i, str, 16);
	printf("hexadecimal : %s\n", str);
	itoa(i, str, 2);
	printf("binary : %s\n", str);
	return 0;
}

int p52() {
	int	arr[100] = { 0 };
	int in[] = { 155, 179, 167, 156, 179, 145, 180, 175, 167, 165, 157, 186, 155, 184, 163, 154, 157, 159, 171, 168, 179, 173, 153, 171, 171, 175, 172, 174, 173, 179, 164, 167, 172, 176, 174, 181, 181, 161, 190, -99 };
	int a;
	int t = 0;
	for (int i = 0;; i++) {
		a = in[i];
		if (a == -99)
			break;
		if (a < 150 || a>184)
			continue;
		switch (a / 10)
		{
		case 15:
			t = 0;
			break;
		case 16:
			t = 2;
			break;
		case 17:
			t = 4;
			break;
		case 18:
			t = 6;
			break;
		}
		if (a % 10 >= 5)
			arr[t + 1]++;
		else
			arr[t]++;
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



int main() {
	p52();

	return 0;
}