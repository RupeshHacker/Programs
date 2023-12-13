/*2.with return type without argument*/
#include<stdio.h>
int add();
main()
{
	int c;
	c=add();
	printf("Addition=%d",c);
}
int add()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	return a+b;
}
