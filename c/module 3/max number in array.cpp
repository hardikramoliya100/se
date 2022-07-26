#include<stdio.h>

main()
{
	int num=0,a[10]={12,23,14,45,23,54,87,76,34,43};
	
	for(int i=0;i<10;i++)
	{
		if(num<a[i])
		{
			num=a[i];
		}
	}
	
	printf("max number:%d",num);
	
}
