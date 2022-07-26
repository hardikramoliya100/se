//find out area
#include<stdio.h>

main()
{
	int a;
	float b,h;
	float area=0;
	printf("Enter your choic (1,2,3)\n");
	printf("(1)Triangle\n(2)Rectangle\n(3)Circle\nEnter a number to find area:");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("Enter bash and heigh:\n");
			scanf("%f %f",&b,&h);
			
			area=b*h/2;
			printf("area is %.2f",area);
			break;
			
		case 2:
			printf("Enter lenth and width:\n");
			scanf("%f %f",&b,&h);
			
			printf("area is %.2f",b*h);
			break;

		case 3:
			printf("Enter Radius:\n");
			scanf("%f",&h);
			
			printf("area is %.2f",3.14*h*h);
			break;
			
		case 4:
			printf("invelid number:");			
	}
}
