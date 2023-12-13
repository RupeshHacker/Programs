/*Array of structure*/
#include<stdio.h>
struct Student
{
 int id;
 char name[10];	
}s[5];
main()
{
int i;
for(i=0;i<5;i++)
{
  printf("Enter id: ");
  scanf("%d",&s[i].id);
  printf("Enter name: ");
  scanf("%s",&s[i].name);
}
printf("\n\nStudent info...\n\n");
for(i=0;i<5;i++)
{
  printf("id=%d\tname=%s\n",s[i].id,s[i].name);
}
	
}
