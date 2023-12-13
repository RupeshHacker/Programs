
/*passing array elements to function*/
#include<stdio.h>
void myArray(int);
main()
{
	int arr[5]={6,7,8,9,6};
	myArray(arr[0]);
}
void myArray(int a)
{
	printf("%d  %d",a);
}

