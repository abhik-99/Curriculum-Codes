#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
int queue[MAXSIZE],rear=-1,front=-1,f=0;
void display(){
	int i;
	printf("\nThe QUEUE is:\n");
	for(i=front;i<rear;i++){
		printf("%d\n",queue[i]);
	}
}
void qInsert(){
	int item;
	if(rear==MAXSIZE){
		printf("\nQUEUE OVERFLOW!");
		return;
	}
	rear++;
	printf("\nPlease enter the item to be inserted:");
	scanf("%d",&item);
	queue[rear]=item;
	if(front=-1){
		front=0;
		
		f=1;
	}
}
void qDelete(){
	if(front==-1){
		printf("\nQUEUE UNDERFLOW!!");
		return;
	}
	printf("\n%d removed from QUEUE!",queue[front]);
	if(front==rear)
	{
	front=-1;
	rear=-1;
	f=0;
}
else
front++;
}
void search(){
	int i,item;
	printf("\nPlease enter the item to be searched:");
	scanf("%d",&item);
	for(i=front;i<rear;i++){
		printf("%d\n",queue[i]);
	}
}
void sort(){
	int i,j;
	for(i=front;i<rear;i++){
		for(j=i+1;j<rear;j++){
			if(queue[i]>queue[j]){
				int tem=queue[i];
				queue[i]=queue[j];
				queue[j]=tem;
			}
		}
	}
}
void create(){
	int i,s;
	printf("\nPlease enter the size of the QUEUE (MAXSIZE=100):");
	scanf("%d",&s);
	for(i=0;i<s;i++){
		qInsert();
	}
}
main(){
	int ch;
	printf("This is an implementation of Linear QUEUE using Array. Please note that the size of the QUEUE is 100");
	while(1){
		if(f==0){
			printf("\nThe QUEUE is empty.");
			create();
		}
		printf("Please enter your choice:\n1.INSERT\n2.DELETE\n3.SEARCH\n4.SORT\n5.EXIT\n:");
		switch(ch){
			case 1:qInsert();
				   break;
			case 2:qDelete();
					break;
			case 3:search();
					break;
			case 4:sort();
					break;
			case 5:exit(0);
			default:printf("Wrong Choice!");
		}
	}
}
