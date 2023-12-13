//3.ywithout argument with return type
#include<stdio.h>
int fact();
main(){
	int c;
	c=fact();
	printf("%d",c);
}
int fact(){
	int n,f=1,i;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
