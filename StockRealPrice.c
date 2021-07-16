// Author:  Rikin Shah | 16th July 2021 | 11:28

#include<stdio.h>
#include<string.h>
#include<math.h>


void TakeValues(float *eps, float *bps){
	char Name[20];
	float EPS;
	float BPS;
	
	printf("Enter Stock Name:");
	scanf("%s",&Name);
	
	printf("Enter Stock's Earning Per Share:");
	scanf("%f",&EPS);
	
	printf("Enter Stock's Buy Per Share:");
	scanf("%f",&BPS);
	
	printf("%s: EPS=%0.3f, BPS=%0.3f\n",Name,EPS,BPS);
	*eps=EPS;
	*bps=BPS;
	
}



int StockRealPrice(float EPS, float BPS){
	float RealPrice=0;
	float S=0;
	
	RealPrice = (22.5 * EPS * BPS);
	S = 3000; //sqrt(RealPrice);
	
	//printf("Root %f\n", RealPrice);	
	//SquareRoot = sqrt(RealPrice);
	printf("Real Price: %0.3f\n",S);
	 return S; 
	
	// store the half of the given number
	

}

int main(){
	float EPS, BPS;
	float CP;
	TakeValues(&EPS,&BPS);
	printf("Enter Stock's Current Price: ");
	scanf("%f",&CP);
	float RP= StockRealPrice(EPS,BPS);
	
	if(CP<RP){
		printf("Stock UnderValued | OUR Advice: BUY/DON'T SELL\n");
	}
	else if(CP == RP){
		printf("Stock is Properly Valued | OUR Advice: If Interested, BUY/SELL\n");
	}
	else if(CP>RP){
		printf("Stock OverValued | OUR Advice: SELL/DON'T BUY\n");
	}
	
	

	return 0;
}





