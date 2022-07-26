#include<stdio.h>

main()
{
	int year;
	
	printf("Enter a year:");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("year is leap year");
	}
	else
	{
		printf("year is not leap year");	
	}	
}
