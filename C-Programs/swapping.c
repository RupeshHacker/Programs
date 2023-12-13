#include<stdio.h>
main(){
	int a,b;
	printf("Enter any two numbers:");
	scanf("%d\n%d",&a,&b);
	printf("\n\nBefore swapping:\n\n");
	printf("a=%d\nb=%d",a,b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("\n\nAfter swapping values of a and b are:\n\n");
	printf("a=%d\nb=%d",a,b);
}
