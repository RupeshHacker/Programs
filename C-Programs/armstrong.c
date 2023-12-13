#include<stdio.h>
main()
{
	int n,sum,rem,num;
	printf("Enter any number:");
	scanf("%d",&n);
	num=n;
	sum=0;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(n==sum)
	{
		printf("Given number is an armstrong number.");
	}
	else
	{
		printf("Given number is not an armstrong number.");
	}
}
