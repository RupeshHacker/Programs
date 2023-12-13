#include<stdio.h>
main(){
	int i,n,count=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0)
		count++;
	}
	if(count==2){
		printf("Givn number is prime number.");
	}
	else{
		printf("Given number is not prime number.");
	}
}
