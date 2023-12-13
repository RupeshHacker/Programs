#include<stdio.h>
main(){
	int y;
	printf("Enter a year:");
	scanf("%d",&y);
	if(y%4==0){
		printf("Given year is leap year.");
	}
	else{
		printf("Given year is normal year.");
	}
}
