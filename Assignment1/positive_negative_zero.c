#include<stdio.h>
int main(){
	//number accepts from user and displays whether it is positive,negative or zero.
	float number;
	printf("enter the number:");
	scanf("%f",&number);
	if(number>0){
		printf("the number is positive:");
		
	}else if(number<0){
		printf("the number is negative:");

	}else{
		printf("the number is zero:");
	}
	return 0;
}
