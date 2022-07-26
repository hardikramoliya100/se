#include<stdio.h>

main()
{
	int i,j,a,num[5];
	
	printf("Enter a number:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[i] > num[j])
			{
				a=num[i];
				num[i]=num[j];
				num[j]=a;
			}
		}
		
	}
	
	printf("sort the array:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",num[i]);
	}
}
