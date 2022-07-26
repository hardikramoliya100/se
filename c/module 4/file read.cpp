#include<stdio.h>

main()
{
	FILE *fp;
	char ch[300];
	fp=fopen("hardik.txt","r");
	
	if(fp==NULL)
	{
		printf("file is not open");	
	}	
	while(fgets(ch,sizeof(ch),fp)!=NULL)
	{
		printf("%s",ch);
	}
	fclose(fp);
}
