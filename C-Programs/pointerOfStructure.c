/*pointer of structure
.
->
*/
#include<stdio.h>
struct Student
{
 int id;
 char name[10];	
}s;
main()
{
	struct Student *p=&s;
  printf("Enter id: ");
  scanf("%d",&p->id);
  printf("Enter name: ");
  scanf("%s",&p->name);
  printf("id=%d\tname=%s",p->id,p->name);	
	
}
