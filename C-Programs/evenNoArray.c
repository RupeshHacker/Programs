#include<stdio.h>
main(){
	int n,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter any numbers:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Even numbers of array are:");	
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("%d\n",arr[i]);
		}
	}
}
