#include<stdio.h>

struct employee
{
	int no,agr;
	char name[20],add[30];
};

main()
{
	struct employee E[5];
	
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter empno:\n");
		scanf("%d",&E[i].no);
		
		fflush(stdin);
		printf("Enter emp name:\n");
		gets(E[i].name);
		
		printf("Enter address:\n");
		gets(E[i].add);
		
		printf("Enter age:\n");
		scanf("%d",&E[i].agr);
	}
	
	for(i=1;i<=5;i++)
	{
		printf("empno= %d\n",E[i].no);
		printf("empname= %s\n",E[i].name);
		printf("empaddress= %s\n",E[i].add);
		printf("empage= %d\n",E[i].agr);
	}
}










