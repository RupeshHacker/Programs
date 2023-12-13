#include<stdio.h>
main(){
	int y;
	printf("Enter any year:");
	scanf("%d",y);
	if(y%4==0){
		printf("Given year is a leap year.");
	}
	else{
		printf("Given year is not leap year.");
	}
}
