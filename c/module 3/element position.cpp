#include<stdio.h>

main()
{
	int a[10]={2,54,34,6,57,90,12,26,76,96};
	int i;
	
	printf("which position you want:\n");
	scanf("%d",&i);
	
	printf("your element is %d",a[i-1]);
}
