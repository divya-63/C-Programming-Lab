#include<stdio.h>
int main(){
	//input a number and check whether it is divisible by both 5 and 11 or not
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n%5==0 && n%11==0){
		printf("%d is divisible by both 5 and 11",n);
}else{
	printf("%d is not divisible by 5 and 11",n);
}
return 0;
}

	

