#include<stdio.h>
#define PI 3.14
main(){
	float r,area;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	area=PI*r*r;
	printf("%.2f",area);	
}

