#include<stdio.h>
int main(){
	float temperature;
	printf("enter the machine temperature(in degree celsius:)");
	scanf("%f",&temperature);
	if(temperature>60 && temperature<=80){
		printf("temperature is in safe range:");
	}else{
		printf("warning!",temperature);
		
	}
	return 0;
	
}
