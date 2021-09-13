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
	if(count == 0){
		printf("Count: %d, No Repeated Element in an array.\n", count);
	}
	else{
	printf("Count: %d\n",count);
	}
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


// Maximum element in an array
int maxArray(int arr[], int i, int size){
	if(i>=size){
		return 0;
	}
	if(arr[i]> maxArray(arr,i+1,size)){
		return arr[i];
	}
	else{
		return maxArray(arr,i+1,size);
	}
}

// Minimum element in an array
int minArray(int arr[], int i, int size){
	if(i>=size){
		return 0;
	}
	if(arr[i]<minArray(arr,i+1,size)){
		return arr[i];
	}
	else{
		return minArray(arr,i+1,size);
	}
}

// Second Largest Element
int secondLargest(int arr[],int i, int size, int maxElement){
	/*int sub = maxElement/arr[i];
	printf("---->%d",sub);
	int sub1 = maxElement/arr[i+1];
	printf("---->%d",sub1); */
	
	
	if((maxElement/arr[i])<(secondLargest(arr,i+1,size,maxElement))){
		return arr[i];
	}
	else{
		return secondLargest(arr,i+1,size,maxElement);
	}
}

int main(){
	int arr[100]={1,2,3,44,5,6,-17,7,-5,-6};
	int size=10;
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
	
	int maxElement =maxArray(arr,0,size);
	printf("Maximum Element of an array: %d\n", maxElement);
	
	int minElement =minArray(arr,0,size);
	printf("Minimum Element of an array: %d\n", minElement);
	
	int secondMax= secondLargest(arr,0,size,maxElement);
	printf("Second Largest Element in an Array: %d\n", secondMax);
	
	return 0;
}







