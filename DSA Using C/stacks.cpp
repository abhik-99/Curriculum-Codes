#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
int stack[MAXSIZE],top=-1,f=0;
void push(){
	if(top==MAXSIZE){
		printf("\nSTACK OVERFLOW!");
		return;
	}
	top++;
	printf("\nPlease enter the element to be pushed:");
	scanf("%d",&stack[top]);
}
void pop(){
	int item;
	if(top==0){
		printf("\nSTACK UNDERFLOW!!");
		return;
	}
	item=stack[top];
	top--;
	printf("\n%d popped!\n",item);
}
void display(){
	int i;
	printf("The Stack is:\n");
	for(i=0;i<=top;i++){
		printf("%d\n",stack[i]);
	}
}
void search(){
	int item,i;
	if(top==0){
		printf("\nSTACK UNDERFLOW!!");
		f=0;
		return;
	}
	printf("\nPlease enter the item to be searched:");
	scanf("%d",&item);
	for(i=0;i<=top;i++){
		if(stack[i]==item){
			printf("\n%d found at %d",item,i);
			return;
		}
	}
	
	printf("\nNo such item found!");
}
void sort(){
	int i,j;
	for(i=0;i<=top;i++){
		for(j=i+1;j<=top;j++){
			if(stack[i]<stack[j]){
				int tem=stack[i];
				stack[i]=stack[j];
				stack[j]=tem;
			}
		}
	}
}
void create(){
	int i=0,s;
	printf("\nPlease enter the size of the stack (MAXSIZE=100):");
	scanf("%d",&s);
	for(i=0;i<s;i++){
		push();
	}
	
f=1;
}

main(){
	int ch;
	printf("This is an implementatio of Stack using Array.\nPlease note that MAXSIZE=100.");
	while(1){
		if(f==0){
			printf("\nSTACK is empty. Please create a STACK.");
			
			create();
		}
		printf("Please enter your choice:\n1.PUSH\n2.POP\n3.SEARCH\n4.SORT\n5.DISPLAY\n6.EXIT\n:");
		scanf("%d",&ch);
		switch(ch){
		case 1:push();
			   break;
		case 2:pop();
			   break;
		case 3:search();
		 	   break;
		case 4:sort();
			   break;
	    case 5:display();
				break;
		case 6: exit(0);
		default:printf("Wrong Choice!");
		 
		}
	}
}
