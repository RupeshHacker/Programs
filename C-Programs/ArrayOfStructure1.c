#include<stdio.h>
struct employee
{
	int id;
	char name[10];	
}e[5];
main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter id:");
		scanf("%d",&e[i].id);
		printf("Enter name:");
		scanf("%s",&e[i].name);
	}	
	for(i=0;i<5;i++)
	{
		printf("id=%d\tname=%s",e[i].id,e[i].name);
	}
}
