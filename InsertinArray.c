#include<stdio.h>

int printArray(int *arr,int size){
	for(int i=0; i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
			
int main(){
	int arr[100]={10,3,2,43,54,53};
	int size=6;
	int capacity=100;
	int n,value;
	n=0;
	value=0;
	
	printArray(arr, size);
	
	printf("\nEnter the Position:");
	scanf("%d",&n);	
	
	printf("\nEnter the Value:");
	scanf("%d",&value);
	
	if(n>capacity && size>capacity){
		return -1;	
	}
	
	for(int i =size; i>(n-1);i--){
		arr[i+1]=arr[i];
	}
	arr[n]=value;
	size++;
	
	printArray(arr, size);
	
	return 0;
}
