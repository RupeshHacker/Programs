#include<stdio.h>
main(){
	int age;
	printf("Enter an age of person:");
	scanf("%d",&age);
	switch(age>=19)
	{
		case 1:
			printf("Person eligible for vote");
			break;
		case 0:
			printf("Person not eligible for vote");
			break;
	}
}
