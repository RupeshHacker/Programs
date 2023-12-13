#include<stdio.h>
main(){
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	switch(year%4==0)
	{
		case 1:
			printf("Enter year is leap year");
			break;
		case 0:
			printf("Enter year is a normal year");
			break;
	}
}
