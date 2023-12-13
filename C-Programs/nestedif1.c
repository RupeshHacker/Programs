#include<stdio.h>
main(){
	int weight,age;
	printf("Enter weight and age of person:");
	scanf("%d%d",&weight,&age);
	if(weight>=50){
		if(age>=18){
			printf("person is eligible for donate blood");
		}
		else{
			printf("not eligible for donate blood");
		}
	}
	else{
		printf("Person not eligible for donate blood");
	}
}
