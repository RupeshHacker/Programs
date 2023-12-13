#include<stdio.h>
main(){
	int i,j,temp,n;
	printf("Enter limit of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		temp=0;
		for(j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		}
	}
	printf("%d",arr[j]);
}
