#include<stdio.h>

int factorial(int num){
	for (int i=num; i>0;i--){
		return num *factorial(num-1);
	}
	return 1;
}


int main(){
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	printf("Factorial of the %d is %d\n",num,factorial(num));
	
	return 0;
}
