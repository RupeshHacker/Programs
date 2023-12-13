#include<stdio.h>
main(){
	int i,n;
	printf("Enter size :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers:",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n\narray elements:\n\n");
	int sum=0;
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
		sum=sum+arr[i];
	}
	printf("sum of array elements:\n%d",sum);
	
}
