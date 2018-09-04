#include<stdio.h>
#include<stdlib.h>
int* beg,aux,end;
int d;
void initialize(){
	int i;
	printf("\nPlease enter the number of Discs:");
	scanf("%d",&d);
	beg=(int *)malloc(d*sizeof(int));
	aux=(int *)malloc(d*sizeof(int));
	end=(int *)malloc(d*sizeof(int));
	
	for(i=0;i<d;i++,beg++)
	*beg=1;
}

void move(int *a,int *b){
	*b=1;
	b++;
	a--;
}

void tower(int n,int *beg,int *aux,int *end,char a,char b,char c){
	if(n==1)
	{
		printf("\nMoving from %c to %c",a,c);
		move(beg,end);
		return;
	}
	tower(n-1,beg,end,aux,a,c,b);
	move(beg,end);
	printf("\nMoving from %c to %c",a,c);
	tower(n-1,aux,beg,end,b,a,c);
}

main(){
	
	printf("Welcome, this is a simulation of Tower of Hanoi.\nThere are three Pegs, the user is tasked with selecting\nthe number of discs.");
	initialize();
	tower(d,beg,aux,end,'A','B','C');
}
