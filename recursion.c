#include<stdio.h>

//recursion
void recur(int n) {
	if (n < 0)
		return;
	printf("Call a function in function : %d\n", n);
	recur(n - 1);
}
int main() {
	recur(5);
	return 0;
}