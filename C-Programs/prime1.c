#include<stdio.h>
main(){
	int a,b,n,i,count;
	printf("Enter range of interval:");
	scanf("%d%d",&a,&b);
	printf("prime numbers from %d to %d is:\n",a,b);
	for(n=a;n<=b;n++){
		count=0;
		for(i=1;i<=b;i++){
			if(n%i==0){
				count++;
			}
		}
			if(count==2){
				printf("%d\n",n);
			}
	}
}
