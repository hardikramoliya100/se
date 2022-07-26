#include<stdio.h>

main()
{
	int num,a=0,b=1,i;
	
	printf("Enter how many step you want:\n");
	scanf("%d",&num);
	
	printf("%d %d",a,b);
	
	for(i=0;i<num-2;i++)
	{
		b=a+b;
		a=b-a;
		
		printf(" %d ",b);	
	}	
}
