#include<stdio.h>

main()
{
	int a[2][2],i,j,max=0;
	
	printf("Enter matrix:\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\nyour matrix:\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(max<a[i][j])
				max=a[i][j];
		}
	}
	
	printf("max num is %d",max);
}




















