#include<stdio.h>
#include<windows.h>

int m[9][9]={
	{2,2,2,2,2,2,2,2,2},
	{2,0,0,0,0,0,0,0,2},
	{2,0,2,2,0,2,2,0,2},
	{2,0,2,0,0,2,0,0,2},
	{2,0,2,0,2,0,2,0,2},
	{2,0,0,0,0,0,2,0,2},
	{2,0,2,2,2,0,2,2,2},
	{2,0,0,0,0,0,0,0,2},
	{2,2,2,2,2,2,2,2,2}};
int Si,Sj,Ei,Ej,succes,top, ri[100],rj[100];
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
int visit(int,int);
int main(){
	top=0;
	succes=0;
	printf("=== find maze path game ===\n");
	Si=1;Sj=1;
	Ei=7; Ej=7;
	if(visit(Si,Sj)==0)
		printf("can't find destination\n");
	else
		printf("find all path\n");
	return 0;
}
int visit(int i,int j){
	static int path=1;
	m[i][j]=1;
	ri[top]=i; rj[top]=j;
	top++;
	if(i==Ei&&j==Ej){
		printf("find path %d\n",path++);
		for(int k=0;k<top;k++){
			printf("(%d, %d) ",ri[k],rj[k]);
		}
		printf("\n");
		succes=1;
	}
	
	for(int k=0;k<4;k++){
		if(m[i+Y[k]][j+X[k]]==0)
			visit(i+Y[k],j+X[k]);
	}
	top--;
	m[i][j]=0;
	return succes;
}