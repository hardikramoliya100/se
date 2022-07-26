#include<stdio.h>
#include<math.h>

int main()

{
	int amount,month;
	float interest,int_amount,compound_amount,ci;
	
	printf("Enter amount : ");
	scanf("%d",&amount);
	
	printf("Enter month : ");
	scanf("%d",&month);
	
	printf("Enter interest : ");
	scanf("%f",&interest);
	
	int_amount = amount*interest/100*month;
	
	compound_amount= amount*pow((1+interest/100),month);
	
	ci=compound_amount-amount;
	
	printf("Simple interest is : %.2f\n",int_amount);
	
	printf("compound interest : %.2f",ci);
	
	return 0;
}
