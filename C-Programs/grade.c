#include<stdio.h>
main(){
	int marks;
	printf("Enter marks :");
	scanf("%d",&marks);
	if(marks>=90){
		printf("A grade");
	}
	else if(marks>=75){
		printf("B grade");
	}
	else if(marks>=65){
		printf("C grade");
	}
	else if(marks>=35){
		printf("D grade");
	}
	else {
		printf("fail");
	}
}
