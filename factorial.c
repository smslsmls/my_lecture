#include<stdio.h>

int factorial[100];

int fact(int n){
	if(factorial[n]!=0)
		return factorial[n];
	return factorial[n]=((c==0)?1:c*fact(n-1));
}

int main(){
	int n=10;
	printf("%d! = %d",n,fact(n));
	return 0;
}