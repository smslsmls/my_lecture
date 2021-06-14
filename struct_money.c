#include<stdio.h>

typedef struct{
	int n;
	int m;
}M;

int main(){
	M m[5];
	int k=0;
	for(int i=0;i<5;i++){
		m[i].n=i;
		scanf("%d",&m[i].m);
		if(m[i].m>m[k].m)
			k=i;
	}
	printf("%d %d",k,m[k].m);
}