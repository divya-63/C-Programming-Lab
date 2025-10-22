#include<stdio.h>
int main(){
	//input three numbers and determine largest
	float number1,number2,number3;
	printf("enter the value of number1:");
	scanf("%f",&number1);
	printf("enter the value of number2:");
	scanf("%f",&number2);
	printf("enter the value of number3:");
	scanf("%f",&number3);
	if(number1 > number2 && number1 > number3){
		printf("the largest number is:%f\n",number1);
	}else if (number2 > number1 && number2 > number3){
		printf("the largest number is:%f\n",number2);
}else{
	printf("the largest number is:%f\n",number3);
}
return 0;
}
			
		
	
	
	

