#include<stdio.h>

int main(){
	char name[20];
	int age;
	FILE* fp;
	fp=fopen("myData.txt","w");
	for(int i=0;i<3;i++){
		scanf("%s %d",name,&age);
		fprintf(fp,"%s %d\n",name,age);
	}
}