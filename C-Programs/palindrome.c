#include<stdio.h>
main(){
	int n,rem,sum,num;
	printf("Enter any number:");
	scanf("%d",&n);
	num=n;
	while(num>0){
		rem=num%10;
		sum=(sum*10)+rem;
		num=num/10;
	}
	if(n==sum){
		printf("Given number is palindrome number.");
	}
	else{
		printf("Given number is not an palindrome number.");
	}
}
