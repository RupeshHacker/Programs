#include<stdio.h>
main()
{
	int a=10;
	int *p=&a;
	printf("value of a=%d\n",*p);
	printf("address of a=%x",p);
}
