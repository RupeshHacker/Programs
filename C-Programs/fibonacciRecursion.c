#include<stdio.h>
int fibonacci(int);
int main(){
	int n,i;
	printf("Enter series limit:");
	scanf("%d",&n);//4
	for(i=0;i<n;i++)//2
	{
		printf("%d\t",fibonacci(i));//0  1
	}

}
int fibonacci(int n)
{
	if(n==0)
	  return 0;
	  else if(n==1)
	   return 1;
	   return fibonacci(n-1)+fibonacci(n-2);
}
