#include<stdio.h>
main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	if(n<100)
	{
		if(n<50)
		{
			printf("Number less than 50");
		}
		else
		{
			printf("number greater than 50");
		}
	}
	else
	{
		printf("numbr greater than 100");
	}
}
