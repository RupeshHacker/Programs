/*passing struture to function*/
#include<stdio.h>
struct Student
{
   int id;
   char name[10];	
}s;
void display(struct Student);
main()
{
	display(s);
}
void display(struct Student s)
{
	printf("Enter id: ");
	scanf("%d",&s.id);
	printf("Enter name: ");
	scanf("%s",&s.name);
	printf("Id=%d\tname=%s",s.id,s.name);
	
}
