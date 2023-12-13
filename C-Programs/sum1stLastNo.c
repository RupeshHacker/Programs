#include<stdio.h>
main(){
	int n,firstDigit,lastDigit,sum;
	printf("enter any number:");
	scanf("%d",&n);
	lastDigit=n%10;
	while(n>=10){
		n=n/10;
	}
	firstDigit=n;
	sum=firstDigit+lastDigit;
	printf("%d",sum);
}
