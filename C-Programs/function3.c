/*3.without return type with argument*/
#include<stdio.h>
void add(int ,int);
main()
{
	int x,y;
	add(x,y);
}
void add(int a,int b)
{
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Addition=%d",a+b);
}
