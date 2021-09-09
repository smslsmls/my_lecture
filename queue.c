#include<stdio.h>
#define SIZE 5

int queue[SIZE];
void menuf(){
	printf("1. insert\t2.delete\n");
	printf("3. display\t2.exit\n");
}

void Enqueue(int *back,int item){
	if(*back>=SIZE-1)
		printf("queue is full");
	else
		queue[++*back]=item;
}

int Dequeue(int *front,int back){
	if(*front==back)
		printf("queue is empty");
	else
		return queue[*front++];
}

void display(int front,int back){
	for(int i=front;i<back;i++){
		printf("%d\n",stack[i]);
	}
}

int main(){
	int front=-1,back=-1;
	int menu,item;
	while(1){
		menuf();
		scanf("%d",&menu);
		switch(menu){
		case 1:
			scanf("%d",&item);
			Enqueue(&back,item);
			break;
		case 2:
			item=Dequeue(&front,back);
			break;
		case 3:
			display(front,back);
			break;
		case 4:
			return 0;
		default:
			break;
		}
	}
}