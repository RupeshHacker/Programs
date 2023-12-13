#include<stdio.h>
main(){
	int weight,age;
	printf("Enter a weight and height of person:");
	scanf("%d%d",&weight,&age);
	if(weight>=50&&age>=18){
		printf("person is eligible for donate blood");
	}
	else {
		printf("Person not eligible for donate blood");
	}
}
