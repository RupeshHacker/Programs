#include<stdio.h>
main(){
	int m,n,res,i;
	printf("Enter two numbers:");
	scanf("%d%d",&m,&n);
	res=1;
	for(i=1;i<=n;i++){
		res=res*m;
	}
	printf("%d",res);
}
