#include<stdio.h>
int main()
{
	
	FILE *fp;
	int id;
	char name[20],ch[300];
	
	fp=fopen("hardik.txt","w");
	
	printf("Enter id:\n");
	scanf("%d",&id);
	fprintf(fp,"id : %d \n",id);
	fflush(stdin);
	printf("Enter name :\n");
	scanf("%s",&name);
	fprintf(fp,"Name : %s \n",name);
	
	fclose(fp);
	
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
	return 0;
}
