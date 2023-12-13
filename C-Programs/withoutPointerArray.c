
/*
without creating array of pointer print array elements 
*/
#include<stdio.h>
main()
{
	int arr[5]={2,3,4,3,2};
	int *p=&arr[0],i;
	for(i=0;i<5;i++)
	{
		printf("%d\t",*p);
		p++;
	}
	
}
