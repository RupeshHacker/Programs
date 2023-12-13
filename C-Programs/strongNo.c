#include<stdio.h>
main(){
	int n,num,i,fact,rem,sum;
	printf("Enter any number:");
	scanf("%d",&n);
	num=n;
	sum=0;
	while(num>0){
		rem=num%10;
		fact=1;
		for(i=1;i<=rem;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==n){
		printf("Given number is strong number.");
	}
	else{
		printf("Given number is not strong number");
	}
}
