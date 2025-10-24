#include<stdio.h>
int main(){
	float number1,number2,result;
	char operator;
	printf("enter the value of first number:");
	scanf("%f",&number1);
	
	printf("enter the operator(+,-,*,/)");
	scanf(" %c",&operator);
	
	printf("enter the value of second number:");
	scanf("%f",&number2);
	
	switch(operator){
	
	case'+':
		result=number1+number2;
		printf("result:%.2f\n",result);
		break;
	case'-':
	    result=number1-number2;
		printf("result:%.2f\n",result);
		break;
	case'*':
	 result=number1*number2;
	 printf("result:%.2f\n",result);
	 break;
	 case'/':
	 	
	 result=number1/number2;
	 
	 printf("result:%.2f\n",result);
	 break;
	 default:
	 	printf("invalid operator.\n");
	 	
	 }
	 
	 return 0;
}
	 		

