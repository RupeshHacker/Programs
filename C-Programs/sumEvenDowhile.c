#include<stdio.h>
main(){
	int i=1,sum=0;
	do{
		if(i%2==0)
		sum=sum+i;
		i++;
	}while(i<=20);
	printf("%d",sum);
}
