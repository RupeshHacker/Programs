#include<stdio.h>
main(){
	int i,j,n,a[100],temp;
	printf("enter the numbers of elements:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Elements are sorted in asending order:\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
