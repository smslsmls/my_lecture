#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char name[10];//멤버 변수, 필드
	int age;
	int score;
}stu;

int main(){
	stu* student;
	student=(stu*)malloc(sizeof(stu));
	strcpy(student->name,"KIM");
	student->age=17;
	//(*student).age=18;
	free(student);
}