#include<stdio.h>
#include<string.h>

typedef struct{
	char name[20];
	int he;
	double we;
}stu;

stu students[5];

void input(){
	for(int i=0;i<5;i++){
		scanf("%s %d %lf",students[i].name,&students[i].he,&students[i].we);
	}
}

void output(){
	for(int i=0;i<5;i++){
		printf("%s %d %.1lf\n",students[i].name,students[i].he,students[i].we);
	}
}

void sort(){
	stu tmp;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(students[i].he>students[j].he){
				strcpy(tmp.name,students[i].name);
				strcpy(students[i].name,students[j].name);
				strcpy(students[j].name,tmp.name);
				
				tmp.he=students[i].he;
				students[i].he=students[j].he;
				students[j].he=tmp.he;
				
				tmp.we=students[i].we;
				students[i].we=students[j].we;
				students[j].we=tmp.we;
			}
		}
	}
}

int main(){
	input();
	sort();
	output();
}