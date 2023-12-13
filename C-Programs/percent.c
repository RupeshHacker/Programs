/*Enter marks of three subject andprint its total and average*/
#include<stdio.h>
main(){
	int s1,s2,s3,total;
	float aver;
	printf("Enter marks of three subjects:\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	total=s1+s2+s3;
	printf("Total is :%d\n",total);
	aver=(float)total/3;
	printf("Average is:%.2f",aver);
}
