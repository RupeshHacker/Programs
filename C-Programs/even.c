#include<stdio.h>
main(){
	int a;
	printf("Enter any number:");
	scanf("%d",&a);
	if(a%2==0){
		printf("Given number is even number.");
	}
	else{
		printf("Given number is odd number.");
	}
}
