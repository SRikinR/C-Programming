#include<stdio.h>

int printArray(int a[], int i, int size){
	if(i<size){
		printf("%d ", a[i]);
		printArray(a,i+1,size);
	}
}

int main(){
	int arr[]={1,2,3,4,5,6,7};
	int size= 7;
	
	printArray(arr,0,size);
	printf("\n");
	
	return 0;
}
