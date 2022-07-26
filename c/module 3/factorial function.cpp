#include<stdio.h>


void factorial(int a)
{
	int i,total=1;
	
	for(i=a;i>1;i--)
	{
		total=total*i;
	}
	
	printf("factroial:%d",total);
}
	
main()
{
	int num;
	
	printf("Enter a number:\n");
	scanf("%d",&num);
	
	factorial(num);
}
