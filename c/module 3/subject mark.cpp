#include<stdio.h>

main()
{
	int a,b,c,d,e,total;
	float per;
	
	printf("Enter five subject mark:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	total=a+b+c+d+e;
	
	per= total/5;
	
	if(per>75)
	{
		printf("Distiction");
	}
	else if(per>60 && per<=70){
		printf("First class");
	}
	else if(per>50 && per<=60){
		printf("Second class");
	}
	else if(per>35 && per<=50){
		printf("Pass class");
	}
	else{
		printf("Fail");
	}
	
	
		
}
