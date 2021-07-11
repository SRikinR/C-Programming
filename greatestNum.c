#include<stdio.h>


int GreatestNum(int a, int b, int c){
	if(a>b){
		if(a>c){
			return a;
			}
		else{
			return c;
		}
		}
	else if(b>a){
		if(b>c){
			return b;
		}
		else{
			return c;
		}
	}
	else if(c>a){
		if(c>b){
			return c;
		}
		else{
			return b;
		}
	}
}

int main(){
	int a,b,c;
	printf("Enter the Numbers:\n");
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	printf("Enter c:\n");
	scanf("%d",&c);
	
	printf("Greatest of given 3 Number is: %d\n",GreatestNum(a,b,c));

	return 0;
}
