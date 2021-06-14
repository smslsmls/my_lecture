#include<stdio.h>

typedef struct{
	char name[20];
	int age;
	int num;
}profile;

int main(){
	profile me;
	scanf("%s %d %d",me.name,&me.age,&me.num);
	printf("%s %d %d",me.name,me.age,me.num);
}