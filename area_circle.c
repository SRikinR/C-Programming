#include<stdio.h>
#include<math.h>

float AreaofCircle(){
	int r=0;
	float pi=3.14;
	float area;
	float c;
	printf("Hello!\n");
	printf("Enter Radius of the Circle:");
	scanf("%d",&r);
	
	area = pi*r*r;
	c= 2*pi*(r);
	
    	printf("Radius of a Circle: %d\n",r);
	printf("Area of the circle is: %f\n",area);
	printf("Circumference of the circle is: %f\n",c);
}

float AreaofTriangle(){
	float height;
	float base;
	printf("Enter Height of the Triangle:");
	scanf("%f",&height);
	printf("\nEnter Base of the Triangle:");
	scanf("%f",&base);
	
	float A= (height * base)/2;
	printf("\nArea of  Traingle is: %f\n",A);
}

int main(){
	int n;
	printf("Press 1: Area and Circumference of Circle\nPress 2: Area of Triangle\n");
	scanf("%d",&n);
	switch (n) {
	case 1:
		AreaofCircle();
		break;
	case 2:
		AreaofTriangle();
		break;
	default:
		printf("Invalid Input\n");
		break;
	}
	return 0;		
}
