#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int p1() {
	int x = 0x7fffffff;
	char y = 127;
	printf("%d", x);
	x++;
	printf("%d\n", x);
	printf("%c\n", y);
	printf("%d", y);
	y++;
	printf("%d\n", y);

	return 0;
}

int p2() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("sum %d\navg %d", a + b + c + d, (a + b + c + d) / 4);
	return 0;
}

int p3() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d / %d = %d...%d", a, b, a / b, a % b);
	return 0;
}

int p4() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("width = %d\nlength = %d\narea = %d", a += 5, b *= 2, a * b);

	return 0;
}

int p5() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", ++a, b);
	printf("%d %d", a, --b);
	return 0;
}

int p6() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", ((a > c) && (b > d)));

	return 0;
}

int p7() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = ++a + b--;
	printf("a = %d b = %d c = %d", a, b, c);

	return 0;
}

int p8() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("avg = %.1f", (a + b + c) / 3);

	return 0;
}

int p9() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("sum = %d avg = %d", (int)(a + b + c), (int)((a + b + c) / 3));

	return 0;
}

int p10() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d %d %d", (a > b), (b >= c), (a <= b), (b < c));

	return 0;
}

int p11() {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	printf("%d %d %d %d %d", a + 3, b - 3, c * 3, d / 3, e % 3);

	return 0;
}

int p12() {
	int a = 10, b = 10;
	printf("최촛값 a = %d b = %d\n\n\n", a, b);
	printf("a++ = %d ++b = %d\n", a++, ++b);
	printf("실행후 a = %d b = %d\n\n\n", a, b);
	printf("a-- = %d --b = %d\n", a--, --b);
	printf("실행후 a = %d b = %d\n\n\n", a, b);

	return 0;
}

int p13() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d", a += 100, b /= 10);

	return 0;
}

int p14() {
	printf("%s\n%d\n%f\n%f\n%d + %d = %d\n%s", "수를 출력할때는 따옴표를 생략합니다.", 123, 6.5, 68.6, 10, 5, 10 + 5, "내 생일은 2005년 03월 18일 입니다.");

	return 0;
}

int p15() {
	int a;
	scanf("%d", &a);
	printf("%d초는 %d분 %d초 입니다.", a, a / 60, a % 60);

	return 0;
}

int p16() {
	char a = 'A';
	while (a <= 'Z')
		printf("%c", a++);

	return 0;
}

int p17() {
	int num = 0, sum = 0;
	while (num++ < 10)
		sum += num;
	printf("%d %d", sum, num);

	return 0;
}

int p18() {
	int N;
	int t = 0;
	int sum = 0;
	scanf("%d", &N);
	while (t++ < N)
		sum += t;
	printf("%d", sum);

	return 0;
}

int p19() {
	int N;
	int t = 0;
	scanf("%d", &N);
	while (t < N)
		printf("%d\n", t++);

	return 0;
}

int p20() {
	int N;
	int t = 0;
	scanf("%d", &N);
	while (t++ < 9)
		printf("%d * %d = %d\n", N, t, N * t);

	return 0;
}

int p21() {
	for (int i = 1; i < 20; i += 2)
	{
		printf("%d ", i);
	}

	return 0;
}

int p22() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}

int p23() {
	int N;
	printf("단을 입력하세요 : ");
	scanf("%d", &N);
	for (int i = 1; i <= 9; i++)
	{
		printf("%d X %d = %d\n", N, i, N * i);
	}

	return 0;
}

int p24() {
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

int p25() {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", i + 1);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", j + 1);
		}
		printf("\n");
	}

	return 0;
}

int p26() {
	int s;
	scanf("%d", &s);
	if (s > 90)
		printf("A");
	if (s <= 90 && s > 80)
		printf("B");
	if (s <= 80 && s > 70)
		printf("C");
	if (s <= 70)
		printf("F");

	return 0;
}

int p27() {
	int s;
	scanf("%d", &s);
	if (s < 80)
		printf("불");
	printf("합격");

	return 0;
}

int p28() {
	int n, m, t;
	scanf("%d %d", &n, &m);
	if (n > m)
		t = n - m;
	else
		t = m - n;
	printf("%d", t);
	return 0;
}

int p29() {
	int y;
	scanf("%d", &y);
	if (y >= 20)
		printf("adult");
	else
		printf("%d yeats later", 20 - y);

	return 0;
}

int p30() {
	int a, b = -0x7fffffff - 1;
	int t = 3;
	while (t--) {
		scanf("%d", &a);
		if (a > b)
			b = a;
	}
	printf("%d", b);

	return 0;
}

int p31() {
	int t = 0;
	while (t++ < 9) {
		printf("3*%d=%d\n", t, t * 3);
	}

	return 0;
}

int p32() {
	int t = 1;
	do {
		printf("3*%d=%d\n", t, t * 3);
	} while (t++ < 9);

	return 0;
}

int p33() {
	unsigned long long sum = 0;
	unsigned long long a;
	while (1) {
		printf("0 입력시 종료 : ");
		scanf("%lld", &a);
		if (a == 0)
			break;
		sum += a;
	}
	printf("총합 : %lld", sum);

	return 0;
}

int p34() {
	int t = 0;
	int n;
	scanf("%d", &n);
	while (t++ < 9) {
		printf("%d*%d=%d\n", n, t, t * n);
	}

	return 0;
}

int p35() {
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}

	return 0;
}

int p36() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	int mul = 1;
	if (n1 < n2) {
		for (int i = n1; i <= n2; i++)
		{
			mul *= i;
		}
	}
	else {
		for (int i = n2; i <= n1; i++)
		{
			mul *= i;
		}
	}
	printf("%d", mul);

	return 0;
}

int p37() {
	int n;
	scanf("%d", &n);
	unsigned long long mul = 1;
	for (int i = 1; i <= n; i++)
	{
		mul *= i;
	}
	printf("%llu", mul);

	return 0;
}

int p38() {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

int p39() {
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

int p40() {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < (5 - i) * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

int p41() {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < (5 - i) * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < (5 - i) * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

int p42() {
	int n1, n2, n3;
	char oper1, oper2;
	scanf("%d %c %d %c %d", &n1, &oper1, &n2, &oper2, &n3);
	if (oper2 == '*' || oper2 == '/') {
		switch (oper2) {
		case '*':
			n2 *= n3;
			break;
		case '/':
			n2 /= n3;
			break;
		}
	}
	switch (oper1) {
	case '+':
		n2 += n1;
		break;
	case '-':
		n2 = n1 - n2;
		break;
	}
	if (oper2 == '+' || oper2 == '-') {
		switch (oper2) {
		case '+':
			n2 += n3;
			break;
		case '-':
			n2 -= n3;
			break;
		}
	}
	printf("%d", n2);

	return 0;
}

int p43() {
	int s, p;
	scanf("%d %d", &s, &p);
	printf("%s", (s >= p) ? "합격" : "불합격");

	return 0;
}

int p44() {
	int n;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("1st");
		break;
	case 2:
		printf("2st");
		break;
	case 3:
		printf("3st");
		break;
	default:
		printf("%dth", n);
		break;
	}

	return 0;
}

int p45() {
	int n, t = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%d ", t++);
		}
		printf("\n");
	}

	return 0;
}

/*
조건 : 조건식의 결과가 정수나 문자가 될 수 있는 조건 또는 조건 변수
case 값 n : 조건의 결과가 값 n일대 해당 명령을 수행(n은 반드시 정수형 상수)
break : switch문을 종료하는 명령
default : case에 없는 그 외의 모든 경우에 실행ㄴ
*/

int p46() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == i || j == n - i - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

int p47() {
	for (int i = 1; i < 10; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			printf("%d * %d = %2d\t", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}

int p48() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			printf("(%d, %d)", i, j);
		}
		printf("\n");
	}
	return 0;
}

int p49() {
	double arr[6];
	double sum = 0;
	for (int i = 0; i < 6; i++)
	{
		scanf("%lf", &arr[i]);
		sum += arr[i];
	}
	printf("%.1f", sum / 6.0);
	return 0;
}

int p50() {
	int arr[10];
	int odd = 0, even = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (i % 2 == 0)
			odd += arr[i];
		else
			even += arr[i];
	}
	printf("odd : %d\neven : %d\n", odd, even);
	return 0;
}

int p51() {
	int max = -0x7fffffff - 1;
	int min = 0x7fffffff;
	int arr[100000];
	int idx = 1;
	while (idx++ < 100) {
		scanf("%d", &arr[idx]);
		if (arr[idx] > max)
			max = arr[idx];
		if (arr[idx] < min)
			min = arr[idx];
		if (arr[idx] == 999)
			break;
	}
	printf("max : %d\nmin : %d", max, min);
	return 0;
}

int p52() {
	int arr[3];
	int avg;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	avg = (arr[0] + arr[1] + arr[2]) / 3;
	if (avg < 80) {
		printf("불");
		avg = 80 - avg;
	}
	printf("합격! %d", avg);
	return 0;
}

int p53() {
	int head, leg;
	scanf("%d %d", &head, &leg);
	printf("토끼 : %d, 닭 : %d", (head / 2) - leg, leg * 2 - (head / 2));
	return 0;
}

int p54() {
	char str[100000];
	int idx;
	char in;
	scanf("%s", str);
	while (1) {
		scanf("%d", &idx);
		getchar();
		scanf("%c", &in);
		str[idx - 1] = in;
		printf("%s", str);
	}
	return 0;
}

int p55() {
	int arr[5];
	int b = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("%d번 학생의 프C 성적 : ", i + 1);
		scanf("%d", &arr[i]);
		b = (arr[i] > b) ? arr[i] : b;
	}
	printf("최고 점수 : %d", b);
	return 0;
}

int p56() {
	int arr[5];
	int b = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		b = (arr[i] > b) ? arr[i] : b;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("%d", b);
	return 0;
}

int p57() {
	int N;
	int arr[105];
	double avg;
	int sum = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	avg = (double)sum / N;
	printf("%.2lf", avg);
	return 0;
}

int p58() {
	int arr[15] = { 0, };
	int a;
	scanf("%d", &a);
	while (a > 0 && a <= 10) {
		arr[a]++;
		scanf("%d", &a);
	}
	for (int i = 1; i <= 10; i++)
	{
		if (arr[i] == 0)
			continue;
		printf("%d : %d개\n", i, arr[i]);
	}
	return 0;
}

int p59() {
	int arr[5][5] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		printf("%d번 점수 : ", i + 1);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
			arr[i][3] += arr[i][j];
			arr[3][j] += arr[i][j];
		}
		arr[3][3] += arr[i][3];
	}
	printf("     컴일  프C 수학 총점\n");
	for (int i = 0; i < 3; i++)
	{
		printf(" %d번 ", i + 1);
		for (int j = 0; j < 4; j++)
		{
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("합계 ");
	for (int i = 0; i < 4; i++)
	{
		printf("%4d ", arr[3][i]);
	}
	return 0;
}

int p60() {
	int n;
	scanf("%d", &n);
	int s = n;
	int cnt = 1;
	int row = 0, col = -1;
	char arr[100][100];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = ' ';
		}
		arr[i][n] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		col += 1;
		arr[row][col] = '*';
	}
	n--;
	for (int i = 0; i < n; i++)
	{
		row += 1;
		arr[row][col] = '*';
	}
	for (int i = 0; i < n; i++)
	{
		col += -1;
		arr[row][col] = '*';
	}
	n--;
	for (int i = 0; i < n; i++)
	{
		row += -1;
		arr[row][col] = '*';
	}
	for (int i = 0; i < s; i++)
	{
		printf("%s\n", arr[i]);
	}
	return 0;
}

int p61_f(int a) {
	return a * (a + 1) / 2;
}
int p61() {
	int n;
	scanf("%d", &n);
	printf("%d\n", p61_f(n));
	return 0;
}

int p62_arr[10];
int p62_f() {
	int b = 0;
	for (int i = 1; i < 10; i++)
	{
		if (p62_arr[i] > p62_arr[b])
			b = i;
	}
	return b;
}
int p62() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &p62_arr[i]);
	}
	printf("%d", p62_f());
	return 0;
}

int p63() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N - 1; i++)
	{
		printf("*");
		for (int j = 0; j < i - 1; j++)
		{
			printf(" ");
		}
		if (i != 0)
			printf("*");
		printf("\n");
	}
	for (int i = 0; i < N; i++)
	{
		printf("*");
	}
	return 0;
}

int p64() {
	int arr[105][105] = { 0 };
	int N, M;
	int row = 0;
	int col = 0;
	int r, c;
	int cnt = 1;
	scanf("%d %d", &N, &M);
	int s = (N > M) ? M : N;
	for (int i = 1; i <= s - 1; i++)
	{
		c = col++;
		r = row;
		for (int j = 0; j < i; j++)
		{
			arr[c][r] = cnt++;
			c--;
			r++;
		}
	}
	c = col;
	r = row;
	for (int i = 0; i < s; i++)
	{
		arr[c][r] = cnt++;
		c--;
		r++;
	}
	for (int i = 0; i < abs(N - M); i++)
	{
		if (M > N)
			row++;
		else
			col++;
		c = col;
		r = row;
		for (int j = 0; j < s; j++)
		{
			arr[c][r] = cnt++;
			c--;
			r++;
		}
	}
	for (int i = s - 1; i > 0; i--)
	{
		c = col;
		r = ++row;
		for (int j = 0; j < i; j++)
		{
			arr[c][r] = cnt++;
			c--;
			r++;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}



int main() {
	p64();

	return 0;
}