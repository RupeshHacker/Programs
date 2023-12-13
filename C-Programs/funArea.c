#include<stdio.h>
void area();
main()
{
	area();
}
void area(){
	int l,b,area;
	printf("Enter the length and breadth of rectangle:");
	scanf("%d%d",&l,&b);
	area=l*b;
	printf("%d",area);
}
