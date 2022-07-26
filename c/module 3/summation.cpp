#include<stdio.h>

main()
{
	int num,add=0,a;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	while(num!=0)
	{
		a=num%10;
		num=num/10;
		add=add+a;
		
	}
	
	printf("summation:%d",add);
	
		
}
