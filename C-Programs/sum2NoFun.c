#include<stdio.h>
void add();
main(){
	add();
}
void add()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Addition of two numbers:%d",a+b);
}
