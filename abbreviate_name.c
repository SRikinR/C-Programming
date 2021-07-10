#include<stdio.h>
#include<string.h>
#include<ctype.h>

char AbbreviateName(){
	char fname[20];
	char lname[20];
	char mname[20];
	printf("\nEnter first Name: ");
	scanf("%s",&fname);
	printf("\nEnter middle Name: ");
	scanf("%s",&mname);
	printf("\nEnter last Name: ");
	scanf("%s",&lname);
	
	printf("Person's Name: %s %s %s\n",fname,mname,lname);
	
	//convert
	printf("Perspon's Abbreviate Name: %c.%c %s\n",toupper(fname[0]),toupper(mname[0]),lname);
	
}


int main(){
	AbbreviateName();	
	
}
