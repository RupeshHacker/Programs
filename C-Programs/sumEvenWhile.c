#include<stdio.h>
main()
{
	int i=1,sum=0;
	while(i<=20)
	{
		if(i%2==0)
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}
