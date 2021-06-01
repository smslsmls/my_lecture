#include<stdio.h>

int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int g=gcd(a,b);
	printf("gcd : %d\ngcm : %d",g,a*b/g);
}