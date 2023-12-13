#include<stdio.h>
main(){
	int a,b;
	float area;
	printf("base of triangle:");
	scanf("%d",&a);
	printf("height of triangle:");
	scanf("%d",&b);
	area=(a*b)/2;
	printf("%.2f",area);	
}
