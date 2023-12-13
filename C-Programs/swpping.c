#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter values of a and b:");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping values of a and b are :\n");
	printf("%d\t%d",a,b);
}
