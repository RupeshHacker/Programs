#include<stdio.h>
main(){
	int a,b;
	char opt;
	printf("Enter operator:");
	scanf("%c",&opt);
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	switch(opt)
	{
		case '+':
			printf("addition=%d",a+b);
			break;
		case '-':
			printf("sbstraction=%d",a-b);
			break;
		case '*':
			printf("multiplication=%d",a*b);
			break;
		case '/':
			printf("divition=%d",a/b);
			break;
		default:
			printf("case invalid");
	}
}
