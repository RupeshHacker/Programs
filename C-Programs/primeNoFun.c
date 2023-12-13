#include<stdio.h>
void prime();
main(){
	prime();
}
void prime(){
	int a,b,i,count,n;
	printf("Enter the range of intervals:");
	scanf("%d%d",&a,&b);
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
