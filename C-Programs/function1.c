/*1.without return type without argument*/
#include<stdio.h>
void add();
main()
{
	add();
}
void add()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Addition=%d",a+b);
}
