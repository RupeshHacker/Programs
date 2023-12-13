#include<stdio.h>
int fact(int);
main()
{
     int n,f;
	 printf("Enter number: ");
	 scanf("%d",&n);	
	 f=fact(n);
	 printf("Factorial=%d",f);
}
int fact(int n)
{
	if(n==1)
	 return 1;
	 else
	 return 
	   n*fact(n-1);
}
