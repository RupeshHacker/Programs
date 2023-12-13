#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n='a';
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%c ",(n+j)-1);
		}
		printf("\n");
	}
}
