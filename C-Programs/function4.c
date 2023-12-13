/*4.with return type with argument*/
#include<stdio.h>
int add(int,int);
main()
{
	int c,x,y;
  c=add(x,y);
  printf("Addition=%d",c);
}
int add(int a,int b)
{
	
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	return a+b;
}
