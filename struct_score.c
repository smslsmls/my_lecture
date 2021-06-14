#include<stdio.h>
#include<string.h>

typedef struct{
	char name[20];
	int kor,eng,math;
}student;

student score(student s1,student s2){
	student sum;
	strcpy(sum.name,"sum");
	sum.kor=s1.kor+s2.kor;
	sum.kor=s1.eng+s2.end;
	sum.kor=s1.math+s2.math;
	return sum;
}

int main(){
	student s1,s2,sum;
	scanf("%s %d %d %d",s1.name,&s1.kor,&s1.eng,&s1.math);
	scanf("%s %d %d %d",s2.name,&s2.kor,&s2.eng,&s2.math);
	
	sum=score(s1,s2);
	
	printf("%s %d %d %d\n",s1.name,s1.kor,s1.eng,s1.math);
	printf("%s %d %d %d\n",s2.name,s2.kor,s2.eng,s2.math);
	printf("%s %d %d %d\n",sum.name,sum.kor,sum.eng,sum.math);
}