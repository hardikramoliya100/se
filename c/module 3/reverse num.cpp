#include<stdio.h>

main()
{
	int num,rev=0,a;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	while(num!=0)
	{
		a=num%10;
		num=num/10;
		rev=rev*10+a;
		
	}
	
	printf("reverse num:%d",rev);
	
		
}
