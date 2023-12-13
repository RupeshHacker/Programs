#include<stdio.h>
void myArray(int []);
main(){
	int a[4]={2,3,4,5};
	myArray(a);
}
void myArray(int a[4]){
	int i;
	for(i=0;i<4;i++){
		printf("%d",a[i]);
	}
}
