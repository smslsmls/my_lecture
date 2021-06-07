#include<stdio.h>

int main(){
	FILE* fp;
	fp=fopen("filein.txt","r");
	char name[80]="";
	int my_age;
	while(!feof(fp)){
		fscanf(fp,"%s %d",name,&my_age);
		printf("%s %d\n",name,my_age);
	}
	fclose(fp);
}