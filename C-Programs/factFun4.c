//4.with argument with return type
#include<stdio.h>
int fact(int);
main(){
	int c,x;
	c=fact(x);
	printf("%d",c);
}
int fact(int n)
{
	int f=1,i;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
