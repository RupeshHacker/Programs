#include<stdio.h>
main()
{
	int i,n;
	printf("Enter size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n\nArray elements..\n\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	
}
