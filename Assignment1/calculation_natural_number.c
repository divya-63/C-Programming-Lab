#include<stdio.h>
int main(){
	//input a number n and calculates the sum of first n natural numbers using formula sum=n*(n+1)/2
	int n,formula;
	printf("enter the number:");
	scanf("%d",&n);
	formula=n*(n+1)/2;
	printf("the sum of the first %d natural numbers is:%d",n,formula);
	return 0;
}
