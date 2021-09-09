#include<stdio.h>
#define SIZE 5

void push(int);
void pop();
void display();

int stack[SIZE];
int top=-1;

int main(){
	int val,choice;
	printf("\n---------menu---------\n");
	while(1){
		printf("1.push\t2.pop\t3.display\t4.exit\n");
		printf("Choice : ");
		scanf("%d",&choice);
		switch(choice){
		case 1:
			scanf("%d",&val);
			push(val);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("exiting...");
			return 0;
		default:
			printf("please input again");
		}
	}
}

void push(int val){
	if(top==SIZE-1)
		printf("stack is full!");
	else
		stack[++top]=val;
}
void pop(){
	if(top==-1)
		printf("stack is empty!");
	else
		printf("%d",stack[top--]);
}
void display(){
	if(top==-1)
		printf("stack is empty!");
	else{
		for(int i=top;i>=0;i--){
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}