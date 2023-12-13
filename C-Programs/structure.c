#include<stdio.h>
struct Student
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
  printf("id=%d\tname=%s",s.id,s.name);	
	
}
