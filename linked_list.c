#include<stdio.h>

typedef struct{
	node* next;
	int data;
}node;

int main(){
	node* head=(node*)malloc(sizeof(node));
	node* node1=(node*)malloc(sizeof(node));
	head->next=node1;
	node1->data=10;
	
	node* node2=(node*)malloc(sizeof(node));
	node1->next=node2;
	node2->data=20;
	
	node2->next=NULL;
	
	struct node*curr=head->next;
	while(curr!=NULL){
		printf("%d\n",curr->data);
		curr=curr->next;
	}
	
	free(head);
	free(node1);
	free(node2);
}