//addition of two number using pointer

#include<stdio.h>

main()
{
	int a,b,*x,*y;

	printf("Enter tep number:");
	scanf("%d %d",&a,&b);
	
	x=&a;
	y=&b;
	
	printf("\naddition of number : %d",*x+*y);

}
