#include<stdio.h>

typedef struct stu{
	char name[10];//멤버 변수, 필드
	int age;
	int score;
}Stu;

int main(){
	struct stu s1={"KIM",17,90};
	struct stu s2={"PARK",17,80};
	printf("%s",s1.name);
	printf("%d",s1.age);
	printf("%d",s1.score);
	
}