#include<stdio.h>
main(){
	int i,j,r,c;
	printf("Enter numbers of rows:");
	scanf("%d",&r);
	printf("Enter numbers of columns:");
	scanf("%d",&c);
	int arr[r][c];
	printf("Enter numbers %d:",r*c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t\t",arr[i][j]);
		}
		printf("\n");
	}
}
