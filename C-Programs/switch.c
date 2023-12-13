#include<stdio.h>
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			  printf("one");
			  break;
		case 2:
			 printf("two");
			 break;
		case 3:
			 printf("three");
			 break;
		default:
			  printf("Case not matched");
	}
}
