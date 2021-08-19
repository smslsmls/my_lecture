#include<stdio.h>

int main(){
	char string[]="Hello";
	//배열의 이름은 포인터와 같은 역할
	char *pstr=string;
	while(*pstr){
		putchar(*pstr++);
	}
}