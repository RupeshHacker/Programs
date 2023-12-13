#include<stdio.h>
main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>0){
		printf("Given number is positive number.");
	}
	else if(n<0){
		printf("Given number is negative number.");
	}
	else {
		printf("Given number is zero.");
	}
}
