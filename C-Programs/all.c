#include<stdio.h>
main(){
		int a,b,add,sub,mul;
		float div;
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		add=a+b;
		printf("%d\n",add);
		sub=a-b;
		printf("%d\n",sub);
		mul=a*b;
		printf("%d\n",mul);
		div=(float)a/b;
		printf("%.2f\n",div);
}
