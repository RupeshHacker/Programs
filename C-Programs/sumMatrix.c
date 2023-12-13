#include<stdio.h>
main(){
	int i,j,r,c;
	printf("Enter rows and colums of array:");
	scanf("%d%d",&r,&c);
	int arr1[r][c],arr2[r][c];
	printf("Enter %d numbers for arr1:",r*c);
	// print first matrix.
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	// print second matrix.
	printf("Enter %d numbers for arr2:",r*c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	// print sum of two matrix
	printf("\n\n sumof arr1 and arr2\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",arr1[i][j]+arr2[i][j]);
		}
		printf("\n");
	}
	
}
