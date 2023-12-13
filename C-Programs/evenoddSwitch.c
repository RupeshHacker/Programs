/*Check number even or odd using switch*/
#include<stdio.h>
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	switch(n%2==0)
	{
		case 1:
			 printf("even number");
			 break;
	    case 0:
	    	printf("odd number");
	    	break;
	}
}
