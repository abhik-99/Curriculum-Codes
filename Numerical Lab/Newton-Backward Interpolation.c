#include<stdio.h>
#include<conio.h>

main(){
	float x[20],y[20],f,s,d,h,p;
	int j,i,k,n;
	
	printf("Please enter the number of elements to consider:");
	scanf("%d",&n);
	
	printf("Enter the Values of \'x\':");
	for(i=0;i<n;i++){
		scanf("%f",&x[i]);
	}
	
	printf("Enter the Values of \'f(x)\':");
	for(i=0;i<n;i++){
		scanf("%f",&y[i]);
	}
	
	h=x[1]-x[0];
	
	printf("Enter the independant value whose function value is to be interpolated:");
	scanf("%f",&f);
	
	s=(f-x[n-1])/h;
	d=y[n-1];
	p=1;
	
	for(i=n-1,k=1;i>=0,k<n-1;i--,k++){
		
		for(j=n-1;j>=0;j--){
			[j]=y[j]-y[j-1];
		}
		p*=(s+k-1)/k;
		d+=p*y[n-1];
	}
	
	printf(" The interpolated  value is %f",d);
	
	
		
}
