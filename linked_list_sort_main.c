#include<stdio.h>
#include"linked_list.h"

int MySort(int n1,int n2){
	if(n1<n2)return 0;
	else return 1;
}

int main(){
	List list;
	int data;
	ListInit(&list);
	SetSortRule(&list,MySort);
	
	LInsert(&list,1);
	LInsert(&list,1);
	LInsert(&list,2);
	LInsert(&list,2);
	LInsert(&list,3);
	LInsert(&list,1);
	LInsert(&list,7);
	LInsert(&list,6);
	LInsert(&list,6);
	LInsert(&list,6);
	
	printf("current data: %d\n",LCount(&list));
}