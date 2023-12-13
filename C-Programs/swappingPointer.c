#include<stdio.h>
main()
{
	int a,b,c;
	int *p=&a,*q=&b,*r=&c;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Before swapping value of a & b are:\na=%d\tb=%d\n",*p,*q);
	*r=*p;
	*p=*q;
	*q=*r;
	printf("After swapping values of a & b are:\na=%d\tb=%d\n",*p,*q);
	
	
}
