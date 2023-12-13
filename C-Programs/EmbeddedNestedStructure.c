/*nested structure
1.embedded nested structure
2.separate nested structure


1.
*/
#include<stdio.h>
struct emp
{
 int id;
 char name[10];
 struct doj
 {
 	
	int dd,mm,yyyy; 
	 }d;	
}e;
main()
{
	printf("Enter id=");
	scanf("%d",&e.id);
	printf("Enter name=");
	scanf("%s",&e.name);
	printf("Enter date ofjoinning: ");
	scanf("%d%d%d",&e.d.dd,&e.d.mm,&e.d.yyyy);
	printf("id=%d\tname=%s\tdate of joining =%d/%d/%d",e.id,e.name,e.d.dd,e.d.mm,e.d.yyyy);
	
}
