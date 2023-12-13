#include<stdio.h>
main(){
	int n,num,sum,i;
	printf("Enter any number:");
	scanf("%d",&n);
	num=n;
	sum=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==num){
		printf("Given number is perfect number.");
	}
	else{
		printf("Given number is not perfect number");
	}
}
