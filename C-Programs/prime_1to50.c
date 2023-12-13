#include<stdio.h>
main()
{
	int start,end,i,n,count;
	printf("Enter start and limit of series:");
	scanf("%d\n%d",&start,&end);
	count=0;
	for(n=start;n<=end;n++){
		for(i=1;i<=end;i++){
			if(n%i==0)
			count++;
		}
		if(count==2)
			printf("%d",n);
	}
	
}
