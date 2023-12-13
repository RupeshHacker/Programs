#include<stdio.h>
main(){
	int age;
	printf("Enter an age of person:");
	scanf("%d",&age);
	if(age>=19){
		printf("person is eligible for vote.");
	}
	else{
		printf("person is not eligible for vote.");
	}
}
