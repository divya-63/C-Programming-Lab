#include<stdio.h>
int main(){
	float a,b,tensile_strength;
	printf("enter the value of a:");
	scanf("%f",&a);
	printf("enter the value of b:");
	scanf("%f",&b);
	if(a>b){
		printf("tensile strength of a is larger");
	}else if(a<b){
		printf("tensile strength of b is larger");
	}else{
		printf("tensile strength of a and b is same");
	}
	return 0;
	
}
