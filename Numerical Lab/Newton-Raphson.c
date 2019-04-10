#include<stdio.h>
#include<math.h>
float func(float a){
	return pow(a,3)-(8*a)-4; // change the return statement to suit the function
}
float funcd(float a){
	return 3*pow(a,2)-8; //change the return statement to suit the derivative of the function
}

main(){
	float n,x,xn,error;
	
	printf("Please enter the number whose function estimation is to be done:\n");
	scanf("%f",&n);
	
	printf("Please enter the maximum error allowed in function estimation:");
	scanf("%f",&error);
	
	x=n;
	xn=n+(-func(n)/funcd(n));//please change this line as per function needs
	printf("%f %f %f %f %f\n",x,func(x),funcd(x),(func(x)/funcd(x)),xn);
	
	while((xn-x)>=error){
		
		x=xn;
		xn=x+(-func(x)/funcd(x)); //please change this line as per function needs
		printf("%f %f %f %f %f\n",x,func(x),funcd(x),(func(x)/funcd(x)),xn);
		
	}
	
	printf("The function estimation is %f",xn);
}
