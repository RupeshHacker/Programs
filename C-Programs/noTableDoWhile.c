#include<stdio.h>
main(){
	int n,i=1;
	printf("Enter any number:");
	scanf("%d",&n);
	do{
		printf("%d\n",n*i);
		i++;
	}while(i<=10);
}

