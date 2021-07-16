#include<stdio.h>

int count=0;

int valueDetection(int arr[],int size){

	for(int i =0; i<size; i++){
		if(arr[i]==arr[i+1]){		//identifies the similar value
			printf("Similar Element: %d at index %d\n",arr[i],i);	//prints the similar value
			count++;		// to count how many times loop is executed
			for(int j=i; j<=size;j++){
				arr[j]=arr[j+1];		//delete the similar value
			}
			size--; // so that, null index at the end after above deletation dosen't count
		}
	}
	printf("Count: %d\n",count);
}

int printArray(int arr[],int size){
	printf("Array: ");
	for(int i=0; i<size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int NegativeValue(int arr[], int size){
	printf("Negative Value in Arrays are: ");
	for(int i=0; i<size;i++){
		if(arr[i]<0){
			printf("%d ",arr[i]);
		}
	}
}


int main(){
	int arr[100]={1,2,2,3,4,5,6,7,7,-5,-6};
	int size=11;
	
	printf("Original ");
	printArray(arr,size);
	
	valueDetection(arr,size);
	size=size-count;			// array size after deletion of similar values
	
	printf("Modified ");
	printArray(arr,size);
	
	NegativeValue(arr,size);
	printf("\n");
		
	
	return 0;
}







