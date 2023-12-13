#include<stdio.h>
main(){
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n%2==0){
		goto even;
	}
	else{
		goto odd;
	}
	even:
		printf("Given number is even number.");
		goto end;
	odd:
		printf("Given number is an odd number.");
	end:
		return 0;
}
