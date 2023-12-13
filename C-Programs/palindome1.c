#include<stdio.h>
main()
{
	int start,end,n,temp,rem,sum;
	printf("Enter range :");
	scanf("%d%d",&start,&end);
	for(n=start;n<=end;n++){
		temp=n;
		sum=0;
		while(temp>0){
			rem=temp%10;
			sum=(sum*10)+rem;
			temp=temp/10;
		}
		if(sum==n){
			printf("%d ",sum);
		}
	}
}
