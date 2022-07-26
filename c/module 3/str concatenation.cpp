#include<stdio.h>
#include<string.h>

main()
{
	char str1[20],str2[20],*x,*y;
	
	x=str1;
	y=str2;
	
	printf("Enter first string:");
	gets(str1);
	
	printf("Enter second string:");
	gets(str2);
	
	
	
	while(*x)
	{
		x++;
	}
	while(*y)
	{
		*x=*y;
		x++;
		y++;
	}
	*x='\0';
	
	printf("concatenation string is %s",str1);
	
	
	
}
