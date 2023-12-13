#include<stdio.h>
main(){
	int n,a=0,b=1,c,i;
	printf("Enter limit of fibonacci series:");
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	for(i=3;i<=n;i++){
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
