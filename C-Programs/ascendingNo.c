#include<stdio.h>
main(){
	int n,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Array elements are :\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	
}
