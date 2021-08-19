#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[4]={1,2,3,4};
	int*parr;
	parr=(int*)malloc(sizeof(int)*4);
	for(int i=0;i<4;i++){
		parr[i]=i*i;
		printf("parr[i]=%d\n",parr[i]);
	}
	free(parr);
	return 0;
}