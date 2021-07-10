#include<stdio.h>


float SimpleInterest(){
	float p;
	float r;
	float t;
	float a;
	printf("\nEnter Principal Amount:");
	scanf("%f",&p);
	
	printf("\nEnter Time:");
	scanf("%f",&t);
	
	printf("\nEnter Interest Rate:");
	scanf("%f",&r);
	
	a= (p*r*t)/100;
	printf("\n\tSimple Interest\nFinal Amount(A) is: %f\n",a);
}

int main(){
	SimpleInterest();
	
	return 0;
}
