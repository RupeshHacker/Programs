//2.with argument without return type
#include<stdio.h>
void fact(int);
main()
{
	int x;
	fact(x);
}
void fact(n)
{
	int i,f=1;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
	}
	printf("%d",f);
}
