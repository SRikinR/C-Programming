#include<stdio.h>

void getInput(char input[], int max);

int main(){
	int max;
	printf("Enter the Max limit of your string: ");
	scanf("%d",&max);
	
	char string[1];
	getInput(string, max);
	return 0;
}

void getInput(char input[],int max){
	char string[max];
	int i=1;
	while((fgets(string,max,stdin)) && i>0){
		printf("Enter your String: ");
		i--;
	}
	printf("Your Entered String is: %s", string);
}
