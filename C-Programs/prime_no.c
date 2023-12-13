#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,count=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0)
		count++;
	}
	if(count==2)
		printf("Given number is prime number.");
	else
		printf("Given number is not prime number.");
}

