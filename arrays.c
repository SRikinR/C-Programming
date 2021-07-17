#include<stdio.h>

int count=0;


// Value Detection
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

//print array
int printArray(int arr[],int size){
	printf("Array: ");
	for(int i=0; i<size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}


// shows negative value 
int NegativeValue(int arr[], int size){
	printf("Negative Value in Arrays are: ");
	for(int i=0; i<size;i++){
		if(arr[i]<0){
			printf("%d ",arr[i]);
		}
	}
}


// sum of array
int addition(int arr[],int i, int size){
	int add=0;
	int temp,temp1;
	if(i>=size){
	return 0; 
	}
	return (arr[i]  + addition(arr,i+1,size));
}

int main(){
	int arr[100]={1,2,13,3,4,5,6,17,7,-5,-6};
	int size=11;
	//int arr[100]={1,2,2,-3,4};
	//int size=5;
	
	printf("Original ");
	printArray(arr,size);
	
	valueDetection(arr,size);
	size=size-count;			// array size after deletion of similar values
	
	printf("Modified ");
	printArray(arr,size);
	
	NegativeValue(arr,size);
	printf("\n");
	
	int sumofarray = addition(arr,0,11);
	printf("Addition of all Elements: %d\n",sumofarray);
	
	return 0;
}







