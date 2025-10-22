#include<stdio.h>
int main(){
	//calculate the electricity bill based on following conditions.
	float units;
	printf("enter the units consumed:");
	scanf("%f",&units);
	if(units<=100){
		printf("Rs.%.2f is the electricity bill",units*1.5);
}else if(units>100 && units<=200){
	printf("Rs.%.2f is the electricity bill",units*2);
}if(units>200 && units<=300){
	printf("Rs.%.2f is the electricity bill",units*3);
}if(units>300){
	printf("Rs.%.2f is the electricity bill",units*5);
}
return 0;
}



	

