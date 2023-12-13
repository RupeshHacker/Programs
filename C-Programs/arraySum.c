#include<stdio.h>
main(){
	int i,n,sum;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array numbers:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nArray Numbers:\n");
	//sum=0;
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
		//sum=sum+arr[n];
	}
	printf("%d",sum);
	
}
