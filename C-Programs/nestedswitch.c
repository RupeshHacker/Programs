/*check numbr +ve -ve or zero*/
#include<stdio.h>
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	switch(n>0)
	{
		case 1:
			 printf("+ve number");
			 break;
		case 0:
			 switch(n<0)
			 {
			 	case 1:
			 		printf("-ve number");
			 		break;
			 case 0:
			 	 printf("zero");
			 	 break;
			 }
	}
}
