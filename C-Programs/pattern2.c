#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0||i==4){
				if(j%2==0){
					printf(" 1");
				}
				else{
					printf(" 0");
				}
			}
			else{
				if(j==0||j==4){
					printf(" 1");
				}
				else{
					printf("  ");
				}
			}
		}
		printf("\n");
	}
}
