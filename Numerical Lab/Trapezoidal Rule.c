#include<stdio.h>
#include<conio.h>

float func(float x){
	return x*x*x;
}

int main(){
	float a,b,h,area=0.0;
	int i, n;
	
	printf("Please enter the Lower Bound:");
	scanf("%f",&a);
	printf("Please enter the Upper Bound:");
	scanf("%f",&b);
	printf("Please enter the Number of Intervals (Whole Number):");
	scanf("%d",&n);
	
	
	h=(b-a)/n;
	
	printf("Lower Bound %f, Upper Bound %f, Number of Intervals %d, h= %f",a,b,n,h);
	
	for(i=0;i<=n;i++){
		if(i==0 || i==n)
		area+=func(a+i*h);
		else
		area+=2*func(a+i*h);
	
	}
	
	area=area*(h/2);
	
	printf("\nThe Area Under the Curve is %f",area);
}
