#include<stdio.h>
main(){
	int i,j,sum=0,res;
	for(i=1;i<=5;i++){
		res=1;
		for(j=1;j<=i;j++){
			res=res*i;
		}
		sum=sum+res;
	}
	printf("Sum=%d",sum);
}
