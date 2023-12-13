/*Array of pointer*/
#include<stdio.h>
main()
{
	int arr[5]={3,4,5,6,7};
	int *p[5],i;
	for(i=0;i<5;i++)
	{
		p[i]=&arr[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d  ",*p[i]);
	}
	
}
