#include<stdio.h>
main()
{
	int age;
	char g;
	printf("Enter a gender:");
	scanf("%c",&g);
	if(g=='m'||g=='M')
	{
		printf("enter a age:");
		scanf("%d",&age);
		if(age>=21)
		{
			printf("eligible for marriage");
		}
		else
		{
			printf("Not eligible for marraige");
		}	
	}
	else if(g=='f'||g=='F')
	{
		printf("Enter a age:");
		scanf("%d",&age);
		if(age>=19)
		{
			printf("eligible for marriage");
		}
		else
		{
			printf("Not eligible for marriage");
		}
	}
	else
	{
		printf("invlid");
	}
}

