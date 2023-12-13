//1.without return type without argument.
#include<stdio.h>
void fact();
main()
{
	fact();
}
void fact()
{
	int n,i,f=1;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
	}
	printf("%d",f);
}
