/*#include<stdio.h>
main()
{
	int n,temp,rem,sum;
	printf("Enter any number:");
	scanf("%d",&n);
	temp=n;
	sum=0;
	while(temp>0){
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	if(n==sum)
		printf("Given number is armstrong number.");
	else
		printf("Given number is nor armstrong number.");
}*/
#include<stdio.h>
main()
{
	int start,end,n,temp,rem,sum;
	printf("Enter a range:");
	scanf("%d%d",&start,&end);
	for(n=start;n<=end;n++){
		temp=n;
		sum=0;
		while(temp>0){
			rem=temp%10;
			sum=sum+rem*rem*rem;
			temp=temp/10;
		}
		if(sum==n)
			printf("%d ",sum);
	}
}
