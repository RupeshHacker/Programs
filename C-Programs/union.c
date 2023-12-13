#include<stdio.h>
union Student
{
	int id;
	char name[10];
	
}s;
main()
{
	printf("Enter id: ");
	scanf("%d",&s.id);
	printf("Enter name: ");
	scanf("%s",&s.name);
	
	printf("id=%d\tName=%s",s.id,s.name);
}
