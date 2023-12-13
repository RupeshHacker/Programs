#include<stdio.h>
struct employee
{
	int id;
	char name[10];
}e;
main()
{
	printf("Enter id:");
	scanf("%d",&e.id);
	printf("Enter name:");
	scanf("%s",&e.name);
	printf("id=%d\nname=%s",e.id,e.name);	
}
