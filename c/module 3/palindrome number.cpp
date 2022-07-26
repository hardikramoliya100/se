#include<stdio.h>

main()
{
	int num,num1,rev=0,a;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	num1=num;
	while(num!=0)
	{
		a=num%10;
		rev=rev*10+a;
		num=num/10;
		
	}
	
	if(num1==rev)
	{
		printf("this number is palindrome");
	}
	else{
		printf("this number is not palindrome");
	}
	
	
}
