#include<stdio.h>
main(){
	int i=1,sum=0;
	do{
		sum=sum+i;
		i++;
	}while(i<=10);
	printf("%d",sum);
}
