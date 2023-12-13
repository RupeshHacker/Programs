#include<stdio.h>
main(){
	const float PI=3.14;
	float r,area;
	printf("Enter a radius of circle:");
	scanf("%f",&r);
	area=PI*r*r;
	printf("area of circle is:%.2f",area);
}
