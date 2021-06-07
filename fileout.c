#include<stdio.h>

int main(){
	FILE *fp=fopen("fileout.txt","w");
	fprintf(fp,"%s %d\n","홍길동",34);
	fclose(fp);
	return 0;
}