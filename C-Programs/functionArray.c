#include<stdio.h>
void myArray();
main(){
	int arr[7]={0,3,4,5,6,2,5};
	myArray(arr[5]);
}
void myArray(int a){
	printf("%d",a);
}
