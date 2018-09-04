#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *start=(struct node*)malloc(sizeof(struct node));
int flag=1;

//Displaying the Linked List
void display(){
	struct node *p=start;
	printf("\nThe List is:");
	while(p!=NULL){
		printf("\n%d",p->data);
		p=p->next;
	}
}

//Insert At End
void insert_end(){
	struct node *p=start,*temp;
	int item;
	printf("\nPlease enter the data item to be inserted:");
	scanf("%d",&item);
	while(p->next!=NULL){
		p=p->next;
	}
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	p->next=temp;
	temp->next=NULL;
}

//Traverse in Reverse Order
void traverse_reverse(struct node *start){
	struct node *p=start;
	if(p->next!=NULL)
	traverse_reverse(p->next);
	printf("\n%d",p->data);
}

//Create a list
void create(){
 int i,node,item;
 printf("\nPlease enter the no. of node:");
 scanf("%d",&node);
 printf("\nPlease enter the data item to be inserted:");
 scanf("%d",&item);
 start->data=item;
 start->next=NULL;
 for(i=0;i<node-1;i++){
 	insert_end();
 }
 display();
}
void insert_at_loc(){
	struct node *p=start,*temp;
	int i,item,loc;
	printf("\nPlease enter the item tobe inserted:");
	scanf("%d",&item);
	printf("\nPlease enter the location to be inserted at:");
	for(i=0;i<loc && p!=NULL;i++)
	p=p->next;
	if(loc=i+1){
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=item;
		temp->next=p->next;
		p->next=temp;
		
	}
	else{
		printf("\nLocation is not present in the List!");
	}
}
void insert_bet_val(){
	struct node *p=start,*temp;
	int val,item;
	printf("\nThe value to be inserted:");
	scanf("%d",&item);
	printf("\nThe value after which to be inserted:");
	scanf("%d",&val);
	while(p->data!=val && p->next!=NULL)
	p=p->next;
	if(p->data==val){
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=item;
		temp->next=p->next;
		p->next=temp->next;
	}
	else{
		printf("\nValue not found in the list!");
		
	}
}

//Deleting Item
void delete_item(){
	int ch;
	struct node *p=start;
	display();
	printf("\nPlease enter you choice:\n1>delete at beginning.\n2>delete after value.\n3>delete at end\n:");
	scanf("%d",&ch);
	switch(ch){
		case 1:start=p->next;
			   free(p);
			   break;
		case 2:int item;
				printf("\nThe value after which deletion occurs:");
				scanf("%d",&item);
				
				while(p->data!=item && p->next!=NULL)
				p=p->next;
				if(p->data==item){
					p->next=p->next->next;
				}
				else{
					printf("\nNo such value found!");
				}
				break;
		case 3:while(p->next->next!=NULL){
					p=p->next;
				}
				p->next=NULL;
				break;
		default:printf(\n"Wrong Choice!");
			
	}
	display();
}

//Searching an Item
void search(){
	int item,i;
	struct node *p=start;
	printf("\nPlease enter the item to be seached:");
	scanf("%d",&item);
	for(i=0;p!=NULL;i++){
		if(p->data==item){
			printf("%d found at %d",item,i);
			return;
		}
	}
	printf("No Such Element Found!");
}

//Sorting an Item
void sort(){
	struct node *i=start,*j;
	while(i!=NULL){
		j=i->next;
		while(j!=NULL){
			if(i->data>j->data){
				int tem=i->data;
				i->data=j->data;
				j->data=tem;
			}
			j=j->next;
		}
		i=i->next;
	}
	display();
}


main(){
	int ch;

	while(1){
	if(flag){
		printf("\nNo List Created!");
		create();
		flag=0;
	}
	printf("\nPlease enter your choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:insert_end();
		break;
		case 2:search();
		break;
		case 3: sort();
		break;
		case 4: delete_item();
		break;
		case 5: display();
		break;
		case 6: traverse_reverse(start);
		break;
		case 7: exit(0);
		default:printf("\nWrong Choice!!");
	}
		
	}
}
