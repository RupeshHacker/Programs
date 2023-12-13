#include<stdio.h>
main(){
	int n,i,max;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the numbers of array:");
	max=0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>0){
			max=arr[i];
		}
	}
	printf("Maximum number in array is:\n");
	printf("%d",max);
}
