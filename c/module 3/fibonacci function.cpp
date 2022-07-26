#include<stdio.h>

void step(int num)
{
	int a=0,b=1,i;
	
	
	printf("%d %d",a,b);
	
	for(i=0;i<num-2;i++)
	{
		b=a+b;
		a=b-a;
		
		printf(" %d ",b);	
	}	
}

main()
{
	int num;
	
	printf("Enter how many step you want:\n");
	scanf("%d",&num);
	
	step(num);
	
}
