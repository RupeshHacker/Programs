#include<stdio.h>
main()
{
	int a=10;
	int *p=&a;
	int **q=&p;
	printf("value of a=%d\n",a);
	printf("address of a=%x\n",p);
	printf("address of p=%x\n",q);
	printf("value of pointer p=%d\n",*p);
	printf("adderss of a=%x\n",*q);
	printf("value of pointer of pointer q=%d\n",**q);
}
