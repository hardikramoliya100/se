#include<stdio.h>

main()
{
	int a[10],n,i,j,temp;
	
	printf("how many number you  want to enter: ");
	scanf("%d",&n);
	
	printf("\nEnter a number: \n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a+i);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(a+i)>*(a+j))
			{
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+i)=temp;
				
			}
		}
	}
	
	printf("\n-------sort Number------\n");
	
	for(i=0;i<n;i++)
	{
		printf(" %d ",*(a+i));
		

	}
}
