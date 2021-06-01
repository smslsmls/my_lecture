#include<stdio.h>

int isPrime(int n){
	for(in ti=2;i*i<=n;i++){
		if(!(n%i))
			return 0;
	}
	return 1;
}
